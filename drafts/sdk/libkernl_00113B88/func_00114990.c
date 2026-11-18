/* Draft (not built): func_00114990 at 0x00114990, size 0x48, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 15 -> 5
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114990.s */

// func_00114990 00114990 -O2 -G0 ee-gcc 2.9-991111-01: score 15 -> 5
s32 LoadExecPS2(s32, s32, s32);                 /* extern */
s32 func_00114800();                                /* extern */
s32 func_00114918();                            /* extern */
extern s32 D_003ECA60;

void func_00114990(s32 arg1)
{
  s32 new_var;
  s32 temp_s0;
  new_var = func_00114800();
  temp_s0 = new_var;
  func_00114918();
  LoadExecPS2(temp_s0, arg1, D_003ECA60 + 4);
}
