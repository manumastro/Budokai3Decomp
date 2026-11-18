/* Draft (not built): mwSfdSetOutPan at 0x00184130, size 0x70, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2015 -> 1830
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdSetOutPan.s */

// mwSfdSetOutPan 00184130 -O1 -G0 ee-gcc 2.96: score 2015 -> 1830
s32 func_001831E8(s32, s32, s32);               /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32, s32);         /* extern */
extern s32 D_004665A8;

void mwSfdSetOutPan(s32 arg0, s32 arg1, s32 arg2)
{
  if (func_00183B38() == 0)
  {
    func_001870E8(&D_004665A8, arg1, arg2);
    arg2--;
    return;
  }
  arg2++;
  func_001831E8(arg0, arg1, arg2);
}
