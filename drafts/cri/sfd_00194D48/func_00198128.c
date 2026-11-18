/* Draft (not built): func_00198128 at 0x00198128, size 0x6C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 580 -> 265
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198128.s */

// func_00198128 00198128 -O2 -G0 ee-gcc 2.96: score 580 -> 265
s32 func_0018D650(s32, s32, s32, s32); /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019C0D8(s32, s32, s32, s32);  /* extern */

void func_00198128(s32 arg0, s32 arg1)
{
  int new_var;
  if (func_0018D870() != 0)
  {
    new_var = 0;
    func_0018D650(new_var, 0xFF000134, 9, new_var = arg1);
    return;
  }
  func_0019C0D8(arg0, 0, 9, arg1);
}
