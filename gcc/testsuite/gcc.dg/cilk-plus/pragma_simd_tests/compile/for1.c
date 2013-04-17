/* { dg-do compile } */
/* { dg-options "-O3 -std=c99 -fcilkplus -fopenmp" } */

int *a, *b, *c;

void foo()
{
  int i, j;

  // The initialization shall declare or initialize a *SINGLE* variable.
#pragma simd
  for (i=0, j=5; i < 1000; i++) // { dg-error "expected ';' before ','" }
    a[i] = b[j];

  // Declaration and initialization is allowed.
#pragma simd
  for (int i=0; i < 1000; i++)
    a[i] = b[j];

  // Empty initialization is not allowed.
#pragma simd
  for (; i < 5; ++i)		// { dg-error "expected iteration decl" }
    a[i] = i;

  // Empty condition is not allowed.
#pragma simd
  for (i=0; ; ++i)		/* { dg-error "missing condition" } */
    a[i] = i;

  // Empty increment is not allowed.
#pragma simd
  for (i=0; i < 1234; )		/* { dg-error "missing increment" } */
    a[i] = i*2;

#pragma simd
  i = 5; /* { dg-error "for statement expected after pragma simd" } */

  // Initialization variables must be either integral or pointer types.
  struct S {
    int i;
  };
#pragma simd
  for (struct S ss = { 0 }; ss.i <= 1000; ++ss.i) /* { dg-error "initialization variable must be of integral or pointer type" } */
    a[ss.i] = b[ss.i];

  // Pointers are OK.
  #pragma simd
  for (int *i=c; i < &c[100]; ++i)
    *a = '5';

  // Condition of '==' is not allowed.
#pragma simd
  for (i=j; i == 5; ++i) /* { dg-error "invalid controlling predicate" } */
    a[i] = b[i];

  // The LHS or RHS of the condition must be the initialization variable.
#pragma simd
  for (i=0; i+j < 1234; ++i) /* { dg-error "invalid controlling predicate" } */
    a[i] = b[i];  

  // Likewise.
#pragma simd
  for (i=0; 1234 < i + j; ++i) /* { dg-error "invalid controlling predicate" } */
    a[i] = b[i];  

  // Likewise, this is ok.
#pragma simd
  for (i=0; 1234 + j < i; ++i)
    a[i] = b[i];

  // There is no talk of casts in the specs.  Assume they are not allowed.
#pragma simd
  for (i=0; (char)i < 1234; ++i) /* { dg-error "invalid controlling predicate" } */
    a[i] = b[i];

  // ?? This condition gets folded into "i != 0" by
  // c_parser_cilk_for_statement().  Does this count as a "!=", or is
  // this disallowed?  Assume it is allowed.
#pragma simd
  for (i=100; i; --i)
    a[i] = b[i];

  // Increment must be on the induction variable.
#pragma simd
  for (i=0; i < 100; j++) /* { dg-error "invalid increment expression" } */
    a[i] = b[i];

  // Likewise.
#pragma simd
  for (i=0; i < 100; j = i + 1) /* { dg-error "invalid increment expression" } */
    a[i] = b[i];

  // Likewise.
#pragma simd
  for (i=0; i < 100; i = j + 1) /* { dg-error "invalid increment expression" } */
    a[i] = b[i];

#pragma simd
  for (i=0; i < 100; i = i + 5)
    a[i] = b[i];

  // Only PLUS and MINUS increments are allowed.
#pragma simd
  for (i=0; i < 100; i *= 5) /* { dg-error "invalid increment expression" } */
    a[i] = b[i];

#pragma simd
  for (i=0; i < 100; i -= j)
    a[i] = b[i];

#pragma simd
  for (i=0; i < 100; i = i + j)
    a[i] = b[i];

#pragma simd
  for (i=0; i < 100; i = j + i)
    a[i] = b[i];

#pragma simd
  for (i=0; i < 100; ++i, ++j) /* { dg-error "invalid increment expression" } */
    a[i] = b[i];

#pragma simd
  for (int *point=0; point < b; ++point)
    *point = 555;

#pragma simd
  for (int *point=0; point > b; --point)
    *point = 555;
}
