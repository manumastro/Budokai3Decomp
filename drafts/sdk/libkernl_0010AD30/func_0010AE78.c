/* Draft (not built): func_0010AE78 at 0x0010AE78, size 0x68, segment sdk/libkernl_0010AD30 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 485 -> 415
 * Original: asm/nonmatchings/sdk/libkernl_0010AD30/func_0010AE78.s */

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

/* Similar function already in C: func_001155B8 (src/sdk/libkernl_00113B88.c), similarity 0.68.
 * It is the template below (not built). */
#if 0
s32 func_001155B8(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = DI();
    temp_s1 = func_00115548();
    if (temp_s0 != 0) {
        EI();
    }
    return temp_s1;
}
#endif
