/* Draft (not built): func_00184520 at 0x00184520, size 0x64, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 360 -> 185
 * Original: asm/nonmatchings/cri/mwsfd/func_00184520.s */

// func_00184520 00184520 -O2 -G0 ee-gcc 2.96: score 360 -> 185
s32 func_00188010(s32);                             /* extern */

s32 func_00184520(u8 *arg0)
{
  s32 temp_v0;
  s32 temp_v0_2;
  if (arg0 != ((void *) 0))
  {
    temp_v0 = *((s32 *) (((u8 *) arg0) + 0x44));
    arg0 = *((u8 **) (((u8 *) arg0) + 0x4C));
    if (temp_v0 == 0)
    {
      if (arg0 != ((void *) 0))
      {
        temp_v0_2 = *((s32 *) (((u8 *) arg0) + 0x28));
        if (temp_v0_2 != 0)
        {
          return func_00188010(temp_v0_2);
        }
        return 0;
      }
      return 0;
    }
    return func_00188010(temp_v0);
  }
  return 0;
}
