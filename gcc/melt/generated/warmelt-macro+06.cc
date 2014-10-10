/* GCC MELT GENERATED C++ FILE warmelt-macro+06.cc - DO NOT EDIT - see http://gcc-melt.org/ */
/* secondary MELT generated C++ file of rank #6 */
#include "melt-run.h"


/* used hash from melt-run.h when compiling this file: */
MELT_EXTERN const char meltrun_used_md5_melt_f6[] = MELT_RUN_HASHMD5 /* from melt-run.h */;


/**** warmelt-macro+06.cc declarations ****/
/**** MELT GENERATED DECLARATIONS for warmelt-macro ** DO NOT EDIT ; see gcc-melt.org ****/

/****++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
***
    Copyright 2008 - 2014  Free Software Foundation, Inc.
    Contributed by Basile Starynkevitch <basile@starynkevitch.net>

    This file is part of GCC.

    GCC is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3, or (at your option)
    any later version.

    GCC is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with GCC; see the file COPYING3.  If not see
    <http://www.gnu.org/licenses/>.
***
----------------------------------------------------------------****/


/** ordinary MELT module meltbuild-sources/warmelt-macro**/
#define MELT_HAS_INITIAL_ENVIRONMENT 1 /*usualmodule*/



class Melt_InitialClassyFrame_WARMELTmiMACRO_h963731484; // forward declaration fromline 6689
typedef Melt_InitialClassyFrame_WARMELTmiMACRO_h963731484 Melt_InitialFrame;
/*** 6 MELT module variables declarations ****/
MELT_EXTERN void melt_forwarding_module_data (void);
MELT_EXTERN void melt_marking_module_data (void);

MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY melt_WARMELTmiMACRO_module_var_ptr_tab[16];
MELT_EXTERN bool MELT_MODULE_VISIBILITY melt_WARMELTmiMACRO_module_var_flags[1];

static inline melt_ptr_t
melt_module_var_fetch (int ix)
{
    return (ix > 0  &&  ix <= 6)?melt_WARMELTmiMACRO_module_var_ptr_tab[ix]:NULL;
}

static inline void
melt_module_var_put (int ix, melt_ptr_t val)
{
    if (ix > 0  &&  ix <= 6)
        {
            melt_WARMELTmiMACRO_module_var_ptr_tab[ix]= val;
            melt_WARMELTmiMACRO_module_var_flags[ix/16] = true;
        }
}

/* MELT module variables indexes */
enum
{
    meltmodatix_none,
    meltmodvarix_DIAGV_GIMPLE_symb = 1,
    meltmodvarix_DIAGV_GIMPLE_SEQ_symb = 2,
    meltmodvarix_DIAGV_TREE_symb = 3,
    meltmodvarix_DIAGV_BASIC_BLOCK_symb = 4,
    meltmodvarix_DIAGV_EDGE_symb = 5,
    meltmodvarix_MELT_TRANSRUNMACRO_CLOS_symb = 6,
    meltmodatix_last
}; /* end MELT module variables indexes */

/*** 7 MELT called hook declarations ***/

/*declare MELT called hook #0 HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_PREVENV, const char* meltinp1_MODULNAME);

/*declare MELT called hook #1 HOOK_MACRO_EXPORTER **/
MELT_EXTERN void melthook_HOOK_MACRO_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_VAL, melt_ptr_t meltinp2_CONTENV);

/*declare MELT called hook #2 HOOK_MELT_MAKE_LOCATION **/
MELT_EXTERN melt_ptr_t melthook_HOOK_MELT_MAKE_LOCATION (melt_ptr_t melthookdatap, const char* meltinp0_FILENAME, long meltinp1_LINENO);

/*declare MELT called hook #3 HOOK_MELT_MAKE_LOCATION **/
MELT_EXTERN melt_ptr_t melthook_HOOK_MELT_MAKE_LOCATION (melt_ptr_t melthookdatap, const char* meltinp0_FILENAME, long meltinp1_LINENO);

/*declare MELT called hook #4 HOOK_PATMACRO_EXPORTER **/
MELT_EXTERN void melthook_HOOK_PATMACRO_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_MACVAL, melt_ptr_t meltinp2_PATVAL, melt_ptr_t meltinp3_CONTENV);

/*declare MELT called hook #5 HOOK_SYMBOL_IMPORTER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_SYMBOL_IMPORTER (melt_ptr_t melthookdatap, const char* meltinp0_SYMNAMESTR, const char* meltinp1_MODULENAMESTR, melt_ptr_t meltinp2_PARENV);

/*declare MELT called hook #6 HOOK_VALUE_EXPORTER **/
MELT_EXTERN void melthook_HOOK_VALUE_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_VAL, melt_ptr_t meltinp2_CONTENV);

/*** end of 7 MELT called hook declarations ***/

