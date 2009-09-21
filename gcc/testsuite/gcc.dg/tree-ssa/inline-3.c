/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-einline2" } */
/* { dg-options "-O2 -fdump-tree-einline2 -fpie" { target { ! nonpic } } } */
extern void inlined ();
void inline_me_too (void);
void inline_through_me (void (*ptr)(void));
void
inline_me (void)
{
  inlined();
}

void main(void)
{
  inline_through_me (inline_me);
  inline_through_me (inline_me_too);
}
void
inline_through_me (void (*ptr)(void))
{
  ptr();
}

void
inline_me_too (void)
{
  inlined();
}
/* { dg-final { scan-tree-dump-times "Inlining inline_me " 1 "einline2"} } */
/* { dg-final { scan-tree-dump-times "Inlining inline_me_too " 1 "einline2"} } */
/* { dg-final { cleanup-tree-dump "einline2" } } */
