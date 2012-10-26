/* AddressSanitizer, a fast memory error detector.
   Copyright (C) 2011, 2012 Free Software Foundation, Inc.
   Contributed by Kostya Serebryany <kcc@google.com>

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */


#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "tm_p.h"
#include "basic-block.h"
#include "flags.h"
#include "function.h"
#include "tree-inline.h"
#include "gimple.h"
#include "tree-iterator.h"
#include "tree-flow.h"
#include "tree-dump.h"
#include "tree-pass.h"
#include "diagnostic.h"
#include "demangle.h"
#include "langhooks.h"
#include "ggc.h"
#include "cgraph.h"
#include "gimple.h"
#include "asan.h"
#include "gimple-pretty-print.h"
#include "target.h"
#include "expr.h"
#include "optabs.h"
#include "output.h"

/*
 AddressSanitizer finds out-of-bounds and use-after-free bugs 
 with <2x slowdown on average.

 The tool consists of two parts:
 instrumentation module (this file) and a run-time library.
 The instrumentation module adds a run-time check before every memory insn.
   For a 8- or 16- byte load accessing address X:
     ShadowAddr = (X >> 3) + Offset
     ShadowValue = *(char*)ShadowAddr;  // *(short*) for 16-byte access.
     if (ShadowValue)
       __asan_report_load8(X);
   For a load of N bytes (N=1, 2 or 4) from address X:
     ShadowAddr = (X >> 3) + Offset
     ShadowValue = *(char*)ShadowAddr;
     if (ShadowValue)
       if ((X & 7) + N - 1 > ShadowValue)
         __asan_report_loadN(X);
 Stores are instrumented similarly, but using __asan_report_storeN functions.
 A call too __asan_init() is inserted to the list of module CTORs.

 The run-time library redefines malloc (so that redzone are inserted around
 the allocated memory) and free (so that reuse of free-ed memory is delayed),
 provides __asan_report* and __asan_init functions.

 Read more:
 http://code.google.com/p/address-sanitizer/wiki/AddressSanitizerAlgorithm

 Future work:
 The current implementation supports only detection of out-of-bounds and
 use-after-free bugs in heap.
 In order to support out-of-bounds for stack and globals we will need
 to create redzones for stack and global object and poison them.
*/

alias_set_type asan_shadow_set = -1;

/* Pointer types to 1 resp. 2 byte integers in shadow memory.  A separate
   alias set is used for all shadow memory accesses.  */
static GTY(()) tree shadow_ptr_types[2];

/* Asan pretty-printer, used for buidling of the description STRING_CSTs.  */
static pretty_printer asan_pp;
static bool asan_pp_initialized;

/* Initialize asan_pp.  */

static void
asan_pp_initialize (void)
{
  pp_construct (&asan_pp, /* prefix */NULL, /* line-width */0);
  asan_pp_initialized = true;
}

/* Create ADDR_EXPR of STRING_CST with asan_pp text.  */

static tree
asan_pp_string (void)
{
  const char *buf = pp_base_formatted_text (&asan_pp);
  size_t len = strlen (buf);
  tree ret = build_string (len + 1, buf);
  TREE_TYPE (ret)
    = build_array_type (char_type_node, build_index_type (size_int (len)));
  TREE_READONLY (ret) = 1;
  TREE_STATIC (ret) = 1;
  return build1 (ADDR_EXPR, build_pointer_type (char_type_node), ret);
}

/* Return a CONST_INT representing 4 subsequent shadow memory bytes.  */

static rtx
asan_shadow_cst (unsigned char shadow_bytes[4])
{
  int i;
  unsigned HOST_WIDE_INT val = 0;
  gcc_assert (WORDS_BIG_ENDIAN == BYTES_BIG_ENDIAN);
  for (i = 0; i < 4; i++)
    val |= (unsigned HOST_WIDE_INT) shadow_bytes[BYTES_BIG_ENDIAN ? 3 - i : i]
	   << (BITS_PER_UNIT * i);
  return GEN_INT (trunc_int_for_mode (val, SImode));
}

/* Insert code to protect stack vars.  The prologue sequence should be emitted
   directly, epilogue sequence returned.  BASE is the register holding the
   stack base, against which OFFSETS array offsets are relative to, OFFSETS
   array contains pairs of offsets in reverse order, always the end offset
   of some gap that needs protection followed by starting offset,
   and DECLS is an array of representative decls for each var partition.
   LENGTH is the length of the OFFSETS array, DECLS array is LENGTH / 2 - 1
   elements long (OFFSETS include gap before the first variable as well
   as gaps after each stack variable).  */

