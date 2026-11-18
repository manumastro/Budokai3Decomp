/* Draft (not built): func_0016DA38 at 0x0016DA38, size 0x3C, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 140 -> 130
 * Original: asm/nonmatchings/cri/sj/func_0016DA38.s */

// func_0016DA38 0016DA38 -O2 -G0 ee-gcc 2.96: score 140 -> 130
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

s32 func_0016DA38(s32 arg0, s32 arg1)
{
  s32 var_v0;
  int new_var;
  if ((D_0041A0D8 != 1) || ((var_v0 = 0, D_0041A0D0 > 0)))
  {
    new_var = 4;
    var_v0 = *((s32 *) (((u8 *) (*((u8 **) (((u8 *) (arg0 + (arg1 * new_var))) + 8)))) + 4));
  }
  return var_v0;
}
