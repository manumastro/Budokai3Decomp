/* Draft (not built): func_00114920 at 0x00114920, size 0x70, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 720 -> 70
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114920.s */

// func_00114920 00114920 -O2 -G0 ee-gcc 2.9-991111-01: score 720 -> 70
s32 ExecPS2(s32, s32, s32, s32);                /* extern */
s32 func_00114800(s32 *, s32, s32);         /* extern */
s32 func_00114918();                            /* extern */
extern s32 D_003ECA60;
extern s32 D_0045D9F0;

void func_00114920(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *new_var;
  func_00114800(&D_0045D9F0, arg2, arg3);
  func_00114918();
  new_var = &arg2;
  ExecPS2(arg0, arg1, *new_var, D_003ECA60 + 4);
}