rtx
asan_emit_stack_protection (rtx base, HOST_WIDE_INT *offsets, tree *decls,
			    int length)
{
  rtx shadow_base, shadow_mem, ret, mem;
  unsigned char shadow_bytes[4];
  HOST_WIDE_INT base_offset = offsets[length - 1], offset, prev_offset;
  HOST_WIDE_INT last_offset, last_size;
  int l;
  unsigned char cur_shadow_byte = ASAN_STACK_MAGIC_LEFT;
  tree str_cst;

  /* First of all, prepare the description string.  */
  if (!asan_pp_initialized)
    asan_pp_initialize ();

  pp_clear_output_area (&asan_pp);
  if (DECL_NAME (current_function_decl))
    pp_base_tree_identifier (&asan_pp, DECL_NAME (current_function_decl));
  else
    pp_string (&asan_pp, "<unknown>");
  pp_space (&asan_pp);
  pp_decimal_int (&asan_pp, length / 2 - 1);
  pp_space (&asan_pp);
  for (l = length - 2; l; l -= 2)
    {
      tree decl = decls[l / 2 - 1];
      pp_wide_integer (&asan_pp, offsets[l] - base_offset);
      pp_space (&asan_pp);
      pp_wide_integer (&asan_pp, offsets[l - 1] - offsets[l]);
      pp_space (&asan_pp);
      if (DECL_P (decl) && DECL_NAME (decl))
	{
	  pp_decimal_int (&asan_pp, IDENTIFIER_LENGTH (DECL_NAME (decl)));
	  pp_space (&asan_pp);
	  pp_base_tree_identifier (&asan_pp, DECL_NAME (decl));
	}
      else
	pp_string (&asan_pp, "9 <unknown>");
      pp_space (&asan_pp);
    }
  str_cst = asan_pp_string ();

  /* Emit the prologue sequence.  */
  base = expand_binop (Pmode, add_optab, base, GEN_INT (base_offset),
		       NULL_RTX, 1, OPTAB_DIRECT);
  mem = gen_rtx_MEM (ptr_mode, base);
  emit_move_insn (mem, GEN_INT (ASAN_STACK_FRAME_MAGIC));
  mem = adjust_address (mem, VOIDmode, GET_MODE_SIZE (ptr_mode));
  emit_move_insn (mem, expand_normal (str_cst));
  shadow_base = expand_binop (Pmode, lshr_optab, base,
			      GEN_INT (ASAN_SHADOW_SHIFT),
			      NULL_RTX, 1, OPTAB_DIRECT);
  shadow_base = expand_binop (Pmode, add_optab, shadow_base,
			      GEN_INT (targetm.asan_shadow_offset ()),
			      NULL_RTX, 1, OPTAB_DIRECT);
  gcc_assert (asan_shadow_set != -1
	      && (ASAN_RED_ZONE_SIZE >> ASAN_SHADOW_SHIFT) == 4);
  shadow_mem = gen_rtx_MEM (SImode, shadow_base);
  set_mem_alias_set (shadow_mem, asan_shadow_set);
  prev_offset = base_offset;
  for (l = length; l; l -= 2)
    {
      if (l == 2)
	cur_shadow_byte = ASAN_STACK_MAGIC_RIGHT;
      offset = offsets[l - 1];
      if ((offset - base_offset) & (ASAN_RED_ZONE_SIZE - 1))
	{
	  int i;
	  HOST_WIDE_INT aoff
	    = base_offset + ((offset - base_offset)
			     & ~(ASAN_RED_ZONE_SIZE - HOST_WIDE_INT_1));
	  shadow_mem = adjust_address (shadow_mem, VOIDmode,
				       (aoff - prev_offset)
				       >> ASAN_SHADOW_SHIFT);
	  prev_offset = aoff;
	  for (i = 0; i < 4; i++, aoff += (1 << ASAN_SHADOW_SHIFT))
	    if (aoff < offset)
	      {
		if (aoff < offset - (1 << ASAN_SHADOW_SHIFT) + 1)
		  shadow_bytes[i] = 0;
		else
		  shadow_bytes[i] = offset - aoff;
	      }
	    else
	      shadow_bytes[i] = ASAN_STACK_MAGIC_PARTIAL;
	  emit_move_insn (shadow_mem, asan_shadow_cst (shadow_bytes));
	  offset = aoff;
	}
      while (offset <= offsets[l - 2] - ASAN_RED_ZONE_SIZE)
	{
	  shadow_mem = adjust_address (shadow_mem, VOIDmode,
				       (offset - prev_offset)
				       >> ASAN_SHADOW_SHIFT);
	  prev_offset = offset;
	  memset (shadow_bytes, cur_shadow_byte, 4);
	  emit_move_insn (shadow_mem, asan_shadow_cst (shadow_bytes));
	  offset += ASAN_RED_ZONE_SIZE;
	}
      cur_shadow_byte = ASAN_STACK_MAGIC_MIDDLE;
    }
  do_pending_stack_adjust ();

  /* Construct epilogue sequence.  */
  start_sequence ();

  shadow_mem = gen_rtx_MEM (BLKmode, shadow_base);
  set_mem_alias_set (shadow_mem, asan_shadow_set);
  prev_offset = base_offset;
  last_offset = base_offset;
  last_size = 0;
  for (l = length; l; l -= 2)
    {
      offset = base_offset + ((offsets[l - 1] - base_offset)
			     & ~(ASAN_RED_ZONE_SIZE - HOST_WIDE_INT_1));
      if (last_offset + last_size != offset)
	{
	  shadow_mem = adjust_address (shadow_mem, VOIDmode,
				       (last_offset - prev_offset)
				       >> ASAN_SHADOW_SHIFT);
	  prev_offset = last_offset;
	  clear_storage (shadow_mem, GEN_INT (last_size >> ASAN_SHADOW_SHIFT),
			 BLOCK_OP_NORMAL);
	  last_offset = offset;
	  last_size = 0;
	}
      last_size += base_offset + ((offsets[l - 2] - base_offset)
				  & ~(ASAN_RED_ZONE_SIZE - HOST_WIDE_INT_1))
		   - offset;
    }
  if (last_size)
    {
      shadow_mem = adjust_address (shadow_mem, VOIDmode,
				   (last_offset - prev_offset)
				   >> ASAN_SHADOW_SHIFT);
      clear_storage (shadow_mem, GEN_INT (last_size >> ASAN_SHADOW_SHIFT),
		     BLOCK_OP_NORMAL);
    }

  do_pending_stack_adjust ();

  ret = get_insns ();
  end_sequence ();
  return ret;
}

