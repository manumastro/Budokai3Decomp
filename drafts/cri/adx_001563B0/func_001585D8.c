/* Draft (not built): func_001585D8 at 0x001585D8, size 0x24, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 55 -> 15
 * Original: asm/nonmatchings/cri/adx_001563B0/func_001585D8.s */

// func_001585D8 001585D8 -O2 -G0 ee-gcc 2.96: score 55 -> 15
extern s32 D_0047E970;
extern s32 D_0047E978;

void func_001585D8(s32 arg0, int arg1, s32 arg2, int arg3)
{
  *((s32 *) (((u8 *) (&D_0047E970)) + 0)) = arg0;
  *((s32 *) (((u8 *) (&D_0047E970)) + 4)) = arg1;
  *((s32 *) (((u8 *) (&D_0047E978)) + 4)) = arg3;
  if (1)
  {
 do { } while (0);
  }
  *((s32 *) (((u8 *) (&D_0047E978)) + 0)) = arg2;
}
