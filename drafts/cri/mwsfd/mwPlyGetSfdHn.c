/* Draft (not built): mwPlyGetSfdHn at 0x00183650, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 360 -> 260
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetSfdHn.s */

// mwPlyGetSfdHn 00183650 -O1 -G0 ee-gcc 2.96: score 360 -> 260
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00466158;

s32 mwPlyGetSfdHn(u8 *arg0)
{
  if (func_00183B38() != 0)
  {
  }
  func_001870E8(&D_00466158);
  return *((s32 *) (((u8 *) arg0) + 0x40));
  return 0;
}