/* Return true if DECL, a global var, might be overridden and needs
   therefore a local alias.  */

static bool
asan_needs_local_alias (tree decl)
{
  return DECL_WEAK (decl) || !targetm.binds_local_p (decl);
}

/* Return true if DECL is a VAR_DECL that should be protected
   by Address Sanitizer, by appending a red zone with protected
   shadow memory after it and aligning it to at least
   ASAN_RED_ZONE_SIZE bytes.  */

bool
asan_protect_global (tree decl)
{
  rtx rtl, symbol;
  section *sect;

  if (TREE_CODE (decl) != VAR_DECL
      /* TLS vars aren't statically protectable.  */
      || DECL_THREAD_LOCAL_P (decl)
      /* Externs will be protected elsewhere.  */
      || DECL_EXTERNAL (decl)
      || !TREE_ASM_WRITTEN (decl)
      || !DECL_RTL_SET_P (decl)
      /* Comdat vars pose an ABI problem, we can't know if
	 the var that is selected by the linker will have
	 padding or not.  */
      || DECL_ONE_ONLY (decl)
      /* Similarly for common vars.  People can use -fno-common.  */
      || DECL_COMMON (decl)
      /* Don't protect if using user section, often vars placed
	 into user section from multiple TUs are then assumed
	 to be an array of such vars, putting padding in there
	 breaks this assumption.  */
      || (DECL_SECTION_NAME (decl) != NULL_TREE
	  && !DECL_HAS_IMPLICIT_SECTION_NAME_P (decl))
      || DECL_SIZE (decl) == 0
      || ASAN_RED_ZONE_SIZE * BITS_PER_UNIT > MAX_OFILE_ALIGNMENT
      || !valid_constant_size_p (DECL_SIZE_UNIT (decl))
      || DECL_ALIGN_UNIT (decl) > 2 * ASAN_RED_ZONE_SIZE)
    return false;

  rtl = DECL_RTL (decl);
  if (!MEM_P (rtl) || GET_CODE (XEXP (rtl, 0)) != SYMBOL_REF)
    return false;
  symbol = XEXP (rtl, 0);

  if (CONSTANT_POOL_ADDRESS_P (symbol)
      || TREE_CONSTANT_POOL_ADDRESS_P (symbol))
    return false;

  sect = get_variable_section (decl, false);
  if (sect->common.flags & SECTION_COMMON)
    return false;

  if (lookup_attribute ("weakref", DECL_ATTRIBUTES (decl)))
    return false;

#ifndef ASM_OUTPUT_DEF
  if (asan_needs_local_alias (decl))
    return false;
#endif

  return true;    
}

