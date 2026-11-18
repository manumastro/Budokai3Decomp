/* Draft (not built): func_0016C910 at 0x0016C910, size 0x54, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1365 -> 505
 * Original: asm/nonmatchings/cri/ps2rna/func_0016C910.s */

// func_0016C910 0016C910 -O2 -G0 ee-gcc 2.96: score 1365 -> 505
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_0041A100;

void func_0016C910(u8 *arg0, unsigned long long arg1)
{
  if ((((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) && ((*((s32 *) (((u8 *) arg0) + 0x54))) != arg1)) && ((D_0041A100 != 0) || (arg1 != 1)))
  {
    *((s32 *) (((u8 *) arg0) + 0x54)) = (s32) arg1;
  }
}
