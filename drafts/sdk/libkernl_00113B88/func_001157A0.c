/* Draft (not built): func_001157A0 at 0x001157A0, size 0xAC, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1075 -> 1000
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001157A0.s */

// func_001157A0 001157A0 -O2 -G0 ee-gcc 2.9-991111-01: score 1075 -> 1000
s32 func_00114F80(s64);                         /* extern */
s32 func_00115110(s32);                         /* extern */
s64 func_00115478();                                /* extern */
extern s32 D_003EDCC8;

s32 func_001157A0(u32 arg0)
{
  s32 temp_s0;
  s32 temp_v0_2;
  s32 var_v0;
  s64 temp_v0;
  s32 new_var2;
  u8 *new_var;
  temp_s0 = (arg0 >> 0xA) << 6;
  if (((s32) arg0) >= 0)
  {
    if ((arg0 & 0x3FF) == (*((s32 *) (((u8 *) temp_s0) + 8))))
    {
      new_var = ((u8 *) temp_s0) + 0xC;
      new_var2 = *((s32 *) new_var);
      if ((*((s32 *) (((u8 *) (&D_003EDCC8)) + 0x1C))) != arg0)
      {
        var_v0 = 1;
        if (!(new_var2 & 1))
        {
          temp_v0 = func_00115478();
          *((s64 *) (((u8 *) temp_s0) + 0x10)) = temp_v0;
          temp_v0_2 = (*((s32 *) new_var)) | 1;
          *((s32 *) (((u8 *) temp_s0) + 0xC)) = temp_v0_2;
          if (temp_v0_2 & 2)
          {
            func_00115110(temp_s0);
            func_00114F80(temp_v0);
          }
          var_v0 = 0;
        }
        return var_v0;
      }
      return 0x80000010;
    }
    goto block_4;
  }
  block_4:
  return 0x80008002;

}