/* Construct a function tree for __asan_report_{load,store}{1,2,4,8,16}.
   IS_STORE is either 1 (for a store) or 0 (for a load).
   SIZE_IN_BYTES is one of 1, 2, 4, 8, 16.  */

static tree
report_error_func (bool is_store, int size_in_bytes)
{
  tree fn_type;
  tree def;
  char name[100];

  sprintf (name, "__asan_report_%s%d",
           is_store ? "store" : "load", size_in_bytes);
  fn_type = build_function_type_list (void_type_node, ptr_type_node, NULL_TREE);
  def = build_fn_decl (name, fn_type);
  TREE_NOTHROW (def) = 1;
  TREE_THIS_VOLATILE (def) = 1;  /* Attribute noreturn. Surprise!  */
  DECL_ATTRIBUTES (def) = tree_cons (get_identifier ("leaf"), 
                                     NULL, DECL_ATTRIBUTES (def));
  DECL_ASSEMBLER_NAME (def);
  return def;
}

/* Construct a function tree for __asan_init().  */

static tree
asan_init_func (void)
{
  tree fn_type;
  tree def;

  fn_type = build_function_type_list (void_type_node, NULL_TREE);
  def = build_fn_decl ("__asan_init", fn_type);
  TREE_NOTHROW (def) = 1;
  DECL_ASSEMBLER_NAME (def);
  return def;
}


#define PROB_VERY_UNLIKELY	(REG_BR_PROB_BASE / 2000 - 1)
#define PROB_ALWAYS		(REG_BR_PROB_BASE)

/* Split the current basic block and create a condition statement
   insertion point right before the statement pointed to by ITER.
   Return an iterator to the point at which the caller might safely
   insert the condition statement.

   THEN_BLOCK must be set to the address of an uninitialized instance
   of basic_block.  The function will then set *THEN_BLOCK to the
   'then block' of the condition statement to be inserted by the
   caller.

   Similarly, the function will set *FALLTRHOUGH_BLOCK to the 'else
   block' of the condition statement to be inserted by the caller.

   Note that *FALLTHROUGH_BLOCK is a new block that contains the
   statements starting from *ITER, and *THEN_BLOCK is a new empty
   block.

   *ITER is adjusted to still point to the same statement it was
   *pointing to initially.  */

static gimple_stmt_iterator
create_cond_insert_point_before_iter (gimple_stmt_iterator *iter,
				      bool then_more_likely_p,
				      basic_block *then_block,
				      basic_block *fallthrough_block)
{
  gimple_stmt_iterator gsi = *iter;

  if (!gsi_end_p (gsi))
    gsi_prev (&gsi);

  basic_block cur_bb = gsi_bb (*iter);

  edge e = split_block (cur_bb, gsi_stmt (gsi));

  /* Get a hold on the 'condition block', the 'then block' and the
     'else block'.  */
  basic_block cond_bb = e->src;
  basic_block fallthru_bb = e->dest;
  basic_block then_bb = create_empty_bb (cond_bb);

  /* Set up the newly created 'then block'.  */
  e = make_edge (cond_bb, then_bb, EDGE_TRUE_VALUE);
  int fallthrough_probability =
    then_more_likely_p
    ? PROB_VERY_UNLIKELY
    : PROB_ALWAYS - PROB_VERY_UNLIKELY;
  e->probability = PROB_ALWAYS - fallthrough_probability;
  make_single_succ_edge (then_bb, fallthru_bb, EDGE_FALLTHRU);

  /* Set up the fallthrough basic block.  */
  e = find_edge (cond_bb, fallthru_bb);
  e->flags = EDGE_FALSE_VALUE;
  e->count = cond_bb->count;
  e->probability = fallthrough_probability;

  /* Update dominance info for the newly created then_bb; note that
     fallthru_bb's dominance info has already been updated by
     split_bock.  */
  if (dom_info_available_p (CDI_DOMINATORS))
    set_immediate_dominator (CDI_DOMINATORS, then_bb, cond_bb);

  *then_block = then_bb;
  *fallthrough_block = fallthru_bb;
  *iter = gsi_start_bb (fallthru_bb);

  return gsi_last_bb (cond_bb);
}

