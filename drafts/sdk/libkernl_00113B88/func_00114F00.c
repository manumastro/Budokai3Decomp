/* Draft (not built): func_00114F00 at 0x00114F00, size 0x7C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 27 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 200 -> 105
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114F00.s */

// func_00114F00 00114F00 -O2 -G0 ee-gcc 2.9-991111-01: score 200 -> 105
s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_00114C10(s32);                         /* extern */

s32 func_00114F00(void)
{
  s32 temp_s0;
  int new_var2;
  s32 temp_v0;
  s32 *new_var3;
  int new_var;
  s32 var_v0;
  temp_s0 = DI();
  temp_v0 = *((s32 *) 0x10001010);
  if (!(temp_v0 & 0x80))
  {
    var_v0 = 0;
    if (temp_s0 != 0)
    {
      EI();
      return 0;
    }
    return var_v0;
  }
  new_var2 = temp_v0 & 0xFFFFF37F;
  func_00114C10(new_var2);
  var_v0 = 1;
  temp_v0 = temp_s0 != 0;
  new_var3 = &temp_v0;
  new_var = *new_var3;
  if (new_var)
  {
    EI();
    var_v0 = 1;
  }
  return var_v0;
}
