/* Draft (not built): func_0010AC98 at 0x0010AC98, size 0x7C, segment sdk/libkernl/ico_cache (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 285 -> 215
 * Original: asm/nonmatchings/sdk/libkernl/ico_cache/func_0010AC98.s */

// func_0010AC98 0010AC98 -O2 -G0 ee-gcc 2.9-991111-01: score 285 -> 215
s32 DI();                                       /* extern */
s32 EI();                                       /* extern */
s32 _sceIDC(s32, s32);                          /* extern */

void func_0010AC98(s32 arg0, s32 arg1)
{
  s32 temp_s0;
 do { } while (0);
  temp_s0 = M2C_ERROR() & 0x10000;
  if (temp_s0 != 0)
  {
    DI();
  }
  _sceIDC(arg0 & 0xFFFFFFC0, arg1 & 0xFFFFFFC0);
  if (temp_s0 != 0)
  {
    EI();
  }
}