/* Instrument the memory access instruction BASE.  Insert new
   statements before ITER.

   Note that the memory access represented by BASE can be either an
   SSA_NAME, or a non-SSA expression.  LOCATION is the source code
   location.  IS_STORE is TRUE for a store, FALSE for a load.
   SIZE_IN_BYTES is one of 1, 2, 4, 8, 16.  */

static void
build_check_stmt (tree base, gimple_stmt_iterator *iter,
                  location_t location, bool is_store,
		  int size_in_bytes)
{
  gimple_stmt_iterator gsi;
  basic_block then_bb, else_bb;
  tree t, base_addr, shadow;
  gimple g;
  tree shadow_ptr_type = shadow_ptr_types[size_in_bytes == 16 ? 1 : 0];
  tree shadow_type = TREE_TYPE (shadow_ptr_type);
  tree uintptr_type
    = build_nonstandard_integer_type (TYPE_PRECISION (TREE_TYPE (base)), 1);
  tree base_ssa = base;

  /* Get an iterator on the point where we can add the condition
     statement for the instrumentation.  */
  gsi = create_cond_insert_point_before_iter (iter,
					      /*then_more_likely_p=*/false,
					      &then_bb,
					      &else_bb);

  base = unshare_expr (base);

  /* BASE can already be an SSA_NAME; in that case, do not create a
     new SSA_NAME for it.  */
  if (TREE_CODE (base) != SSA_NAME)
    {
      g = gimple_build_assign_with_ops (TREE_CODE (base),
					make_ssa_name (TREE_TYPE (base), NULL),
					base, NULL_TREE);
      gimple_set_location (g, location);
      gsi_insert_after (&gsi, g, GSI_NEW_STMT);
      base_ssa = gimple_assign_lhs (g);
    }

  g = gimple_build_assign_with_ops (NOP_EXPR,
				    make_ssa_name (uintptr_type, NULL),
				    base_ssa, NULL_TREE);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);
  base_addr = gimple_assign_lhs (g);

  /* Build
     (base_addr >> ASAN_SHADOW_SHIFT) + targetm.asan_shadow_offset ().  */

  t = build_int_cst (uintptr_type, ASAN_SHADOW_SHIFT);
  g = gimple_build_assign_with_ops (RSHIFT_EXPR,
				    make_ssa_name (uintptr_type, NULL),
				    base_addr, t);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);

  t = build_int_cst (uintptr_type, targetm.asan_shadow_offset ());
  g = gimple_build_assign_with_ops (PLUS_EXPR,
				    make_ssa_name (uintptr_type, NULL),
				    gimple_assign_lhs (g), t);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);

  g = gimple_build_assign_with_ops (NOP_EXPR,
				    make_ssa_name (shadow_ptr_type, NULL),
				    gimple_assign_lhs (g), NULL_TREE);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);

  t = build2 (MEM_REF, shadow_type, gimple_assign_lhs (g),
	      build_int_cst (shadow_ptr_type, 0));
  g = gimple_build_assign_with_ops (MEM_REF,
				    make_ssa_name (shadow_type, NULL),
				    t, NULL_TREE);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);
  shadow = gimple_assign_lhs (g);

  if (size_in_bytes < 8)
    {
      /* Slow path for 1, 2 and 4 byte accesses.
	 Test (shadow != 0)
	      & ((base_addr & 7) + (size_in_bytes - 1)) >= shadow).  */
      g = gimple_build_assign_with_ops (NE_EXPR,
					make_ssa_name (boolean_type_node,
						       NULL),
					shadow,
					build_int_cst (shadow_type, 0));
      gimple_set_location (g, location);
      gsi_insert_after (&gsi, g, GSI_NEW_STMT);
      t = gimple_assign_lhs (g);

      g = gimple_build_assign_with_ops (BIT_AND_EXPR,
					make_ssa_name (uintptr_type,
						       NULL),
					base_addr,
					build_int_cst (uintptr_type, 7));
      gimple_set_location (g, location);
      gsi_insert_after (&gsi, g, GSI_NEW_STMT);

      g = gimple_build_assign_with_ops (NOP_EXPR,
					make_ssa_name (shadow_type,
						       NULL),
					gimple_assign_lhs (g), NULL_TREE);
      gimple_set_location (g, location);
      gsi_insert_after (&gsi, g, GSI_NEW_STMT);

      if (size_in_bytes > 1)
	{
	  g = gimple_build_assign_with_ops (PLUS_EXPR,
					    make_ssa_name (shadow_type,
							   NULL),
					    gimple_assign_lhs (g),
					    build_int_cst (shadow_type,
							   size_in_bytes - 1));
	  gimple_set_location (g, location);
	  gsi_insert_after (&gsi, g, GSI_NEW_STMT);
	}

      g = gimple_build_assign_with_ops (GE_EXPR,
					make_ssa_name (boolean_type_node,
						       NULL),
					gimple_assign_lhs (g),
					shadow);
      gimple_set_location (g, location);
      gsi_insert_after (&gsi, g, GSI_NEW_STMT);

      g = gimple_build_assign_with_ops (BIT_AND_EXPR,
					make_ssa_name (boolean_type_node,
						       NULL),
					t, gimple_assign_lhs (g));
      gimple_set_location (g, location);
      gsi_insert_after (&gsi, g, GSI_NEW_STMT);
      t = gimple_assign_lhs (g);
    }
  else
    t = shadow;

  g = gimple_build_cond (NE_EXPR, t, build_int_cst (TREE_TYPE (t), 0),
			 NULL_TREE, NULL_TREE);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);

  /* Generate call to the run-time library (e.g. __asan_report_load8).  */
  gsi = gsi_start_bb (then_bb);
  g = gimple_build_call (report_error_func (is_store, size_in_bytes),
			 1, base_addr);
  gimple_set_location (g, location);
  gsi_insert_after (&gsi, g, GSI_NEW_STMT);

  *iter = gsi_start_bb (else_bb);
}

