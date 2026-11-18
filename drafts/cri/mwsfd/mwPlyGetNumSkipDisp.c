/* Draft (not built): mwPlyGetNumSkipDisp at 0x00181998, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 360 -> 260
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetNumSkipDisp.s */

// mwPlyGetNumSkipDisp 00181998 -O1 -G0 ee-gcc 2.96: score 360 -> 260
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00465BE8;

s32 mwPlyGetNumSkipDisp(u8 *arg0)
{
  s32 *new_var;
  int new_var2;
  if (func_00183B38() != 0)
  {
  }
  new_var = &D_00465BE8;
  func_001870E8(new_var);
  new_var2 = 0;
  return *((s32 *) (((u8 *) arg0) + 0x88));
  return new_var2;
}
