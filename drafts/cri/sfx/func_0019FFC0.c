/* Draft (not built): func_0019FFC0 at 0x0019FFC0, size 0x30, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 675 -> 285
 * Original: asm/nonmatchings/cri/sfx/func_0019FFC0.s */

// func_0019FFC0 0019FFC0 -O2 -G0 ee-gcc 2.96: score 675 -> 285


void func_0019FFC0(u8 *arg0, s32 *arg1, s32 *arg2)
{
  u8 *temp_a0;
  temp_a0 = arg0;
  temp_a0 = temp_a0 + 8;
  if ((*((s32 *) (((u8 *) arg0) + 8))) == 1)
  {
    *arg2 = *((s32 *) (((u8 *) temp_a0) + 8));
    return;
  }
  *arg1 = 0;
  *arg1 = *((s32 *) (((u8 *) temp_a0) + 4));
  *arg2 = 0;
}