/* If T represents a memory access, add instrumentation code before ITER.
   LOCATION is source code location.
   IS_STORE is either 1 (for a store) or 0 (for a load).  */

static void
instrument_derefs (gimple_stmt_iterator *iter, tree t,
                  location_t location, bool is_store)
{
  tree type, base;
  HOST_WIDE_INT size_in_bytes;

  type = TREE_TYPE (t);
  switch (TREE_CODE (t))
    {
    case ARRAY_REF:
    case COMPONENT_REF:
    case INDIRECT_REF:
    case MEM_REF:
      break;
    default:
      return;
    }

  size_in_bytes = int_size_in_bytes (type);
  if ((size_in_bytes & (size_in_bytes - 1)) != 0
      || (unsigned HOST_WIDE_INT) size_in_bytes - 1 >= 16)
    return;

  /* For now just avoid instrumenting bit field acceses.
     Fixing it is doable, but expected to be messy.  */

  HOST_WIDE_INT bitsize, bitpos;
  tree offset;
  enum machine_mode mode;
  int volatilep = 0, unsignedp = 0;
  get_inner_reference (t, &bitsize, &bitpos, &offset,
		       &mode, &unsignedp, &volatilep, false);
  if (bitpos != 0 || bitsize != size_in_bytes * BITS_PER_UNIT)
    return;

  base = build_fold_addr_expr (t);
  build_check_stmt (base, iter, location, is_store, size_in_bytes);
}

/* asan: this looks too complex. Can this be done simpler? */
/* Transform
   1) Memory references.
   2) BUILTIN_ALLOCA calls.
*/

static void
transform_statements (void)
{
  basic_block bb;
  gimple_stmt_iterator i;
  int saved_last_basic_block = last_basic_block;

  FOR_EACH_BB (bb)
    {
      if (bb->index >= saved_last_basic_block) continue;
      for (i = gsi_start_bb (bb); !gsi_end_p (i); gsi_next (&i))
        {
          gimple s = gsi_stmt (i);
          if (!gimple_assign_single_p (s))
	    continue;
          instrument_derefs (&i, gimple_assign_lhs (s),
                             gimple_location (s), true);
          instrument_derefs (&i, gimple_assign_rhs1 (s),
                             gimple_location (s), false);
        }
    }
}

/* Build
   struct __asan_global
   {
     const void *__beg;
     uptr __size;
     uptr __size_with_redzone;
     const void *__name;
     uptr __has_dynamic_init;
   } type.  */

static tree
asan_global_struct (void)
{
  static const char *field_names[5]
    = { "__beg", "__size", "__size_with_redzone",
	"__name", "__has_dynamic_init" };
  tree fields[5], ret;
  int i;

  ret = make_node (RECORD_TYPE);
  for (i = 0; i < 5; i++)
    {
      fields[i]
	= build_decl (UNKNOWN_LOCATION, FIELD_DECL,
		      get_identifier (field_names[i]),
		      (i == 0 || i == 3) ? const_ptr_type_node
		      : build_nonstandard_integer_type (POINTER_SIZE, 1));
      DECL_CONTEXT (fields[i]) = ret;
      if (i)
	DECL_CHAIN (fields[i - 1]) = fields[i];
    }
  TYPE_FIELDS (ret) = fields[0];
  TYPE_NAME (ret) = get_identifier ("__asan_global");
  layout_type (ret);
  return ret;
}

