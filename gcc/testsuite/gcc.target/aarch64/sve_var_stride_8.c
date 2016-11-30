/* { dg-do compile } */
/* { dg-options "-O2 -ftree-vectorize -march=armv8-a+sve" } */

#define TYPE long
#define SIZE 257

void
f (TYPE *x, TYPE *y, long n __attribute__((unused)), long m)
{
  for (int i = 0; i < SIZE; ++i)
    x[i] += y[i * m];
}

/* { dg-final { scan-assembler {\tld1d\tz[0-9]+} } } */
/* { dg-final { scan-assembler {\tst1d\tz[0-9]+} } } */
/* { dg-final { scan-assembler {\tldr\tx[0-9]+} } } */
/* { dg-final { scan-assembler {\tstr\tx[0-9]+} } } */
/* Should multiply by (257-1)*8 rather than (VF-1)*8.  */
/* { dg-final { scan-assembler-times {\tadd\tx[0-9]+, x0, 2048} 1 } } */
/* { dg-final { scan-assembler-times {lsl\tx[0-9]+, x[0-9]+, 11} 1 } } */
/* { dg-final { scan-assembler {\tcmp\tx[0-9]+, 0} } } */
/* { dg-final { scan-assembler-not {\tcmp\tw[0-9]+, 0} } } */
/* { dg-final { scan-assembler-times {\tcsel\tx[0-9]+} 2 } } */
/* Two range checks only; doesn't matter whether n is zero.  */
/* { dg-final { scan-assembler {\tcmp\t} } } */
/* { dg-final { scan-assembler-times {\tccmp\t} 1 } } */
