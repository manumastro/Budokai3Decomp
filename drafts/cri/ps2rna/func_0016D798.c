/* Draft (not built): func_0016D798 at 0x0016D798, size 0x30, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 535 -> 220
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D798.s */

// func_0016D798 0016D798 -O2 -G0 ee-gcc 2.96: score 535 -> 220
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

s32 func_0016D798(u8 *arg0)
{
  s32 var_v0;
  if ((D_0041A0D8 != 1) || ((var_v0 = 0, D_0041A0D0 > 0)))
  {
    var_v0 = *((s32 *) (((u8 *) arg0) + 0x34));
    return var_v0;
  }
}
