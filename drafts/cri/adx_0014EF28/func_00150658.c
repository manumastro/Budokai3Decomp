/* Draft (not built): func_00150658 at 0x00150658, size 0x30, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 11 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 340 -> 40
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00150658.s */

// func_00150658 00150658 -O2 -G0 ee-gcc 2.96: score 340 -> 40


s32 func_00150658(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3)
{
  s32 new_var;
  new_var = *((s32 *) (((u8 *) arg0) + 0x3C));
  *arg1 = *((s32 *) (((u8 *) arg0) + 0x8C));
  *arg2 = (*((s32 *) (((u8 *) arg0) + 0x40))) - (*((s32 *) (((u8 *) arg0) + 0x8C)));
  *arg3 = (*((s32 *) (((u8 *) arg0) + 0x18))) - (*((s32 *) (((u8 *) arg0) + 0x88)));
  return new_var;
}
