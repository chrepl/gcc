/* { dg-do run { xfail *-*-* } } */
/* { dg-options "-fcheck-pointer-bounds -mmpx" } */


#define XFAIL

#include "mpx-check.h"

int buf[100];
int buf1[10];

int rd (int *t1, int *t2, int *t3, int *t4, int *p, int i)
{
  int res = p[i];
  printf ("%d\n", res);
  return res;
}

int mpx_test (int argc, const char **argv)
{
  int *p;

  rd (buf1, buf1, buf1, buf1, buf, 100);

  return 0;
}
