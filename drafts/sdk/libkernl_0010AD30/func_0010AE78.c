/* Draft (not built): func_0010AE78 at 0x0010AE78, size 0x68, segment sdk/libkernl_0010AD30 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 485 -> 415
 * Original: asm/sdk/libkernl_0010AD30.s */

// func_0010AE78 0010AE78 -O2 -G0 ee-gcc 2.9-991111-01: score 485 -> 415
s32 DI();                                       /* extern */
s32 EI();                                       /* extern */
s32 _EnableDmac(s32);                               /* extern */

s32 func_0010AE78(s32 arg0)
{
  s32 temp_s0;
  s32 temp_s1;
  if (temp_s0)
  {
    temp_s0 = M2C_ERROR() & 0x10000;
  }
  else
  {
    temp_s0 = M2C_ERROR() & 0x10000;
  }
  if (temp_s0 != 0)
  {
    DI();
  }
  temp_s1 = _EnableDmac(arg0);
  M2C_SYNC();
  if (temp_s0 != 0)
  {
    EI();
  }
  return temp_s1;
}
