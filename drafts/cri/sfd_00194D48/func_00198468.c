/* Draft (not built): func_00198468 at 0x00198468, size 0x88, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 250 -> 110
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198468.s */

// func_00198468 00198468 -O2 -G0 ee-gcc 2.96: score 250 -> 110
s32 func_0018D650(s32, s32, s32);           /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001984F0(s32, s32, s32);               /* extern */

s32 func_00198468(s32 arg0, s32 arg1, s32 arg2)
{
  unsigned int new_var;
  if (arg1 != 0)
  {
    new_var = arg2;
    if (arg2 > 0)
    {
      if (func_0018D870() != 0)
      {
        return func_0018D650(0, 0xFF000165, new_var);
      }
      func_001984F0(arg0 + 0x132C, arg1, arg2);
      goto block_6;
    }
    return 0;
  }
  block_6:
  return new_var = 0;

}
