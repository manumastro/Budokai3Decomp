/* Draft (not built): func_00155E40 at 0x00155E40, size 0x158, segment cri/adx_001554B8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 4965 -> 3495
 * Original: asm/nonmatchings/cri/adx_001554B8/func_00155E40.s */

// func_00155E40 00155E40 -O2 -G0 ee-gcc 2.96: score 4965 -> 3495
s32 func_00128040(s32, void *, s32);        /* extern */
s32 func_00155DA0();                                /* extern */
extern s32 D_00402550;

s32 func_00155E40(s32 arg0, s32 arg1, s32 arg2, s32 *arg3)
{
  s32 *temp_a1_2;
  s32 *temp_s3;
  s32 *temp_s6;
  s32 *var_a0_2;
  s32 temp_v0;
  s32 temp_v0_3;
  s32 var_v1;
  s32 var_v1_3;
  u16 *temp_a1;
  u16 *var_a0;
  u16 temp_v0_2;
  int var_s0;
  u16 var_v1_2;
  u8 *temp_s1;
  temp_s3 = M2C_ERROR();
  temp_s6 = M2C_ERROR();
  temp_v0 = func_00155DA0();
  if (temp_v0 >= 0)
  {
    temp_s1 = *((&D_00402550) + (arg0 * 4));
    if ((*((s8 *) (((u8 *) temp_s1) + 0xF))) != 1)
    {
      var_s0 = *((u16 *) (((u8 *) temp_s1) + 0x118));
      temp_a1 = temp_s1 + 0x11A;
      if (arg1 > 0)
      {
        var_a0 = temp_a1;
        var_v1 = arg1;
        do
        {
          temp_v0_2 = *var_a0;
          var_a0 += 2;
          var_v1 -= 1;
          var_s0 += temp_v0_2;
        }
        while (var_v1 != 0);
      }
      var_v1_2 = *((arg1 * 2) + temp_a1);
    }
    else
    {
      var_s0 = (u16) ((s32) (*((u16 *) (((u8 *) temp_s1) + 0x118))));
      temp_a1_2 = temp_s1 + 0x11C;
      if (arg1 > 0)
      {
        var_a0_2 = temp_a1_2;
        var_v1_3 = arg1;
        do
        {
          temp_v0_3 = *var_a0_2;
          var_a0_2 += 4;
          var_v1_3 -= 1;
          var_s0 += temp_v0_3;
        }
        while (var_v1_3 != 0);
      }
      var_v1_2 = (u16) (*((arg1 * 4) + temp_a1_2));
    }
    *temp_s3 = (s32) var_v1_2;
    func_00128040(arg2, temp_s1 + 0x10, 0x100);
    *arg3 = *((s32 *) (((u8 *) temp_s1) + 0x110));
    *temp_s6 = (*((s32 *) (((u8 *) temp_s1) + 0x114))) + var_s0;
    return temp_v0;
  }
  *arg3 = 0;
  *temp_s6 = -1;
  *temp_s3 = -1;
  return temp_v0;
}
