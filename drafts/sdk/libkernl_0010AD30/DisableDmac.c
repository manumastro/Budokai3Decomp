/* Draft (not built): DisableDmac at 0x0010AE10, size 0x68, segment sdk/libkernl_0010AD30 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 485 -> 415
 * Original: asm/sdk/libkernl_0010AD30.s */

// DisableDmac 0010AE10 -O2 -G0 ee-gcc 2.9-991111-01: score 485 -> 415
s32 DI();                                       /* extern */
s32 EI();                                       /* extern */
s32 _DisableDmac(s32);                              /* extern */

s32 DisableDmac(s32 arg0)
{
  s32 temp_s0;
  s32 temp_s1;
 do { temp_s0 = M2C_ERROR() & 0x10000; } while (0);
  if (temp_s0 != 0)
  {
    DI();
  }
  temp_s1 = _DisableDmac(arg0);
  M2C_SYNC();
  if (temp_s0 != 0)
  {
    EI();
  }
  return temp_s1;
}
