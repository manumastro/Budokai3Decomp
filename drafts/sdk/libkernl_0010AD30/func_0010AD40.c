/* Draft (not built): func_0010AD40 at 0x0010AD40, size 0x68, segment sdk/libkernl_0010AD30 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 485 -> 415
 * Original: asm/sdk/libkernl_0010AD30.s */

// func_0010AD40 0010AD40 -O2 -G0 ee-gcc 2.9-991111-01: score 485 -> 415
s32 DI();                                       /* extern */
s32 EI();                                       /* extern */
s32 _DisableIntc(s32);                              /* extern */

s32 func_0010AD40(s32 arg0)
{
  s32 temp_s0;
  s32 temp_s1;
 do { temp_s0 = 0x10000; temp_s0 = M2C_ERROR() & temp_s0; if (temp_s0 != 0) { DI(); } temp_s1 = _DisableIntc(arg0); M2C_SYNC(); if (temp_s0 != 0) { EI(); } return temp_s1; } while (0);
}
