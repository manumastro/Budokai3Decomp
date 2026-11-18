/* Draft (not built): func_0016D128 at 0x0016D128, size 0x34, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 20 -> 15
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D128.s */

// func_0016D128 0016D128 -O2 -G0 ee-gcc 2.96: score 20 -> 15
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016D128(s32 *arg1, s32 *arg2)
{
  unsigned int new_var;
  s32 *new_var2;
  new_var = 0xBB80;
  if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0))
  {
    *arg1 = 0;
    *new_var2 = new_var;
    new_var2 = arg2;
  }
}
