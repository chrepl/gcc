/* Area:	ffi_call, closure_call
   Purpose:	Check structure passing with different structure size.
		Depending on the ABI. Check overlapping.
   Limitations:	none.
   PR:		none.
   Originator:	<andreast@gcc.gnu.org> 20030828	 */

/* { dg-do run } */
#include "ffitest.h"

typedef struct cls_struct_6byte {
  unsigned short a;
  unsigned short b;
  unsigned char c;
  unsigned char d;
} cls_struct_6byte;

cls_struct_6byte cls_struct_6byte_fn(struct cls_struct_6byte a1,
			    struct cls_struct_6byte a2)
{
  struct cls_struct_6byte result;

  result.a = a1.a + a2.a;
  result.b = a1.b + a2.b;
  result.c = a1.c + a2.c;
  result.d = a1.d + a2.d;

  printf("%d %d %d %d %d %d %d %d: %d %d %d %d\n", a1.a, a1.b, a1.c, a1.d,
	 a2.a, a2.b, a2.c, a2.d, 
	 result.a, result.b, result.c, result.d);

  return  result;
}

static void 
cls_struct_6byte_gn(ffi_cif* cif, void* resp, void** args, void* userdata)
{   
  
  struct cls_struct_6byte a1, a2;

  a1 = *(struct cls_struct_6byte*)(args[0]);
  a2 = *(struct cls_struct_6byte*)(args[1]);

  *(cls_struct_6byte*)resp = cls_struct_6byte_fn(a1, a2);
}

int main (void)
{
  ffi_cif cif;
  static ffi_closure cl;
  ffi_closure *pcl = &cl;
  void* args_dbl[5];
  ffi_type* cls_struct_fields[5];
  ffi_type cls_struct_type;
  ffi_type* dbl_arg_types[5];

  cls_struct_type.size = 0;
  cls_struct_type.alignment = 0;
  cls_struct_type.type = FFI_TYPE_STRUCT;
  cls_struct_type.elements = cls_struct_fields;

  struct cls_struct_6byte g_dbl = { 127, 120, 1, 128 };
  struct cls_struct_6byte f_dbl = { 12, 128, 9, 127 };
  struct cls_struct_6byte res_dbl;
  
  cls_struct_fields[0] = &ffi_type_ushort;
  cls_struct_fields[1] = &ffi_type_ushort;
  cls_struct_fields[2] = &ffi_type_uchar;
  cls_struct_fields[3] = &ffi_type_uchar;
  cls_struct_fields[4] = NULL;
  
  dbl_arg_types[0] = &cls_struct_type;
  dbl_arg_types[1] = &cls_struct_type;
  dbl_arg_types[2] = NULL;
  
  CHECK(ffi_prep_cif(&cif, FFI_DEFAULT_ABI, 2, &cls_struct_type, 
		     dbl_arg_types) == FFI_OK);

  args_dbl[0] = &g_dbl;
  args_dbl[1] = &f_dbl;
  args_dbl[2] = NULL;

  ffi_call(&cif, FFI_FN(cls_struct_6byte_fn), &res_dbl, args_dbl);
  /* { dg-output "127 120 1 128 12 128 9 127: 139 248 10 255" } */
  CHECK( res_dbl.a == (g_dbl.a + f_dbl.a));
  CHECK( res_dbl.b == (g_dbl.b + f_dbl.b));
  CHECK( res_dbl.c == (g_dbl.c + f_dbl.c));
  CHECK( res_dbl.d == (g_dbl.d + f_dbl.d));

  CHECK(ffi_prep_closure(pcl, &cif, cls_struct_6byte_gn, NULL) == FFI_OK);
  
  res_dbl = ((cls_struct_6byte(*)(cls_struct_6byte, cls_struct_6byte))(pcl))(g_dbl, f_dbl);
  /* { dg-output "\n127 120 1 128 12 128 9 127: 139 248 10 255" } */
  CHECK( res_dbl.a == (g_dbl.a + f_dbl.a));
  CHECK( res_dbl.b == (g_dbl.b + f_dbl.b));
  CHECK( res_dbl.c == (g_dbl.c + f_dbl.c));
  CHECK( res_dbl.d == (g_dbl.d + f_dbl.d));

  exit(0);
}
