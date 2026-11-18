/* Draft (not built): mwPlyGetInputSj at 0x001843C0, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 360 -> 260
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetInputSj.s */

// mwPlyGetInputSj 001843C0 -O1 -G0 ee-gcc 2.96: score 360 -> 260
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00466678;

s32 mwPlyGetInputSj(u8 *arg0)
{
  s32 new_var;
  new_var = func_00183B38();
  if (new_var != 0)
  {
  }
  func_001870E8(&D_00466678);
  return *((s32 *) (((u8 *) arg0) + 0x1D4));
  return 0;
}
