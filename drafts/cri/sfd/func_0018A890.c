/* Draft (not built): func_0018A890 at 0x0018A890, size 0x70, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2460 -> 1500
 * Original: asm/nonmatchings/cri/sfd/func_0018A890.s */

// func_0018A890 0018A890 -O1 -G0 ee-gcc 2.96: score 2460 -> 1500
s32 func_0018A900(void *, s32 *, s32);          /* extern */
s32 func_0018D650(s32, s32 *, s32);         /* extern */

s32 func_0018A890(s32 arg0, u8 *arg1, s32 arg2)
{
  int new_var3;
  int new_var2;
  u8 *new_var;
  s32 *temp_v1;
  new_var3 = 0x1280;
  temp_v1 = (arg0 + new_var3) + (arg2 * 0x74);
  new_var = ((u8 *) arg1) + 4;
  new_var2 = 4;
  if ((*temp_v1) != new_var2)
  {
    return func_0018D650(0xFF000409, temp_v1, new_var2);
  }
  func_0018A900(temp_v1 + 0x10, temp_v1, (*((s32 *) new_var)) != 0);
  return 0;
}