/*** no extra MELT c-headers ***/




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_1_WARMELTmiMACRO_REGISTER_DIAG_GIMPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_2_WARMELTmiMACRO_REGISTER_DIAG_GIMPLE_SEQ(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_3_WARMELTmiMACRO_REGISTER_DIAG_TREE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_4_WARMELTmiMACRO_REGISTER_DIAG_BASIC_BLOCK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_5_WARMELTmiMACRO_REGISTER_DIAG_EDGE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_6_WARMELTmiMACRO_DIAGNOSTIC_ARGS_MACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_7_WARMELTmiMACRO_DIAGNOSTIC_EXPAND_MESSAGE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_8_WARMELTmiMACRO_ERROR_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_9_WARMELTmiMACRO_FATAL_ERROR_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_10_WARMELTmiMACRO_WARNING_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_11_WARMELTmiMACRO_INFORM_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_12_WARMELTmiMACRO_S_EXPR_WEIGHT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_13_WARMELTmiMACRO_LAMBDA_cl1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_14_WARMELTmiMACRO_EXPAND_RESTLIST_AS_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_15_WARMELTmiMACRO_EXPAND_RESTLIST_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_16_WARMELTmiMACRO_EXPAND_PAIRLIST_AS_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_17_WARMELTmiMACRO_EXPAND_PAIRLIST_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_18_WARMELTmiMACRO_EXPAND_TUPLE_SLICE_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_19_WARMELTmiMACRO_REGISTER_GENERATOR_DEVICE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_20_WARMELTmiMACRO_EXPAND_APPLY(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_21_WARMELTmiMACRO_EXPAND_MSEND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_22_WARMELTmiMACRO_EXPAND_FIELDEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_23_WARMELTmiMACRO_EXPAND_CITERATION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_24_WARMELTmiMACRO_EXPAND_CMATCHEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_25_WARMELTmiMACRO_EXPAND_FUNMATCHEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_26_WARMELTmiMACRO_EXPAND_KEYWORDFUN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_27_WARMELTmiMACRO_MACROEXPAND_1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_28_WARMELTmiMACRO_LAMBDA_cl2(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_29_WARMELTmiMACRO_EXPAND_PRIMITIVE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_30_WARMELTmiMACRO_EXPAND_HOOK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_31_WARMELTmiMACRO_PATTERNEXPAND_PAIRLIST_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_32_WARMELTmiMACRO_LAMBDA_cl3(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_33_WARMELTmiMACRO_PATMACEXPAND_FOR_MATCHER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_34_WARMELTmiMACRO_LAMBDA_cl4(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_35_WARMELTmiMACRO_LAMBDA_cl5(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_36_WARMELTmiMACRO_PATTERN_WEIGHT_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_37_WARMELTmiMACRO_LAMBDA_cl6(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_38_WARMELTmiMACRO_PATTERNEXPAND_EXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_39_WARMELTmiMACRO_PATTERNEXPAND_1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_40_WARMELTmiMACRO_MACROEXPAND_TOPLEVEL_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_41_WARMELTmiMACRO_LAMBDA_ARG_BINDINGS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_42_WARMELTmiMACRO_INSTALL_INITIAL_MACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_43_WARMELTmiMACRO_INSTALL_INITIAL_PATMACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_44_WARMELTmiMACRO_WARN_IF_REDEFINED(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_45_WARMELTmiMACRO_FLATTEN_FOR_C_CODE_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_46_WARMELTmiMACRO_PARSE_PAIRLIST_C_CODE_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_47_WARMELTmiMACRO_CHECK_C_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_48_WARMELTmiMACRO_MELT_REGISTER_TRANSLATOR_RUNNER_MACROEXPANSIONS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_49_WARMELTmiMACRO_MELT_INVOKE_TRANSLATOR_RUNNER_MACROEXPANSIONS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_50_WARMELTmiMACRO_MEXPAND_DEFPRIMITIVE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_51_WARMELTmiMACRO_MEXPAND_DEFCITERATOR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_52_WARMELTmiMACRO_MEXPAND_DEFCMATCHER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_53_WARMELTmiMACRO_MEXPAND_DEFUNMATCHER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_54_WARMELTmiMACRO_MEXPAND_DEFUN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_55_WARMELTmiMACRO_MELT_DELAYED_MACRO_EXPANDER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_56_WARMELTmiMACRO_MEXPAND_DEFMACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_57_WARMELTmiMACRO_LAMBDA_cl7(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_MACRO_INSTALLER**/

/** declaration of hook melthook_HOOK_MACRO_INSTALLER */
MELT_EXTERN
void melthook_HOOK_MACRO_INSTALLER(melt_ptr_t melthookdatap,
                                   melt_ptr_t meltinp0_MBIND,
                                   melt_ptr_t meltinp1_MEXPCLOS)
;



/** end of declaration for hook melthook_HOOK_MACRO_INSTALLER**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_59_WARMELTmiMACRO_MEXPAND_AT_MACRO_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_60_WARMELTmiMACRO_MEXPAND_DEFVAR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_61_WARMELTmiMACRO_MEXPAND_DEFHOOK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_62_WARMELTmiMACRO_MEXPAND_DEFINE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_63_WARMELTmiMACRO_SCAN_DEFCLASS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_64_WARMELTmiMACRO_MEXPAND_DEFCLASS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_65_WARMELTmiMACRO_PARSE_FIELD_ASSIGNMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_66_WARMELTmiMACRO_LAMBDA_cl8(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_67_WARMELTmiMACRO_MEXPAND_DEFINSTANCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_68_WARMELTmiMACRO_MEXPAND_DEFSELECTOR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_69_WARMELTmiMACRO_MEXPAND_INSTANCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_70_WARMELTmiMACRO_MEXPAND_LOAD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_71_WARMELTmiMACRO_MEXPAND_SKIP_NIL(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_72_WARMELTmiMACRO_PARSE_FIELD_PATTERN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_73_WARMELTmiMACRO_LAMBDA_cl9(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_74_WARMELTmiMACRO_PATEXPAND_INSTANCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_75_WARMELTmiMACRO_LAMBDA_cl10(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_76_WARMELTmiMACRO_PATEXPAND_OBJECT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_77_WARMELTmiMACRO_LAMBDA_cl11(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_78_WARMELTmiMACRO_MEXPAND_OBJECT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_79_WARMELTmiMACRO_EXPAND_MACROSTRING_PAIRS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_80_WARMELTmiMACRO_LAMBDA_cl12(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_81_WARMELTmiMACRO_MEXPAND_CODE_CHUNK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_82_WARMELTmiMACRO_MEXPAND_EXPR_CHUNK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_83_WARMELTmiMACRO_MEXPAND_UNSAFE_PUT_FIELDS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_88_WARMELTmiMACRO_MEXPAND_SETQ(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_89_WARMELTmiMACRO_MEXPAND_IF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_90_WARMELTmiMACRO_MEXPAND_WHEN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_91_WARMELTmiMACRO_MEXPAND_UNLESS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_92_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_93_WARMELTmiMACRO_LAMBDA_cl13(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_94_WARMELTmiMACRO_MEXPAND_CPPIF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_95_WARMELTmiMACRO_MEXPAND_COND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_96_WARMELTmiMACRO_LAMBDA_cl14(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_97_WARMELTmiMACRO_MEXPAND_AND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_98_WARMELTmiMACRO_PATEXPAND_AS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_99_WARMELTmiMACRO_MEXPAND_AS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_100_WARMELTmiMACRO_PATEXPAND_WHEN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_101_WARMELTmiMACRO_PATEXPAND_AND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_102_WARMELTmiMACRO_MEXPAND_OR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_103_WARMELTmiMACRO_PATEXPAND_OR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_104_WARMELTmiMACRO_MEXPAND_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_105_WARMELTmiMACRO_PATEXPAND_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_106_WARMELTmiMACRO_MEXPAND_DEREF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_107_WARMELTmiMACRO_MEXPANDOBSOLETE_CONTENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_108_WARMELTmiMACRO_MEXPAND_SET_REF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_109_WARMELTmiMACRO_MEXPAND_PLUS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_110_WARMELTmiMACRO_MEXPAND_MINUS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_111_WARMELTmiMACRO_MEXPAND_TIMES(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_112_WARMELTmiMACRO_MEXPAND_DIV(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_113_WARMELTmiMACRO_MEXPAND_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_114_WARMELTmiMACRO_PATEXPAND_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_115_WARMELTmiMACRO_MEXPAND_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_116_WARMELTmiMACRO_PATEXPAND_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_117_WARMELTmiMACRO_MEXPAND_MATCH(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_118_WARMELTmiMACRO_LAMBDA_cl15(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_119_WARMELTmiMACRO_MEXPAND_MATCHALT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_120_WARMELTmiMACRO_LAMBDA_cl16(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_121_WARMELTmiMACRO_MEXPAND_LETBINDING(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_122_WARMELTmiMACRO_MEXPAND_LET(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_123_WARMELTmiMACRO_LAMBDA_cl17(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_124_WARMELTmiMACRO_YES_RECURSIVELY_CONSTRUCTIBLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_125_WARMELTmiMACRO_MEXPAND_LETREC(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_126_WARMELTmiMACRO_LAMBDA_cl18(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_129_WARMELTmiMACRO_LAMBDA_cl19(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_130_WARMELTmiMACRO_LAMBDA_cl20(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_132_WARMELTmiMACRO_LAMBDA_cl21(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_133_WARMELTmiMACRO_MEXPAND_BOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_150_WARMELTmiMACRO_MEXPAND_THIS_LINE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_151_WARMELTmiMACRO_MEXPAND_THIS_FILE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_152_WARMELTmiMACRO_MEXPAND_DEBUG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_153_WARMELTmiMACRO_MEXPAND_EXPORT_VALUES(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_154_WARMELTmiMACRO_MEXPAND_EXPORT_MACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_155_WARMELTmiMACRO_MEXPAND_EXPORT_PATMACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_156_WARMELTmiMACRO_MEXPAND_EXPORT_CLASS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_157_WARMELTmiMACRO_MEXPAND_EXPORT_SYNONYM(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_158_WARMELTmiMACRO_MEXPAND_CURRENT_MODULE_ENVIRONMENT_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_159_WARMELTmiMACRO_MEXPAND_PARENT_MODULE_ENVIRONMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_160_WARMELTmiMACRO_MEXPAND_UPDATE_CURRENT_MODULE_ENVIRONMENT_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_161_WARMELTmiMACRO_MEXPAND_FETCH_PREDEFINED(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_162_WARMELTmiMACRO_MEXPAND_STORE_PREDEFINED(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);


MELT_EXTERN void* melt_start_this_module (void*); /*mandatory start of module*/

MELT_EXTERN const char melt_module_is_gpl_compatible[];

/*declare opaque initial frame: */

typedef Melt_InitialClassyFrame_WARMELTmiMACRO_h963731484 /*opaqueinitialclassy*/ meltinitial_frame_t;


/* define different names when debugging or not */
#if MELT_HAVE_DEBUG
MELT_EXTERN const char meltmodule_WARMELTmiMACRO__melt_have_debug_enabled[];
#define melt_have_debug_string meltmodule_WARMELTmiMACRO__melt_have_debug_enabled
#else /*!MELT_HAVE_DEBUG*/
MELT_EXTERN const char meltmodule_WARMELTmiMACRO__melt_have_debug_disabled[];
#define melt_have_debug_string meltmodule_WARMELTmiMACRO__melt_have_debug_disabled
#endif /*!MELT_HAVE_DEBUG*/



void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_0 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_1 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_2 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_3 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_4 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_5 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_6 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_7 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_8 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_9 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_10 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_11 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_12 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_13 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_14 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_15 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_16 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_17 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_18 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_19 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_20 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_21 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_22 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_23 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_24 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_25 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_26 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_27 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_28 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_29 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_30 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_31 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_32 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_33 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_34 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_35 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_36 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_37 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_38 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_39 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_40 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_41 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_42 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_43 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_44 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_45 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_46 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_47 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_48 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_49 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_50 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_51 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_52 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_53 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_54 (meltinitial_frame_t*, char*); //declare

void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_55 (meltinitial_frame_t*, char*); //declare



/**** warmelt-macro+06.cc implementations ****/




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_126_WARMELTmiMACRO_LAMBDA_cl18(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_126_WARMELTmiMACRO_LAMBDA_cl18 fromline 1752 */

    /** start of frame for meltrout_126_WARMELTmiMACRO_LAMBDA_cl18 of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18// fromline 1568
        : public Melt_CallFrameWithValues<2>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[1];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<2> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18), clos) {};
        MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18() //the constructor fromline 1642
            : Melt_CallFrameWithValues<2> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<2> (fil,lin, sizeof(MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18)) {};
        MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<2> (fil,lin, sizeof(MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18


    /** end of frame for meltrout_126_WARMELTmiMACRO_LAMBDA_cl18 fromline 1697**/

    /* end of frame for routine meltrout_126_WARMELTmiMACRO_LAMBDA_cl18 fromline 1756 */

    /* classy proc frame meltrout_126_WARMELTmiMACRO_LAMBDA_cl18 */
    MeltFrame_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_126_WARMELTmiMACRO_LAMBDA_cl18 fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl18", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7185:/ getarg");
    /*_.BX__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L1*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.BX__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
        MELT_LOCATION("warmelt-macro.melt:7186:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L1*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7187:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)((/*~LOC*/ meltfclos->tabval[0])), ( "sexpr expected in LETREC binding"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7185:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.BX__V2*/ meltfptr[1];;

        {
            MELT_LOCATION("warmelt-macro.melt:7185:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L1*/
        meltfnum[0] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl18", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_126_WARMELTmiMACRO_LAMBDA_cl18_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_126_WARMELTmiMACRO_LAMBDA_cl18*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA fromline 1752 */

    /** start of frame for meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA// fromline 1568
        : public Melt_CallFrameWithValues<40>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[11];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<40> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA), clos) {};
        MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA() //the constructor fromline 1642
            : Melt_CallFrameWithValues<40> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<40> (fil,lin, sizeof(MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA)) {};
        MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<40> (fil,lin, sizeof(MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA


    /** end of frame for meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA fromline 1697**/

    /* end of frame for routine meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA fromline 1756 */

    /* classy proc frame meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA */
    MeltFrame_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_LAMBDA", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7311:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7312:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7312:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7312:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7312;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_lambda sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7312:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7312:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7313:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7313:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7313:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7313;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7313:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7313:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7314:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7314:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7314:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7314;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7314:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7314:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7315:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7315:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7315:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7315;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7315:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7315:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7316:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:7316:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V18*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7316:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7316;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V19*/
                            meltfptr[18] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V18*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V19*/ meltfptr[18];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7316:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V19*/
                        meltfptr[18] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V17*/
            meltfptr[15] = /*_._IFELSE___V18*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7316:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V18*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V17*/ meltfptr[15] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7317:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V21*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7318:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V22*/
            meltfptr[21] = slot;
        };
        ;
        /*_.LIST_FIRST__V23*/
        meltfptr[22] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V21*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V24*/
        meltfptr[23] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7320:/ apply");
        /*apply*/
        {
            /*_.NEWENV__V25*/ meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!FRESH_ENV*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
        }
        ;
        /*_.FORMALS__V26*/
        meltfptr[25] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23])));;

        MELT_CHECK_SIGNAL();
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NOTNULL__L7*/
        meltfnum[1] =
            ((/*_.FORMALS__V26*/ meltfptr[25]) != NULL);;
        MELT_LOCATION("warmelt-macro.melt:7324:/ cond");
        /*cond*/
        if (/*_#NOTNULL__L7*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*_#IS_NOT_A__L9*/ meltfnum[8] =
                        !melt_is_instance_of((melt_ptr_t)(/*_.FORMALS__V26*/ meltfptr[25]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
                    /*^compute*/
                    /*_#_IF___L8*/
                    meltfnum[0] = /*_#IS_NOT_A__L9*/ meltfnum[8];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7324:/ clear");
                    /*clear*/ /*_#IS_NOT_A__L9*/
                    meltfnum[8] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_#_IF___L8*/ meltfnum[0] = 0;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7324:/ cond");
        /*cond*/
        if (/*_#_IF___L8*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7325:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V22*/ meltfptr[21]), ( "missing formal argument list in (LAMBDA (arglist...) body...)"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7326:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!konst_6_CHECKARG*/ meltfrout->tabval[6]);
            /*_.ARGTUP__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!LAMBDA_ARG_BINDINGS*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.FORMALS__V26*/ meltfptr[25]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.PAIR_TAIL__V29*/
        meltfptr[28] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23])));;
        MELT_LOCATION("warmelt-macro.melt:7327:/ compute");
        /*_.CURPAIR__V24*/
        meltfptr[23] = /*_.SETQ___V30*/ meltfptr[29] = /*_.PAIR_TAIL__V29*/ meltfptr[28];;
        /*citerblock FOREACH_IN_MULTIPLE*/
        {
            /* start foreach_in_multiple meltcit1__EACHTUP */
            long  meltcit1__EACHTUP_ln = melt_multiple_length((melt_ptr_t)/*_.ARGTUP__V28*/ meltfptr[27]);
            for (/*_#IX__L10*/ meltfnum[8] = 0;
                               (/*_#IX__L10*/ meltfnum[8] >= 0) && (/*_#IX__L10*/ meltfnum[8] <  meltcit1__EACHTUP_ln);
                               /*_#IX__L10*/ meltfnum[8]++)
                {
                    /*_.LB__V31*/ meltfptr[30] = melt_multiple_nth((melt_ptr_t)(/*_.ARGTUP__V28*/ meltfptr[27]),  /*_#IX__L10*/ meltfnum[8]);




#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:7331:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#IS_A__L11*/
                        meltfnum[10] =
                            melt_is_instance_of((melt_ptr_t)(/*_.LB__V31*/ meltfptr[30]), (melt_ptr_t)((/*!CLASS_FORMAL_BINDING*/ meltfrout->tabval[7])));;
                        MELT_LOCATION("warmelt-macro.melt:7331:/ cond");
                        /*cond*/
                        if (/*_#IS_A__L11*/ meltfnum[10]) /*then*/
                            {
                                /*^cond.then*/
                                /*_._IFELSE___V33*/ meltfptr[32] = (/*nil*/NULL);;
                            }
                        else
                            {
                                MELT_LOCATION("warmelt-macro.melt:7331:/ cond.else");

                                /*^block*/
                                /*anyblock*/
                                {


                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*^apply*/
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[4];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_cstring =  "check lb";
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 7331;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.LB__V31*/ meltfptr[30];
                                        /*_.MELT_ASSERT_FAILURE_FUN__V34*/
                                        meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IFELSE___V33*/
                                    meltfptr[32] = /*_.MELT_ASSERT_FAILURE_FUN__V34*/ meltfptr[33];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7331:/ clear");
                                    /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V34*/
                                    meltfptr[33] = 0 ;
                                }
                                ;
                            }
                        ;
                        /*_.IFCPP___V32*/
                        meltfptr[31] = /*_._IFELSE___V33*/ meltfptr[32];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7331:/ clear");
                        /*clear*/ /*_#IS_A__L11*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IFELSE___V33*/
                        meltfptr[32] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*_.IFCPP___V32*/ meltfptr[31] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7332:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LB__V31*/ meltfptr[30];
                        /*_.PUT_ENV__V35*/
                        meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!PUT_ENV*/ meltfrout->tabval[8])), (melt_ptr_t)(/*_.NEWENV__V25*/ meltfptr[24]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    if (/*_#IX__L10*/ meltfnum[8]<0) break;
                } /* end  foreach_in_multiple meltcit1__EACHTUP */

            /*citerepilog*/

            MELT_LOCATION("warmelt-macro.melt:7328:/ clear");
            /*clear*/ /*_.LB__V31*/
            meltfptr[30] = 0 ;
            /*^clear*/
            /*clear*/ /*_#IX__L10*/
            meltfnum[8] = 0 ;
            /*^clear*/
            /*clear*/ /*_.IFCPP___V32*/
            meltfptr[31] = 0 ;
            /*^clear*/
            /*clear*/ /*_.PUT_ENV__V35*/
            meltfptr[33] = 0 ;
        } /*endciterblock FOREACH_IN_MULTIPLE*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7333:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V25*/ meltfptr[24];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.BODYTUP__V37*/
            meltfptr[36] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[9])), (melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7335:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_LAMBDA*/ meltfrout->tabval[10])), (4), "CLASS_SOURCE_LAMBDA");
            /*_.INST__V39*/
            meltfptr[38] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V39*/ meltfptr[38])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V39*/ meltfptr[38]), (1), (/*_.LOC__V22*/ meltfptr[21]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLAM_ARGBIND", melt_magic_discr((melt_ptr_t)(/*_.INST__V39*/ meltfptr[38])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V39*/ meltfptr[38]), (2), (/*_.ARGTUP__V28*/ meltfptr[27]), "SLAM_ARGBIND");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLAM_BODY", melt_magic_discr((melt_ptr_t)(/*_.INST__V39*/ meltfptr[38])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V39*/ meltfptr[38]), (3), (/*_.BODYTUP__V37*/ meltfptr[36]), "SLAM_BODY");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V39*/ meltfptr[38], "newly made instance");
        ;
        /*_.LAMBR__V38*/
        meltfptr[37] = /*_.INST__V39*/ meltfptr[38];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7340:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LAMBR__V38*/ meltfptr[37];;

        {
            MELT_LOCATION("warmelt-macro.melt:7340:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V36*/
        meltfptr[32] = /*_.RETURN___V40*/ meltfptr[39];;

        MELT_LOCATION("warmelt-macro.melt:7333:/ clear");
        /*clear*/ /*_.BODYTUP__V37*/
        meltfptr[36] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LAMBR__V38*/
        meltfptr[37] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V40*/
        meltfptr[39] = 0 ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.LET___V36*/ meltfptr[32];;

        MELT_LOCATION("warmelt-macro.melt:7326:/ clear");
        /*clear*/ /*_.ARGTUP__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V36*/
        meltfptr[32] = 0 ;
        /*_.LET___V20*/
        meltfptr[18] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:7317:/ clear");
        /*clear*/ /*_.CONT__V21*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.NEWENV__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FORMALS__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOTNULL__L7*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_#_IF___L8*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7311:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V20*/ meltfptr[18];;

        {
            MELT_LOCATION("warmelt-macro.melt:7311:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V17*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V20*/
        meltfptr[18] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_LAMBDA", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_127_WARMELTmiMACRO_MEXPAND_LAMBDA*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC fromline 1752 */

    /** start of frame for meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC// fromline 1568
        : public Melt_CallFrameWithValues<101>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[39];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<101> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC), clos) {};
        MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC() //the constructor fromline 1642
            : Melt_CallFrameWithValues<101> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<101> (fil,lin, sizeof(MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC)) {};
        MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<101> (fil,lin, sizeof(MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC


    /** end of frame for meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC fromline 1697**/

    /* end of frame for routine meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC fromline 1756 */

    /* classy proc frame meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC */
    MeltFrame_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_VARIADIC", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7361:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7362:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7362:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7362:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7362;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_variadic sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7362:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7362:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7363:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7363:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7363:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7363;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7363:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7363:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7364:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7364:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7364:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7364;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7364:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7364:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7365:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7365:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7365:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7365;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7365:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7365:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7366:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7367:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.FIRSTPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7369:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_REFERENCE*/ meltfrout->tabval[4])), (1), "CLASS_REFERENCE");
            /*_.INST__V23*/
            meltfptr[22] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @REFERENCED_VALUE", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (0), ((/*nil*/NULL)), "REFERENCED_VALUE");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V23*/ meltfptr[22], "newly made instance");
        ;
        /*_.RESCONT__V22*/
        meltfptr[21] = /*_.INST__V23*/ meltfptr[22];;
        /*^compute*/
        /*_#LIST_LENGTH__L6*/
        meltfnum[0] =
            (melt_list_length((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_#stI__L7*/
        meltfnum[1] =
            ((3) * (/*_#LIST_LENGTH__L6*/ meltfnum[0]));;
        /*^compute*/
        /*_#plI__L8*/
        meltfnum[7] =
            ((7) + (/*_#stI__L7*/ meltfnum[1]));;
        /*^compute*/
        /*_.VARBINDMAP__V24*/
        meltfptr[23] =
            (meltgc_new_mapobjects( (meltobject_ptr_t) ((/*!DISCR_MAP_OBJECTS*/ meltfrout->tabval[5])), (/*_#plI__L8*/ meltfnum[7])));;
        MELT_LOCATION("warmelt-macro.melt:7371:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V26*/
        meltfptr[25] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_8*/ meltfrout->tabval[8])), (2));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V26*/ meltfptr[25])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V26*/ meltfptr[25])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V26*/ meltfptr[25])->tabval[0] = (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V26*/ meltfptr[25])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 1>= 0 && 1< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V26*/ meltfptr[25])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V26*/ meltfptr[25])->tabval[1] = (melt_ptr_t)(/*_.RESCONT__V22*/ meltfptr[21]);
        ;
        /*_.HOOKFUN__V25*/
        meltfptr[24] = /*_.LAMBDA___V26*/ meltfptr[25];;
        /*citerblock FOREACH_PAIR*/
        {
            /* start foreach_pair meltcit1__EACHPAIR */
            for (/*_.CURPAIRCASE__V27*/ meltfptr[26] = /*_.FIRSTPAIR__V21*/ meltfptr[20];
                                        melt_magic_discr((melt_ptr_t) /*_.CURPAIRCASE__V27*/ meltfptr[26]) == MELTOBMAG_PAIR;
                                        /*_.CURPAIRCASE__V27*/ meltfptr[26] = melt_pair_tail((melt_ptr_t) /*_.CURPAIRCASE__V27*/ meltfptr[26]))
                {
                    /*_.CURCASE__V28*/ meltfptr[27] = melt_pair_head((melt_ptr_t) /*_.CURPAIRCASE__V27*/ meltfptr[26]);




#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:7378:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L9*/
                        meltfnum[8] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:7378:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L9*/ meltfnum[8]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:7378:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[7];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 7378;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_variadic curcase=";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURCASE__V28*/ meltfptr[27];
                                        /*^apply.arg*/
                                        argtab[5].meltbp_cstring =  " loc=";
                                        /*^apply.arg*/
                                        argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                                        /*_.MELT_DEBUG_FUN__V30*/
                                        meltfptr[29] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V29*/
                                    meltfptr[28] = /*_.MELT_DEBUG_FUN__V30*/ meltfptr[29];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7378:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L10*/
                                    meltfnum[9] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V30*/
                                    meltfptr[29] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:7378:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L9*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V29*/
                        meltfptr[28] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_NOT_A__L11*/
                    meltfnum[9] =
                        !melt_is_instance_of((melt_ptr_t)(/*_.CURCASE__V28*/ meltfptr[27]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
                    MELT_LOCATION("warmelt-macro.melt:7379:/ cond");
                    /*cond*/
                    if (/*_#IS_NOT_A__L11*/ meltfnum[9]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:7380:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "(VARIADIC variadic-case...) expects a list, so cannot have non-list\
 components."), (melt_ptr_t)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7381:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:7381:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:7379:/ quasiblock");


                                /*_.PROGN___V33*/
                                meltfptr[32] = /*_.RETURN___V32*/ meltfptr[28];;
                                /*^compute*/
                                /*_._IF___V31*/
                                meltfptr[29] = /*_.PROGN___V33*/ meltfptr[32];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7379:/ clear");
                                /*clear*/ /*_.RETURN___V32*/
                                meltfptr[28] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V33*/
                                meltfptr[32] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_._IF___V31*/ meltfptr[29] =  /*reallynil*/ NULL ;;
                        }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7382:/ quasiblock");


                    MELT_LOCATION("warmelt-macro.melt:7383:/ getslot");
                    {
                        melt_ptr_t slot=NULL, obj=NULL;
                        obj = (melt_ptr_t)(/*_.CURCASE__V28*/ meltfptr[27]) /*=obj*/;
                        melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                        /*_.CURCASELOC__V35*/
                        meltfptr[32] = slot;
                    };
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7384:/ getslot");
                    {
                        melt_ptr_t slot=NULL, obj=NULL;
                        obj = (melt_ptr_t)(/*_.CURCASE__V28*/ meltfptr[27]) /*=obj*/;
                        melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                        /*_.CURCASECONT__V36*/
                        meltfptr[35] = slot;
                    };
                    ;
                    /*_.CURCASEPAIR__V37*/
                    meltfptr[36] =
                        (melt_list_first((melt_ptr_t)(/*_.CURCASECONT__V36*/ meltfptr[35])));;
                    /*^compute*/
                    /*_.CASEFIRST__V38*/
                    meltfptr[37] =
                        (melt_pair_head((melt_ptr_t)(/*_.CURCASEPAIR__V37*/ meltfptr[36])));;
                    /*^compute*/
                    /*_.CASEREST__V39*/
                    meltfptr[38] =
                        (melt_pair_tail((melt_ptr_t)(/*_.CURCASEPAIR__V37*/ meltfptr[36])));;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:7389:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L12*/
                        meltfnum[8] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:7389:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L12*/ meltfnum[8]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:7389:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[7];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 7389;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_variadic casefirst=";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CASEFIRST__V38*/ meltfptr[37];
                                        /*^apply.arg*/
                                        argtab[5].meltbp_cstring =  " curcase=";
                                        /*^apply.arg*/
                                        argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.CURCASE__V28*/ meltfptr[27];
                                        /*_.MELT_DEBUG_FUN__V41*/
                                        meltfptr[40] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V40*/
                                    meltfptr[39] = /*_.MELT_DEBUG_FUN__V41*/ meltfptr[40];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7389:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L13*/
                                    meltfnum[12] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V41*/
                                    meltfptr[40] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V40*/ meltfptr[39] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:7389:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L12*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V40*/
                        meltfptr[39] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#eqeq__L14*/
                    meltfnum[12] =
                        ((/*_.CASEFIRST__V38*/ meltfptr[37]) == ((/*!konst_9_ELSE*/ meltfrout->tabval[9])));;
                    MELT_LOCATION("warmelt-macro.melt:7391:/ cond");
                    /*cond*/
                    if (/*_#eqeq__L14*/ meltfnum[12]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;
                                /*_.PAIR_TAIL__V43*/
                                meltfptr[39] =
                                    (melt_pair_tail((melt_ptr_t)(/*_.CURPAIRCASE__V27*/ meltfptr[26])));;
                                MELT_LOCATION("warmelt-macro.melt:7393:/ cond");
                                /*cond*/
                                if (/*_.PAIR_TAIL__V43*/ meltfptr[39]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {


                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7394:/ locexp");
                                                /* error_plain */
                                                melt_error_str((melt_ptr_t)(/*_.CURCASELOC__V35*/ meltfptr[32]), ( "case (:ELSE ...) should be last in (VARIADIC ...)"), (melt_ptr_t)0);
                                            }
                                            ;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7395:/ locexp");
                                                melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "This (VARIADIC ...) should have (:ELSE ...) case at last"), (melt_ptr_t)0);
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7396:/ quasiblock");


                                            /*_._RETVAL___V1*/
                                            meltfptr[0] =  /*reallynil*/ NULL ;;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7396:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/
                                            goto meltlabend_rout ;
                                            MELT_LOCATION("warmelt-macro.melt:7393:/ quasiblock");


                                            /*_.PROGN___V46*/
                                            meltfptr[45] = /*_.RETURN___V45*/ meltfptr[44];;
                                            /*^compute*/
                                            /*_._IF___V44*/
                                            meltfptr[43] = /*_.PROGN___V46*/ meltfptr[45];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7393:/ clear");
                                            /*clear*/ /*_.RETURN___V45*/
                                            meltfptr[44] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V46*/
                                            meltfptr[45] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V44*/ meltfptr[43] =  /*reallynil*/ NULL ;;
                                    }
                                ;

#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-macro.melt:7398:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L15*/
                                    meltfnum[8] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-macro.melt:7398:/ cond");
                                    /*cond*/
                                    if (/*_#MELT_NEED_DBG__L15*/ meltfnum[8]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L16*/ meltfnum[15] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-macro.melt:7398:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[9];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L16*/ meltfnum[15];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 7398;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "mexpand_variadic caserest=";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CASEREST__V39*/ meltfptr[38];
                                                    /*^apply.arg*/
                                                    argtab[5].meltbp_cstring =  "; curcaseloc=";
                                                    /*^apply.arg*/
                                                    argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.CURCASELOC__V35*/ meltfptr[32];
                                                    /*^apply.arg*/
                                                    argtab[7].meltbp_cstring =  "; loc=";
                                                    /*^apply.arg*/
                                                    argtab[8].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                                                    /*_.MELT_DEBUG_FUN__V48*/
                                                    meltfptr[45] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V47*/
                                                meltfptr[44] = /*_.MELT_DEBUG_FUN__V48*/ meltfptr[45];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-macro.melt:7398:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L16*/
                                                meltfnum[15] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V48*/
                                                meltfptr[45] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V47*/ meltfptr[44] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-macro.melt:7398:/ locexp");
                                        /*void*/
                                        (void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L15*/
                                    meltfnum[8] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V47*/
                                    meltfptr[44] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7400:/ quasiblock");



                                MELT_CHECK_SIGNAL();
                                ;
                                /*^apply*/
                                /*apply*/
                                {
                                    union meltparam_un argtab[3];
                                    memset(&argtab, 0, sizeof(argtab));
                                    /*^apply.arg*/
                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                    /*^apply.arg*/
                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                    /*^apply.arg*/
                                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                    /*_.BODYTUP__V50*/
                                    meltfptr[44] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[10])), (melt_ptr_t)(/*_.CASEREST__V39*/ meltfptr[38]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                }
                                ;

#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-macro.melt:7402:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L17*/
                                    meltfnum[15] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-macro.melt:7402:/ cond");
                                    /*cond*/
                                    if (/*_#MELT_NEED_DBG__L17*/ meltfnum[15]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L18*/ meltfnum[8] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-macro.melt:7402:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[5];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L18*/ meltfnum[8];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 7402;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "mexpand_variadic else bodytup before hookfun ";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.BODYTUP__V50*/ meltfptr[44];
                                                    /*_.MELT_DEBUG_FUN__V52*/
                                                    meltfptr[51] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V51*/
                                                meltfptr[50] = /*_.MELT_DEBUG_FUN__V52*/ meltfptr[51];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-macro.melt:7402:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L18*/
                                                meltfnum[8] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V52*/
                                                meltfptr[51] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V51*/ meltfptr[50] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-macro.melt:7402:/ locexp");
                                        /*void*/
                                        (void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L17*/
                                    meltfnum[15] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V51*/
                                    meltfptr[50] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;

#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-macro.melt:7403:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L19*/
                                    meltfnum[8] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-macro.melt:7403:/ cond");
                                    /*cond*/
                                    if (/*_#MELT_NEED_DBG__L19*/ meltfnum[8]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L20*/ meltfnum[15] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-macro.melt:7403:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[5];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L20*/ meltfnum[15];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 7403;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "mexpand_variadic hookfun before";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.HOOKFUN__V25*/ meltfptr[24];
                                                    /*_.MELT_DEBUG_FUN__V54*/
                                                    meltfptr[50] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V53*/
                                                meltfptr[51] = /*_.MELT_DEBUG_FUN__V54*/ meltfptr[50];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-macro.melt:7403:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L20*/
                                                meltfnum[15] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V54*/
                                                meltfptr[50] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V53*/ meltfptr[51] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-macro.melt:7403:/ locexp");
                                        /*void*/
                                        (void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L19*/
                                    meltfnum[8] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V53*/
                                    meltfptr[51] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:7404:/ locexp");

#if MELT_HAVE_DEBUG
                                    if (melt_need_debug (0))
                                        melt_dbgshortbacktrace(( "mexpand_variadic before calling hookfun for else"), (15));
#endif
                                    ;
                                }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7405:/ apply");
                                /*apply*/
                                {
                                    /*_.HOOKFUN__V55*/ meltfptr[50] =  melt_apply ((meltclosure_ptr_t)(/*_.HOOKFUN__V25*/ meltfptr[24]), (melt_ptr_t)(/*_.BODYTUP__V50*/ meltfptr[44]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
                                }
                                ;
                                /*_.LET___V49*/
                                meltfptr[45] = /*_.HOOKFUN__V55*/ meltfptr[50];;

                                MELT_LOCATION("warmelt-macro.melt:7400:/ clear");
                                /*clear*/ /*_.BODYTUP__V50*/
                                meltfptr[44] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.HOOKFUN__V55*/
                                meltfptr[50] = 0 ;
                                MELT_LOCATION("warmelt-macro.melt:7391:/ quasiblock");


                                /*_.PROGN___V56*/
                                meltfptr[51] = /*_.LET___V49*/ meltfptr[45];;
                                /*^compute*/
                                /*_._IFELSE___V42*/
                                meltfptr[40] = /*_.PROGN___V56*/ meltfptr[51];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7391:/ clear");
                                /*clear*/ /*_.PAIR_TAIL__V43*/
                                meltfptr[39] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V44*/
                                meltfptr[43] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.LET___V49*/
                                meltfptr[45] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V56*/
                                meltfptr[51] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;
                                /*_#NULL__L21*/
                                meltfnum[15] =
                                    (/*null*/(/*_.CASEFIRST__V38*/ meltfptr[37]) == NULL);;
                                MELT_LOCATION("warmelt-macro.melt:7408:/ cond");
                                /*cond*/
                                if (/*_#NULL__L21*/ meltfnum[15]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*_#OR___L22*/ meltfnum[8] = /*_#NULL__L21*/ meltfnum[15];;
                                    }
                                else
                                    {
                                        MELT_LOCATION("warmelt-macro.melt:7408:/ cond.else");

                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*_#IS_A__L23*/ meltfnum[22] =
                                                melt_is_instance_of((melt_ptr_t)(/*_.CASEFIRST__V38*/ meltfptr[37]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
                                            /*^compute*/
                                            /*_#OR___L22*/
                                            meltfnum[8] = /*_#IS_A__L23*/ meltfnum[22];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7408:/ clear");
                                            /*clear*/ /*_#IS_A__L23*/
                                            meltfnum[22] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*^cond*/
                                /*cond*/
                                if (/*_#OR___L22*/ meltfnum[8]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {


#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:7410:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L24*/
                                                meltfnum[22] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:7410:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L24*/ meltfnum[22]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L25*/ meltfnum[24] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:7410:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L25*/ meltfnum[24];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 7410;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_variadic casefirst=";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CASEFIRST__V38*/ meltfptr[37];
                                                                /*_.MELT_DEBUG_FUN__V59*/
                                                                meltfptr[39] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V58*/
                                                            meltfptr[50] = /*_.MELT_DEBUG_FUN__V59*/ meltfptr[39];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:7410:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L25*/
                                                            meltfnum[24] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V59*/
                                                            meltfptr[39] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V58*/ meltfptr[50] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:7410:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L24*/
                                                meltfnum[22] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V58*/
                                                meltfptr[50] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7411:/ quasiblock");



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            /*^apply*/
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[1];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!konst_12_CHECKARG*/ meltfrout->tabval[12]);
                                                /*_.ARGS__V61*/
                                                meltfptr[45] =  melt_apply ((meltclosure_ptr_t)((/*!LAMBDA_ARG_BINDINGS*/ meltfrout->tabval[11])), (melt_ptr_t)(/*_.CASEFIRST__V38*/ meltfptr[37]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7412:/ apply");
                                            /*apply*/
                                            {
                                                /*_.NEWENV__V62*/ meltfptr[51] =  melt_apply ((meltclosure_ptr_t)((/*!FRESH_ENV*/ meltfrout->tabval[13])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
                                            }
                                            ;

#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:7414:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L26*/
                                                meltfnum[24] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:7414:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L26*/ meltfnum[24]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L27*/ meltfnum[22] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:7414:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L27*/ meltfnum[22];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 7414;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_variadic args";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.ARGS__V61*/ meltfptr[45];
                                                                /*_.MELT_DEBUG_FUN__V64*/
                                                                meltfptr[50] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V63*/
                                                            meltfptr[39] = /*_.MELT_DEBUG_FUN__V64*/ meltfptr[50];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:7414:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L27*/
                                                            meltfnum[22] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V64*/
                                                            meltfptr[50] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V63*/ meltfptr[39] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:7414:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L26*/
                                                meltfnum[24] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V63*/
                                                meltfptr[39] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;
                                            /*citerblock FOREACH_IN_MULTIPLE*/
                                            {
                                                /* start foreach_in_multiple meltcit2__EACHTUP */
                                                long  meltcit2__EACHTUP_ln = melt_multiple_length((melt_ptr_t)/*_.ARGS__V61*/ meltfptr[45]);
                                                for (/*_#FIX__L28*/ meltfnum[22] = 0;
                                                                    (/*_#FIX__L28*/ meltfnum[22] >= 0) && (/*_#FIX__L28*/ meltfnum[22] <  meltcit2__EACHTUP_ln);
                                                                    /*_#FIX__L28*/ meltfnum[22]++)
                                                    {
                                                        /*_.FBI__V65*/ meltfptr[50] = melt_multiple_nth((melt_ptr_t)(/*_.ARGS__V61*/ meltfptr[45]),  /*_#FIX__L28*/ meltfnum[22]);




#if MELT_HAVE_DEBUG
                                                        MELT_LOCATION("warmelt-macro.melt:7418:/ cppif.then");
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {


                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            /*_#IS_A__L29*/
                                                            meltfnum[24] =
                                                                melt_is_instance_of((melt_ptr_t)(/*_.FBI__V65*/ meltfptr[50]), (melt_ptr_t)((/*!CLASS_FORMAL_BINDING*/ meltfrout->tabval[14])));;
                                                            MELT_LOCATION("warmelt-macro.melt:7418:/ cond");
                                                            /*cond*/
                                                            if (/*_#IS_A__L29*/ meltfnum[24]) /*then*/
                                                                {
                                                                    /*^cond.then*/
                                                                    /*_._IFELSE___V67*/ meltfptr[66] = (/*nil*/NULL);;
                                                                }
                                                            else
                                                                {
                                                                    MELT_LOCATION("warmelt-macro.melt:7418:/ cond.else");

                                                                    /*^block*/
                                                                    /*anyblock*/
                                                                    {


                                                                        MELT_CHECK_SIGNAL();
                                                                        ;
                                                                        /*^apply*/
                                                                        /*apply*/
                                                                        {
                                                                            union meltparam_un argtab[4];
                                                                            memset(&argtab, 0, sizeof(argtab));
                                                                            /*^apply.arg*/
                                                                            argtab[0].meltbp_cstring =  "check fbi";
                                                                            /*^apply.arg*/
                                                                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                            /*^apply.arg*/
                                                                            argtab[2].meltbp_long = 7418;
                                                                            /*^apply.arg*/
                                                                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.FBI__V65*/ meltfptr[50];
                                                                            /*_.MELT_ASSERT_FAILURE_FUN__V68*/
                                                                            meltfptr[67] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                        }
                                                                        ;
                                                                        /*_._IFELSE___V67*/
                                                                        meltfptr[66] = /*_.MELT_ASSERT_FAILURE_FUN__V68*/ meltfptr[67];;
                                                                        /*epilog*/

                                                                        MELT_LOCATION("warmelt-macro.melt:7418:/ clear");
                                                                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V68*/
                                                                        meltfptr[67] = 0 ;
                                                                    }
                                                                    ;
                                                                }
                                                            ;
                                                            /*_.IFCPP___V66*/
                                                            meltfptr[39] = /*_._IFELSE___V67*/ meltfptr[66];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:7418:/ clear");
                                                            /*clear*/ /*_#IS_A__L29*/
                                                            meltfnum[24] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_._IFELSE___V67*/
                                                            meltfptr[66] = 0 ;
                                                        }

#else /*MELT_HAVE_DEBUG*/
                                                        /*^cppif.else*/
                                                        /*_.IFCPP___V66*/ meltfptr[39] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:7419:/ quasiblock");


                                                        /*^cond*/
                                                        /*cond*/
                                                        if (
                                                            /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.FBI__V65*/ meltfptr[50]),
                                                                                          (melt_ptr_t)((/*!CLASS_ANY_BINDING*/ meltfrout->tabval[15])))
                                                        ) /*then*/
                                                            {
                                                                /*^cond.then*/
                                                                /*^getslot*/
                                                                {
                                                                    melt_ptr_t slot=NULL, obj=NULL;
                                                                    obj = (melt_ptr_t)(/*_.FBI__V65*/ meltfptr[50]) /*=obj*/;
                                                                    melt_object_get_field(slot,obj, 0, "BINDER");
                                                                    /*_.FBISYMB__V70*/
                                                                    meltfptr[66] = slot;
                                                                };
                                                                ;
                                                            }
                                                        else    /*^cond.else*/
                                                            {

                                                                /*_.FBISYMB__V70*/ meltfptr[66] =  /*reallynil*/ NULL ;;
                                                            }
                                                        ;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:7421:/ apply");
                                                        /*apply*/
                                                        {
                                                            union meltparam_un argtab[2];
                                                            memset(&argtab, 0, sizeof(argtab));
                                                            /*^apply.arg*/
                                                            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V62*/ meltfptr[51];
                                                            /*^apply.arg*/
                                                            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                                                            /*_.WARN_IF_REDEFINED__V71*/
                                                            meltfptr[70] =  melt_apply ((meltclosure_ptr_t)((/*!WARN_IF_REDEFINED*/ meltfrout->tabval[16])), (melt_ptr_t)(/*_.FBISYMB__V70*/ meltfptr[66]), (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                        }
                                                        ;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        /*_.MAPOBJECT_GET__V72*/
                                                        meltfptr[71] =
                                                            /*mapobject_get*/ melt_get_mapobjects((meltmapobjects_ptr_t)(/*_.VARBINDMAP__V24*/ meltfptr[23]),
                                                                    (meltobject_ptr_t)(/*_.FBISYMB__V70*/ meltfptr[66]));;
                                                        MELT_LOCATION("warmelt-macro.melt:7422:/ cond");
                                                        /*cond*/
                                                        if (/*_.MAPOBJECT_GET__V72*/ meltfptr[71]) /*then*/
                                                            {
                                                                /*^cond.then*/
                                                                /*^block*/
                                                                /*anyblock*/
                                                                {

                                                                    MELT_LOCATION("warmelt-macro.melt:7425:/ cond");
                                                                    /*cond*/
                                                                    if (
                                                                        /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.FBISYMB__V70*/ meltfptr[66]),
                                                                                                      (melt_ptr_t)((/*!CLASS_NAMED*/ meltfrout->tabval[18])))
                                                                    ) /*then*/
                                                                        {
                                                                            /*^cond.then*/
                                                                            /*^getslot*/
                                                                            {
                                                                                melt_ptr_t slot=NULL, obj=NULL;
                                                                                obj = (melt_ptr_t)(/*_.FBISYMB__V70*/ meltfptr[66]) /*=obj*/;
                                                                                melt_object_get_field(slot,obj, 1, "NAMED_NAME");
                                                                                /*_.NAMED_NAME__V74*/
                                                                                meltfptr[73] = slot;
                                                                            };
                                                                            ;
                                                                        }
                                                                    else    /*^cond.else*/
                                                                        {

                                                                            /*_.NAMED_NAME__V74*/ meltfptr[73] =  /*reallynil*/ NULL ;;
                                                                        }
                                                                    ;

                                                                    MELT_CHECK_SIGNAL();
                                                                    ;
                                                                    MELT_LOCATION("warmelt-macro.melt:7424:/ apply");
                                                                    /*apply*/
                                                                    {
                                                                        union meltparam_un argtab[2];
                                                                        memset(&argtab, 0, sizeof(argtab));
                                                                        /*^apply.arg*/
                                                                        argtab[0].meltbp_cstring =  "formals should all be distinct in (VARIADIC ...) but $1 is repeated";
                                                                        /*^apply.arg*/
                                                                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.NAMED_NAME__V74*/ meltfptr[73];
                                                                        /*_.ERROR_AT__V75*/
                                                                        meltfptr[74] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[17])), (melt_ptr_t)(/*_.CURCASELOC__V35*/ meltfptr[32]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                    }
                                                                    ;
                                                                    /*_._IF___V73*/
                                                                    meltfptr[72] = /*_.ERROR_AT__V75*/ meltfptr[74];;
                                                                    /*epilog*/

                                                                    MELT_LOCATION("warmelt-macro.melt:7422:/ clear");
                                                                    /*clear*/ /*_.NAMED_NAME__V74*/
                                                                    meltfptr[73] = 0 ;
                                                                    /*^clear*/
                                                                    /*clear*/ /*_.ERROR_AT__V75*/
                                                                    meltfptr[74] = 0 ;
                                                                }
                                                                ;
                                                            }
                                                        else    /*^cond.else*/
                                                            {

                                                                /*_._IF___V73*/ meltfptr[72] =  /*reallynil*/ NULL ;;
                                                            }
                                                        ;

                                                        {
                                                            MELT_LOCATION("warmelt-macro.melt:7427:/ locexp");
                                                            meltgc_put_mapobjects( (meltmapobjects_ptr_t) (/*_.VARBINDMAP__V24*/ meltfptr[23]),
                                                                                   (meltobject_ptr_t) (/*_.FBISYMB__V70*/ meltfptr[66]),
                                                                                   (melt_ptr_t)(/*_.FBI__V65*/ meltfptr[50]));
                                                        }
                                                        ;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:7428:/ apply");
                                                        /*apply*/
                                                        {
                                                            union meltparam_un argtab[1];
                                                            memset(&argtab, 0, sizeof(argtab));
                                                            /*^apply.arg*/
                                                            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.FBI__V65*/ meltfptr[50];
                                                            /*_.PUT_ENV__V76*/
                                                            meltfptr[73] =  melt_apply ((meltclosure_ptr_t)((/*!PUT_ENV*/ meltfrout->tabval[19])), (melt_ptr_t)(/*_.NEWENV__V62*/ meltfptr[51]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                        }
                                                        ;
                                                        /*_.LET___V69*/
                                                        meltfptr[67] = /*_.PUT_ENV__V76*/ meltfptr[73];;

                                                        MELT_LOCATION("warmelt-macro.melt:7419:/ clear");
                                                        /*clear*/ /*_.FBISYMB__V70*/
                                                        meltfptr[66] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.WARN_IF_REDEFINED__V71*/
                                                        meltfptr[70] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.MAPOBJECT_GET__V72*/
                                                        meltfptr[71] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_._IF___V73*/
                                                        meltfptr[72] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.PUT_ENV__V76*/
                                                        meltfptr[73] = 0 ;
                                                        if (/*_#FIX__L28*/ meltfnum[22]<0) break;
                                                    } /* end  foreach_in_multiple meltcit2__EACHTUP */

                                                /*citerepilog*/

                                                MELT_LOCATION("warmelt-macro.melt:7415:/ clear");
                                                /*clear*/ /*_.FBI__V65*/
                                                meltfptr[50] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_#FIX__L28*/
                                                meltfnum[22] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.IFCPP___V66*/
                                                meltfptr[39] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.LET___V69*/
                                                meltfptr[67] = 0 ;
                                            } /*endciterblock FOREACH_IN_MULTIPLE*/
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7430:/ quasiblock");



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            /*^apply*/
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[3];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V62*/ meltfptr[51];
                                                /*^apply.arg*/
                                                argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                /*^apply.arg*/
                                                argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                /*_.BODYTUP__V78*/
                                                meltfptr[66] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[10])), (melt_ptr_t)(/*_.CASEREST__V39*/ meltfptr[38]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7432:/ cond");
                                            /*cond*/
                                            if (/*_.CURCASELOC__V35*/ meltfptr[32]) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*_.OR___V79*/ meltfptr[70] = /*_.CURCASELOC__V35*/ meltfptr[32];;
                                                }
                                            else
                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:7432:/ cond.else");

                                                    /*_.OR___V79*/
                                                    meltfptr[70] = /*_.LOC__V19*/ meltfptr[18];;
                                                }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7431:/ quasiblock");


                                            /*^rawallocobj*/
                                            /*rawallocobj*/
                                            {
                                                melt_ptr_t newobj = 0;
                                                melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IFVARIADIC*/ meltfrout->tabval[20])), (5), "CLASS_SOURCE_IFVARIADIC");
                                                /*_.INST__V81*/
                                                meltfptr[72] =
                                                    newobj;
                                            };
                                            ;
                                            /*^putslot*/
                                            /*putslot*/
                                            melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V81*/ meltfptr[72])) == MELTOBMAG_OBJECT);
                                            melt_putfield_object((/*_.INST__V81*/ meltfptr[72]), (1), (/*_.OR___V79*/ meltfptr[70]), "LOCA_LOCATION");
                                            ;
                                            /*^putslot*/
                                            /*putslot*/
                                            melt_assertmsg("checkobj putslot  _ @SIFVARIADIC_ARGBIND", melt_magic_discr((melt_ptr_t)(/*_.INST__V81*/ meltfptr[72])) == MELTOBMAG_OBJECT);
                                            melt_putfield_object((/*_.INST__V81*/ meltfptr[72]), (2), (/*_.ARGS__V61*/ meltfptr[45]), "SIFVARIADIC_ARGBIND");
                                            ;
                                            /*^putslot*/
                                            /*putslot*/
                                            melt_assertmsg("checkobj putslot  _ @SIFVARIADIC_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V81*/ meltfptr[72])) == MELTOBMAG_OBJECT);
                                            melt_putfield_object((/*_.INST__V81*/ meltfptr[72]), (3), (/*_.BODYTUP__V78*/ meltfptr[66]), "SIFVARIADIC_THEN");
                                            ;
                                            /*^putslot*/
                                            /*putslot*/
                                            melt_assertmsg("checkobj putslot  _ @SIFVARIADIC_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V81*/ meltfptr[72])) == MELTOBMAG_OBJECT);
                                            melt_putfield_object((/*_.INST__V81*/ meltfptr[72]), (4), ((/*nil*/NULL)), "SIFVARIADIC_ELSE");
                                            ;
                                            /*^touchobj*/

                                            melt_dbgtrace_written_object (/*_.INST__V81*/ meltfptr[72], "newly made instance");
                                            ;
                                            /*_.SIFVARIADIC__V80*/
                                            meltfptr[71] = /*_.INST__V81*/ meltfptr[72];;

#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:7437:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L30*/
                                                meltfnum[24] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:7437:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L30*/ meltfnum[24]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L31*/ meltfnum[30] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:7437:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[9];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L31*/ meltfnum[30];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 7437;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_variadic bodytup";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.BODYTUP__V78*/ meltfptr[66];
                                                                /*^apply.arg*/
                                                                argtab[5].meltbp_cstring =  " sifvariadic=";
                                                                /*^apply.arg*/
                                                                argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.SIFVARIADIC__V80*/ meltfptr[71];
                                                                /*^apply.arg*/
                                                                argtab[7].meltbp_cstring =  " loc=";
                                                                /*^apply.arg*/
                                                                argtab[8].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                                                                /*_.MELT_DEBUG_FUN__V83*/
                                                                meltfptr[82] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V82*/
                                                            meltfptr[73] = /*_.MELT_DEBUG_FUN__V83*/ meltfptr[82];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:7437:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L31*/
                                                            meltfnum[30] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V83*/
                                                            meltfptr[82] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V82*/ meltfptr[73] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:7437:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L30*/
                                                meltfnum[24] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V82*/
                                                meltfptr[73] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7438:/ locexp");

#if MELT_HAVE_DEBUG
                                                if (melt_need_debug (0))
                                                    melt_dbgshortbacktrace(( "mexpand_variadic before calling hookfun for casefirst"), (15));
#endif
                                                ;
                                            }
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7439:/ apply");
                                            /*apply*/
                                            {
                                                /*_.HOOKFUN__V84*/ meltfptr[82] =  melt_apply ((meltclosure_ptr_t)(/*_.HOOKFUN__V25*/ meltfptr[24]), (melt_ptr_t)(/*_.SIFVARIADIC__V80*/ meltfptr[71]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7441:/ quasiblock");


                                            /*^newclosure*/
                                            /*newclosure*/ /*_.LAMBDA___V86*/
                                            meltfptr[85] =
                                                (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_23*/ meltfrout->tabval[23])), (1));
                                            ;
                                            /*^putclosedv*/
                                            /*putclosv*/
                                            melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V86*/ meltfptr[85])) == MELTOBMAG_CLOSURE);
                                            melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V86*/ meltfptr[85])));
                                            ((meltclosure_ptr_t)/*_.LAMBDA___V86*/ meltfptr[85])->tabval[0] = (melt_ptr_t)(/*_.SIFVARIADIC__V80*/ meltfptr[71]);
                                            ;
                                            /*_.LAMBDA___V85*/
                                            meltfptr[73] = /*_.LAMBDA___V86*/ meltfptr[85];;
                                            MELT_LOCATION("warmelt-macro.melt:7440:/ compute");
                                            /*_.HOOKFUN__V25*/
                                            meltfptr[24] = /*_.SETQ___V87*/ meltfptr[86] = /*_.LAMBDA___V85*/ meltfptr[73];;
                                            /*_.LET___V77*/
                                            meltfptr[74] = /*_.SETQ___V87*/ meltfptr[86];;

                                            MELT_LOCATION("warmelt-macro.melt:7430:/ clear");
                                            /*clear*/ /*_.BODYTUP__V78*/
                                            meltfptr[66] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.OR___V79*/
                                            meltfptr[70] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.SIFVARIADIC__V80*/
                                            meltfptr[71] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.HOOKFUN__V84*/
                                            meltfptr[82] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.LAMBDA___V85*/
                                            meltfptr[73] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.SETQ___V87*/
                                            meltfptr[86] = 0 ;
                                            /*_.LET___V60*/
                                            meltfptr[43] = /*_.LET___V77*/ meltfptr[74];;

                                            MELT_LOCATION("warmelt-macro.melt:7411:/ clear");
                                            /*clear*/ /*_.ARGS__V61*/
                                            meltfptr[45] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.NEWENV__V62*/
                                            meltfptr[51] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.LET___V77*/
                                            meltfptr[74] = 0 ;
                                            MELT_LOCATION("warmelt-macro.melt:7408:/ quasiblock");


                                            /*_.PROGN___V88*/
                                            meltfptr[66] = /*_.LET___V60*/ meltfptr[43];;
                                            /*^compute*/
                                            /*_._IFELSE___V57*/
                                            meltfptr[44] = /*_.PROGN___V88*/ meltfptr[66];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7408:/ clear");
                                            /*clear*/ /*_.LET___V60*/
                                            meltfptr[43] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V88*/
                                            meltfptr[66] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*^block*/
                                        /*anyblock*/
                                        {


#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:7451:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L32*/
                                                meltfnum[30] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:7451:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L32*/ meltfnum[30]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L33*/ meltfnum[24] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:7451:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L33*/ meltfnum[24];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 7451;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_variadic invalid casefirst";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CASEFIRST__V38*/ meltfptr[37];
                                                                /*_.MELT_DEBUG_FUN__V90*/
                                                                meltfptr[71] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V89*/
                                                            meltfptr[70] = /*_.MELT_DEBUG_FUN__V90*/ meltfptr[71];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:7451:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L33*/
                                                            meltfnum[24] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V90*/
                                                            meltfptr[71] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V89*/ meltfptr[70] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:7451:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L32*/
                                                meltfnum[30] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V89*/
                                                meltfptr[70] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7452:/ locexp");
                                                /* error_plain */
                                                melt_error_str((melt_ptr_t)(/*_.CURCASELOC__V35*/ meltfptr[32]), ( "invalid case in (VARIADIC ...), should start with formals"), (melt_ptr_t)0);
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7453:/ quasiblock");


                                            /*_._RETVAL___V1*/
                                            meltfptr[0] =  /*reallynil*/ NULL ;;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7453:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/
                                            goto meltlabend_rout ;
                                            MELT_LOCATION("warmelt-macro.melt:7450:/ quasiblock");


                                            /*_.PROGN___V92*/
                                            meltfptr[73] = /*_.RETURN___V91*/ meltfptr[82];;
                                            /*^compute*/
                                            /*_._IFELSE___V57*/
                                            meltfptr[44] = /*_.PROGN___V92*/ meltfptr[73];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7408:/ clear");
                                            /*clear*/ /*_.RETURN___V91*/
                                            meltfptr[82] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V92*/
                                            meltfptr[73] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*_._IFELSE___V42*/
                                meltfptr[40] = /*_._IFELSE___V57*/ meltfptr[44];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7391:/ clear");
                                /*clear*/ /*_#NULL__L21*/
                                meltfnum[15] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_#OR___L22*/
                                meltfnum[8] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IFELSE___V57*/
                                meltfptr[44] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_.LET___V34*/
                    meltfptr[28] = /*_._IFELSE___V42*/ meltfptr[40];;

                    MELT_LOCATION("warmelt-macro.melt:7382:/ clear");
                    /*clear*/ /*_.CURCASELOC__V35*/
                    meltfptr[32] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.CURCASECONT__V36*/
                    meltfptr[35] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.CURCASEPAIR__V37*/
                    meltfptr[36] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.CASEFIRST__V38*/
                    meltfptr[37] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.CASEREST__V39*/
                    meltfptr[38] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_#eqeq__L14*/
                    meltfnum[12] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V42*/
                    meltfptr[40] = 0 ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:7457:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L34*/
                        meltfnum[24] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:7457:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L34*/ meltfnum[24]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L35*/ meltfnum[30] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:7457:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L35*/ meltfnum[30];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 7457;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_variadic done curcase=";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURCASE__V28*/ meltfptr[27];
                                        /*_.MELT_DEBUG_FUN__V94*/
                                        meltfptr[45] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V93*/
                                    meltfptr[86] = /*_.MELT_DEBUG_FUN__V94*/ meltfptr[45];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7457:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L35*/
                                    meltfnum[30] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V94*/
                                    meltfptr[45] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V93*/ meltfptr[86] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:7457:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L34*/
                        meltfnum[24] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V93*/
                        meltfptr[86] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;
                } /* ending  foreach_pair meltcit1__EACHPAIR */
            /*_.CURPAIRCASE__V27*/ meltfptr[26] = NULL;
            /*_.CURCASE__V28*/
            meltfptr[27] = NULL;


            /*citerepilog*/

            MELT_LOCATION("warmelt-macro.melt:7375:/ clear");
            /*clear*/ /*_.CURPAIRCASE__V27*/
            meltfptr[26] = 0 ;
            /*^clear*/
            /*clear*/ /*_.CURCASE__V28*/
            meltfptr[27] = 0 ;
            /*^clear*/
            /*clear*/ /*_#IS_NOT_A__L11*/
            meltfnum[9] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V31*/
            meltfptr[29] = 0 ;
            /*^clear*/
            /*clear*/ /*_.LET___V34*/
            meltfptr[28] = 0 ;
        } /*endciterblock FOREACH_PAIR*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7459:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L36*/
            meltfnum[15] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7459:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L36*/ meltfnum[15]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L37*/ meltfnum[8] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7459:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L37*/ meltfnum[8];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7459;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_variadic final rescont=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RESCONT__V22*/ meltfptr[21];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " loc=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                            /*_.MELT_DEBUG_FUN__V96*/
                            meltfptr[74] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V95*/
                        meltfptr[51] = /*_.MELT_DEBUG_FUN__V96*/ meltfptr[74];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7459:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L37*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V96*/
                        meltfptr[74] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V95*/ meltfptr[51] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7459:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L36*/
            meltfnum[15] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V95*/
            meltfptr[51] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7460:/ quasiblock");


        /*^cond*/
        /*cond*/
        if (
            /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.RESCONT__V22*/ meltfptr[21]),
                                          (melt_ptr_t)((/*!CLASS_REFERENCE*/ meltfrout->tabval[4])))
        ) /*then*/
            {
                /*^cond.then*/
                /*^getslot*/
                {
                    melt_ptr_t slot=NULL, obj=NULL;
                    obj = (melt_ptr_t)(/*_.RESCONT__V22*/ meltfptr[21]) /*=obj*/;
                    melt_object_get_field(slot,obj, 0, "REFERENCED_VALUE");
                    /*_.RES__V98*/
                    meltfptr[66] = slot;
                };
                ;
            }
        else    /*^cond.else*/
            {

                /*_.RES__V98*/ meltfptr[66] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7462:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L38*/
            meltfnum[12] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7462:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L38*/ meltfnum[12]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L39*/ meltfnum[30] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7462:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L39*/ meltfnum[30];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7462;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_variadic result=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V98*/ meltfptr[66];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " loc=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                            /*_.MELT_DEBUG_FUN__V100*/
                            meltfptr[70] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V99*/
                        meltfptr[71] = /*_.MELT_DEBUG_FUN__V100*/ meltfptr[70];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7462:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L39*/
                        meltfnum[30] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V100*/
                        meltfptr[70] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V99*/ meltfptr[71] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7462:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L38*/
            meltfnum[12] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V99*/
            meltfptr[71] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7463:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V98*/ meltfptr[66];;

        {
            MELT_LOCATION("warmelt-macro.melt:7463:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V97*/
        meltfptr[43] = /*_.RETURN___V101*/ meltfptr[82];;

        MELT_LOCATION("warmelt-macro.melt:7460:/ clear");
        /*clear*/ /*_.RES__V98*/
        meltfptr[66] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V101*/
        meltfptr[82] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V97*/ meltfptr[43];;

        MELT_LOCATION("warmelt-macro.melt:7366:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FIRSTPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RESCONT__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_#LIST_LENGTH__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#stI__L7*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_#plI__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.VARBINDMAP__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.HOOKFUN__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V97*/
        meltfptr[43] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7361:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7361:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_VARIADIC", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_128_WARMELTmiMACRO_MEXPAND_VARIADIC*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_129_WARMELTmiMACRO_LAMBDA_cl19(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_129_WARMELTmiMACRO_LAMBDA_cl19 fromline 1752 */

    /** start of frame for meltrout_129_WARMELTmiMACRO_LAMBDA_cl19 of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19// fromline 1568
        : public Melt_CallFrameWithValues<4>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[2];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<4> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19), clos) {};
        MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19() //the constructor fromline 1642
            : Melt_CallFrameWithValues<4> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<4> (fil,lin, sizeof(MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19)) {};
        MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<4> (fil,lin, sizeof(MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19


    /** end of frame for meltrout_129_WARMELTmiMACRO_LAMBDA_cl19 fromline 1697**/

    /* end of frame for routine meltrout_129_WARMELTmiMACRO_LAMBDA_cl19 fromline 1756 */

    /* classy proc frame meltrout_129_WARMELTmiMACRO_LAMBDA_cl19 */
    MeltFrame_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_129_WARMELTmiMACRO_LAMBDA_cl19 fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl19", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7371:/ getarg");
    /*_.X__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7372:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7372:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7372:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7372;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_variadic/hookfun rescont set to x";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.X__V2*/ meltfptr[1];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  "; loc=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &(/*~LOC*/ meltfclos->tabval[0]);
                            /*_.MELT_DEBUG_FUN__V4*/
                            meltfptr[3] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V3*/
                        meltfptr[2] = /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7372:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V4*/
                        meltfptr[3] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V3*/ meltfptr[2] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7372:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V3*/
            meltfptr[2] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7373:/ cond");
        /*cond*/
        if (
            /*ifisa*/ melt_is_instance_of((melt_ptr_t)((/*~RESCONT*/ meltfclos->tabval[1])),
                                          (melt_ptr_t)((/*!CLASS_REFERENCE*/ meltfrout->tabval[1])))
        ) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @REFERENCED_VALUE", melt_magic_discr((melt_ptr_t)((/*~RESCONT*/ meltfclos->tabval[1]))) == MELTOBMAG_OBJECT);
                    melt_putfield_object(((/*~RESCONT*/ meltfclos->tabval[1])), (0), (/*_.X__V2*/ meltfptr[1]), "REFERENCED_VALUE");
                    ;
                    /*^touch*/
                    meltgc_touch((/*~RESCONT*/ meltfclos->tabval[1]));
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object ((/*~RESCONT*/ meltfclos->tabval[1]), "put-fields");
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*epilog*/
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl19", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_129_WARMELTmiMACRO_LAMBDA_cl19_melt;
    return (melt_ptr_t)(/*noretval*/ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_129_WARMELTmiMACRO_LAMBDA_cl19*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_130_WARMELTmiMACRO_LAMBDA_cl20(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_130_WARMELTmiMACRO_LAMBDA_cl20 fromline 1752 */

    /** start of frame for meltrout_130_WARMELTmiMACRO_LAMBDA_cl20 of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20// fromline 1568
        : public Melt_CallFrameWithValues<9>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[5];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<9> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20), clos) {};
        MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20() //the constructor fromline 1642
            : Melt_CallFrameWithValues<9> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<9> (fil,lin, sizeof(MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20)) {};
        MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<9> (fil,lin, sizeof(MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20


    /** end of frame for meltrout_130_WARMELTmiMACRO_LAMBDA_cl20 fromline 1697**/

    /* end of frame for routine meltrout_130_WARMELTmiMACRO_LAMBDA_cl20 fromline 1756 */

    /* classy proc frame meltrout_130_WARMELTmiMACRO_LAMBDA_cl20 */
    MeltFrame_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_130_WARMELTmiMACRO_LAMBDA_cl20 fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl20", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7441:/ getarg");
    /*_.XTUP__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7442:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7442:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7442:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7442;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_variadic/hookfun xtup";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XTUP__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V4*/
                            meltfptr[3] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V3*/
                        meltfptr[2] = /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7442:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V4*/
                        meltfptr[3] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V3*/ meltfptr[2] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7442:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V3*/
            meltfptr[2] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_MULTIPLE_OR_NULL__L3*/
        meltfnum[1] =
            ((/*_.XTUP__V2*/ meltfptr[1]) == NULL || (melt_unsafe_magic_discr((melt_ptr_t)(/*_.XTUP__V2*/ meltfptr[1])) == MELTOBMAG_MULTIPLE));;
        MELT_LOCATION("warmelt-macro.melt:7444:/ cond");
        /*cond*/
        if (/*_#IS_MULTIPLE_OR_NULL__L3*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*_._IFELSE___V5*/ meltfptr[3] = /*_.XTUP__V2*/ meltfptr[1];;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:7444:/ cond.else");

                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:7446:/ blockmultialloc");
                    /*multiallocblock*/
                    {
                        struct meltletrec_1_st
                        {
                            struct MELT_MULTIPLE_STRUCT(1) rtup_0__TUPLREC__x9;
                            long meltletrec_1_endgap;
                        } *meltletrec_1_ptr = 0;
                        meltletrec_1_ptr = (struct meltletrec_1_st *) meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
                        /*^blockmultialloc.initfill*/
                        /*inimult rtup_0__TUPLREC__x9*/
                        /*_.TUPLREC___V7*/
                        meltfptr[6] = (melt_ptr_t) &meltletrec_1_ptr->rtup_0__TUPLREC__x9;
                        meltletrec_1_ptr->rtup_0__TUPLREC__x9.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_MULTIPLE))));
                        meltletrec_1_ptr->rtup_0__TUPLREC__x9.nbval = 1;


                        /*^putuple*/
                        /*putupl#12*/
                        melt_assertmsg("putupl [:7446] #12 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V7*/ meltfptr[6]))== MELTOBMAG_MULTIPLE);
                        melt_assertmsg("putupl [:7446] #12 checkoff", (0>=0 && 0< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V7*/ meltfptr[6]))));
                        ((meltmultiple_ptr_t)(/*_.TUPLREC___V7*/ meltfptr[6]))->tabval[0] = (melt_ptr_t)(/*_.XTUP__V2*/ meltfptr[1]);
                        ;
                        /*^touch*/
                        meltgc_touch(/*_.TUPLREC___V7*/ meltfptr[6]);
                        ;
                        /*_.TUPLE___V6*/
                        meltfptr[2] = /*_.TUPLREC___V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7446:/ clear");
                        /*clear*/ /*_.TUPLREC___V7*/
                        meltfptr[6] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.TUPLREC___V7*/
                        meltfptr[6] = 0 ;
                    } /*end multiallocblock*/
                    ;
                    /*_._IFELSE___V5*/
                    meltfptr[3] = /*_.TUPLE___V6*/ meltfptr[2];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7444:/ clear");
                    /*clear*/ /*_.TUPLE___V6*/
                    meltfptr[2] = 0 ;
                }
                ;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7443:/ cond");
        /*cond*/
        if (
            /*ifisa*/ melt_is_instance_of((melt_ptr_t)((/*~SIFVARIADIC*/ meltfclos->tabval[0])),
                                          (melt_ptr_t)((/*!CLASS_SOURCE_IFVARIADIC*/ meltfrout->tabval[1])))
        ) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SIFVARIADIC_ELSE", melt_magic_discr((melt_ptr_t)((/*~SIFVARIADIC*/ meltfclos->tabval[0]))) == MELTOBMAG_OBJECT);
                    melt_putfield_object(((/*~SIFVARIADIC*/ meltfclos->tabval[0])), (4), (/*_._IFELSE___V5*/ meltfptr[3]), "SIFVARIADIC_ELSE");
                    ;
                    /*^touch*/
                    meltgc_touch((/*~SIFVARIADIC*/ meltfclos->tabval[0]));
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object ((/*~SIFVARIADIC*/ meltfclos->tabval[0]), "put-fields");
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7447:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L4*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7447:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L5*/ meltfnum[4] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7447:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L5*/ meltfnum[4];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7447;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_variadic/hookfun updated sifvariadic";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &(/*~SIFVARIADIC*/ meltfclos->tabval[0]);
                            /*_.MELT_DEBUG_FUN__V9*/
                            meltfptr[2] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V8*/
                        meltfptr[6] = /*_.MELT_DEBUG_FUN__V9*/ meltfptr[2];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7447:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L5*/
                        meltfnum[4] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V9*/
                        meltfptr[2] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V8*/ meltfptr[6] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7447:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V8*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*epilog*/

        MELT_LOCATION("warmelt-macro.melt:7441:/ clear");
        /*clear*/ /*_#IS_MULTIPLE_OR_NULL__L3*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V5*/
        meltfptr[3] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl20", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_130_WARMELTmiMACRO_LAMBDA_cl20_melt;
    return (melt_ptr_t)(/*noretval*/ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_130_WARMELTmiMACRO_LAMBDA_cl20*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL fromline 1752 */

    /** start of frame for meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL// fromline 1568
        : public Melt_CallFrameWithValues<52>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[14];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<52> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL), clos) {};
        MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL() //the constructor fromline 1642
            : Melt_CallFrameWithValues<52> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<52> (fil,lin, sizeof(MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL)) {};
        MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<52> (fil,lin, sizeof(MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL


    /** end of frame for meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL fromline 1697**/

    /* end of frame for routine meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL fromline 1756 */

    /* classy proc frame meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL */
    MeltFrame_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_MULTICALL", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7483:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7484:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7484:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7484:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7484;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_multicall sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7484:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7484:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7485:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7485:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7485:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7485;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7485:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7485:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7486:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7486:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7486:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7486;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7486:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7486:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7487:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:7487:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7487:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7487;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7487:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7487:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7488:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7488:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V18*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7488:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7488;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V19*/
                            meltfptr[18] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V18*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V19*/ meltfptr[18];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7488:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V19*/
                        meltfptr[18] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V17*/
            meltfptr[15] = /*_._IFELSE___V18*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7488:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V18*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V17*/ meltfptr[15] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7489:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V21*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7490:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V22*/
            meltfptr[21] = slot;
        };
        ;
        /*_.LIST_FIRST__V23*/
        meltfptr[22] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V21*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V24*/
        meltfptr[23] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7492:/ apply");
        /*apply*/
        {
            /*_.NEWENV__V25*/ meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!FRESH_ENV*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:7495:/ quasiblock");


        /*_.PAIR_HEAD__V27*/
        meltfptr[26] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7495:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!konst_6_CHECKARG*/ meltfrout->tabval[6]);
            /*_.RESTUP__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!LAMBDA_ARG_BINDINGS*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.PAIR_HEAD__V27*/ meltfptr[26]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_A__L7*/
        meltfnum[1] =
            melt_is_instance_of((melt_ptr_t)(/*_.RESTUP__V28*/ meltfptr[27]), (melt_ptr_t)((/*!DISCR_VARIADIC_FORMAL_SEQUENCE*/ meltfrout->tabval[7])));;
        MELT_LOCATION("warmelt-macro.melt:7497:/ cond");
        /*cond*/
        if (/*_#IS_A__L7*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7499:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V22*/ meltfptr[21]), ( "MULTICALL cannot have variadic result"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7500:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7500:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7498:/ quasiblock");


                    /*_.PROGN___V31*/
                    meltfptr[30] = /*_.RETURN___V30*/ meltfptr[29];;
                    /*^compute*/
                    /*_._IF___V29*/
                    meltfptr[28] = /*_.PROGN___V31*/ meltfptr[30];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7497:/ clear");
                    /*clear*/ /*_.RETURN___V30*/
                    meltfptr[29] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V31*/
                    meltfptr[30] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V32*/
        meltfptr[29] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23])));;
        MELT_LOCATION("warmelt-macro.melt:7501:/ compute");
        /*_.CURPAIR__V24*/
        meltfptr[23] = /*_.SETQ___V33*/ meltfptr[30] = /*_.PAIR_TAIL__V32*/ meltfptr[29];;
        MELT_LOCATION("warmelt-macro.melt:7502:/ quasiblock");


        /*_.CURCALLEXP__V35*/
        meltfptr[34] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_A__L8*/
        meltfnum[0] =
            melt_is_instance_of((melt_ptr_t)(/*_.CURCALLEXP__V35*/ meltfptr[34]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
        /*^compute*/
        /*_#NOT__L9*/
        meltfnum[8] =
            (!(/*_#IS_A__L8*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:7503:/ cond");
        /*cond*/
        if (/*_#NOT__L9*/ meltfnum[8]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7504:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V22*/ meltfptr[21]), ( "missing called expression in MULTICALL"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        /*_.PAIR_TAIL__V36*/
        meltfptr[35] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23])));;
        MELT_LOCATION("warmelt-macro.melt:7505:/ compute");
        /*_.CURPAIR__V24*/
        meltfptr[23] = /*_.SETQ___V37*/ meltfptr[36] = /*_.PAIR_TAIL__V36*/ meltfptr[35];;
        MELT_LOCATION("warmelt-macro.melt:7506:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.CURCALL__V39*/
            meltfptr[38] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURCALLEXP__V35*/ meltfptr[34]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_A__L10*/
        meltfnum[9] =
            melt_is_instance_of((melt_ptr_t)(/*_.CURCALL__V39*/ meltfptr[38]), (melt_ptr_t)((/*!CLASS_SOURCE_APPLY*/ meltfrout->tabval[9])));;
        MELT_LOCATION("warmelt-macro.melt:7509:/ cond");
        /*cond*/
        if (/*_#IS_A__L10*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*_#OR___L11*/ meltfnum[10] = /*_#IS_A__L10*/ meltfnum[9];;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:7509:/ cond.else");

                /*^block*/
                /*anyblock*/
                {

                    /*_#IS_A__L12*/ meltfnum[11] =
                        melt_is_instance_of((melt_ptr_t)(/*_.CURCALL__V39*/ meltfptr[38]), (melt_ptr_t)((/*!CLASS_SOURCE_MSEND*/ meltfrout->tabval[8])));;
                    /*^compute*/
                    /*_#OR___L11*/
                    meltfnum[10] = /*_#IS_A__L12*/ meltfnum[11];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7509:/ clear");
                    /*clear*/ /*_#IS_A__L12*/
                    meltfnum[11] = 0 ;
                }
                ;
            }
        ;
        /*^cond*/
        /*cond*/
        if (/*_#OR___L11*/ meltfnum[10]) /*then*/
            {
                /*^cond.then*/
                /*_._IFELSE___V40*/ meltfptr[39] = (/*nil*/NULL);;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:7509:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:7513:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L13*/
                        meltfnum[11] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:7513:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L13*/ meltfnum[11]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L14*/ meltfnum[13] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:7513:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L14*/ meltfnum[13];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 7513;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_multicall bad curcall";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURCALL__V39*/ meltfptr[38];
                                        /*_.MELT_DEBUG_FUN__V42*/
                                        meltfptr[41] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V41*/
                                    meltfptr[40] = /*_.MELT_DEBUG_FUN__V42*/ meltfptr[41];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7513:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L14*/
                                    meltfnum[13] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V42*/
                                    meltfptr[41] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V41*/ meltfptr[40] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:7513:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L13*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V41*/
                        meltfptr[40] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7514:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V22*/ meltfptr[21]), ( "called expression in MULTICALL is invalid, expecting application or\
 send"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7515:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7515:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7512:/ quasiblock");


                    /*_.PROGN___V44*/
                    meltfptr[40] = /*_.RETURN___V43*/ meltfptr[41];;
                    /*^compute*/
                    /*_._IFELSE___V40*/
                    meltfptr[39] = /*_.PROGN___V44*/ meltfptr[40];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7509:/ clear");
                    /*clear*/ /*_.RETURN___V43*/
                    meltfptr[41] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V44*/
                    meltfptr[40] = 0 ;
                }
                ;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7517:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V46*/
        meltfptr[40] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_12*/ meltfrout->tabval[12])), (1));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V46*/ meltfptr[40])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V46*/ meltfptr[40])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V46*/ meltfptr[40])->tabval[0] = (melt_ptr_t)(/*_.NEWENV__V25*/ meltfptr[24]);
        ;
        /*_.LAMBDA___V45*/
        meltfptr[41] = /*_.LAMBDA___V46*/ meltfptr[40];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7516:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LAMBDA___V45*/ meltfptr[41];
            /*_.MULTIPLE_EVERY__V47*/
            meltfptr[46] =  melt_apply ((meltclosure_ptr_t)((/*!MULTIPLE_EVERY*/ meltfrout->tabval[10])), (melt_ptr_t)(/*_.RESTUP__V28*/ meltfptr[27]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:7519:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V25*/ meltfptr[24];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.BODYTUP__V49*/
            meltfptr[48] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[13])), (melt_ptr_t)(/*_.CURPAIR__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7521:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_MULTICALL*/ meltfrout->tabval[14])), (5), "CLASS_SOURCE_MULTICALL");
            /*_.INST__V51*/
            meltfptr[50] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[50])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[50]), (1), (/*_.LOC__V22*/ meltfptr[21]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SMULC_RESBIND", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[50])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[50]), (2), (/*_.RESTUP__V28*/ meltfptr[27]), "SMULC_RESBIND");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SMULC_CALL", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[50])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[50]), (3), (/*_.CURCALL__V39*/ meltfptr[38]), "SMULC_CALL");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SMULC_BODY", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[50])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[50]), (4), (/*_.BODYTUP__V49*/ meltfptr[48]), "SMULC_BODY");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V51*/ meltfptr[50], "newly made instance");
        ;
        /*_.MULCR__V50*/
        meltfptr[49] = /*_.INST__V51*/ meltfptr[50];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7528:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.MULCR__V50*/ meltfptr[49];;

        {
            MELT_LOCATION("warmelt-macro.melt:7528:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V48*/
        meltfptr[47] = /*_.RETURN___V52*/ meltfptr[51];;

        MELT_LOCATION("warmelt-macro.melt:7519:/ clear");
        /*clear*/ /*_.BODYTUP__V49*/
        meltfptr[48] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MULCR__V50*/
        meltfptr[49] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V52*/
        meltfptr[51] = 0 ;
        /*_.LET___V38*/
        meltfptr[37] = /*_.LET___V48*/ meltfptr[47];;

        MELT_LOCATION("warmelt-macro.melt:7506:/ clear");
        /*clear*/ /*_.CURCALL__V39*/
        meltfptr[38] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#OR___L11*/
        meltfnum[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V40*/
        meltfptr[39] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LAMBDA___V45*/
        meltfptr[41] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MULTIPLE_EVERY__V47*/
        meltfptr[46] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V48*/
        meltfptr[47] = 0 ;
        /*_.LET___V34*/
        meltfptr[33] = /*_.LET___V38*/ meltfptr[37];;

        MELT_LOCATION("warmelt-macro.melt:7502:/ clear");
        /*clear*/ /*_.CURCALLEXP__V35*/
        meltfptr[34] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L8*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V36*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V37*/
        meltfptr[36] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V38*/
        meltfptr[37] = 0 ;
        /*_.LET___V26*/
        meltfptr[25] = /*_.LET___V34*/ meltfptr[33];;

        MELT_LOCATION("warmelt-macro.melt:7495:/ clear");
        /*clear*/ /*_.PAIR_HEAD__V27*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RESTUP__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L7*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V32*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V33*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V34*/
        meltfptr[33] = 0 ;
        /*_.LET___V20*/
        meltfptr[18] = /*_.LET___V26*/ meltfptr[25];;

        MELT_LOCATION("warmelt-macro.melt:7489:/ clear");
        /*clear*/ /*_.CONT__V21*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.NEWENV__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V26*/
        meltfptr[25] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7483:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V20*/ meltfptr[18];;

        {
            MELT_LOCATION("warmelt-macro.melt:7483:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V17*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V20*/
        meltfptr[18] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_MULTICALL", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_131_WARMELTmiMACRO_MEXPAND_MULTICALL*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_132_WARMELTmiMACRO_LAMBDA_cl21(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_132_WARMELTmiMACRO_LAMBDA_cl21 fromline 1752 */

    /** start of frame for meltrout_132_WARMELTmiMACRO_LAMBDA_cl21 of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21// fromline 1568
        : public Melt_CallFrameWithValues<3>
    {
    public: /* fromline 1572*/
// no classy longs
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21), clos) {};
        MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21() //the constructor fromline 1642
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21)) {};
        MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21


    /** end of frame for meltrout_132_WARMELTmiMACRO_LAMBDA_cl21 fromline 1697**/

    /* end of frame for routine meltrout_132_WARMELTmiMACRO_LAMBDA_cl21 fromline 1756 */

    /* classy proc frame meltrout_132_WARMELTmiMACRO_LAMBDA_cl21 */
    MeltFrame_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_132_WARMELTmiMACRO_LAMBDA_cl21 fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl21", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7517:/ getarg");
    /*_.LB__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LB__V2*/ meltfptr[1];
            /*_.PUT_ENV__V3*/
            meltfptr[2] =  melt_apply ((meltclosure_ptr_t)((/*!PUT_ENV*/ meltfrout->tabval[0])), (melt_ptr_t)((/*~NEWENV*/ meltfclos->tabval[0])), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*^quasiblock*/


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.PUT_ENV__V3*/ meltfptr[2];;

        {
            MELT_LOCATION("warmelt-macro.melt:7517:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.PUT_ENV__V3*/
        meltfptr[2] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl21", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_132_WARMELTmiMACRO_LAMBDA_cl21_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_132_WARMELTmiMACRO_LAMBDA_cl21*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_133_WARMELTmiMACRO_MEXPAND_BOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_133_WARMELTmiMACRO_MEXPAND_BOX fromline 1752 */

    /** start of frame for meltrout_133_WARMELTmiMACRO_MEXPAND_BOX of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX// fromline 1568
        : public Melt_CallFrameWithValues<30>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[7];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<30> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX), clos) {};
        MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX() //the constructor fromline 1642
            : Melt_CallFrameWithValues<30> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<30> (fil,lin, sizeof(MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX)) {};
        MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<30> (fil,lin, sizeof(MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX


    /** end of frame for meltrout_133_WARMELTmiMACRO_MEXPAND_BOX fromline 1697**/

    /* end of frame for routine meltrout_133_WARMELTmiMACRO_MEXPAND_BOX fromline 1756 */

    /* classy proc frame meltrout_133_WARMELTmiMACRO_MEXPAND_BOX */
    MeltFrame_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_133_WARMELTmiMACRO_MEXPAND_BOX fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_BOX", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7544:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7545:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7545:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7545:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7545;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_box start sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7545:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7545:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7546:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7546:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7546:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7546;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7546:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7546:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7547:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7547:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7547:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7547;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7547:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7547:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7548:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7548:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7548:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7548;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7548:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7548:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7549:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7550:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.BOXEDEXP__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7554:/ cond");
        /*cond*/
        if (/*_.PAIR_TAIL__V23*/ meltfptr[22]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7555:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "BOX should have only one argument"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7556:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7557:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.BOXED__V25*/
            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.BOXEDEXP__V22*/ meltfptr[21]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7558:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_BOX*/ meltfrout->tabval[4])), (3), "CLASS_SOURCE_BOX");
            /*_.INST__V27*/
            meltfptr[26] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V27*/ meltfptr[26])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V27*/ meltfptr[26]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SBOXED", melt_magic_discr((melt_ptr_t)(/*_.INST__V27*/ meltfptr[26])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V27*/ meltfptr[26]), (2), (/*_.BOXED__V25*/ meltfptr[24]), "SBOXED");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V27*/ meltfptr[26], "newly made instance");
        ;
        /*_.SRC__V26*/
        meltfptr[25] = /*_.INST__V27*/ meltfptr[26];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7562:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7562:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7562:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7562;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_box src=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SRC__V26*/ meltfptr[25];
                            /*_.MELT_DEBUG_FUN__V29*/
                            meltfptr[28] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V28*/
                        meltfptr[27] = /*_.MELT_DEBUG_FUN__V29*/ meltfptr[28];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7562:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V29*/
                        meltfptr[28] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V28*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7562:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V28*/
            meltfptr[27] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7563:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SRC__V26*/ meltfptr[25];;

        {
            MELT_LOCATION("warmelt-macro.melt:7563:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V24*/
        meltfptr[23] = /*_.RETURN___V30*/ meltfptr[28];;

        MELT_LOCATION("warmelt-macro.melt:7556:/ clear");
        /*clear*/ /*_.BOXED__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SRC__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V30*/
        meltfptr[28] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V24*/ meltfptr[23];;

        MELT_LOCATION("warmelt-macro.melt:7549:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.BOXEDEXP__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V24*/
        meltfptr[23] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7544:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7544:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_BOX", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_133_WARMELTmiMACRO_MEXPAND_BOX_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_133_WARMELTmiMACRO_MEXPAND_BOX*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX fromline 1752 */

    /** start of frame for meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX// fromline 1568
        : public Melt_CallFrameWithValues<30>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[7];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<30> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX), clos) {};
        MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX() //the constructor fromline 1642
            : Melt_CallFrameWithValues<30> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<30> (fil,lin, sizeof(MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX)) {};
        MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<30> (fil,lin, sizeof(MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX


    /** end of frame for meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX fromline 1697**/

    /* end of frame for routine meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX fromline 1756 */

    /* classy proc frame meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX */
    MeltFrame_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_CONSTANT_BOX", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7576:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7577:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7577:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7577:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7577;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_constant_box start sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7577:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7577:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7578:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7578:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7578:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7578;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7578:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7578:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7579:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7579:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7579:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7579;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7579:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7579:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7580:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7580:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7580:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7580;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7580:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7580:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7581:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7582:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.BOXEDEXP__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7586:/ cond");
        /*cond*/
        if (/*_.PAIR_TAIL__V23*/ meltfptr[22]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7587:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "CONSTANT_BOX should have only one argument"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7588:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7589:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.BOXED__V25*/
            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.BOXEDEXP__V22*/ meltfptr[21]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7590:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_CONSTANT_BOX*/ meltfrout->tabval[4])), (3), "CLASS_SOURCE_CONSTANT_BOX");
            /*_.INST__V27*/
            meltfptr[26] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V27*/ meltfptr[26])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V27*/ meltfptr[26]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SBOXED", melt_magic_discr((melt_ptr_t)(/*_.INST__V27*/ meltfptr[26])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V27*/ meltfptr[26]), (2), (/*_.BOXED__V25*/ meltfptr[24]), "SBOXED");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V27*/ meltfptr[26], "newly made instance");
        ;
        /*_.SRC__V26*/
        meltfptr[25] = /*_.INST__V27*/ meltfptr[26];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7594:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7594:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7594:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7594;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_constant_box src=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SRC__V26*/ meltfptr[25];
                            /*_.MELT_DEBUG_FUN__V29*/
                            meltfptr[28] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V28*/
                        meltfptr[27] = /*_.MELT_DEBUG_FUN__V29*/ meltfptr[28];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7594:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V29*/
                        meltfptr[28] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V28*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7594:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V28*/
            meltfptr[27] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7595:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SRC__V26*/ meltfptr[25];;

        {
            MELT_LOCATION("warmelt-macro.melt:7595:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V24*/
        meltfptr[23] = /*_.RETURN___V30*/ meltfptr[28];;

        MELT_LOCATION("warmelt-macro.melt:7588:/ clear");
        /*clear*/ /*_.BOXED__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SRC__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V30*/
        meltfptr[28] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V24*/ meltfptr[23];;

        MELT_LOCATION("warmelt-macro.melt:7581:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.BOXEDEXP__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V24*/
        meltfptr[23] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7576:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7576:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_CONSTANT_BOX", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_134_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX fromline 1752 */

    /** start of frame for meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX// fromline 1568
        : public Melt_CallFrameWithValues<50>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[13];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<50> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX), clos) {};
        MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX() //the constructor fromline 1642
            : Melt_CallFrameWithValues<50> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<50> (fil,lin, sizeof(MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX)) {};
        MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<50> (fil,lin, sizeof(MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX


    /** end of frame for meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX fromline 1697**/

    /* end of frame for routine meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX fromline 1756 */

    /* classy proc frame meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX */
    MeltFrame_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_UNBOX", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7608:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7609:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7609:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7609:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7609;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_unbox start sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7609:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7609:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7610:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7610:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7610:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7610;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7610:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7610:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7611:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7611:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7611:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7611;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7611:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7611:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7612:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7612:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7612:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7612;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7612:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7612:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7613:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7614:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.UBCTYPK__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7618:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V24*/ meltfptr[23] = /*_.PAIR_TAIL__V23*/ meltfptr[22];;
        /*_.PAIR_HEAD__V25*/
        meltfptr[24] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7617:/ quasiblock");


        /*_.UBEXPR__V26*/
        meltfptr[25] = /*_.PAIR_HEAD__V25*/ meltfptr[24];;
        /*^compute*/
        /*_.PAIR_TAIL__V27*/
        meltfptr[26] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7621:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V28*/ meltfptr[27] = /*_.PAIR_TAIL__V27*/ meltfptr[26];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7622:/ cond");
        /*cond*/
        if (/*_.CURPAIR__V21*/ meltfptr[20]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7623:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "UNBOX expects two arguments: (UNBOX <ctype> <expr>)"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7624:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7624:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7622:/ quasiblock");


                    /*_.PROGN___V31*/
                    meltfptr[30] = /*_.RETURN___V30*/ meltfptr[29];;
                    /*^compute*/
                    /*_._IF___V29*/
                    meltfptr[28] = /*_.PROGN___V31*/ meltfptr[30];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7622:/ clear");
                    /*clear*/ /*_.RETURN___V30*/
                    meltfptr[29] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V31*/
                    meltfptr[30] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7625:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7625:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7625:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7625;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_unbox ubctypk=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.UBCTYPK__V22*/ meltfptr[21];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " ubexpr=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.UBEXPR__V26*/ meltfptr[25];
                            /*_.MELT_DEBUG_FUN__V33*/
                            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V32*/
                        meltfptr[29] = /*_.MELT_DEBUG_FUN__V33*/ meltfptr[30];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7625:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V33*/
                        meltfptr[30] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V32*/ meltfptr[29] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7625:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V32*/
            meltfptr[29] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L8*/
        meltfnum[1] =
            !melt_is_instance_of((melt_ptr_t)(/*_.UBCTYPK__V22*/ meltfptr[21]), (melt_ptr_t)((/*!CLASS_KEYWORD*/ meltfrout->tabval[4])));;
        MELT_LOCATION("warmelt-macro.melt:7626:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L8*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7627:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "first argument to UNBOX should be a ctype keyword like :tree ...."), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7628:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7628:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7626:/ quasiblock");


                    /*_.PROGN___V36*/
                    meltfptr[35] = /*_.RETURN___V35*/ meltfptr[29];;
                    /*^compute*/
                    /*_._IF___V34*/
                    meltfptr[30] = /*_.PROGN___V36*/ meltfptr[35];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7626:/ clear");
                    /*clear*/ /*_.RETURN___V35*/
                    meltfptr[29] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V36*/
                    meltfptr[35] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V34*/ meltfptr[30] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7629:/ quasiblock");


        /*^cond*/
        /*cond*/
        if (
            /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.UBCTYPK__V22*/ meltfptr[21]),
                                          (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[5])))
        ) /*then*/
            {
                /*^cond.then*/
                /*^getslot*/
                {
                    melt_ptr_t slot=NULL, obj=NULL;
                    obj = (melt_ptr_t)(/*_.UBCTYPK__V22*/ meltfptr[21]) /*=obj*/;
                    melt_object_get_field(slot,obj, 2, "SYMB_DATA");
                    /*_.CTYP__V38*/
                    meltfptr[35] = slot;
                };
                ;
            }
        else    /*^cond.else*/
            {

                /*_.CTYP__V38*/ meltfptr[35] =  /*reallynil*/ NULL ;;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_NOT_A__L9*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.CTYP__V38*/ meltfptr[35]), (melt_ptr_t)((/*!CLASS_CTYPE*/ meltfrout->tabval[6])));;
        MELT_LOCATION("warmelt-macro.melt:7631:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L9*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7632:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "first argument to UNBOX should be a ctype"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7633:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7633:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7631:/ quasiblock");


                    /*_.PROGN___V41*/
                    meltfptr[40] = /*_.RETURN___V40*/ meltfptr[39];;
                    /*^compute*/
                    /*_._IF___V39*/
                    meltfptr[38] = /*_.PROGN___V41*/ meltfptr[40];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7631:/ clear");
                    /*clear*/ /*_.RETURN___V40*/
                    meltfptr[39] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V41*/
                    meltfptr[40] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V39*/ meltfptr[38] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7634:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L10*/
            meltfnum[9] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7634:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L10*/ meltfnum[9]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L11*/ meltfnum[10] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7634:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L11*/ meltfnum[10];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7634;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_unbox ctyp=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CTYP__V38*/ meltfptr[35];
                            /*_.MELT_DEBUG_FUN__V43*/
                            meltfptr[40] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V42*/
                        meltfptr[39] = /*_.MELT_DEBUG_FUN__V43*/ meltfptr[40];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7634:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L11*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V43*/
                        meltfptr[40] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V42*/ meltfptr[39] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7634:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L10*/
            meltfnum[9] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V42*/
            meltfptr[39] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7635:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.MEXP__V45*/
            meltfptr[39] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.UBEXPR__V26*/ meltfptr[25]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7636:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_UNBOX*/ meltfrout->tabval[7])), (4), "CLASS_SOURCE_UNBOX");
            /*_.INST__V47*/
            meltfptr[46] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V47*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V47*/ meltfptr[46]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUNBOX_CTYPE", melt_magic_discr((melt_ptr_t)(/*_.INST__V47*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V47*/ meltfptr[46]), (2), (/*_.CTYP__V38*/ meltfptr[35]), "SUNBOX_CTYPE");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUNBOX_EXPR", melt_magic_discr((melt_ptr_t)(/*_.INST__V47*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V47*/ meltfptr[46]), (3), (/*_.MEXP__V45*/ meltfptr[39]), "SUNBOX_EXPR");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V47*/ meltfptr[46], "newly made instance");
        ;
        /*_.SUNBOX__V46*/
        meltfptr[45] = /*_.INST__V47*/ meltfptr[46];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7642:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L12*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7642:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L12*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L13*/ meltfnum[9] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7642:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L13*/ meltfnum[9];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7642;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_unbox mexp=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.MEXP__V45*/ meltfptr[39];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " sunbox=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.SUNBOX__V46*/ meltfptr[45];
                            /*_.MELT_DEBUG_FUN__V49*/
                            meltfptr[48] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V48*/
                        meltfptr[47] = /*_.MELT_DEBUG_FUN__V49*/ meltfptr[48];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7642:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L13*/
                        meltfnum[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V49*/
                        meltfptr[48] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V48*/ meltfptr[47] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7642:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L12*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V48*/
            meltfptr[47] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7643:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SUNBOX__V46*/ meltfptr[45];;

        {
            MELT_LOCATION("warmelt-macro.melt:7643:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V44*/
        meltfptr[40] = /*_.RETURN___V50*/ meltfptr[48];;

        MELT_LOCATION("warmelt-macro.melt:7635:/ clear");
        /*clear*/ /*_.MEXP__V45*/
        meltfptr[39] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SUNBOX__V46*/
        meltfptr[45] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V50*/
        meltfptr[48] = 0 ;
        /*_.LET___V37*/
        meltfptr[29] = /*_.LET___V44*/ meltfptr[40];;

        MELT_LOCATION("warmelt-macro.melt:7629:/ clear");
        /*clear*/ /*_.CTYP__V38*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L9*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V39*/
        meltfptr[38] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V44*/
        meltfptr[40] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V37*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:7613:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.UBCTYPK__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_HEAD__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.UBEXPR__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V27*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L8*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V34*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V37*/
        meltfptr[29] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7608:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7608:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_UNBOX", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_135_WARMELTmiMACRO_MEXPAND_UNBOX*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT fromline 1752 */

    /** start of frame for meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT// fromline 1568
        : public Melt_CallFrameWithValues<28>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[5];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<28> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT), clos) {};
        MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT() //the constructor fromline 1642
            : Melt_CallFrameWithValues<28> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<28> (fil,lin, sizeof(MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT)) {};
        MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<28> (fil,lin, sizeof(MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT


    /** end of frame for meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT fromline 1697**/

    /* end of frame for routine meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT fromline 1756 */

    /* classy proc frame meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT */
    MeltFrame_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_COMMENT", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7654:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7655:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:7655:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7655:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7655;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7655:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7655:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7656:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:7656:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7656:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7656;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7656:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7656:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7657:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L3*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7657:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V13*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7657:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7657;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V14*/
                            meltfptr[13] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V13*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V14*/ meltfptr[13];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7657:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V14*/
                        meltfptr[13] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V12*/
            meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7657:/ clear");
            /*clear*/ /*_#IS_OBJECT__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V13*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V12*/ meltfptr[10] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7658:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V16*/
            meltfptr[6] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7659:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V17*/
            meltfptr[16] = slot;
        };
        ;
        /*_.LIST_FIRST__V18*/
        meltfptr[17] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V16*/ meltfptr[6])));;
        /*^compute*/
        /*_.CURPAIR__V19*/
        meltfptr[18] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V18*/ meltfptr[17])));;
        /*^compute*/
        /*_.COMSTR__V20*/
        meltfptr[19] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V19*/ meltfptr[18])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V19*/ meltfptr[18])));;
        MELT_LOCATION("warmelt-macro.melt:7663:/ cond");
        /*cond*/
        if (/*_.PAIR_TAIL__V21*/ meltfptr[20]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7664:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V17*/ meltfptr[16]), ( "COMMENT should have only one string argument"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L4*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.COMSTR__V20*/ meltfptr[19])) == MELTOBMAG_STRING);;
        /*^compute*/
        /*_#NOT__L5*/
        meltfnum[4] =
            (!(/*_#IS_STRING__L4*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:7665:/ cond");
        /*cond*/
        if (/*_#NOT__L5*/ meltfnum[4]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7667:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V17*/ meltfptr[16]), ( "COMMENT without string is ignored"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7668:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7668:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7666:/ quasiblock");


                    /*_.PROGN___V24*/
                    meltfptr[23] = /*_.RETURN___V23*/ meltfptr[22];;
                    /*^compute*/
                    /*_._IF___V22*/
                    meltfptr[21] = /*_.PROGN___V24*/ meltfptr[23];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7665:/ clear");
                    /*clear*/ /*_.RETURN___V23*/
                    meltfptr[22] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V24*/
                    meltfptr[23] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V22*/ meltfptr[21] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7671:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_COMMENT*/ meltfrout->tabval[3])), (3), "CLASS_SOURCE_COMMENT");
            /*_.INST__V27*/
            meltfptr[26] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V27*/ meltfptr[26])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V27*/ meltfptr[26]), (1), (/*_.LOC__V17*/ meltfptr[16]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SCOMM_STR", melt_magic_discr((melt_ptr_t)(/*_.INST__V27*/ meltfptr[26])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V27*/ meltfptr[26]), (2), (/*_.COMSTR__V20*/ meltfptr[19]), "SCOMM_STR");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V27*/ meltfptr[26], "newly made instance");
        ;
        /*_.SCOM__V26*/
        meltfptr[23] = /*_.INST__V27*/ meltfptr[26];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7674:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SCOM__V26*/ meltfptr[23];;

        {
            MELT_LOCATION("warmelt-macro.melt:7674:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V25*/
        meltfptr[22] = /*_.RETURN___V28*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:7671:/ clear");
        /*clear*/ /*_.SCOM__V26*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V28*/
        meltfptr[27] = 0 ;
        /*_.LET___V15*/
        meltfptr[13] = /*_.LET___V25*/ meltfptr[22];;

        MELT_LOCATION("warmelt-macro.melt:7658:/ clear");
        /*clear*/ /*_.CONT__V16*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.COMSTR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L4*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L5*/
        meltfnum[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V25*/
        meltfptr[22] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7654:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V15*/ meltfptr[13];;

        {
            MELT_LOCATION("warmelt-macro.melt:7654:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V12*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V15*/
        meltfptr[13] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_COMMENT", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_136_WARMELTmiMACRO_MEXPAND_COMMENT*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER fromline 1752 */

    /** start of frame for meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER// fromline 1568
        : public Melt_CallFrameWithValues<46>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[11];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<46> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER), clos) {};
        MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER() //the constructor fromline 1642
            : Melt_CallFrameWithValues<46> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<46> (fil,lin, sizeof(MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER)) {};
        MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<46> (fil,lin, sizeof(MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER


    /** end of frame for meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER fromline 1697**/

    /* end of frame for routine meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER fromline 1756 */

    /* classy proc frame meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER */
    MeltFrame_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_CHEADER", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7684:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7685:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7685:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7685:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[8];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7685;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cheader sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  "\n.. modctx=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &(/*!DEBUG_LESS*/ meltfrout->tabval[1]);
                            /*^apply.arg*/
                            argtab[7].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7685:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7685:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7686:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:7686:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7686:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7686;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7686:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7686:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7687:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[4])));;
            MELT_LOCATION("warmelt-macro.melt:7687:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7687:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7687;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7687:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7687:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7688:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7688:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7688:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7688;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7688:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7688:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7689:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7690:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.CHEAD__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7694:/ cond");
        /*cond*/
        if (/*_.PAIR_TAIL__V23*/ meltfptr[22]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7695:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "CHEADER should have only one argument"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7696:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7696:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7696:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7696;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cheader chead=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CHEAD__V22*/ meltfptr[21];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  "\n.. loc=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V19*/ meltfptr[18];
                            /*_.MELT_DEBUG_FUN__V25*/
                            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V24*/
                        meltfptr[23] = /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7696:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V25*/
                        meltfptr[24] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V24*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7696:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V24*/
            meltfptr[23] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L8*/
        meltfnum[1] =
            (melt_magic_discr((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21])) == MELTOBMAG_STRING);;
        MELT_LOCATION("warmelt-macro.melt:7698:/ cond");
        /*cond*/
        if (/*_#IS_STRING__L8*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {




                    {
                        MELT_LOCATION("warmelt-macro.melt:7699:/ locexp");
                        /*void*/
                        (void)0;
                    }
                    ;
                    /*clear*/ /*_._IFELSE___V26*/
                    meltfptr[24] = 0 ;
                    /*epilog*/
                }
                ;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:7698:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_A__L9*/
                    meltfnum[0] =
                        melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]), (melt_ptr_t)((/*!CLASS_SEXPR_MACROSTRING*/ meltfrout->tabval[5])));;
                    MELT_LOCATION("warmelt-macro.melt:7701:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L9*/ meltfnum[0]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:7702:/ quasiblock");


                                /*_.SBUF__V29*/
                                meltfptr[28] =
                                    (melt_ptr_t) meltgc_new_strbuf((meltobject_ptr_t)((/*!DISCR_STRBUF*/ meltfrout->tabval[6])), (const char*)0);;
                                MELT_LOCATION("warmelt-macro.melt:7703:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                  (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[2])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                            /*_.SCONT__V30*/
                                            meltfptr[29] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.SCONT__V30*/ meltfptr[29] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7704:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                  (melt_ptr_t)((/*!CLASS_LOCATED*/ meltfrout->tabval[7])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                                            /*_.SLOC__V31*/
                                            meltfptr[30] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.SLOC__V31*/ meltfptr[30] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7706:/ cond");
                                /*cond*/
                                if (/*_.SLOC__V31*/ meltfptr[30]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*^compute*/
                                            /*_.LOC__V19*/ meltfptr[18] = /*_.SETQ___V33*/ meltfptr[32] = /*_.SLOC__V31*/ meltfptr[30];;
                                            /*_._IF___V32*/
                                            meltfptr[31] = /*_.SETQ___V33*/ meltfptr[32];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7706:/ clear");
                                            /*clear*/ /*_.SETQ___V33*/
                                            meltfptr[32] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V32*/ meltfptr[31] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                /*citerblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                {
                                    /* start foreach_pair_component_in_list meltcit1__EACHLIST */
                                    for (/*_.CURPAIR__V34*/ meltfptr[32] = melt_list_first( (melt_ptr_t)/*_.SCONT__V30*/ meltfptr[29]);
                                                            melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]) == MELTOBMAG_PAIR;
                                                            /*_.CURPAIR__V34*/ meltfptr[32] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]))
                                        {
                                            /*_.CURARG__V35*/ meltfptr[34] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]);



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7710:/ apply");
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[1];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.CURARG__V35*/ meltfptr[34];
                                                /*_.ADD2OUT__V36*/
                                                meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!ADD2OUT*/ meltfrout->tabval[8])), (melt_ptr_t)(/*_.SBUF__V29*/ meltfptr[28]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;
                                        } /* end foreach_pair_component_in_list meltcit1__EACHLIST */
                                    /*_.CURPAIR__V34*/ meltfptr[32] = NULL;
                                    /*_.CURARG__V35*/
                                    meltfptr[34] = NULL;


                                    /*citerepilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7707:/ clear");
                                    /*clear*/ /*_.CURPAIR__V34*/
                                    meltfptr[32] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.CURARG__V35*/
                                    meltfptr[34] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.ADD2OUT__V36*/
                                    meltfptr[35] = 0 ;
                                } /*endciterblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                ;
                                /*_.STRBUF2STRING__V37*/
                                meltfptr[36] =
                                    (meltgc_new_stringdup((meltobject_ptr_t)((/*!DISCR_VERBATIM_STRING*/ meltfrout->tabval[9])), melt_strbuf_str((melt_ptr_t)(/*_.SBUF__V29*/ meltfptr[28]))));;
                                MELT_LOCATION("warmelt-macro.melt:7712:/ compute");
                                /*_.CHEAD__V22*/
                                meltfptr[21] = /*_.SETQ___V38*/ meltfptr[37] = /*_.STRBUF2STRING__V37*/ meltfptr[36];;
                                /*_.LET___V28*/
                                meltfptr[27] = /*_.SETQ___V38*/ meltfptr[37];;

                                MELT_LOCATION("warmelt-macro.melt:7702:/ clear");
                                /*clear*/ /*_.SBUF__V29*/
                                meltfptr[28] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SCONT__V30*/
                                meltfptr[29] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SLOC__V31*/
                                meltfptr[30] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V32*/
                                meltfptr[31] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.STRBUF2STRING__V37*/
                                meltfptr[36] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SETQ___V38*/
                                meltfptr[37] = 0 ;
                                /*_._IFELSE___V27*/
                                meltfptr[23] = /*_.LET___V28*/ meltfptr[27];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7701:/ clear");
                                /*clear*/ /*_.LET___V28*/
                                meltfptr[27] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:7715:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "CHEADER without string or macrostring"), (melt_ptr_t)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7716:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:7716:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:7714:/ quasiblock");


                                /*_.PROGN___V40*/
                                meltfptr[29] = /*_.RETURN___V39*/ meltfptr[28];;
                                /*^compute*/
                                /*_._IFELSE___V27*/
                                meltfptr[23] = /*_.PROGN___V40*/ meltfptr[29];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7701:/ clear");
                                /*clear*/ /*_.RETURN___V39*/
                                meltfptr[28] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V40*/
                                meltfptr[29] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V26*/
                    meltfptr[24] = /*_._IFELSE___V27*/ meltfptr[23];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7698:/ clear");
                    /*clear*/ /*_#IS_A__L9*/
                    meltfnum[0] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V27*/
                    meltfptr[23] = 0 ;
                }
                ;
            }
        ;

        {
            MELT_LOCATION("warmelt-macro.melt:7719:/ locexp");

#if MELT_HAVE_DEBUG
            if (melt_need_debug (0))
                melt_dbgshortbacktrace(( "mexpand_cheader"), (8));
#endif
            ;
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:7720:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_CHEADER*/ meltfrout->tabval[10])), (3), "CLASS_SOURCE_CHEADER");
            /*_.INST__V43*/
            meltfptr[36] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V43*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V43*/ meltfptr[36]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SC_CODESTRING", melt_magic_discr((melt_ptr_t)(/*_.INST__V43*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V43*/ meltfptr[36]), (2), (/*_.CHEAD__V22*/ meltfptr[21]), "SC_CODESTRING");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V43*/ meltfptr[36], "newly made instance");
        ;
        /*_.SCH__V42*/
        meltfptr[31] = /*_.INST__V43*/ meltfptr[36];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7723:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L10*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7723:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L10*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L11*/ meltfnum[10] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7723:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L11*/ meltfnum[10];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7723;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cheader gives sch=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SCH__V42*/ meltfptr[31];
                            /*_.MELT_DEBUG_FUN__V45*/
                            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V44*/
                        meltfptr[37] = /*_.MELT_DEBUG_FUN__V45*/ meltfptr[27];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7723:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L11*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V45*/
                        meltfptr[27] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V44*/ meltfptr[37] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7723:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L10*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V44*/
            meltfptr[37] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7724:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SCH__V42*/ meltfptr[31];;
        MELT_LOCATION("warmelt-macro.melt:7724:/ putxtraresult");
        if (!meltxrestab_ || !meltxresdescr_) goto meltlabend_rout;
        if (meltxresdescr_[0] != MELTBPAR_PTR) goto meltlabend_rout;
        if (meltxrestab_[0].meltbp_aptr) *(meltxrestab_[0].meltbp_aptr) = (melt_ptr_t) ((/*nil*/NULL));
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V41*/
        meltfptr[30] = /*_.RETURN___V46*/ meltfptr[28];;

        MELT_LOCATION("warmelt-macro.melt:7720:/ clear");
        /*clear*/ /*_.SCH__V42*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V46*/
        meltfptr[28] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V41*/ meltfptr[30];;

        MELT_LOCATION("warmelt-macro.melt:7689:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CHEAD__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L8*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V26*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V41*/
        meltfptr[30] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7684:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7684:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_CHEADER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_137_WARMELTmiMACRO_MEXPAND_CHEADER*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT fromline 1752 */

    /** start of frame for meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT// fromline 1568
        : public Melt_CallFrameWithValues<46>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[11];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<46> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT), clos) {};
        MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT() //the constructor fromline 1642
            : Melt_CallFrameWithValues<46> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<46> (fil,lin, sizeof(MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT)) {};
        MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<46> (fil,lin, sizeof(MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT


    /** end of frame for meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT fromline 1697**/

    /* end of frame for routine meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT fromline 1756 */

    /* classy proc frame meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT */
    MeltFrame_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_CIMPLEMENT", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7733:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7734:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7734:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7734:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7734;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cimplement sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7734:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7734:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7735:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7735:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7735:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7735;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7735:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7735:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7736:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7736:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7736:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7736;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7736:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7736:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7737:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7737:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7737:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7737;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7737:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7737:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7738:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7739:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.CHEAD__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7743:/ cond");
        /*cond*/
        if (/*_.PAIR_TAIL__V23*/ meltfptr[22]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7744:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "CIMPLEMENT should have only one argument"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7745:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7745:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7745:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7745;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cimplement chead=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CHEAD__V22*/ meltfptr[21];
                            /*_.MELT_DEBUG_FUN__V25*/
                            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V24*/
                        meltfptr[23] = /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7745:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V25*/
                        meltfptr[24] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V24*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7745:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V24*/
            meltfptr[23] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L8*/
        meltfnum[1] =
            (melt_magic_discr((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21])) == MELTOBMAG_STRING);;
        MELT_LOCATION("warmelt-macro.melt:7747:/ cond");
        /*cond*/
        if (/*_#IS_STRING__L8*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {




                    {
                        MELT_LOCATION("warmelt-macro.melt:7748:/ locexp");
                        /*void*/
                        (void)0;
                    }
                    ;
                    /*clear*/ /*_._IFELSE___V26*/
                    meltfptr[24] = 0 ;
                    /*epilog*/
                }
                ;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:7747:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_A__L9*/
                    meltfnum[0] =
                        melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]), (melt_ptr_t)((/*!CLASS_SEXPR_MACROSTRING*/ meltfrout->tabval[4])));;
                    MELT_LOCATION("warmelt-macro.melt:7750:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L9*/ meltfnum[0]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:7751:/ quasiblock");


                                /*_.SBUF__V29*/
                                meltfptr[28] =
                                    (melt_ptr_t) meltgc_new_strbuf((meltobject_ptr_t)((/*!DISCR_STRBUF*/ meltfrout->tabval[5])), (const char*)0);;
                                MELT_LOCATION("warmelt-macro.melt:7752:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                  (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                            /*_.SCONT__V30*/
                                            meltfptr[29] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.SCONT__V30*/ meltfptr[29] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7753:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                  (melt_ptr_t)((/*!CLASS_LOCATED*/ meltfrout->tabval[6])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                                            /*_.SLOC__V31*/
                                            meltfptr[30] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.SLOC__V31*/ meltfptr[30] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7755:/ cond");
                                /*cond*/
                                if (/*_.SLOC__V31*/ meltfptr[30]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*^compute*/
                                            /*_.LOC__V19*/ meltfptr[18] = /*_.SETQ___V33*/ meltfptr[32] = /*_.SLOC__V31*/ meltfptr[30];;
                                            /*_._IF___V32*/
                                            meltfptr[31] = /*_.SETQ___V33*/ meltfptr[32];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7755:/ clear");
                                            /*clear*/ /*_.SETQ___V33*/
                                            meltfptr[32] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V32*/ meltfptr[31] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                /*citerblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                {
                                    /* start foreach_pair_component_in_list meltcit1__EACHLIST */
                                    for (/*_.CURPAIR__V34*/ meltfptr[32] = melt_list_first( (melt_ptr_t)/*_.SCONT__V30*/ meltfptr[29]);
                                                            melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]) == MELTOBMAG_PAIR;
                                                            /*_.CURPAIR__V34*/ meltfptr[32] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]))
                                        {
                                            /*_.CURARG__V35*/ meltfptr[34] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]);



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7759:/ apply");
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[1];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.CURARG__V35*/ meltfptr[34];
                                                /*_.ADD2OUT__V36*/
                                                meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!ADD2OUT*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.SBUF__V29*/ meltfptr[28]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;
                                        } /* end foreach_pair_component_in_list meltcit1__EACHLIST */
                                    /*_.CURPAIR__V34*/ meltfptr[32] = NULL;
                                    /*_.CURARG__V35*/
                                    meltfptr[34] = NULL;


                                    /*citerepilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7756:/ clear");
                                    /*clear*/ /*_.CURPAIR__V34*/
                                    meltfptr[32] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.CURARG__V35*/
                                    meltfptr[34] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.ADD2OUT__V36*/
                                    meltfptr[35] = 0 ;
                                } /*endciterblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                ;
                                /*_.STRBUF2STRING__V37*/
                                meltfptr[36] =
                                    (meltgc_new_stringdup((meltobject_ptr_t)((/*!DISCR_VERBATIM_STRING*/ meltfrout->tabval[8])), melt_strbuf_str((melt_ptr_t)(/*_.SBUF__V29*/ meltfptr[28]))));;
                                MELT_LOCATION("warmelt-macro.melt:7761:/ compute");
                                /*_.CHEAD__V22*/
                                meltfptr[21] = /*_.SETQ___V38*/ meltfptr[37] = /*_.STRBUF2STRING__V37*/ meltfptr[36];;
                                /*_.LET___V28*/
                                meltfptr[27] = /*_.SETQ___V38*/ meltfptr[37];;

                                MELT_LOCATION("warmelt-macro.melt:7751:/ clear");
                                /*clear*/ /*_.SBUF__V29*/
                                meltfptr[28] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SCONT__V30*/
                                meltfptr[29] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SLOC__V31*/
                                meltfptr[30] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V32*/
                                meltfptr[31] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.STRBUF2STRING__V37*/
                                meltfptr[36] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SETQ___V38*/
                                meltfptr[37] = 0 ;
                                /*_._IFELSE___V27*/
                                meltfptr[23] = /*_.LET___V28*/ meltfptr[27];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7750:/ clear");
                                /*clear*/ /*_.LET___V28*/
                                meltfptr[27] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:7764:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "CIMPLEMENT without string or macrostring"), (melt_ptr_t)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7765:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:7765:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:7763:/ quasiblock");


                                /*_.PROGN___V40*/
                                meltfptr[29] = /*_.RETURN___V39*/ meltfptr[28];;
                                /*^compute*/
                                /*_._IFELSE___V27*/
                                meltfptr[23] = /*_.PROGN___V40*/ meltfptr[29];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7750:/ clear");
                                /*clear*/ /*_.RETURN___V39*/
                                meltfptr[28] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V40*/
                                meltfptr[29] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V26*/
                    meltfptr[24] = /*_._IFELSE___V27*/ meltfptr[23];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7747:/ clear");
                    /*clear*/ /*_#IS_A__L9*/
                    meltfnum[0] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V27*/
                    meltfptr[23] = 0 ;
                }
                ;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7768:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_CIMPLEMENT*/ meltfrout->tabval[9])), (3), "CLASS_SOURCE_CIMPLEMENT");
            /*_.INST__V43*/
            meltfptr[36] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V43*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V43*/ meltfptr[36]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SC_CODESTRING", melt_magic_discr((melt_ptr_t)(/*_.INST__V43*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V43*/ meltfptr[36]), (2), (/*_.CHEAD__V22*/ meltfptr[21]), "SC_CODESTRING");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V43*/ meltfptr[36], "newly made instance");
        ;
        /*_.SCH__V42*/
        meltfptr[31] = /*_.INST__V43*/ meltfptr[36];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7771:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L10*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7771:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L10*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L11*/ meltfnum[10] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7771:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L11*/ meltfnum[10];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7771;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cimplement gives sch=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SCH__V42*/ meltfptr[31];
                            /*_.MELT_DEBUG_FUN__V45*/
                            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V44*/
                        meltfptr[37] = /*_.MELT_DEBUG_FUN__V45*/ meltfptr[27];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7771:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L11*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V45*/
                        meltfptr[27] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V44*/ meltfptr[37] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7771:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L10*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V44*/
            meltfptr[37] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7772:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SCH__V42*/ meltfptr[31];;

        {
            MELT_LOCATION("warmelt-macro.melt:7772:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V41*/
        meltfptr[30] = /*_.RETURN___V46*/ meltfptr[28];;

        MELT_LOCATION("warmelt-macro.melt:7768:/ clear");
        /*clear*/ /*_.SCH__V42*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V46*/
        meltfptr[28] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V41*/ meltfptr[30];;

        MELT_LOCATION("warmelt-macro.melt:7738:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CHEAD__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L8*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V26*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V41*/
        meltfptr[30] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7733:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7733:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_CIMPLEMENT", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_138_WARMELTmiMACRO_MEXPAND_CIMPLEMENT*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE fromline 1752 */

    /** start of frame for meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE// fromline 1568
        : public Melt_CallFrameWithValues<53>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[13];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<53> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE), clos) {};
        MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE() //the constructor fromline 1642
            : Melt_CallFrameWithValues<53> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<53> (fil,lin, sizeof(MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE)) {};
        MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<53> (fil,lin, sizeof(MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE


    /** end of frame for meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE fromline 1697**/

    /* end of frame for routine meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE fromline 1756 */

    /* classy proc frame meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE */
    MeltFrame_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_MODULE_IS_GPL_COMPATIBLE", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7781:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7782:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7782:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7782:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7782;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_module_is_gpl_compatible sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7782:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7782:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7783:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7783:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7783:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7783;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7783:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7783:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7784:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7784:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7784:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7784;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7784:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7784:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7785:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7785:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7785:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7785;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7785:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7785:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7786:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7787:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.CHEAD__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:7791:/ cond");
        /*cond*/
        if (/*_.PAIR_TAIL__V23*/ meltfptr[22]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7792:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "MODULE_IS_GPL_COMPATIBLE should have only one argument"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7793:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7793:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7793:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7793;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_module_is_gpl_compatible chead=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CHEAD__V22*/ meltfptr[21];
                            /*_.MELT_DEBUG_FUN__V25*/
                            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V24*/
                        meltfptr[23] = /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7793:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V25*/
                        meltfptr[24] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V24*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7793:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V24*/
            meltfptr[23] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L8*/
        meltfnum[1] =
            (melt_magic_discr((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21])) == MELTOBMAG_STRING);;
        MELT_LOCATION("warmelt-macro.melt:7795:/ cond");
        /*cond*/
        if (/*_#IS_STRING__L8*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {




                    {
                        MELT_LOCATION("warmelt-macro.melt:7796:/ locexp");
                        /*void*/
                        (void)0;
                    }
                    ;
                    /*clear*/ /*_._IFELSE___V26*/
                    meltfptr[24] = 0 ;
                    /*epilog*/
                }
                ;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:7795:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_A__L9*/
                    meltfnum[0] =
                        melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]), (melt_ptr_t)((/*!CLASS_SEXPR_MACROSTRING*/ meltfrout->tabval[4])));;
                    MELT_LOCATION("warmelt-macro.melt:7798:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L9*/ meltfnum[0]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:7799:/ quasiblock");


                                /*_.SBUF__V29*/
                                meltfptr[28] =
                                    (melt_ptr_t) meltgc_new_strbuf((meltobject_ptr_t)((/*!DISCR_STRBUF*/ meltfrout->tabval[5])), (const char*)0);;
                                MELT_LOCATION("warmelt-macro.melt:7800:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                  (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                            /*_.SCONT__V30*/
                                            meltfptr[29] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.SCONT__V30*/ meltfptr[29] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7801:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                  (melt_ptr_t)((/*!CLASS_LOCATED*/ meltfrout->tabval[6])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                                            /*_.SLOC__V31*/
                                            meltfptr[30] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.SLOC__V31*/ meltfptr[30] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7803:/ cond");
                                /*cond*/
                                if (/*_.SLOC__V31*/ meltfptr[30]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*^compute*/
                                            /*_.LOC__V19*/ meltfptr[18] = /*_.SETQ___V33*/ meltfptr[32] = /*_.SLOC__V31*/ meltfptr[30];;
                                            /*_._IF___V32*/
                                            meltfptr[31] = /*_.SETQ___V33*/ meltfptr[32];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7803:/ clear");
                                            /*clear*/ /*_.SETQ___V33*/
                                            meltfptr[32] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V32*/ meltfptr[31] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                /*citerblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                {
                                    /* start foreach_pair_component_in_list meltcit1__EACHLIST */
                                    for (/*_.CURPAIR__V34*/ meltfptr[32] = melt_list_first( (melt_ptr_t)/*_.SCONT__V30*/ meltfptr[29]);
                                                            melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]) == MELTOBMAG_PAIR;
                                                            /*_.CURPAIR__V34*/ meltfptr[32] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]))
                                        {
                                            /*_.CURARG__V35*/ meltfptr[34] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V34*/ meltfptr[32]);



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7807:/ apply");
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[1];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.CURARG__V35*/ meltfptr[34];
                                                /*_.ADD2OUT__V36*/
                                                meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!ADD2OUT*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.SBUF__V29*/ meltfptr[28]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;
                                        } /* end foreach_pair_component_in_list meltcit1__EACHLIST */
                                    /*_.CURPAIR__V34*/ meltfptr[32] = NULL;
                                    /*_.CURARG__V35*/
                                    meltfptr[34] = NULL;


                                    /*citerepilog*/

                                    MELT_LOCATION("warmelt-macro.melt:7804:/ clear");
                                    /*clear*/ /*_.CURPAIR__V34*/
                                    meltfptr[32] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.CURARG__V35*/
                                    meltfptr[34] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.ADD2OUT__V36*/
                                    meltfptr[35] = 0 ;
                                } /*endciterblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                ;
                                /*_.STRBUF2STRING__V37*/
                                meltfptr[36] =
                                    (meltgc_new_stringdup((meltobject_ptr_t)((/*!DISCR_VERBATIM_STRING*/ meltfrout->tabval[8])), melt_strbuf_str((melt_ptr_t)(/*_.SBUF__V29*/ meltfptr[28]))));;
                                MELT_LOCATION("warmelt-macro.melt:7809:/ compute");
                                /*_.CHEAD__V22*/
                                meltfptr[21] = /*_.SETQ___V38*/ meltfptr[37] = /*_.STRBUF2STRING__V37*/ meltfptr[36];;
                                /*_.LET___V28*/
                                meltfptr[27] = /*_.SETQ___V38*/ meltfptr[37];;

                                MELT_LOCATION("warmelt-macro.melt:7799:/ clear");
                                /*clear*/ /*_.SBUF__V29*/
                                meltfptr[28] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SCONT__V30*/
                                meltfptr[29] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SLOC__V31*/
                                meltfptr[30] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V32*/
                                meltfptr[31] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.STRBUF2STRING__V37*/
                                meltfptr[36] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SETQ___V38*/
                                meltfptr[37] = 0 ;
                                /*_._IFELSE___V27*/
                                meltfptr[23] = /*_.LET___V28*/ meltfptr[27];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7798:/ clear");
                                /*clear*/ /*_.LET___V28*/
                                meltfptr[27] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;
                                /*_#IS_A__L10*/
                                meltfnum[9] =
                                    melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[9])));;
                                MELT_LOCATION("warmelt-macro.melt:7811:/ cond");
                                /*cond*/
                                if (/*_#IS_A__L10*/ meltfnum[9]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            MELT_LOCATION("warmelt-macro.melt:7812:/ cond");
                                            /*cond*/
                                            if (
                                                /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]),
                                                                              (melt_ptr_t)((/*!CLASS_NAMED*/ meltfrout->tabval[10])))
                                            ) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*^getslot*/
                                                    {
                                                        melt_ptr_t slot=NULL, obj=NULL;
                                                        obj = (melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21]) /*=obj*/;
                                                        melt_object_get_field(slot,obj, 1, "NAMED_NAME");
                                                        /*_.NAMED_NAME__V40*/
                                                        meltfptr[29] = slot;
                                                    };
                                                    ;
                                                }
                                            else    /*^cond.else*/
                                                {

                                                    /*_.NAMED_NAME__V40*/ meltfptr[29] =  /*reallynil*/ NULL ;;
                                                }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7812:/ compute");
                                            /*_.CHEAD__V22*/
                                            meltfptr[21] = /*_.SETQ___V41*/ meltfptr[30] = /*_.NAMED_NAME__V40*/ meltfptr[29];;

