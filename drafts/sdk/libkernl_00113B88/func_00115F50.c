/* Draft (not built): func_00115F50 at 0x00115F50, size 0x5C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 540 -> 115
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115F50.s */

// func_00115F50 00115F50 -O2 -G0 ee-gcc 2.9-991111-01: score 540 -> 115
extern s32 D_00478700;

s32 func_00115F50(s32 arg0, s32 arg3)
{
  s32 temp_a0;
  s32 var_v0;
  var_v0 = (*((s32 (**)(s32, s32)) (((u8 *) arg3) + 8)))(((arg3 * 0x10) | (arg0 & 0xFE)) | 1, *((s32 *) (((u8 *) arg3) + 0xC)));
  if (var_v0 == 0)
  {
    var_v0 = -1;
    temp_a0 = D_00478700;
    D_00478700 = arg3;
    *((s32 *) (((u8 *) arg3) + 0)) = temp_a0;
    *((s32 *) (((u8 *) arg3) + 4)) = 0;
    return var_v0;
  }
}