/* Append description of a single global DECL into vector V.
   TYPE is __asan_global struct type as returned by asan_global_struct.  */

static void
asan_add_global (tree decl, tree type, VEC(constructor_elt, gc) *v)
{
  tree init, uptr = TREE_TYPE (DECL_CHAIN (TYPE_FIELDS (type)));
  unsigned HOST_WIDE_INT size;
  tree str_cst, refdecl = decl;
  VEC(constructor_elt, gc) *vinner = NULL;

  if (!asan_pp_initialized)
    asan_pp_initialize ();

  pp_clear_output_area (&asan_pp);
  if (DECL_NAME (decl))
    pp_base_tree_identifier (&asan_pp, DECL_NAME (decl));
  else
    pp_string (&asan_pp, "<unknown>");
  pp_space (&asan_pp);
  pp_left_paren (&asan_pp);
  pp_string (&asan_pp, main_input_filename);
  pp_right_paren (&asan_pp);
  str_cst = asan_pp_string ();

  if (asan_needs_local_alias (decl))
    {
      char buf[20];
      ASM_GENERATE_INTERNAL_LABEL (buf, "LASAN",
				   VEC_length (constructor_elt, v) + 1);
      refdecl = build_decl (DECL_SOURCE_LOCATION (decl),
			    VAR_DECL, get_identifier (buf), TREE_TYPE (decl));
      TREE_ADDRESSABLE (refdecl) = TREE_ADDRESSABLE (decl);
      TREE_READONLY (refdecl) = TREE_READONLY (decl);
      TREE_THIS_VOLATILE (refdecl) = TREE_THIS_VOLATILE (decl);
      DECL_GIMPLE_REG_P (refdecl) = DECL_GIMPLE_REG_P (decl);
      DECL_ARTIFICIAL (refdecl) = DECL_ARTIFICIAL (decl);
      DECL_IGNORED_P (refdecl) = DECL_IGNORED_P (decl);
      TREE_STATIC (refdecl) = 1;
      TREE_PUBLIC (refdecl) = 0;
      TREE_USED (refdecl) = 1;
      assemble_alias (refdecl, DECL_ASSEMBLER_NAME (decl));
    }

  CONSTRUCTOR_APPEND_ELT (vinner, NULL_TREE,
			  fold_convert (const_ptr_type_node,
					build_fold_addr_expr (refdecl)));
  size = tree_low_cst (DECL_SIZE_UNIT (decl), 1);
  CONSTRUCTOR_APPEND_ELT (vinner, NULL_TREE, build_int_cst (uptr, size));
  size += asan_red_zone_size (size);
  CONSTRUCTOR_APPEND_ELT (vinner, NULL_TREE, build_int_cst (uptr, size));
  CONSTRUCTOR_APPEND_ELT (vinner, NULL_TREE,
			  fold_convert (const_ptr_type_node, str_cst));
  CONSTRUCTOR_APPEND_ELT (vinner, NULL_TREE, build_int_cst (uptr, 0));
  init = build_constructor (type, vinner);
  CONSTRUCTOR_APPEND_ELT (v, NULL_TREE, init);
}

/* Needs to be GTY(()), because cgraph_build_static_cdtor may
   invoke ggc_collect.  */
static GTY(()) tree asan_ctor_statements;

/* Module-level instrumentation.
   - Insert __asan_init() into the list of CTORs.
   - TODO: insert redzones around globals.
 */

