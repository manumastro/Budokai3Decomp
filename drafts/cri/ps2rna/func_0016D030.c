/* Draft (not built): func_0016D030 at 0x0016D030, size 0x34, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 145 -> 110
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D030.s */

// func_0016D030 0016D030 -O2 -G0 ee-gcc 2.96: score 145 -> 110
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_0041A104;

s32 func_0016D030(void)
{
  s32 var_v0;
  if (D_0041A0D8 == 1)
  {
    var_v0 = 0;
    if (D_0041A0D0 > 0)
    {
      goto block_3;
    }
  }
  else
  {
    block_3:
    var_v0 = D_0041A104;

    return var_v0;
  }
}
