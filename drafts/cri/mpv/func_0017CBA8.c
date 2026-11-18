/* Draft (not built): func_0017CBA8 at 0x0017CBA8, size 0xA4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1085 -> 680
 * Original: asm/nonmatchings/cri/mpv/func_0017CBA8.s */

// func_0017CBA8 0017CBA8 -O2 -G0 ee-gcc 2.96: score 1085 -> 680
s32 func_0017B420(s32);                             /* extern */
s32 func_0017B5B8(s32, s32, s32);               /* extern */

s32 func_0017CBA8(u8 *arg0, u8 *arg1)
{
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v1;
  s32 var_v0;
  if ((*((s32 *) (((u8 *) arg0) + 0x358))) == 0)
  {
    if (temp_v0_2)
    {
      temp_v0 = func_0017B5B8(*((s32 *) (((u8 *) arg1) + 0)), *((s32 *) (((u8 *) arg1) + 4)), 0x40);
      temp_v1 = temp_v0 + 4;
    }
    else
    {
      temp_v0 = func_0017B5B8(*((s32 *) (((u8 *) arg1) + 0)), *((s32 *) (((u8 *) arg1) + 4)), 0x40);
      temp_v1 = temp_v0 + 4;
    }
    if (temp_v0 != 0)
    {
      temp_v0_2 = func_0017B5B8(temp_v1, (*((s32 *) (((u8 *) arg1) + 4))) - (temp_v1 - (*((s32 *) (((u8 *) arg1) + 0)))), -1);
      if ((temp_v0_2 != 0) && (((temp_v0_3 = func_0017B420(temp_v0_2), var_v0 = 2, (temp_v0_3 & 0x10) != 0)) || ((var_v0 = 1, temp_v0_3 != 0))))
      {
        *((s32 *) (((u8 *) arg0) + 0x358)) = var_v0;
      }
    }
  }
  return *((s32 *) (((u8 *) arg0) + 0x358));
}
