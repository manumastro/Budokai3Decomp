/* Draft (not built): func_00114E40 at 0x00114E40, size 0x2C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 410 -> 325
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114E40.s */

// func_00114E40 00114E40 -O2 -G0 ee-gcc 2.9-991111-01: score 410 -> 325
extern s32 D_003EDCD0;

s32 func_00114E40(void)
{
  int new_var2;
  int new_var3;
  int new_var;
  new_var = 0x10001010;
  if (D_003EDCD0 < 0)
  {
    return 0x80008001;
  }
  new_var = 3;
  new_var3 = new_var;
  return new_var2 = (*((s32 *) new_var3)) & new_var;
}
