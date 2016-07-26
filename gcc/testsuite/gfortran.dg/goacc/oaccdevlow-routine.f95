! Check offloaded function's attributes and classification for OpenACC
! routine.

! { dg-additional-options "-O2" }
! { dg-additional-options "-fdump-tree-ompexp" }
! { dg-additional-options "-fdump-tree-oaccdevlow" }

subroutine ROUTINE
  !$acc routine worker
  integer, parameter         :: n = 1024
  integer, dimension (0:n-1) :: a, b, c
  integer                    :: i

  call setup(a, b)

  !$acc loop
  do i = 0, n - 1
     c(i) = a(i) + b(i)
  end do
end subroutine ROUTINE

! Check the offloaded function's attributes.
! { dg-final { scan-tree-dump-times "(?n)__attribute__\\(\\(omp declare target, oacc function \\(0 0, 1 0, 1 0\\)\\)\\)" 1 "ompexp" } }

! Check the offloaded function's classification and compute dimensions (will
! always be [1, 1, 1] for target compilation).
! { dg-final { scan-tree-dump-times "(?n)Function is OpenACC routine level 1" 1 "oaccdevlow" } }
! { dg-final { scan-tree-dump-times "(?n)Compute dimensions \\\[1, 1, 1\\\]" 1 "oaccdevlow" } }
