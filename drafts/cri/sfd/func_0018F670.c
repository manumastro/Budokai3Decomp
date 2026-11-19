/* Draft (not built): func_0018F670 at 0x0018F670, size 0x4C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 460 -> 420
 * Original: asm/nonmatchings/cri/sfd/func_0018F670.s */

// func_0018F670 0018F670 -O2 -G0 ee-gcc 2.96: score 460 -> 420
s32 func_0018F6C0();                                /* extern */

s32 func_0018F670(u8 *arg0)
{
  s32 var_v0;
  var_v0 = 0;
  if ((*((s32 *) (((u8 *) arg0) + 0x31E8))) != 0)
  {
 do { if (func_0018F6C0() <= 0) { var_v0 = (*((s32 *) (((u8 *) arg0) + 0x31E8))) + 0x8A0; return var_v0; } return 0; } while (0);
  }
  return var_v0;
}
