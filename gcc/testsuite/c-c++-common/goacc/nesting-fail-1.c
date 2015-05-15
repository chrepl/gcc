extern int i;

/* While the OpenACC specification does allow for certain kinds of
   nesting, we don't support many of these yet.  */
void
f_acc_parallel (void)
{
#pragma acc parallel
  {
#pragma acc parallel /* { dg-error "nested parallel region" } */
    ;
#pragma acc kernels /* { dg-error " kernels construct inside of parallel" } */
    ;
#pragma acc data /* { dg-error "data construct inside of parallel region" } */
    ;
#pragma acc update host(i) /* { dg-error "update construct inside of parallel region" } */
#pragma acc enter data copyin(i) /* { dg-error "enter/exit data construct inside of parallel region" } */
#pragma acc exit data delete(i) /* { dg-error "enter/exit data construct inside of parallel region" } */
  }
}

/* While the OpenACC specification does allow for certain kinds of
   nesting, we don't support many of these yet.  */
void
f_acc_kernels (void)
{
#pragma acc kernels
  {
#pragma acc parallel /* { dg-error "nested parallel region" } */
    ;
#pragma acc kernels /* { dg-error "nested kernels region" } */
    ;
#pragma acc data /* { dg-error "data construct inside of kernels region" } */
    ;
#pragma acc update host(i) /* { dg-error "update construct inside of kernels region" } */
#pragma acc enter data copyin(i) /* { dg-error "enter/exit data construct inside of kernels region" } */
#pragma acc exit data delete(i) /* { dg-error "enter/exit data construct inside of kernels region" } */
  }
}

// { dg-error "parallel construct inside of parallel" "" { target *-*-* } 10 }

// { dg-error "parallel construct inside of kernels" "" { target *-*-* } 29 }
// { dg-error "kernels construct inside of kernels" "" { target *-*-* } 31 }
