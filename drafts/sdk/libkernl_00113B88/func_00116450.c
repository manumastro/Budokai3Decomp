/* Draft (not built): func_00116450 at 0x00116450, size 0x54, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 445 -> 5
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00116450.s */

// func_00116450 00116450 -O2 -G0 ee-gcc 2.9-991111-01: score 445 -> 5
extern s32 *D_003EDCE8;
extern u32 D_003EDCEC;
extern s32 D_00478708;

s32 func_00116450(s32 arg0)
{
  s32 *var_a1;
  s32 var_a0;
  int new_var;
  u32 var_v0;
  var_a0 = arg0;
  if (!(var_a0 >= 0))
  {
    var_a1 = &D_00478708;
    var_a0 &= 0x7FFFFFFF;
    var_v0 = 0x20;
  }
  else
  {
    var_a1 = D_003EDCE8;
    var_v0 = D_003EDCEC;
  }
  new_var = -0x69;
  if (((u32) var_a0) >= var_v0)
  {
    return new_var;
  }
  *((var_a0 * 0x10) + var_a1) = 0;
  return 0;
}
