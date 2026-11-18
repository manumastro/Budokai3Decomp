/* Draft (not built): func_00115B20 at 0x00115B20, size 0x6C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 430 -> 340
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115B20.s */

// func_00115B20 00115B20 -O2 -G0 ee-gcc 2.9-991111-01: score 430 -> 340
s32 func_00115478();                                /* extern */

s64 func_00115B20(u32 arg0)
{
  s32 new_var2;
  s32 new_var;
  s32 temp_s1;
  s64 var_s0;
  temp_s1 = (arg0 >> 0xA) << 6;
  if (((s32) arg0) >= 0)
  {
    new_var = temp_s1;
    new_var2 = *((s32 *) (((u8 *) new_var) + 0xC));
    if ((arg0 & 0x3FF) == (*((s32 *) (((u8 *) new_var) + 8))))
    {
      var_s0 = *((s64 *) (((u8 *) new_var) + 0x18));
      if (new_var2 & 1)
      {
        var_s0 += func_00115478() - (*((s64 *) (((u8 *) new_var) + 0x10)));
      }
      return var_s0;
    }
    goto block_4;
  }
  block_4:
  return -1;

}