#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:7813:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#IS_STRING__L11*/
                                                meltfnum[10] =
                                                    (melt_magic_discr((melt_ptr_t)(/*_.CHEAD__V22*/ meltfptr[21])) == MELTOBMAG_STRING);;
                                                MELT_LOCATION("warmelt-macro.melt:7813:/ cond");
                                                /*cond*/
                                                if (/*_#IS_STRING__L11*/ meltfnum[10]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*_._IFELSE___V43*/ meltfptr[36] = (/*nil*/NULL);;
                                                    }
                                                else
                                                    {
                                                        MELT_LOCATION("warmelt-macro.melt:7813:/ cond.else");

                                                        /*^block*/
                                                        /*anyblock*/
                                                        {


                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            /*^apply*/
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[4];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_cstring =  "check symbol name";
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 7813;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.CHEAD__V22*/ meltfptr[21];
                                                                /*_.MELT_ASSERT_FAILURE_FUN__V44*/
                                                                meltfptr[37] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IFELSE___V43*/
                                                            meltfptr[36] = /*_.MELT_ASSERT_FAILURE_FUN__V44*/ meltfptr[37];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:7813:/ clear");
                                                            /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V44*/
                                                            meltfptr[37] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                ;
                                                /*_.IFCPP___V42*/
                                                meltfptr[31] = /*_._IFELSE___V43*/ meltfptr[36];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-macro.melt:7813:/ clear");
                                                /*clear*/ /*_#IS_STRING__L11*/
                                                meltfnum[10] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IFELSE___V43*/
                                                meltfptr[36] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*_.IFCPP___V42*/ meltfptr[31] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7811:/ quasiblock");


                                            /*_.PROGN___V45*/
                                            meltfptr[27] = /*_.IFCPP___V42*/ meltfptr[31];;
                                            /*^compute*/
                                            /*_._IFELSE___V39*/
                                            meltfptr[28] = /*_.PROGN___V45*/ meltfptr[27];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7811:/ clear");
                                            /*clear*/ /*_.NAMED_NAME__V40*/
                                            meltfptr[29] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.SETQ___V41*/
                                            meltfptr[30] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.IFCPP___V42*/
                                            meltfptr[31] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V45*/
                                            meltfptr[27] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*^block*/
                                        /*anyblock*/
                                        {


                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7815:/ locexp");
                                                /* error_plain */
                                                melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "MODULE_IS_GPL_COMPATIBLE without string or macrostring"), (melt_ptr_t)0);
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:7816:/ quasiblock");


                                            /*_._RETVAL___V1*/
                                            meltfptr[0] =  /*reallynil*/ NULL ;;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:7816:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/
                                            goto meltlabend_rout ;
                                            MELT_LOCATION("warmelt-macro.melt:7814:/ quasiblock");


                                            /*_.PROGN___V47*/
                                            meltfptr[36] = /*_.RETURN___V46*/ meltfptr[37];;
                                            /*^compute*/
                                            /*_._IFELSE___V39*/
                                            meltfptr[28] = /*_.PROGN___V47*/ meltfptr[36];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:7811:/ clear");
                                            /*clear*/ /*_.RETURN___V46*/
                                            meltfptr[37] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V47*/
                                            meltfptr[36] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*_._IFELSE___V27*/
                                meltfptr[23] = /*_._IFELSE___V39*/ meltfptr[28];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7798:/ clear");
                                /*clear*/ /*_#IS_A__L10*/
                                meltfnum[9] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IFELSE___V39*/
                                meltfptr[28] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V26*/
                    meltfptr[24] = /*_._IFELSE___V27*/ meltfptr[23];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7795:/ clear");
                    /*clear*/ /*_#IS_A__L9*/
                    meltfnum[0] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V27*/
                    meltfptr[23] = 0 ;
                }
                ;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7819:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_MODULE_IS_GPL_COMPATIBLE*/ meltfrout->tabval[11])), (3), "CLASS_SOURCE_MODULE_IS_GPL_COMPATIBLE");
            /*_.INST__V50*/
            meltfptr[31] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V50*/ meltfptr[31])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V50*/ meltfptr[31]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SC_CODESTRING", melt_magic_discr((melt_ptr_t)(/*_.INST__V50*/ meltfptr[31])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V50*/ meltfptr[31]), (2), (/*_.CHEAD__V22*/ meltfptr[21]), "SC_CODESTRING");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V50*/ meltfptr[31], "newly made instance");
        ;
        /*_.SCH__V49*/
        meltfptr[30] = /*_.INST__V50*/ meltfptr[31];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7822:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L12*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7822:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L12*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L13*/ meltfnum[9] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7822:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L13*/ meltfnum[9];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7822;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_module_is_gpl_compatible gives sch=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SCH__V49*/ meltfptr[30];
                            /*_.MELT_DEBUG_FUN__V52*/
                            meltfptr[37] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V51*/
                        meltfptr[27] = /*_.MELT_DEBUG_FUN__V52*/ meltfptr[37];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7822:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L13*/
                        meltfnum[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V52*/
                        meltfptr[37] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V51*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7822:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L12*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V51*/
            meltfptr[27] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7823:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SCH__V49*/ meltfptr[30];;

        {
            MELT_LOCATION("warmelt-macro.melt:7823:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V48*/
        meltfptr[29] = /*_.RETURN___V53*/ meltfptr[36];;

        MELT_LOCATION("warmelt-macro.melt:7819:/ clear");
        /*clear*/ /*_.SCH__V49*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V53*/
        meltfptr[36] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V48*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:7786:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CHEAD__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L8*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V26*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V48*/
        meltfptr[29] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7781:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7781:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_MODULE_IS_GPL_COMPATIBLE", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_139_WARMELTmiMACRO_MEXPAND_MODULE_IS_GPL_COMPATIBLE*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG fromline 1752 */

    /** start of frame for meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG// fromline 1568
        : public Melt_CallFrameWithValues<50>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[17];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<50> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG), clos) {};
        MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG() //the constructor fromline 1642
            : Melt_CallFrameWithValues<50> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<50> (fil,lin, sizeof(MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG)) {};
        MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<50> (fil,lin, sizeof(MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG


    /** end of frame for meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG fromline 1697**/

    /* end of frame for routine meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG fromline 1756 */

    /* classy proc frame meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG */
    MeltFrame_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7836:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7837:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7837:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7837:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7837;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_use_package_from_pkg_config sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7837:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7837:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7838:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7838:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7838:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7838;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7838:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7838:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7839:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:7839:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7839:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7839;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7839:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7839:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7840:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7840:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7840:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7840;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7840:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7840:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7841:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7842:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7843:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XARGTUP__V20*/
            meltfptr[19] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_RESTLIST_AS_TUPLE*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.CMDBUF__V21*/
        meltfptr[20] =
            (melt_ptr_t) meltgc_new_strbuf((meltobject_ptr_t)((/*!DISCR_STRBUF*/ meltfrout->tabval[5])), (const char*)0);;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7846:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7846:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7846:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7846;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_use_package_from_pkg_config xargtup=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XARGTUP__V20*/ meltfptr[19];
                            /*_.MELT_DEBUG_FUN__V23*/
                            meltfptr[22] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V22*/
                        meltfptr[21] = /*_.MELT_DEBUG_FUN__V23*/ meltfptr[22];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7846:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V23*/
                        meltfptr[22] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V22*/ meltfptr[21] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7846:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V22*/
            meltfptr[21] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7847:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_cstring =  "pkg-config --exists";
            /*_.ADD2OUT__V24*/
            meltfptr[22] =  melt_apply ((meltclosure_ptr_t)((/*!ADD2OUT*/ meltfrout->tabval[6])), (melt_ptr_t)(/*_.CMDBUF__V21*/ meltfptr[20]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*citerblock FOREACH_IN_MULTIPLE*/
        {
            /* start foreach_in_multiple meltcit1__EACHTUP */
            long  meltcit1__EACHTUP_ln = melt_multiple_length((melt_ptr_t)/*_.XARGTUP__V20*/ meltfptr[19]);
            for (/*_#PKGIX__L8*/ meltfnum[1] = 0;
                                 (/*_#PKGIX__L8*/ meltfnum[1] >= 0) && (/*_#PKGIX__L8*/ meltfnum[1] <  meltcit1__EACHTUP_ln);
                                 /*_#PKGIX__L8*/ meltfnum[1]++)
                {
                    /*_.CURPKGNAME__V25*/ meltfptr[21] = melt_multiple_nth((melt_ptr_t)(/*_.XARGTUP__V20*/ meltfptr[19]),  /*_#PKGIX__L8*/ meltfnum[1]);




                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_STRING__L9*/
                    meltfnum[0] =
                        (melt_magic_discr((melt_ptr_t)(/*_.CURPKGNAME__V25*/ meltfptr[21])) == MELTOBMAG_STRING);;
                    MELT_LOCATION("warmelt-macro.melt:7851:/ cond");
                    /*cond*/
                    if (/*_#IS_STRING__L9*/ meltfnum[0]) /*then*/
                        {
                            /*^cond.then*/
                            /*_._IFELSE___V26*/ meltfptr[25] = (/*nil*/NULL);;
                        }
                    else
                        {
                            MELT_LOCATION("warmelt-macro.melt:7851:/ cond.else");

                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:7853:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "invalid argument to (USE_PACKAGE_FROM_PKG_CONFIG <pkg-name>...), expecting\
 string"), (melt_ptr_t)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7854:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:7854:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:7851:/ quasiblock");


                                /*_.PROGN___V28*/
                                meltfptr[27] = /*_.RETURN___V27*/ meltfptr[26];;
                                /*^compute*/
                                /*_._IFELSE___V26*/
                                meltfptr[25] = /*_.PROGN___V28*/ meltfptr[27];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7851:/ clear");
                                /*clear*/ /*_.RETURN___V27*/
                                meltfptr[26] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V28*/
                                meltfptr[27] = 0 ;
                            }
                            ;
                        }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7856:/ quasiblock");


                    /*_#GOODPKGNAME__L10*/
                    meltfnum[9] = 1;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7858:/ locexp");
                        /* mexpand_use_package_from_pkg_config CHECKPKGNAME_CHK__1 */
                        {
                            const char* pkgs_CHECKPKGNAME_CHK__1
                                = melt_string_str ((melt_ptr_t) /*_.CURPKGNAME__V25*/ meltfptr[21]) ;
                            if (!pkgs_CHECKPKGNAME_CHK__1)
                                /*_#GOODPKGNAME__L10*/ meltfnum[9] = 0 ;
                            else
                                {
                                    const char* pc = NULL;
                                    for (pc = pkgs_CHECKPKGNAME_CHK__1   ;
                                            *pc && /*_#GOODPKGNAME__L10*/ meltfnum[9]   ;
                                            pc++)
                                        {
                                            if (ISALNUM(*pc) || *pc == '+' || *pc == '-' || *pc == '_' || *pc == '.' || *pc == '@')
                                                continue ;
                                            else /*_#GOODPKGNAME__L10*/ meltfnum[9] = 0L ;
                                        }
                                } ;
                        } /* end mexpand_use_package_from_pkg_config CHECKPKGNAME_CHK__1 */ ;
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7875:/ cond");
                    /*cond*/
                    if (/*_#GOODPKGNAME__L10*/ meltfnum[9]) /*then*/
                        {
                            /*^cond.then*/
                            /*_._IFELSE___V30*/ meltfptr[27] = (/*nil*/NULL);;
                        }
                    else
                        {
                            MELT_LOCATION("warmelt-macro.melt:7875:/ cond.else");

                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7876:/ apply");
                                /*apply*/
                                {
                                    union meltparam_un argtab[2];
                                    memset(&argtab, 0, sizeof(argtab));
                                    /*^apply.arg*/
                                    argtab[0].meltbp_cstring =  "invalid package name $1 for (USE_PACKAGE_FROM_PKG_CONFIG ...)";
                                    /*^apply.arg*/
                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.CURPKGNAME__V25*/ meltfptr[21];
                                    /*_.ERROR_AT__V31*/
                                    meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:7877:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:7877:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:7875:/ quasiblock");


                                /*_.PROGN___V33*/
                                meltfptr[32] = /*_.RETURN___V32*/ meltfptr[31];;
                                /*^compute*/
                                /*_._IFELSE___V30*/
                                meltfptr[27] = /*_.PROGN___V33*/ meltfptr[32];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:7875:/ clear");
                                /*clear*/ /*_.ERROR_AT__V31*/
                                meltfptr[30] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.RETURN___V32*/
                                meltfptr[31] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V33*/
                                meltfptr[32] = 0 ;
                            }
                            ;
                        }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7878:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[2];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  " ";
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.CURPKGNAME__V25*/ meltfptr[21];
                        /*_.ADD2OUT__V34*/
                        meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!ADD2OUT*/ meltfrout->tabval[6])), (melt_ptr_t)(/*_.CMDBUF__V21*/ meltfptr[20]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*_.LET___V29*/
                    meltfptr[26] = /*_.ADD2OUT__V34*/ meltfptr[30];;

                    MELT_LOCATION("warmelt-macro.melt:7856:/ clear");
                    /*clear*/ /*_#GOODPKGNAME__L10*/
                    meltfnum[9] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V30*/
                    meltfptr[27] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.ADD2OUT__V34*/
                    meltfptr[30] = 0 ;
                    if (/*_#PKGIX__L8*/ meltfnum[1]<0) break;
                } /* end  foreach_in_multiple meltcit1__EACHTUP */

            /*citerepilog*/

            MELT_LOCATION("warmelt-macro.melt:7848:/ clear");
            /*clear*/ /*_.CURPKGNAME__V25*/
            meltfptr[21] = 0 ;
            /*^clear*/
            /*clear*/ /*_#PKGIX__L8*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_#IS_STRING__L9*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V26*/
            meltfptr[25] = 0 ;
            /*^clear*/
            /*clear*/ /*_.LET___V29*/
            meltfptr[26] = 0 ;
        } /*endciterblock FOREACH_IN_MULTIPLE*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7882:/ quasiblock");


        /*_.CMDSTR__V36*/
        meltfptr[32] =
            (meltgc_new_stringdup((meltobject_ptr_t)((/*!DISCR_STRING*/ meltfrout->tabval[8])), melt_strbuf_str((melt_ptr_t)(/*_.CMDBUF__V21*/ meltfptr[20]))));;
        /*^compute*/
        /*_#FAILCMD__L11*/
        meltfnum[9] = 0;;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7885:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L12*/
            meltfnum[11] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7885:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L12*/ meltfnum[11]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7885:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7885;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_use_package_from_pkg_config cmdstr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CMDSTR__V36*/ meltfptr[32];
                            /*_.MELT_DEBUG_FUN__V38*/
                            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V37*/
                        meltfptr[27] = /*_.MELT_DEBUG_FUN__V38*/ meltfptr[30];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7885:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L13*/
                        meltfnum[12] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V38*/
                        meltfptr[30] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V37*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7885:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L12*/
            meltfnum[11] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V37*/
            meltfptr[27] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        {
            MELT_LOCATION("warmelt-macro.melt:7886:/ locexp");
            /* mexpand_use_package_from_pkg_config TESTPKGCONFIG_CHK__1 */
            {
                const char* cmd_TESTPKGCONFIG_CHK__1 =
                    melt_string_str ((melt_ptr_t) /*_.CMDSTR__V36*/ meltfptr[32]) ;
                fflush (NULL)	;
                /*_#FAILCMD__L11*/
                meltfnum[9] = (cmd_TESTPKGCONFIG_CHK__1
                               ? system (cmd_TESTPKGCONFIG_CHK__1)
                               : 1000) ;
            } /* end mexpand_use_package_from_pkg_config TESTPKGCONFIG_CHK__1 */
            ;
        }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7895:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L14*/
            meltfnum[12] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7895:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L14*/ meltfnum[12]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L15*/ meltfnum[11] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7895:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L15*/ meltfnum[11];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7895;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_use_package_from_pkg_config failcmd=";
                            /*^apply.arg*/
                            argtab[4].meltbp_long = /*_#FAILCMD__L11*/ meltfnum[9];
                            /*_.MELT_DEBUG_FUN__V40*/
                            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V39*/
                        meltfptr[30] = /*_.MELT_DEBUG_FUN__V40*/ meltfptr[27];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7895:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L15*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V40*/
                        meltfptr[27] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V39*/ meltfptr[30] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7895:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L14*/
            meltfnum[12] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V39*/
            meltfptr[30] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7896:/ cond");
        /*cond*/
        if (/*_#FAILCMD__L11*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7897:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[2];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "unexistent package names for USE_PACKAGE_FROM_PKG_CONFIG $1";
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.CMDSTR__V36*/ meltfptr[32];
                        /*_.ERROR_AT__V42*/
                        meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7898:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7898:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7896:/ quasiblock");


                    /*_.PROGN___V44*/
                    meltfptr[43] = /*_.RETURN___V43*/ meltfptr[42];;
                    /*^compute*/
                    /*_._IF___V41*/
                    meltfptr[27] = /*_.PROGN___V44*/ meltfptr[43];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7896:/ clear");
                    /*clear*/ /*_.ERROR_AT__V42*/
                    meltfptr[30] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V43*/
                    meltfptr[42] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V44*/
                    meltfptr[43] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V41*/ meltfptr[27] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.LET___V35*/
        meltfptr[31] = /*_._IF___V41*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:7882:/ clear");
        /*clear*/ /*_.CMDSTR__V36*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_#FAILCMD__L11*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V41*/
        meltfptr[27] = 0 ;
        MELT_LOCATION("warmelt-macro.melt:7901:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_USE_PACKAGE_FROM_PKG_CONFIG*/ meltfrout->tabval[9])), (3), "CLASS_SOURCE_USE_PACKAGE_FROM_PKG_CONFIG");
            /*_.INST__V47*/
            meltfptr[43] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V47*/ meltfptr[43])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V47*/ meltfptr[43]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUSEPACKAGE_PKGTUPLE", melt_magic_discr((melt_ptr_t)(/*_.INST__V47*/ meltfptr[43])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V47*/ meltfptr[43]), (2), (/*_.XARGTUP__V20*/ meltfptr[19]), "SUSEPACKAGE_PKGTUPLE");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V47*/ meltfptr[43], "newly made instance");
        ;
        /*_.SUP__V46*/
        meltfptr[42] = /*_.INST__V47*/ meltfptr[43];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7904:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L16*/
            meltfnum[11] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7904:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L16*/ meltfnum[11]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L17*/ meltfnum[12] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7904:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L17*/ meltfnum[12];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7904;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_use_package_from_pkg_config gives sup=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SUP__V46*/ meltfptr[42];
                            /*_.MELT_DEBUG_FUN__V49*/
                            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V48*/
                        meltfptr[32] = /*_.MELT_DEBUG_FUN__V49*/ meltfptr[27];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7904:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L17*/
                        meltfnum[12] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V49*/
                        meltfptr[27] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V48*/ meltfptr[32] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7904:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L16*/
            meltfnum[11] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V48*/
            meltfptr[32] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7905:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SUP__V46*/ meltfptr[42];;

        {
            MELT_LOCATION("warmelt-macro.melt:7905:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V45*/
        meltfptr[30] = /*_.RETURN___V50*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:7901:/ clear");
        /*clear*/ /*_.SUP__V46*/
        meltfptr[42] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V50*/
        meltfptr[27] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V45*/ meltfptr[30];;

        MELT_LOCATION("warmelt-macro.melt:7841:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XARGTUP__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CMDBUF__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ADD2OUT__V24*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V35*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V45*/
        meltfptr[30] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7836:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7836:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_140_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN fromline 1752 */

    /** start of frame for meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN// fromline 1568
        : public Melt_CallFrameWithValues<19>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[3];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<19> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN), clos) {};
        MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN() //the constructor fromline 1642
            : Melt_CallFrameWithValues<19> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<19> (fil,lin, sizeof(MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN)) {};
        MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<19> (fil,lin, sizeof(MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN


    /** end of frame for meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN fromline 1697**/

    /* end of frame for routine meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN fromline 1756 */

    /* classy proc frame meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN */
    MeltFrame_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("PAIRLIST_TO_RETURN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7926:/ getarg");
    /*_.PAIR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.LOC__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.LOC__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V5*/ meltfptr[4])) != NULL);


    /*getarg#4*/
    /*^getarg*/
    if (meltxargdescr_[3] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V6*/
    meltfptr[5] = (meltxargtab_[3].meltbp_aptr) ? (*(meltxargtab_[3].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V6*/ meltfptr[5])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7927:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V4*/ meltfptr[3]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:7927:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V8*/ meltfptr[7] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7927:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7927;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V9*/
                            meltfptr[8] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V8*/
                        meltfptr[7] = /*_.MELT_ASSERT_FAILURE_FUN__V9*/ meltfptr[8];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7927:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V9*/
                        meltfptr[8] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V7*/
            meltfptr[6] = /*_._IFELSE___V8*/ meltfptr[7];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7927:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V8*/
            meltfptr[7] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V7*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7928:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L2*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V5*/ meltfptr[4])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:7928:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V11*/ meltfptr[7] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7928:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7928;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V12*/
                            meltfptr[11] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V11*/
                        meltfptr[7] = /*_.MELT_ASSERT_FAILURE_FUN__V12*/ meltfptr[11];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7928:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V12*/
                        meltfptr[11] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V10*/
            meltfptr[8] = /*_._IFELSE___V11*/ meltfptr[7];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7928:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V11*/
            meltfptr[7] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V10*/ meltfptr[8] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7929:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L3*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V6*/ meltfptr[5])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7929:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V14*/ meltfptr[7] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7929:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7929;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V6*/ meltfptr[5];
                            /*_.MELT_ASSERT_FAILURE_FUN__V15*/
                            meltfptr[14] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V14*/
                        meltfptr[7] = /*_.MELT_ASSERT_FAILURE_FUN__V15*/ meltfptr[14];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7929:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V15*/
                        meltfptr[14] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V13*/
            meltfptr[11] = /*_._IFELSE___V14*/ meltfptr[7];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7929:/ clear");
            /*clear*/ /*_#IS_OBJECT__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V14*/
            meltfptr[7] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V13*/ meltfptr[11] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7930:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V5*/ meltfptr[4];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V6*/ meltfptr[5];
            /*_.BODYTUP__V17*/
            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[2])), (melt_ptr_t)(/*_.PAIR__V2*/ meltfptr[1]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7932:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_RETURN*/ meltfrout->tabval[3])), (3), "CLASS_SOURCE_RETURN");
            /*_.INST__V19*/
            meltfptr[18] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V19*/ meltfptr[18])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V19*/ meltfptr[18]), (1), (/*_.LOC__V3*/ meltfptr[2]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SARGOP_ARGS", melt_magic_discr((melt_ptr_t)(/*_.INST__V19*/ meltfptr[18])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V19*/ meltfptr[18]), (2), (/*_.BODYTUP__V17*/ meltfptr[7]), "SARGOP_ARGS");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V19*/ meltfptr[18], "newly made instance");
        ;
        /*_.INST___V18*/
        meltfptr[17] = /*_.INST__V19*/ meltfptr[18];;
        /*^compute*/
        /*_.LET___V16*/
        meltfptr[14] = /*_.INST___V18*/ meltfptr[17];;

        MELT_LOCATION("warmelt-macro.melt:7930:/ clear");
        /*clear*/ /*_.BODYTUP__V17*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INST___V18*/
        meltfptr[17] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7926:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[14];;

        {
            MELT_LOCATION("warmelt-macro.melt:7926:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V7*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V10*/
        meltfptr[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V13*/
        meltfptr[11] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[14] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("PAIRLIST_TO_RETURN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_141_WARMELTmiMACRO_PAIRLIST_TO_RETURN*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN fromline 1752 */

    /** start of frame for meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN// fromline 1568
        : public Melt_CallFrameWithValues<21>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[5];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<21> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN), clos) {};
        MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN() //the constructor fromline 1642
            : Melt_CallFrameWithValues<21> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<21> (fil,lin, sizeof(MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN)) {};
        MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<21> (fil,lin, sizeof(MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN


    /** end of frame for meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN fromline 1697**/

    /* end of frame for routine meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN fromline 1756 */

    /* classy proc frame meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN */
    MeltFrame_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_PROGN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7939:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7940:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7940:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7940:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7940;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_progn sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7940:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7940:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7941:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7941:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7941:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7941;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7941:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7941:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7942:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.SLOC__V12*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7944:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.SEXP_CONTENTS__V13*/
            meltfptr[12] = slot;
        };
        ;
        /*_.LIST_FIRST__V14*/
        meltfptr[13] =
            (melt_list_first((melt_ptr_t)(/*_.SEXP_CONTENTS__V13*/ meltfptr[12])));;
        /*^compute*/
        /*_.PAIRS__V15*/
        meltfptr[14] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V14*/ meltfptr[13])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_PAIR__L4*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.PAIRS__V15*/ meltfptr[14])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L5*/
        meltfnum[1] =
            (!(/*_#IS_PAIR__L4*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:7946:/ cond");
        /*cond*/
        if (/*_#NOT__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:7948:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.SLOC__V12*/ meltfptr[5]), ( "empty PROGN"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:7949:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:7949:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:7947:/ quasiblock");


                    /*_.PROGN___V18*/
                    meltfptr[17] = /*_.RETURN___V17*/ meltfptr[16];;
                    /*^compute*/
                    /*_._IF___V16*/
                    meltfptr[15] = /*_.PROGN___V18*/ meltfptr[17];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:7946:/ clear");
                    /*clear*/ /*_.RETURN___V17*/
                    meltfptr[16] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V18*/
                    meltfptr[17] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V16*/ meltfptr[15] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:7950:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7951:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[4];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.SLOC__V12*/ meltfptr[5];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.PROGR__V20*/
            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_PROGN*/ meltfrout->tabval[3])), (melt_ptr_t)(/*_.PAIRS__V15*/ meltfptr[14]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7956:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.PROGR__V20*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:7956:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V19*/
        meltfptr[16] = /*_.RETURN___V21*/ meltfptr[20];;

        MELT_LOCATION("warmelt-macro.melt:7950:/ clear");
        /*clear*/ /*_.PROGR__V20*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V21*/
        meltfptr[20] = 0 ;
        /*_.LET___V11*/
        meltfptr[9] = /*_.LET___V19*/ meltfptr[16];;

        MELT_LOCATION("warmelt-macro.melt:7942:/ clear");
        /*clear*/ /*_.SLOC__V12*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SEXP_CONTENTS__V13*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V14*/
        meltfptr[13] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIRS__V15*/
        meltfptr[14] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L4*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V16*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[16] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7939:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V11*/ meltfptr[9];;

        {
            MELT_LOCATION("warmelt-macro.melt:7939:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V11*/
        meltfptr[9] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_PROGN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_142_WARMELTmiMACRO_MEXPAND_PROGN*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN fromline 1752 */

    /** start of frame for meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN// fromline 1568
        : public Melt_CallFrameWithValues<23>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[5];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<23> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN), clos) {};
        MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN() //the constructor fromline 1642
            : Melt_CallFrameWithValues<23> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<23> (fil,lin, sizeof(MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN)) {};
        MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<23> (fil,lin, sizeof(MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN


    /** end of frame for meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN fromline 1697**/

    /* end of frame for routine meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN fromline 1756 */

    /* classy proc frame meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN */
    MeltFrame_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_RETURN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7965:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7966:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7966:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7966:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7966;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_return sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7966:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7966:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7967:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7967:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7967:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7967;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7967:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7967:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7968:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:7968:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7968:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7968;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7968:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7968:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7969:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7969:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7969:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7969;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7969:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7969:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7970:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:7971:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.SEXP_CONTENTS__V18*/
            meltfptr[5] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.SEXP_CONTENTS__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.PAIR_TAIL__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;
        MELT_LOCATION("warmelt-macro.melt:7972:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOCA_LOCATION__V21*/
            meltfptr[20] = slot;
        };
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7971:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[4];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOCA_LOCATION__V21*/ meltfptr[20];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.RETR__V22*/
            meltfptr[21] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_RETURN*/ meltfrout->tabval[3])), (melt_ptr_t)(/*_.PAIR_TAIL__V20*/ meltfptr[19]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7977:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RETR__V22*/ meltfptr[21];;

        {
            MELT_LOCATION("warmelt-macro.melt:7977:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.RETURN___V23*/ meltfptr[22];;

        MELT_LOCATION("warmelt-macro.melt:7970:/ clear");
        /*clear*/ /*_.SEXP_CONTENTS__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOCA_LOCATION__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETR__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V23*/
        meltfptr[22] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7965:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7965:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_RETURN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_143_WARMELTmiMACRO_MEXPAND_RETURN*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER fromline 1752 */

    /** start of frame for meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER// fromline 1568
        : public Melt_CallFrameWithValues<38>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[6];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<38> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER), clos) {};
        MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER() //the constructor fromline 1642
            : Melt_CallFrameWithValues<38> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<38> (fil,lin, sizeof(MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER)) {};
        MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<38> (fil,lin, sizeof(MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER


    /** end of frame for meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER fromline 1697**/

    /* end of frame for routine meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER fromline 1756 */

    /* classy proc frame meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER */
    MeltFrame_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_FOREVER", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:7988:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7989:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:7989:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:7989:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7989;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_forever sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7989:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:7989:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7990:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:7990:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7990:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7990;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7990:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7990:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7991:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:7991:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7991:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7991;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7991:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7991:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:7992:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:7992:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:7992:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 7992;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:7992:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:7992:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:7993:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:7994:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.SLABNAM__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7997:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XLABNAM__V23*/
            meltfptr[22] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SLABNAM__V22*/ meltfptr[21]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7998:/ apply");
        /*apply*/
        {
            /*_.NEWENV__V24*/ meltfptr[23] =  melt_apply ((meltclosure_ptr_t)((/*!FRESH_ENV*/ meltfrout->tabval[3])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L6*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.XLABNAM__V23*/ meltfptr[22]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[4])));;
        MELT_LOCATION("warmelt-macro.melt:8000:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L6*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8002:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "missing label in FOREVER"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8003:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8003:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8001:/ quasiblock");


                    /*_.PROGN___V27*/
                    meltfptr[26] = /*_.RETURN___V26*/ meltfptr[25];;
                    /*^compute*/
                    /*_._IF___V25*/
                    meltfptr[24] = /*_.PROGN___V27*/ meltfptr[26];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8000:/ clear");
                    /*clear*/ /*_.RETURN___V26*/
                    meltfptr[25] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V27*/
                    meltfptr[26] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V25*/ meltfptr[24] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V28*/
        meltfptr[25] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:8004:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V29*/ meltfptr[26] = /*_.PAIR_TAIL__V28*/ meltfptr[25];;
        MELT_LOCATION("warmelt-macro.melt:8005:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_LABEL_BINDING*/ meltfrout->tabval[5])), (4), "CLASS_LABEL_BINDING");
            /*_.INST__V32*/
            meltfptr[31] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @BINDER", melt_magic_discr((melt_ptr_t)(/*_.INST__V32*/ meltfptr[31])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V32*/ meltfptr[31]), (0), (/*_.XLABNAM__V23*/ meltfptr[22]), "BINDER");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LABIND_LOC", melt_magic_discr((melt_ptr_t)(/*_.INST__V32*/ meltfptr[31])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V32*/ meltfptr[31]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LABIND_LOC");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V32*/ meltfptr[31], "newly made instance");
        ;
        /*_.LABIND__V31*/
        meltfptr[30] = /*_.INST__V32*/ meltfptr[31];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8008:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LABIND__V31*/ meltfptr[30];
            /*_.PUT_ENV__V33*/
            meltfptr[32] =  melt_apply ((meltclosure_ptr_t)((/*!PUT_ENV*/ meltfrout->tabval[6])), (melt_ptr_t)(/*_.NEWENV__V24*/ meltfptr[23]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:8009:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V24*/ meltfptr[23];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.BODYTUP__V35*/
            meltfptr[34] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8011:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_FOREVER*/ meltfrout->tabval[8])), (4), "CLASS_SOURCE_FOREVER");
            /*_.INST__V37*/
            meltfptr[36] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V37*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V37*/ meltfptr[36]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLABEL_BIND", melt_magic_discr((melt_ptr_t)(/*_.INST__V37*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V37*/ meltfptr[36]), (2), (/*_.LABIND__V31*/ meltfptr[30]), "SLABEL_BIND");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SFRV_BODY", melt_magic_discr((melt_ptr_t)(/*_.INST__V37*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V37*/ meltfptr[36]), (3), (/*_.BODYTUP__V35*/ meltfptr[34]), "SFRV_BODY");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V37*/ meltfptr[36], "newly made instance");
        ;
        /*_.FORR__V36*/
        meltfptr[35] = /*_.INST__V37*/ meltfptr[36];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8016:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.FORR__V36*/ meltfptr[35];;

        {
            MELT_LOCATION("warmelt-macro.melt:8016:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V34*/
        meltfptr[33] = /*_.RETURN___V38*/ meltfptr[37];;

        MELT_LOCATION("warmelt-macro.melt:8009:/ clear");
        /*clear*/ /*_.BODYTUP__V35*/
        meltfptr[34] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FORR__V36*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V38*/
        meltfptr[37] = 0 ;
        /*_.LET___V30*/
        meltfptr[29] = /*_.LET___V34*/ meltfptr[33];;

        MELT_LOCATION("warmelt-macro.melt:8005:/ clear");
        /*clear*/ /*_.LABIND__V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PUT_ENV__V33*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V34*/
        meltfptr[33] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V30*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:7993:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SLABNAM__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XLABNAM__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.NEWENV__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V28*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V29*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V30*/
        meltfptr[29] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:7988:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:7988:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_FOREVER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_144_WARMELTmiMACRO_MEXPAND_FOREVER*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT fromline 1752 */

    /** start of frame for meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT// fromline 1568
        : public Melt_CallFrameWithValues<41>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[7];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<41> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT), clos) {};
        MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT() //the constructor fromline 1642
            : Melt_CallFrameWithValues<41> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<41> (fil,lin, sizeof(MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT)) {};
        MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<41> (fil,lin, sizeof(MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT


    /** end of frame for meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT fromline 1697**/

    /* end of frame for routine meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT fromline 1756 */

    /* classy proc frame meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT */
    MeltFrame_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_EXIT", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:8028:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8029:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8029:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8029:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8029;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_exit sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8029:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8029:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8030:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:8030:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8030:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8030;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8030:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8030:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8031:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:8031:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8031:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8031;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8031:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8031:/ clear");
            /*clear*/ /*_#IS_OBJECT__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8032:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:8032:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8032:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8032;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8032:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8032:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:8033:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:8034:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.SLABNAM__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8037:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XLABNAM__V23*/
            meltfptr[22] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SLABNAM__V22*/ meltfptr[21]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8038:/ apply");
        /*apply*/
        {
            /*_.NEWENV__V24*/ meltfptr[23] =  melt_apply ((meltclosure_ptr_t)((/*!FRESH_ENV*/ meltfrout->tabval[3])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L6*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.XLABNAM__V23*/ meltfptr[22]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[4])));;
        MELT_LOCATION("warmelt-macro.melt:8040:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L6*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8042:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "missing label in EXIT"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8043:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8043:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8041:/ quasiblock");


                    /*_.PROGN___V27*/
                    meltfptr[26] = /*_.RETURN___V26*/ meltfptr[25];;
                    /*^compute*/
                    /*_._IF___V25*/
                    meltfptr[24] = /*_.PROGN___V27*/ meltfptr[26];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8040:/ clear");
                    /*clear*/ /*_.RETURN___V26*/
                    meltfptr[25] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V27*/
                    meltfptr[26] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V25*/ meltfptr[24] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V28*/
        meltfptr[25] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:8044:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V29*/ meltfptr[26] = /*_.PAIR_TAIL__V28*/ meltfptr[25];;
        MELT_LOCATION("warmelt-macro.melt:8045:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.XLABNAM__V23*/ meltfptr[22];
            /*_.LABIND__V31*/
            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!FIND_ENV*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L7*/
        meltfnum[1] =
            !melt_is_instance_of((melt_ptr_t)(/*_.LABIND__V31*/ meltfptr[30]), (melt_ptr_t)((/*!CLASS_LABEL_BINDING*/ meltfrout->tabval[6])));;
        MELT_LOCATION("warmelt-macro.melt:8046:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L7*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:8048:/ getslot");
                    {
                        melt_ptr_t slot=NULL, obj=NULL;
                        obj = (melt_ptr_t)(/*_.XLABNAM__V23*/ meltfptr[22]) /*=obj*/;
                        melt_object_get_field(slot,obj, 1, "NAMED_NAME");
                        /*_.NAMED_NAME__V33*/
                        meltfptr[32] = slot;
                    };
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8047:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[2];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "bad label in EXIT $1";
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.NAMED_NAME__V33*/ meltfptr[32];
                        /*_.ERROR_AT__V34*/
                        meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8049:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8049:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8046:/ quasiblock");


                    /*_.PROGN___V36*/
                    meltfptr[35] = /*_.RETURN___V35*/ meltfptr[34];;
                    /*^compute*/
                    /*_._IF___V32*/
                    meltfptr[31] = /*_.PROGN___V36*/ meltfptr[35];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8046:/ clear");
                    /*clear*/ /*_.NAMED_NAME__V33*/
                    meltfptr[32] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.ERROR_AT__V34*/
                    meltfptr[33] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V35*/
                    meltfptr[34] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V36*/
                    meltfptr[35] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V32*/ meltfptr[31] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8050:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V24*/ meltfptr[23];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.BODYTUP__V38*/
            meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[8])), (melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8052:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_EXIT*/ meltfrout->tabval[9])), (4), "CLASS_SOURCE_EXIT");
            /*_.INST__V40*/
            meltfptr[35] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[35]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLABEL_BIND", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[35]), (2), (/*_.LABIND__V31*/ meltfptr[30]), "SLABEL_BIND");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SEXI_BODY", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[35]), (3), (/*_.BODYTUP__V38*/ meltfptr[33]), "SEXI_BODY");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V40*/ meltfptr[35], "newly made instance");
        ;
        /*_.EXR__V39*/
        meltfptr[34] = /*_.INST__V40*/ meltfptr[35];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8057:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.EXR__V39*/ meltfptr[34];;

        {
            MELT_LOCATION("warmelt-macro.melt:8057:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V37*/
        meltfptr[32] = /*_.RETURN___V41*/ meltfptr[40];;

        MELT_LOCATION("warmelt-macro.melt:8050:/ clear");
        /*clear*/ /*_.BODYTUP__V38*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.EXR__V39*/
        meltfptr[34] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V41*/
        meltfptr[40] = 0 ;
        /*_.LET___V30*/
        meltfptr[29] = /*_.LET___V37*/ meltfptr[32];;

        MELT_LOCATION("warmelt-macro.melt:8045:/ clear");
        /*clear*/ /*_.LABIND__V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L7*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V32*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V37*/
        meltfptr[32] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V30*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:8033:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SLABNAM__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XLABNAM__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.NEWENV__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V28*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V29*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V30*/
        meltfptr[29] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8028:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:8028:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_EXIT", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_145_WARMELTmiMACRO_MEXPAND_EXIT*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN fromline 1752 */

    /** start of frame for meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN// fromline 1568
        : public Melt_CallFrameWithValues<44>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[9];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<44> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN), clos) {};
        MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN() //the constructor fromline 1642
            : Melt_CallFrameWithValues<44> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<44> (fil,lin, sizeof(MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN)) {};
        MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<44> (fil,lin, sizeof(MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN


    /** end of frame for meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN fromline 1697**/

    /* end of frame for routine meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN fromline 1756 */

    /* classy proc frame meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN */
    MeltFrame_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_AGAIN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:8067:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8068:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8068:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8068:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8068;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_again sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8068:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8068:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8069:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:8069:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8069:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8069;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8069:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8069:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8070:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_CLOSURE__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) == MELTOBMAG_CLOSURE);;
            MELT_LOCATION("warmelt-macro.melt:8070:/ cond");
            /*cond*/
            if (/*_#IS_CLOSURE__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8070:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check mexpander";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8070;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8070:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8070:/ clear");
            /*clear*/ /*_#IS_CLOSURE__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8071:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:8071:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8071:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8071;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8071:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[12] = /*_._IFELSE___V15*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8071:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[12] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:8072:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[5] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:8073:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[5])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.SLABNAM__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8076:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XLABSYMB__V23*/
            meltfptr[22] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SLABNAM__V22*/ meltfptr[21]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.PAIR_TAIL__V24*/
        meltfptr[23] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:8078:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V25*/ meltfptr[24] = /*_.PAIR_TAIL__V24*/ meltfptr[23];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L6*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.XLABSYMB__V23*/ meltfptr[22]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[3])));;
        MELT_LOCATION("warmelt-macro.melt:8079:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L6*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8080:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "bad label in (AGAIN <label>)"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8081:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8081:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8079:/ quasiblock");


                    /*_.PROGN___V28*/
                    meltfptr[27] = /*_.RETURN___V27*/ meltfptr[26];;
                    /*^compute*/
                    /*_._IF___V26*/
                    meltfptr[25] = /*_.PROGN___V28*/ meltfptr[27];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8079:/ clear");
                    /*clear*/ /*_.RETURN___V27*/
                    meltfptr[26] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V28*/
                    meltfptr[27] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V26*/ meltfptr[25] =  /*reallynil*/ NULL ;;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8082:/ cond");
        /*cond*/
        if (/*_.CURPAIR__V21*/ meltfptr[20]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8083:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "extra operands to (AGAIN <label>)"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8084:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8084:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8082:/ quasiblock");


                    /*_.PROGN___V31*/
                    meltfptr[30] = /*_.RETURN___V30*/ meltfptr[27];;
                    /*^compute*/
                    /*_._IF___V29*/
                    meltfptr[26] = /*_.PROGN___V31*/ meltfptr[30];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8082:/ clear");
                    /*clear*/ /*_.RETURN___V30*/
                    meltfptr[27] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V31*/
                    meltfptr[30] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V29*/ meltfptr[26] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8085:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.XLABSYMB__V23*/ meltfptr[22];
            /*_.LABIND__V33*/
            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!FIND_ENV*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L7*/
        meltfnum[1] =
            !melt_is_instance_of((melt_ptr_t)(/*_.LABIND__V33*/ meltfptr[30]), (melt_ptr_t)((/*!CLASS_LABEL_BINDING*/ meltfrout->tabval[5])));;
        MELT_LOCATION("warmelt-macro.melt:8086:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L7*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:8088:/ getslot");
                    {
                        melt_ptr_t slot=NULL, obj=NULL;
                        obj = (melt_ptr_t)(/*_.XLABSYMB__V23*/ meltfptr[22]) /*=obj*/;
                        melt_object_get_field(slot,obj, 1, "NAMED_NAME");
                        /*_.NAMED_NAME__V35*/
                        meltfptr[34] = slot;
                    };
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8087:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[2];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "bad label in AGAIN $1";
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.NAMED_NAME__V35*/ meltfptr[34];
                        /*_.ERROR_AT__V36*/
                        meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[6])), (melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8089:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8089:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8086:/ quasiblock");


                    /*_.PROGN___V38*/
                    meltfptr[37] = /*_.RETURN___V37*/ meltfptr[36];;
                    /*^compute*/
                    /*_._IF___V34*/
                    meltfptr[33] = /*_.PROGN___V38*/ meltfptr[37];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8086:/ clear");
                    /*clear*/ /*_.NAMED_NAME__V35*/
                    meltfptr[34] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.ERROR_AT__V36*/
                    meltfptr[35] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V37*/
                    meltfptr[36] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V38*/
                    meltfptr[37] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V34*/ meltfptr[33] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8090:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_AGAIN*/ meltfrout->tabval[7])), (3), "CLASS_SOURCE_AGAIN");
            /*_.INST__V41*/
            meltfptr[36] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V41*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V41*/ meltfptr[36]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLABEL_BIND", melt_magic_discr((melt_ptr_t)(/*_.INST__V41*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V41*/ meltfptr[36]), (2), (/*_.LABIND__V33*/ meltfptr[30]), "SLABEL_BIND");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V41*/ meltfptr[36], "newly made instance");
        ;
        /*_.MAGAIN__V40*/
        meltfptr[35] = /*_.INST__V41*/ meltfptr[36];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8095:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L8*/
            meltfnum[7] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8095:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L8*/ meltfnum[7]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L9*/ meltfnum[8] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8095:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L9*/ meltfnum[8];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8095;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_again result";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.MAGAIN__V40*/ meltfptr[35];
                            /*_.MELT_DEBUG_FUN__V43*/
                            meltfptr[42] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V42*/
                        meltfptr[37] = /*_.MELT_DEBUG_FUN__V43*/ meltfptr[42];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8095:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L9*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V43*/
                        meltfptr[42] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V42*/ meltfptr[37] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8095:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L8*/
            meltfnum[7] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V42*/
            meltfptr[37] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8096:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.MAGAIN__V40*/ meltfptr[35];;

        {
            MELT_LOCATION("warmelt-macro.melt:8096:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V39*/
        meltfptr[34] = /*_.RETURN___V44*/ meltfptr[42];;

        MELT_LOCATION("warmelt-macro.melt:8090:/ clear");
        /*clear*/ /*_.MAGAIN__V40*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V44*/
        meltfptr[42] = 0 ;
        /*_.LET___V32*/
        meltfptr[27] = /*_.LET___V39*/ meltfptr[34];;

        MELT_LOCATION("warmelt-macro.melt:8085:/ clear");
        /*clear*/ /*_.LABIND__V33*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L7*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V34*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V39*/
        meltfptr[34] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V32*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:8072:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SLABNAM__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XLABSYMB__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V29*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V32*/
        meltfptr[27] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8067:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:8067:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_AGAIN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_146_WARMELTmiMACRO_MEXPAND_AGAIN*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING fromline 1752 */

    /** start of frame for meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING// fromline 1568
        : public Melt_CallFrameWithValues<41>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[10];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<41> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING), clos) {};
        MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING() //the constructor fromline 1642
            : Melt_CallFrameWithValues<41> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<41> (fil,lin, sizeof(MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING)) {};
        MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<41> (fil,lin, sizeof(MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING


    /** end of frame for meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING fromline 1697**/

    /* end of frame for routine meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING fromline 1756 */

    /* classy proc frame meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING */
    MeltFrame_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_COMPILE_WARNING", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:8108:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8109:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8109:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8109:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8109;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_compile_warning sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8109:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8109:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8110:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:8110:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8110:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8110;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8110:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8110:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8111:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:8111:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8111:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8111;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8111:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8111:/ clear");
            /*clear*/ /*_#IS_OBJECT__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            (/*null*/(/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:8112:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[3]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8112:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8113:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:8114:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V17*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;
        /*^compute*/
        /*_.SMSG__V21*/
        meltfptr[20] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8117:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XMSG__V22*/
            meltfptr[21] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SMSG__V21*/ meltfptr[20]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L6*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.XMSG__V22*/ meltfptr[21])) == MELTOBMAG_STRING);;
        /*^compute*/
        /*_#NOT__L7*/
        meltfnum[6] =
            (!(/*_#IS_STRING__L6*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:8119:/ cond");
        /*cond*/
        if (/*_#NOT__L7*/ meltfnum[6]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8121:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "missing message string in (COMPILE_WARNING <msg> <exp>)";
                        /*_.ERROR_AT__V24*/
                        meltfptr[23] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8122:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8122:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8120:/ quasiblock");


                    /*_.PROGN___V26*/
                    meltfptr[25] = /*_.RETURN___V25*/ meltfptr[24];;
                    /*^compute*/
                    /*_._IF___V23*/
                    meltfptr[22] = /*_.PROGN___V26*/ meltfptr[25];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8119:/ clear");
                    /*clear*/ /*_.ERROR_AT__V24*/
                    meltfptr[23] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V25*/
                    meltfptr[24] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V26*/
                    meltfptr[25] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V23*/ meltfptr[22] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V27*/
        meltfptr[23] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
        MELT_LOCATION("warmelt-macro.melt:8123:/ compute");
        /*_.CURPAIR__V20*/
        meltfptr[19] = /*_.SETQ___V28*/ meltfptr[24] = /*_.PAIR_TAIL__V27*/ meltfptr[23];;
        MELT_LOCATION("warmelt-macro.melt:8124:/ quasiblock");


        /*_.SEXP__V30*/
        meltfptr[29] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8125:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XEXP__V31*/
            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SEXP__V30*/ meltfptr[29]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.PAIR_TAIL__V32*/
        meltfptr[31] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
        MELT_LOCATION("warmelt-macro.melt:8127:/ compute");
        /*_.CURPAIR__V20*/
        meltfptr[19] = /*_.SETQ___V33*/ meltfptr[32] = /*_.PAIR_TAIL__V32*/ meltfptr[31];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#NOTNULL__L8*/
        meltfnum[7] =
            ((/*_.CURPAIR__V20*/ meltfptr[19]) != NULL);;
        MELT_LOCATION("warmelt-macro.melt:8128:/ cond");
        /*cond*/
        if (/*_#NOTNULL__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8129:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "too many arguments in (COMPILE_WARNING <msg> [<exp>])";
                        /*_.ERROR_AT__V35*/
                        meltfptr[34] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*_._IF___V34*/
                    meltfptr[33] = /*_.ERROR_AT__V35*/ meltfptr[34];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8128:/ clear");
                    /*clear*/ /*_.ERROR_AT__V35*/
                    meltfptr[34] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V34*/ meltfptr[33] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8130:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_COMPILE_WARNING*/ meltfrout->tabval[5])), (4), "CLASS_SOURCE_COMPILE_WARNING");
            /*_.INST__V38*/
            meltfptr[37] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V38*/ meltfptr[37])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V38*/ meltfptr[37]), (1), (/*_.LOC__V18*/ meltfptr[17]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SCDIAG_MSG", melt_magic_discr((melt_ptr_t)(/*_.INST__V38*/ meltfptr[37])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V38*/ meltfptr[37]), (2), (/*_.XMSG__V22*/ meltfptr[21]), "SCDIAG_MSG");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SCDIAG_EXPR", melt_magic_discr((melt_ptr_t)(/*_.INST__V38*/ meltfptr[37])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V38*/ meltfptr[37]), (3), (/*_.XEXP__V31*/ meltfptr[30]), "SCDIAG_EXPR");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V38*/ meltfptr[37], "newly made instance");
        ;
        /*_.RES__V37*/
        meltfptr[36] = /*_.INST__V38*/ meltfptr[37];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8136:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L9*/
            meltfnum[8] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8136:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L9*/ meltfnum[8]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8136:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8136;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_compile_warning result";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V37*/ meltfptr[36];
                            /*_.MELT_DEBUG_FUN__V40*/
                            meltfptr[39] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V39*/
                        meltfptr[38] = /*_.MELT_DEBUG_FUN__V40*/ meltfptr[39];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8136:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L10*/
                        meltfnum[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V40*/
                        meltfptr[39] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V39*/ meltfptr[38] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8136:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L9*/
            meltfnum[8] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V39*/
            meltfptr[38] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8137:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V37*/ meltfptr[36];;

        {
            MELT_LOCATION("warmelt-macro.melt:8137:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V36*/
        meltfptr[34] = /*_.RETURN___V41*/ meltfptr[39];;

        MELT_LOCATION("warmelt-macro.melt:8130:/ clear");
        /*clear*/ /*_.RES__V37*/
        meltfptr[36] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V41*/
        meltfptr[39] = 0 ;
        /*_.LET___V29*/
        meltfptr[25] = /*_.LET___V36*/ meltfptr[34];;

        MELT_LOCATION("warmelt-macro.melt:8124:/ clear");
        /*clear*/ /*_.SEXP__V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XEXP__V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V32*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V33*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOTNULL__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V34*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V36*/
        meltfptr[34] = 0 ;
        /*_.LET___V16*/
        meltfptr[5] = /*_.LET___V29*/ meltfptr[25];;

        MELT_LOCATION("warmelt-macro.melt:8113:/ clear");
        /*clear*/ /*_.CONT__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SMSG__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XMSG__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L7*/
        meltfnum[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V27*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V28*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V29*/
        meltfptr[25] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8108:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[5];;

        {
            MELT_LOCATION("warmelt-macro.melt:8108:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[5] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_COMPILE_WARNING", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_147_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR fromline 1752 */

    /** start of frame for meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR// fromline 1568
        : public Melt_CallFrameWithValues<41>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[10];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<41> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR), clos) {};
        MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR() //the constructor fromline 1642
            : Melt_CallFrameWithValues<41> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<41> (fil,lin, sizeof(MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR)) {};
        MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<41> (fil,lin, sizeof(MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR


    /** end of frame for meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR fromline 1697**/

    /* end of frame for routine meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR fromline 1756 */

    /* classy proc frame meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR */
    MeltFrame_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_COMPILE_ERROR", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:8147:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8148:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8148:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8148:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8148;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_compile_error sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8148:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8148:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8149:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:8149:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8149:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8149;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8149:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8149:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8150:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:8150:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8150:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8150;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8150:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8150:/ clear");
            /*clear*/ /*_#IS_OBJECT__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            (/*null*/(/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:8151:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[3]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8151:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8152:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:8153:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V17*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;
        /*^compute*/
        /*_.SMSG__V21*/
        meltfptr[20] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8156:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XMSG__V22*/
            meltfptr[21] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SMSG__V21*/ meltfptr[20]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L6*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.XMSG__V22*/ meltfptr[21])) == MELTOBMAG_STRING);;
        /*^compute*/
        /*_#NOT__L7*/
        meltfnum[6] =
            (!(/*_#IS_STRING__L6*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:8158:/ cond");
        /*cond*/
        if (/*_#NOT__L7*/ meltfnum[6]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8160:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "missing message string in (COMPILE_ERROR <msg> <exp>)";
                        /*_.ERROR_AT__V24*/
                        meltfptr[23] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8161:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8161:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8159:/ quasiblock");


                    /*_.PROGN___V26*/
                    meltfptr[25] = /*_.RETURN___V25*/ meltfptr[24];;
                    /*^compute*/
                    /*_._IF___V23*/
                    meltfptr[22] = /*_.PROGN___V26*/ meltfptr[25];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8158:/ clear");
                    /*clear*/ /*_.ERROR_AT__V24*/
                    meltfptr[23] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V25*/
                    meltfptr[24] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V26*/
                    meltfptr[25] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V23*/ meltfptr[22] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V27*/
        meltfptr[23] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
        MELT_LOCATION("warmelt-macro.melt:8162:/ compute");
        /*_.CURPAIR__V20*/
        meltfptr[19] = /*_.SETQ___V28*/ meltfptr[24] = /*_.PAIR_TAIL__V27*/ meltfptr[23];;
        MELT_LOCATION("warmelt-macro.melt:8163:/ quasiblock");


        /*_.SEXP__V30*/
        meltfptr[29] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8164:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XEXP__V31*/
            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.SEXP__V30*/ meltfptr[29]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.PAIR_TAIL__V32*/
        meltfptr[31] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
        MELT_LOCATION("warmelt-macro.melt:8166:/ compute");
        /*_.CURPAIR__V20*/
        meltfptr[19] = /*_.SETQ___V33*/ meltfptr[32] = /*_.PAIR_TAIL__V32*/ meltfptr[31];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#NOTNULL__L8*/
        meltfnum[7] =
            ((/*_.CURPAIR__V20*/ meltfptr[19]) != NULL);;
        MELT_LOCATION("warmelt-macro.melt:8167:/ cond");
        /*cond*/
        if (/*_#NOTNULL__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8168:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_cstring =  "too many arguments in (COMPILE_ERROR <msg> [<exp>])";
                        /*_.ERROR_AT__V35*/
                        meltfptr[34] =  melt_apply ((meltclosure_ptr_t)((/*!ERROR_AT*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*_._IF___V34*/
                    meltfptr[33] = /*_.ERROR_AT__V35*/ meltfptr[34];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8167:/ clear");
                    /*clear*/ /*_.ERROR_AT__V35*/
                    meltfptr[34] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V34*/ meltfptr[33] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8169:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_COMPILE_ERROR*/ meltfrout->tabval[5])), (4), "CLASS_SOURCE_COMPILE_ERROR");
            /*_.INST__V38*/
            meltfptr[37] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V38*/ meltfptr[37])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V38*/ meltfptr[37]), (1), (/*_.LOC__V18*/ meltfptr[17]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SCDIAG_MSG", melt_magic_discr((melt_ptr_t)(/*_.INST__V38*/ meltfptr[37])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V38*/ meltfptr[37]), (2), (/*_.XMSG__V22*/ meltfptr[21]), "SCDIAG_MSG");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SCDIAG_EXPR", melt_magic_discr((melt_ptr_t)(/*_.INST__V38*/ meltfptr[37])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V38*/ meltfptr[37]), (3), (/*_.XEXP__V31*/ meltfptr[30]), "SCDIAG_EXPR");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V38*/ meltfptr[37], "newly made instance");
        ;
        /*_.RES__V37*/
        meltfptr[36] = /*_.INST__V38*/ meltfptr[37];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8175:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L9*/
            meltfnum[8] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8175:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L9*/ meltfnum[8]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8175:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8175;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_compile_error result";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V37*/ meltfptr[36];
                            /*_.MELT_DEBUG_FUN__V40*/
                            meltfptr[39] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V39*/
                        meltfptr[38] = /*_.MELT_DEBUG_FUN__V40*/ meltfptr[39];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8175:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L10*/
                        meltfnum[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V40*/
                        meltfptr[39] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V39*/ meltfptr[38] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8175:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L9*/
            meltfnum[8] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V39*/
            meltfptr[38] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8176:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V37*/ meltfptr[36];;

        {
            MELT_LOCATION("warmelt-macro.melt:8176:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V36*/
        meltfptr[34] = /*_.RETURN___V41*/ meltfptr[39];;

        MELT_LOCATION("warmelt-macro.melt:8169:/ clear");
        /*clear*/ /*_.RES__V37*/
        meltfptr[36] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V41*/
        meltfptr[39] = 0 ;
        /*_.LET___V29*/
        meltfptr[25] = /*_.LET___V36*/ meltfptr[34];;

        MELT_LOCATION("warmelt-macro.melt:8163:/ clear");
        /*clear*/ /*_.SEXP__V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XEXP__V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V32*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V33*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOTNULL__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V34*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V36*/
        meltfptr[34] = 0 ;
        /*_.LET___V16*/
        meltfptr[5] = /*_.LET___V29*/ meltfptr[25];;

        MELT_LOCATION("warmelt-macro.melt:8152:/ clear");
        /*clear*/ /*_.CONT__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SMSG__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XMSG__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L7*/
        meltfnum[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V27*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V28*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V29*/
        meltfptr[25] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8147:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[5];;

        {
            MELT_LOCATION("warmelt-macro.melt:8147:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[5] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_COMPILE_ERROR", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_148_WARMELTmiMACRO_MEXPAND_COMPILE_ERROR*/






melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1538

    /* start of frame for routine meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG fromline 1752 */

    /** start of frame for meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG of CLASS_PROCROUTINEOBJ from 1555**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG// fromline 1568
        : public Melt_CallFrameWithValues<82>
    {
    public: /* fromline 1572*/
        long mcfr_varnum[23];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG(meltclosure_ptr_t clos) //the closure constructor fromline 1630
            : Melt_CallFrameWithValues<82> (
#if ENABLE_CHECKING /*fromline 1634*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1638*/
                sizeof(MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG), clos) {};
        MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG() //the constructor fromline 1642
            : Melt_CallFrameWithValues<82> (
#if ENABLE_CHECKING /*fromline 1646*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1650*/
                sizeof(MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG)) {};
#if ENABLE_CHECKING /*fromline 1654*/
        MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG(const char*fil, int lin) //the constructor fromline 1656
            : Melt_CallFrameWithValues<82> (fil,lin, sizeof(MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG)) {};
        MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1661
            : Melt_CallFrameWithValues<82> (fil,lin, sizeof(MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG), clos) {};
#endif /* ENABLE_CHECKING fromline 1666*/

    }; // end  class MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG


    /** end of frame for meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG fromline 1697**/

    /* end of frame for routine meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG fromline 1756 */

    /* classy proc frame meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG */
    MeltFrame_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG
    meltfram__ /*declfrastruct fromline 1780*/
    /*classyprocarg meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG fromline 1785*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1789*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1793*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_ASSERT_MSG", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:8191:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8192:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8192:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8192:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8192;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_assert_msg sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8192:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8192:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8193:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:8193:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8193:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8193;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8193:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8193:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8194:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:8194:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8194:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8194;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8194:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8194:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            (/*null*/(/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:8195:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8195:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8196:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:8196:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:8196:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8196;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8196:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8196:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:8197:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:8198:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:8199:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        /*^compute*/
        /*_.PAIR_HEAD__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8201:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XMSG__V25*/
            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.PAIR_HEAD__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.XTEST__V26*/
        meltfptr[25] = (/*nil*/NULL);;
        /*^compute*/
        /*_.XARGLIST__V27*/
        meltfptr[26] = (/*nil*/NULL);;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8204:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!konst_6_MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[6]);
            /*_.ASSFAIL_BINDING__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!FIND_ENV*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L7*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.XMSG__V25*/ meltfptr[24])) == MELTOBMAG_STRING);;
        /*^compute*/
        /*_#NOT__L8*/
        meltfnum[7] =
            (!(/*_#IS_STRING__L7*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:8206:/ cond");
        /*cond*/
        if (/*_#NOT__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8207:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "non string message in (ASSERT_MSG <msg> <test>)"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        /*_.PAIR_TAIL__V29*/
        meltfptr[28] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:8208:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V30*/ meltfptr[29] = /*_.PAIR_TAIL__V29*/ meltfptr[28];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L9*/
        meltfnum[8] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        MELT_LOCATION("warmelt-macro.melt:8209:/ cond");
        /*cond*/
        if (/*_#IS_PAIR__L9*/ meltfnum[8]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*_.PAIR_HEAD__V32*/ meltfptr[31] =
                        (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8210:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[3];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                        /*^apply.arg*/
                        argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                        /*_.MEXPANDER__V33*/
                        meltfptr[32] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.PAIR_HEAD__V32*/ meltfptr[31]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*^compute*/
                    /*_.XTEST__V26*/
                    meltfptr[25] = /*_.SETQ___V34*/ meltfptr[33] = /*_.MEXPANDER__V33*/ meltfptr[32];;
                    /*_.PAIR_TAIL__V35*/
                    meltfptr[34] =
                        (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8211:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[3];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                        /*^apply.arg*/
                        argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                        /*_.EXPAND_PAIRLIST_AS_LIST__V36*/
                        meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_LIST*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.PAIR_TAIL__V35*/ meltfptr[34]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*^compute*/
                    /*_.XARGLIST__V27*/
                    meltfptr[26] = /*_.SETQ___V37*/ meltfptr[36] = /*_.EXPAND_PAIRLIST_AS_LIST__V36*/ meltfptr[35];;
                    MELT_LOCATION("warmelt-macro.melt:8209:/ quasiblock");


                    /*_.PROGN___V38*/
                    meltfptr[37] = /*_.SETQ___V37*/ meltfptr[36];;
                    /*^compute*/
                    /*_._IFELSE___V31*/
                    meltfptr[30] = /*_.PROGN___V38*/ meltfptr[37];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8209:/ clear");
                    /*clear*/ /*_.PAIR_HEAD__V32*/
                    meltfptr[31] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.MEXPANDER__V33*/
                    meltfptr[32] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V34*/
                    meltfptr[33] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PAIR_TAIL__V35*/
                    meltfptr[34] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.EXPAND_PAIRLIST_AS_LIST__V36*/
                    meltfptr[35] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V37*/
                    meltfptr[36] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V38*/
                    meltfptr[37] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8214:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "empty ASSERT_MSG"), (melt_ptr_t)(/*_.XMSG__V25*/ meltfptr[24]));
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8213:/ quasiblock");


                    /*epilog*/
                }
                ;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:8216:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*_#NULL__L10*/
        meltfnum[9] =
            (/*null*/(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:8219:/ cond");
        /*cond*/
        if (/*_#NULL__L10*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:8220:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "unbound MELT_ASSERT_FAILURE in (ASSERT_MSG <msg> <test>)"), (melt_ptr_t)0);
                    }
                    ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:8221:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L11*/
                        meltfnum[10] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:8221:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L11*/ meltfnum[10]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L12*/ meltfnum[11] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;
                                    /*^compute*/
                                    /*_.DISCRIM__V42*/
                                    meltfptr[34] =
                                        ((melt_ptr_t) (melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]))));;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:8223:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[1];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!konst_6_MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[6]);
                                        /*_.FIND_ENV_DEBUG__V43*/
                                        meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!FIND_ENV_DEBUG*/ meltfrout->tabval[8])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:8221:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[11];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[11];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 8221;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_assert_msg  without MELT_ASSERT_FAILURE env=";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                        /*^apply.arg*/
                                        argtab[5].meltbp_cstring =  " env\'s class";
                                        /*^apply.arg*/
                                        argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.DISCRIM__V42*/ meltfptr[34];
                                        /*^apply.arg*/
                                        argtab[7].meltbp_cstring =  "find_env giving:";
                                        /*^apply.arg*/
                                        argtab[8].meltbp_aptr = (melt_ptr_t*) &/*_.FIND_ENV_DEBUG__V43*/ meltfptr[35];
                                        /*^apply.arg*/
                                        argtab[9].meltbp_cstring =  "\'melt_assert_failure_fun=";
                                        /*^apply.arg*/
                                        argtab[10].meltbp_aptr = (melt_ptr_t*) &(/*!konst_6_MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[6]);
                                        /*_.MELT_DEBUG_FUN__V44*/
                                        meltfptr[36] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V41*/
                                    meltfptr[33] = /*_.MELT_DEBUG_FUN__V44*/ meltfptr[36];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:8221:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                                    meltfnum[11] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.DISCRIM__V42*/
                                    meltfptr[34] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.FIND_ENV_DEBUG__V43*/
                                    meltfptr[35] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V44*/
                                    meltfptr[36] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V41*/ meltfptr[33] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:8221:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L11*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V41*/
                        meltfptr[33] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:8225:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^cond*/
                        /*cond*/
                        if ((/*nil*/NULL)) /*then*/
                            {
                                /*^cond.then*/
                                /*_._IFELSE___V46*/ meltfptr[34] = (/*nil*/NULL);;
                            }
                        else
                            {
                                MELT_LOCATION("warmelt-macro.melt:8225:/ cond.else");

                                /*^block*/
                                /*anyblock*/
                                {


                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*^apply*/
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[3];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_cstring =  "assfail_binding nul! @@";
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 8225;
                                        /*_.MELT_ASSERT_FAILURE_FUN__V47*/
                                        meltfptr[35] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IFELSE___V46*/
                                    meltfptr[34] = /*_.MELT_ASSERT_FAILURE_FUN__V47*/ meltfptr[35];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:8225:/ clear");
                                    /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V47*/
                                    meltfptr[35] = 0 ;
                                }
                                ;
                            }
                        ;
                        /*_.IFCPP___V45*/
                        meltfptr[37] = /*_._IFELSE___V46*/ meltfptr[34];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8225:/ clear");
                        /*clear*/ /*_._IFELSE___V46*/
                        meltfptr[34] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*_.IFCPP___V45*/ meltfptr[37] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                    ;
                    MELT_LOCATION("warmelt-macro.melt:8226:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:8226:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:8219:/ quasiblock");


                    /*_.PROGN___V49*/
                    meltfptr[33] = /*_.RETURN___V48*/ meltfptr[36];;
                    /*^compute*/
                    /*_.ASSFAILFUN__V40*/
                    meltfptr[32] = /*_.PROGN___V49*/ meltfptr[33];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8219:/ clear");
                    /*clear*/ /*_.IFCPP___V45*/
                    meltfptr[37] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V48*/
                    meltfptr[36] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V49*/
                    meltfptr[33] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_A__L13*/
                    meltfnum[11] =
                        melt_is_instance_of((melt_ptr_t)(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]), (melt_ptr_t)((/*!CLASS_FUNCTION_BINDING*/ meltfrout->tabval[11])));;
                    MELT_LOCATION("warmelt-macro.melt:8227:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L13*/ meltfnum[11]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:8229:/ getslot");
                                {
                                    melt_ptr_t slot=NULL, obj=NULL;
                                    obj = (melt_ptr_t)(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]) /*=obj*/;
                                    melt_object_get_field(slot,obj, 1, "FIXBIND_DATA");
                                    /*_.FIXBIND_DATA__V51*/
                                    meltfptr[34] = slot;
                                };
                                ;
                                MELT_LOCATION("warmelt-macro.melt:8228:/ cond");
                                /*cond*/
                                if (/*_.FIXBIND_DATA__V51*/ meltfptr[34]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*_.OR___V52*/ meltfptr[37] = /*_.FIXBIND_DATA__V51*/ meltfptr[34];;
                                    }
                                else
                                    {
                                        MELT_LOCATION("warmelt-macro.melt:8228:/ cond.else");

                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            MELT_LOCATION("warmelt-macro.melt:8230:/ getslot");
                                            {
                                                melt_ptr_t slot=NULL, obj=NULL;
                                                obj = (melt_ptr_t)(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]) /*=obj*/;
                                                melt_object_get_field(slot,obj, 2, "FUBIND_DEFUN");
                                                /*_.FUBIND_DEFUN__V53*/
                                                meltfptr[36] = slot;
                                            };
                                            ;
                                            /*_.OR___V52*/
                                            meltfptr[37] = /*_.FUBIND_DEFUN__V53*/ meltfptr[36];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:8228:/ clear");
                                            /*clear*/ /*_.FUBIND_DEFUN__V53*/
                                            meltfptr[36] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*_._IFELSE___V50*/
                                meltfptr[35] = /*_.OR___V52*/ meltfptr[37];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:8227:/ clear");
                                /*clear*/ /*_.FIXBIND_DATA__V51*/
                                meltfptr[34] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.OR___V52*/
                                meltfptr[37] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                /*_#IS_A__L14*/
                                meltfnum[10] =
                                    melt_is_instance_of((melt_ptr_t)(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]), (melt_ptr_t)((/*!CLASS_VALUE_BINDING*/ meltfrout->tabval[12])));;
                                MELT_LOCATION("warmelt-macro.melt:8232:/ cond");
                                /*cond*/
                                if (/*_#IS_A__L14*/ meltfnum[10]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            MELT_LOCATION("warmelt-macro.melt:8233:/ getslot");
                                            {
                                                melt_ptr_t slot=NULL, obj=NULL;
                                                obj = (melt_ptr_t)(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]) /*=obj*/;
                                                melt_object_get_field(slot,obj, 1, "VBIND_VALUE");
                                                /*_.VBIND_VALUE__V54*/
                                                meltfptr[33] = slot;
                                            };
                                            ;
                                            /*_#IS_CLOSURE__L16*/
                                            meltfnum[15] =
                                                (melt_magic_discr((melt_ptr_t)(/*_.VBIND_VALUE__V54*/ meltfptr[33])) == MELTOBMAG_CLOSURE);;
                                            /*^compute*/
                                            /*_#_IF___L15*/
                                            meltfnum[14] = /*_#IS_CLOSURE__L16*/ meltfnum[15];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:8232:/ clear");
                                            /*clear*/ /*_.VBIND_VALUE__V54*/
                                            meltfptr[33] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_#IS_CLOSURE__L16*/
                                            meltfnum[15] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_#_IF___L15*/ meltfnum[14] = 0;;
                                    }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:8232:/ cond");
                                /*cond*/
                                if (/*_#_IF___L15*/ meltfnum[14]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            MELT_LOCATION("warmelt-macro.melt:8234:/ getslot");
                                            {
                                                melt_ptr_t slot=NULL, obj=NULL;
                                                obj = (melt_ptr_t)(/*_.ASSFAIL_BINDING__V28*/ meltfptr[27]) /*=obj*/;
                                                melt_object_get_field(slot,obj, 1, "VBIND_VALUE");
                                                /*_.VBIND_VALUE__V56*/
                                                meltfptr[34] = slot;
                                            };
                                            ;
                                            /*_._IFELSE___V55*/
                                            meltfptr[36] = /*_.VBIND_VALUE__V56*/ meltfptr[34];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:8232:/ clear");
                                            /*clear*/ /*_.VBIND_VALUE__V56*/
                                            meltfptr[34] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*^block*/
                                        /*anyblock*/
                                        {


#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:8236:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L17*/
                                                meltfnum[15] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:8236:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L17*/ meltfnum[15]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L18*/ meltfnum[17] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:8236:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L18*/ meltfnum[17];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 8236;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_assert_msg bad assfail_binding=";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.ASSFAIL_BINDING__V28*/ meltfptr[27];
                                                                /*_.MELT_DEBUG_FUN__V58*/
                                                                meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V57*/
                                                            meltfptr[37] = /*_.MELT_DEBUG_FUN__V58*/ meltfptr[33];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:8236:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L18*/
                                                            meltfnum[17] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V58*/
                                                            meltfptr[33] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V57*/ meltfptr[37] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:8236:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L17*/
                                                meltfnum[15] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V57*/
                                                meltfptr[37] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:8237:/ locexp");
                                                /* error_plain */
                                                melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "MELT_ASSERT_FAILURE badly bound in  (ASSERT_MSG <msg> <test>)"), (melt_ptr_t)0);
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:8238:/ quasiblock");


                                            /*_._RETVAL___V1*/
                                            meltfptr[0] =  /*reallynil*/ NULL ;;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:8238:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/
                                            goto meltlabend_rout ;
                                            MELT_LOCATION("warmelt-macro.melt:8235:/ quasiblock");


                                            /*_.PROGN___V60*/
                                            meltfptr[33] = /*_.RETURN___V59*/ meltfptr[34];;
                                            /*^compute*/
                                            /*_._IFELSE___V55*/
                                            meltfptr[36] = /*_.PROGN___V60*/ meltfptr[33];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:8232:/ clear");
                                            /*clear*/ /*_.RETURN___V59*/
                                            meltfptr[34] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V60*/
                                            meltfptr[33] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*_._IFELSE___V50*/
                                meltfptr[35] = /*_._IFELSE___V55*/ meltfptr[36];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:8227:/ clear");
                                /*clear*/ /*_#IS_A__L14*/
                                meltfnum[10] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_#_IF___L15*/
                                meltfnum[14] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IFELSE___V55*/
                                meltfptr[36] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_.ASSFAILFUN__V40*/
                    meltfptr[32] = /*_._IFELSE___V50*/ meltfptr[35];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8219:/ clear");
                    /*clear*/ /*_#IS_A__L13*/
                    meltfnum[11] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V50*/
                    meltfptr[35] = 0 ;
                }
                ;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_MIXINT__L19*/
        meltfnum[17] =
            (melt_magic_discr((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20])) == MELTOBMAG_MIXINT);;
        MELT_LOCATION("warmelt-macro.melt:8241:/ cond");
        /*cond*/
        if (/*_#IS_MIXINT__L19*/ meltfnum[17]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*_.MIXINT_VAL__V62*/ meltfptr[34] =
                        (melt_val_mixint((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20])));;
                    /*^compute*/
                    /*_.FILNAM__V61*/
                    meltfptr[37] = /*_.MIXINT_VAL__V62*/ meltfptr[34];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8241:/ clear");
                    /*clear*/ /*_.MIXINT_VAL__V62*/
                    meltfptr[34] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_MIXLOC__L20*/
                    meltfnum[15] =
                        (melt_magic_discr((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20])) == MELTOBMAG_MIXLOC);;
                    MELT_LOCATION("warmelt-macro.melt:8242:/ cond");
                    /*cond*/
                    if (/*_#IS_MIXLOC__L20*/ meltfnum[15]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                /*_.MIXLOC_VAL__V64*/ meltfptr[36] =
                                    (melt_val_mixloc((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20])));;
                                /*^compute*/
                                /*_._IFELSE___V63*/
                                meltfptr[33] = /*_.MIXLOC_VAL__V64*/ meltfptr[36];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:8242:/ clear");
                                /*clear*/ /*_.MIXLOC_VAL__V64*/
                                meltfptr[36] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_._IFELSE___V63*/ meltfptr[33] =  /*reallynil*/ NULL ;;
                        }
                    ;
                    /*^compute*/
                    /*_.FILNAM__V61*/
                    meltfptr[37] = /*_._IFELSE___V63*/ meltfptr[33];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:8241:/ clear");
                    /*clear*/ /*_#IS_MIXLOC__L20*/
                    meltfnum[15] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V63*/
                    meltfptr[33] = 0 ;
                }
                ;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#GET_INT__L21*/
        meltfnum[10] =
            (melt_get_int((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20])));;
        /*^compute*/
        /*_.MAKE_INTEGERBOX__V65*/
        meltfptr[35] =
            (meltgc_new_int((meltobject_ptr_t)((/*!DISCR_INTEGER*/ meltfrout->tabval[17])), (/*_#GET_INT__L21*/ meltfnum[10])));;
        MELT_LOCATION("warmelt-macro.melt:8249:/ blockmultialloc");
        /*multiallocblock*/
        {
            struct meltletrec_1_st
            {
                struct meltpair_st rpair_0___PAIROFLIST_x1;
                struct meltpair_st rpair_1__XMSG_x1;
                struct meltpair_st rpair_2__FILNAM_x1;
                struct meltpair_st rpair_3___PAIROFLIST_x2;
                struct meltlist_st rlist_4__LIST_;
                long meltletrec_1_endgap;
            } *meltletrec_1_ptr = 0;
            meltletrec_1_ptr = (struct meltletrec_1_st *) meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
            /*^blockmultialloc.initfill*/
            /*inipair rpair_0___PAIROFLIST_x1*/
            /*_._PAIROFLIST__V67*/
            meltfptr[36] = (melt_ptr_t) &meltletrec_1_ptr->rpair_0___PAIROFLIST_x1;
            meltletrec_1_ptr->rpair_0___PAIROFLIST_x1.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_PAIR))));

            /*inipair rpair_1__XMSG_x1*/
            /*_.XMSG__V68*/
            meltfptr[33] = (melt_ptr_t) &meltletrec_1_ptr->rpair_1__XMSG_x1;
            meltletrec_1_ptr->rpair_1__XMSG_x1.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_PAIR))));

            /*inipair rpair_2__FILNAM_x1*/
            /*_.FILNAM__V69*/
            meltfptr[68] = (melt_ptr_t) &meltletrec_1_ptr->rpair_2__FILNAM_x1;
            meltletrec_1_ptr->rpair_2__FILNAM_x1.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_PAIR))));

            /*inipair rpair_3___PAIROFLIST_x2*/
            /*_._PAIROFLIST__V70*/
            meltfptr[69] = (melt_ptr_t) &meltletrec_1_ptr->rpair_3___PAIROFLIST_x2;
            meltletrec_1_ptr->rpair_3___PAIROFLIST_x2.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_PAIR))));

            /*inilist rlist_4__LIST_*/
            /*_.LIST___V71*/
            meltfptr[70] = (melt_ptr_t) &meltletrec_1_ptr->rlist_4__LIST_;
            meltletrec_1_ptr->rlist_4__LIST_.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_LIST))));



            /*^putpairhead*/
            /*putpairhead*/
            melt_assertmsg("putpairhead /1 checkpair", melt_magic_discr((melt_ptr_t)(/*_._PAIROFLIST__V67*/ meltfptr[36]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_._PAIROFLIST__V67*/ meltfptr[36]))->hd = (melt_ptr_t) ((/*nil*/NULL));
            ;
            /*^putpairtail*/
            /*putpairtail*/
            melt_assertmsg("putpairtail /1b5db38c checkpair", melt_magic_discr((melt_ptr_t)(/*_._PAIROFLIST__V67*/ meltfptr[36]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_._PAIROFLIST__V67*/ meltfptr[36]))->tl = (meltpair_ptr_t) (/*_.XMSG__V68*/ meltfptr[33]);
            ;
            /*^touch*/
            meltgc_touch(/*_._PAIROFLIST__V67*/ meltfptr[36]);
            ;
            /*^putpairhead*/
            /*putpairhead*/
            melt_assertmsg("putpairhead /2 checkpair", melt_magic_discr((melt_ptr_t)(/*_.XMSG__V68*/ meltfptr[33]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_.XMSG__V68*/ meltfptr[33]))->hd = (melt_ptr_t) (/*_.XMSG__V25*/ meltfptr[24]);
            ;
            /*^putpairtail*/
            /*putpairtail*/
            melt_assertmsg("putpairtail /128c43f9 checkpair", melt_magic_discr((melt_ptr_t)(/*_.XMSG__V68*/ meltfptr[33]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_.XMSG__V68*/ meltfptr[33]))->tl = (meltpair_ptr_t) (/*_.FILNAM__V69*/ meltfptr[68]);
            ;
            /*^touch*/
            meltgc_touch(/*_.XMSG__V68*/ meltfptr[33]);
            ;
            /*^putpairhead*/
            /*putpairhead*/
            melt_assertmsg("putpairhead /3 checkpair", melt_magic_discr((melt_ptr_t)(/*_.FILNAM__V69*/ meltfptr[68]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_.FILNAM__V69*/ meltfptr[68]))->hd = (melt_ptr_t) (/*_.FILNAM__V61*/ meltfptr[37]);
            ;
            /*^putpairtail*/
            /*putpairtail*/
            melt_assertmsg("putpairtail /3d0e44ed checkpair", melt_magic_discr((melt_ptr_t)(/*_.FILNAM__V69*/ meltfptr[68]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_.FILNAM__V69*/ meltfptr[68]))->tl = (meltpair_ptr_t) (/*_._PAIROFLIST__V70*/ meltfptr[69]);
            ;
            /*^touch*/
            meltgc_touch(/*_.FILNAM__V69*/ meltfptr[68]);
            ;
            MELT_LOCATION("warmelt-macro.melt:8253:/ putpairhead");
            /*putpairhead*/
            melt_assertmsg("putpairhead /4 checkpair", melt_magic_discr((melt_ptr_t)(/*_._PAIROFLIST__V70*/ meltfptr[69]))== MELTOBMAG_PAIR);
            ((meltpair_ptr_t)(/*_._PAIROFLIST__V70*/ meltfptr[69]))->hd = (melt_ptr_t) (/*_.MAKE_INTEGERBOX__V65*/ meltfptr[35]);
            ;
            /*^touch*/
            meltgc_touch(/*_._PAIROFLIST__V70*/ meltfptr[69]);
            ;
            MELT_LOCATION("warmelt-macro.melt:8249:/ putlist");
            /*putlist*/
            melt_assertmsg("putlist checklist", melt_magic_discr((melt_ptr_t)(/*_.LIST___V71*/ meltfptr[70]))== MELTOBMAG_LIST);
            ((meltlist_ptr_t)(/*_.LIST___V71*/ meltfptr[70]))->first = (meltpair_ptr_t) (/*_._PAIROFLIST__V67*/ meltfptr[36]);
            ((meltlist_ptr_t)(/*_.LIST___V71*/ meltfptr[70]))->last = (meltpair_ptr_t) (/*_._PAIROFLIST__V70*/ meltfptr[69]);
            ;
            /*^touch*/
            meltgc_touch(/*_.LIST___V71*/ meltfptr[70]);
            ;
            /*_.LIST___V66*/
            meltfptr[34] = /*_.LIST___V71*/ meltfptr[70];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:8249:/ clear");
            /*clear*/ /*_._PAIROFLIST__V67*/
            meltfptr[36] = 0 ;
            /*^clear*/
            /*clear*/ /*_.XMSG__V68*/
            meltfptr[33] = 0 ;
            /*^clear*/
            /*clear*/ /*_.FILNAM__V69*/
            meltfptr[68] = 0 ;
            /*^clear*/
            /*clear*/ /*_._PAIROFLIST__V70*/
            meltfptr[69] = 0 ;
            /*^clear*/
            /*clear*/ /*_.LIST___V71*/
            meltfptr[70] = 0 ;
            /*^clear*/
            /*clear*/ /*_._PAIROFLIST__V67*/
            meltfptr[36] = 0 ;
            /*^clear*/
            /*clear*/ /*_.XMSG__V68*/
            meltfptr[33] = 0 ;
            /*^clear*/
            /*clear*/ /*_.FILNAM__V69*/
            meltfptr[68] = 0 ;
            /*^clear*/
            /*clear*/ /*_._PAIROFLIST__V70*/
            meltfptr[69] = 0 ;
            /*^clear*/
            /*clear*/ /*_.LIST___V71*/
            meltfptr[70] = 0 ;
        } /*end multiallocblock*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8248:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.XARGLIST__V27*/ meltfptr[26];
            /*_.LIST_APPEND2LIST__V72*/
            meltfptr[36] =  melt_apply ((meltclosure_ptr_t)((/*!LIST_APPEND2LIST*/ meltfrout->tabval[16])), (melt_ptr_t)(/*_.LIST___V66*/ meltfptr[34]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8247:/ apply");
        /*apply*/
        {
            /*_.LIST_TO_MULTIPLE__V73*/ meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!LIST_TO_MULTIPLE*/ meltfrout->tabval[15])), (melt_ptr_t)(/*_.LIST_APPEND2LIST__V72*/ meltfptr[36]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:8243:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_APPLY*/ meltfrout->tabval[13])), (4), "CLASS_SOURCE_APPLY");
            /*_.INST__V75*/
            meltfptr[69] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V75*/ meltfptr[69])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V75*/ meltfptr[69]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SAPP_FUN", melt_magic_discr((melt_ptr_t)(/*_.INST__V75*/ meltfptr[69])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V75*/ meltfptr[69]), (3), ((/*!konst_6_MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[6])), "SAPP_FUN");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SARGOP_ARGS", melt_magic_discr((melt_ptr_t)(/*_.INST__V75*/ meltfptr[69])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V75*/ meltfptr[69]), (2), (/*_.LIST_TO_MULTIPLE__V73*/ meltfptr[33]), "SARGOP_ARGS");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V75*/ meltfptr[69], "newly made instance");
        ;
        /*_.AFAPPLY__V74*/
        meltfptr[68] = /*_.INST__V75*/ meltfptr[69];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8258:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IFELSE*/ meltfrout->tabval[18])), (5), "CLASS_SOURCE_IFELSE");
            /*_.INST__V77*/
            meltfptr[76] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V77*/ meltfptr[76])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V77*/ meltfptr[76]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V77*/ meltfptr[76])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V77*/ meltfptr[76]), (2), (/*_.XTEST__V26*/ meltfptr[25]), "SIF_TEST");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V77*/ meltfptr[76])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V77*/ meltfptr[76]), (3), ((/*nil*/NULL)), "SIF_THEN");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V77*/ meltfptr[76])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V77*/ meltfptr[76]), (4), (/*_.AFAPPLY__V74*/ meltfptr[68]), "SIF_ELSE");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V77*/ meltfptr[76], "newly made instance");
        ;
        /*_.ATEST__V76*/
        meltfptr[70] = /*_.INST__V77*/ meltfptr[76];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8264:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_CPPIF*/ meltfrout->tabval[19])), (5), "CLASS_SOURCE_CPPIF");
            /*_.INST__V79*/
            meltfptr[78] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V79*/ meltfptr[78])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V79*/ meltfptr[78]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIFP_COND", melt_magic_discr((melt_ptr_t)(/*_.INST__V79*/ meltfptr[78])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V79*/ meltfptr[78]), (2), ((/*!konst_20_MELT_HAVE_DEBUG*/ meltfrout->tabval[20])), "SIFP_COND");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIFP_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V79*/ meltfptr[78])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V79*/ meltfptr[78]), (3), (/*_.ATEST__V76*/ meltfptr[70]), "SIFP_THEN");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIFP_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V79*/ meltfptr[78])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V79*/ meltfptr[78]), (4), ((/*nil*/NULL)), "SIFP_ELSE");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V79*/ meltfptr[78], "newly made instance");
        ;
        /*_.ACPPIF__V78*/
        meltfptr[77] = /*_.INST__V79*/ meltfptr[78];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:8271:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L22*/
            meltfnum[14] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:8271:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L22*/ meltfnum[14]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L23*/ meltfnum[11] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:8271:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L23*/ meltfnum[11];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 8271;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_assert_msg result acppif";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.ACPPIF__V78*/ meltfptr[77];
                            /*_.MELT_DEBUG_FUN__V81*/
                            meltfptr[80] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V80*/
                        meltfptr[79] = /*_.MELT_DEBUG_FUN__V81*/ meltfptr[80];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:8271:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L23*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V81*/
                        meltfptr[80] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V80*/ meltfptr[79] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:8271:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L22*/
            meltfnum[14] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V80*/
            meltfptr[79] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8272:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.ACPPIF__V78*/ meltfptr[77];;

        {
            MELT_LOCATION("warmelt-macro.melt:8272:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V39*/
        meltfptr[31] = /*_.RETURN___V82*/ meltfptr[80];;

        MELT_LOCATION("warmelt-macro.melt:8216:/ clear");
        /*clear*/ /*_#NULL__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ASSFAILFUN__V40*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_MIXINT__L19*/
        meltfnum[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FILNAM__V61*/
        meltfptr[37] = 0 ;
        /*^clear*/
        /*clear*/ /*_#GET_INT__L21*/
        meltfnum[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MAKE_INTEGERBOX__V65*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST___V66*/
        meltfptr[34] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_APPEND2LIST__V72*/
        meltfptr[36] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_TO_MULTIPLE__V73*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.AFAPPLY__V74*/
        meltfptr[68] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ATEST__V76*/
        meltfptr[70] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ACPPIF__V78*/
        meltfptr[77] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V82*/
        meltfptr[80] = 0 ;
        /*_.LET___V19*/
        meltfptr[17] = /*_.LET___V39*/ meltfptr[31];;

        MELT_LOCATION("warmelt-macro.melt:8197:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_HEAD__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XMSG__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XTEST__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XARGLIST__V27*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ASSFAIL_BINDING__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V39*/
        meltfptr[31] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:8191:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:8191:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_ASSERT_MSG", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_149_WARMELTmiMACRO_MEXPAND_ASSERT_MSG*/




/**** end of warmelt-macro+06.cc ****/