void
asan_finish_file (void)
{
  struct varpool_node *vnode;
  unsigned HOST_WIDE_INT gcount = 0;

  append_to_statement_list (build_call_expr (asan_init_func (), 0),
			    &asan_ctor_statements);
  FOR_EACH_DEFINED_VARIABLE (vnode)
    if (asan_protect_global (vnode->symbol.decl))
      ++gcount;
  if (gcount)
    {
      tree type = asan_global_struct (), var, ctor, decl;
      tree uptr = build_nonstandard_integer_type (POINTER_SIZE, 1);
      tree dtor_statements = NULL_TREE;
      VEC(constructor_elt, gc) *v;
      char buf[20];

      type = build_array_type_nelts (type, gcount);
      ASM_GENERATE_INTERNAL_LABEL (buf, "LASAN", 0);
      var = build_decl (UNKNOWN_LOCATION, VAR_DECL, get_identifier (buf),
			type);
      TREE_STATIC (var) = 1;
      TREE_PUBLIC (var) = 0;
      DECL_ARTIFICIAL (var) = 1;
      DECL_IGNORED_P (var) = 1;
      v = VEC_alloc (constructor_elt, gc, gcount);
      FOR_EACH_DEFINED_VARIABLE (vnode)
	if (asan_protect_global (vnode->symbol.decl))
	  asan_add_global (vnode->symbol.decl, TREE_TYPE (type), v);
      ctor = build_constructor (type, v);
      TREE_CONSTANT (ctor) = 1;
      TREE_STATIC (ctor) = 1;
      DECL_INITIAL (var) = ctor;
      varpool_assemble_decl (varpool_node (var));

      type = build_function_type_list (void_type_node,
				       build_pointer_type (TREE_TYPE (type)),
				       uptr, NULL_TREE);
      decl = build_fn_decl ("__asan_register_globals", type);
      TREE_NOTHROW (decl) = 1;
      append_to_statement_list (build_call_expr (decl, 2,
						 build_fold_addr_expr (var),
						 build_int_cst (uptr, gcount)),
				&asan_ctor_statements);

      decl = build_fn_decl ("__asan_unregister_globals", type);
      TREE_NOTHROW (decl) = 1;
      append_to_statement_list (build_call_expr (decl, 2,
						 build_fold_addr_expr (var),
						 build_int_cst (uptr, gcount)),
				&dtor_statements);
      cgraph_build_static_cdtor ('D', dtor_statements,
				 MAX_RESERVED_INIT_PRIORITY - 1);
    }
  cgraph_build_static_cdtor ('I', asan_ctor_statements,
			     MAX_RESERVED_INIT_PRIORITY - 1);
}

/* Initialize shadow_ptr_types array.  */

static void
asan_init_shadow_ptr_types (void)
{
  asan_shadow_set = new_alias_set ();
  shadow_ptr_types[0] = build_distinct_type_copy (signed_char_type_node);
  TYPE_ALIAS_SET (shadow_ptr_types[0]) = asan_shadow_set;
  shadow_ptr_types[0] = build_pointer_type (shadow_ptr_types[0]);
  shadow_ptr_types[1] = build_distinct_type_copy (short_integer_type_node);
  TYPE_ALIAS_SET (shadow_ptr_types[1]) = asan_shadow_set;
  shadow_ptr_types[1] = build_pointer_type (shadow_ptr_types[1]);
}

/* Instrument the current function.  */

static unsigned int
asan_instrument (void)
{
  if (shadow_ptr_types[0] == NULL_TREE)
    asan_init_shadow_ptr_types ();
  transform_statements ();
  return 0;
}

static bool
gate_asan (void)
{
  return flag_asan != 0;
}

struct gimple_opt_pass pass_asan =
{
 {
  GIMPLE_PASS,
  "asan",                               /* name  */
  gate_asan,                            /* gate  */
  asan_instrument,                      /* execute  */
  NULL,                                 /* sub  */
  NULL,                                 /* next  */
  0,                                    /* static_pass_number  */
  TV_NONE,                              /* tv_id  */
  PROP_ssa | PROP_cfg | PROP_gimple_leh,/* properties_required  */
  0,                                    /* properties_provided  */
  0,                                    /* properties_destroyed  */
  0,                                    /* todo_flags_start  */
  TODO_verify_flow | TODO_verify_stmts
  | TODO_update_ssa			/* todo_flags_finish  */
 }
};

static bool
gate_asan_O0 (void)
{
  return flag_asan != 0 && !optimize;
}

struct gimple_opt_pass pass_asan_O0 =
{
 {
  GIMPLE_PASS,
  "asan0",				/* name  */
  gate_asan_O0,				/* gate  */
  asan_instrument,			/* execute  */
  NULL,					/* sub  */
  NULL,					/* next  */
  0,					/* static_pass_number  */
  TV_NONE,				/* tv_id  */
  PROP_ssa | PROP_cfg | PROP_gimple_leh,/* properties_required  */
  0,					/* properties_provided  */
  0,					/* properties_destroyed  */
  0,					/* todo_flags_start  */
  TODO_verify_flow | TODO_verify_stmts
  | TODO_update_ssa			/* todo_flags_finish  */
 }
};

#include "gt-asan.h"
