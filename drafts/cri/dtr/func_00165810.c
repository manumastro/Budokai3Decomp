/* Draft (not built): func_00165810 at 0x00165810, size 0xB0, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2855 -> 1230
 * Original: asm/nonmatchings/cri/dtr/func_00165810.s */

// func_00165810 00165810 -O2 -G0 ee-gcc 2.96: score 2855 -> 1230
s32 DTX_Create(s32, s32, s32, s32);                 /* extern */
s32 func_00165C68(s32);                         /* extern */
extern s32 D_00412850;
extern s32 D_00412950;

u8 *func_00165810(u32 arg0, u8 *arg1, u32 arg2)
{
  s32 (*temp_v0_2)(s32, u8 *, u32);
  s32 temp_v1;
  u32 temp_v0;
  if (arg0 != 2)
  {
    if (arg0 >= 2U)
    {
      if (arg0 != 3)
      {
        temp_v0 = arg0 - 0x400;
        temp_v1 = temp_v0 * 4;
        if (temp_v0 < 0x40U)
        {
          temp_v0_2 = *((&D_00412850) + temp_v1);
          if (temp_v0_2 != ((void *) 0))
          {
            temp_v0_2(*((&D_00412950) + temp_v1), arg1, arg2 >> 2);
          }
        }
      }
      else
      {
        func_00165C68(*((s32 *) (((u8 *) arg1) + 0)));
      }
    }
  }
  else
  {
    *((s32 *) (((u8 *) arg1) + 0)) = DTX_Create(*((s32 *) (((u8 *) arg1) + 0)), *((s32 *) (((u8 *) arg1) + 4)), *((s32 *) (((u8 *) arg1) + 8)), *((s32 *) (((u8 *) arg1) + 0xC)));
  }
  return arg1;
}
