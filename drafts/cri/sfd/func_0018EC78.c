/* Draft (not built): func_0018EC78 at 0x0018EC78, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 945 -> 570
 * Original: asm/nonmatchings/cri/sfd/func_0018EC78.s */

// func_0018EC78 0018EC78 -O1 -G0 ee-gcc 2.96: score 945 -> 570
s32 func_0018B840();                                /* extern */
s32 func_0018B860(s32);                             /* extern */

s32 func_0018EC78(s32 arg0, s32 arg1)
{
  int new_var;
  if (arg1 == 0x80000)
  {
    if (func_0018B840() == 0)
    {
      if (new_var)
      {
        return 1;
        new_var = func_0018B860(arg0) == 0;
      }
      goto block_5;
    }
    block_5:
    return 0;

  }
  return 0;
}
