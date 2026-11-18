/* Draft (not built): func_0019ABA0 at 0x0019ABA0, size 0xF0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 45 -> 10
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019ABA0.s */

// func_0019ABA0 0019ABA0 -O2 -G0 ee-gcc 2.96: score 45 -> 10
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00199818(s32, s32, s32);       /* extern */

s32 func_0019ABA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *temp_s0;
  if (func_0018D870() != 0)
  {
    return func_0018D650(0, 0xFF000129);
  }
  temp_s0 = arg0 + 0xCC0;
  if (arg1 != 0)
  {
    *((s32 *) (((u8 *) temp_s0) - -0x2DC)) = arg3;
    *((s32 *) (((u8 *) temp_s0) + 0x2D8)) = arg2;
    *((s32 *) (((u8 *) temp_s0) + 0x2C8)) = arg1;
    func_00199818(arg0, 0xF, 5);
    func_00199818(arg0, 0x47, 0);
  }
  else
  {
    func_00199818(arg0, 0x47, 1);
    func_00199818(arg0, 0xF, 1);
    *((s32 *) (((u8 *) temp_s0) + 0x2DC)) = arg3;
    *((s32 *) (((u8 *) temp_s0) + 0x2D8)) = arg2;
    *((s32 *) (((u8 *) temp_s0) + 0x2C8)) = 0;
  }
  return 0;
}
