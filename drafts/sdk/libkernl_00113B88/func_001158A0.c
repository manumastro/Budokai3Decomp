/* Draft (not built): func_001158A0 at 0x001158A0, size 0xC4, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 29 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1255 -> 1135
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001158A0.s */

// func_001158A0 001158A0 -O2 -G0 ee-gcc 2.9-991111-01: score 1255 -> 1135
s32 func_00114F80(s32);                         /* extern */
s32 func_00115198(s32, s32, s32);               /* extern */
s32 func_00115478();                                /* extern */
extern s32 D_003EDCC8;

s32 func_001158A0(u32 arg0)
{
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_a2;
  s32 temp_s0;
  s32 temp_v0;
  s32 var_v0;
  temp_s0 = (arg0 >> 0xA) << 6;
  if (((s32) arg0) >= 0)
  {
    if ((arg0 & 0x3FF) == (*((s32 *) (((u8 *) temp_s0) + 8))))
    {
      if ((*((s32 *) (((u8 *) (&D_003EDCC8)) + 0x1C))) != arg0)
      {
        var_v0 = 0;
        if ((*((s32 *) (((u8 *) temp_s0) + 0xC))) & 1)
        {
          temp_v0 = func_00115478();
          temp_a1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
          temp_a2 = temp_a1 & 2;
          temp_a1_2 = temp_a1 & 0xFFFFFFFE;
          *((s64 *) (((u8 *) temp_s0) + 0x18)) = (s64) ((*((s64 *) (((u8 *) temp_s0) + 0x18))) + (temp_v0 - (*((s64 *) (((u8 *) temp_s0) + 0x10)))));
          *((s32 *) (((u8 *) temp_s0) + 0xC)) = temp_a1_2;
          var_v0 = temp_a2;
          if (var_v0 != 0)
          {
            func_00115198(temp_s0, temp_a1 & 0xFFFFFFFE, var_v0);
            func_00114F80(temp_v0);
          }
          var_v0 = 1;
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
