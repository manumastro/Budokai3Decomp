/* Draft (not built): func_0018B648 at 0x0018B648, size 0x58, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2020 -> 990
 * Original: asm/nonmatchings/cri/sfd/func_0018B648.s */

// func_0018B648 0018B648 -O1 -G0 ee-gcc 2.96: score 2020 -> 990
s32 func_0019C0D8(s32, s32, s32);               /* extern */

s32 func_0018B648(s32 arg0, s32 arg1, s32 arg2)
{
  s32 new_var;
  u8 *temp_t0;
  int new_var2;
  new_var2 = arg0 + 0x1280;
  temp_t0 = new_var2 + (arg1 * 0x74);
  new_var = *((s32 *) (((u8 *) temp_t0) + 0x4C));
  if ((*((s32 *) (((u8 *) temp_t0) + 4))) == 0)
  {
    if (1)
    {
      return func_0019C0D8(new_var, 0xB, arg2);
    }
  }
  return 0;
}
