/* Draft (not built): func_00115F00 at 0x00115F00, size 0x4C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; then decomp-permuter: score 430 -> 355
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115F00.s */

// func_00115F00 00115F00 -O1 -G0 ee-gcc 2.9-991111-01: score 430 -> 355
extern s32 D_00478300;
extern s32 *D_00478700;

s32 func_00115F00(void)
{
  s32 var_a0;
  u8 **var_v0;
  u8 *var_v1;
  var_a0 = 0x3F;
  D_00478700 = &D_00478300;
  var_v1 = &D_00478300;
  var_v1 = var_v1 + 0x400;
  var_v0 = (&D_00478300) + 0x3F0;
  do
  {
    *var_v0 = var_v1;
    var_a0 -= 1;
    var_v0 -= 0x10;
    var_v1 -= 0x10;
  }
  while (var_a0 >= 0);
  return 0;
  *((s32 *) (((u8 *) (&D_00478300)) + 0x3F0)) = 0;
}
