/* Draft (not built): func_0010AB58 at 0x0010AB58, size 0x7C, segment sdk/libkernl_0010AA60 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 285 -> 215
 * Original: asm/nonmatchings/sdk/libkernl_0010AA60/func_0010AB58.s */

// func_0010AB58 0010AB58 -O2 -G0 ee-gcc 2.9-991111-01: score 285 -> 215
s32 DI();                                       /* extern */
s32 EI();                                       /* extern */
s32 _sceSDC(s32, s32);                          /* extern */

void func_0010AB58(s32 arg0, s32 arg1)
{
  int new_var;
  s32 temp_s0;
 do { new_var = 0x10000; temp_s0 = M2C_ERROR() & new_var; if (temp_s0 != 0) { DI(); } } while (0);
  _sceSDC(arg0 & 0xFFFFFFC0, arg1 & 0xFFFFFFC0);
  if (temp_s0 != 0)
  {
    EI();
  }
}
