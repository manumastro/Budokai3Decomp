/* Draft (not built): func_00186888 at 0x00186888, size 0x58, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 520 -> 160
 * Original: asm/nonmatchings/cri/mwsfd/func_00186888.s */

// func_00186888 00186888 -O2 -G0 ee-gcc 2.96: score 520 -> 160
void *func_00186DB8();                              /* extern */
s32 func_00186DD8();                                /* extern */

void func_00186888(u8 *arg0)
{
  s32 (*temp_v0_2)(s32, s32);
  u8 *temp_v0;
  s32 new_var;
  if (func_00186DD8() == 1)
  {
    temp_v0 = func_00186DB8();
    new_var = *((s32 *) (((u8 *) arg0) + 0x14));
    if (temp_v0 != ((void *) 0))
    {
      temp_v0_2 = *((s32 (**)(s32, s32)) (((u8 *) temp_v0) + 0x14));
      if (temp_v0_2 != ((void *) 0))
      {
        temp_v0_2(new_var, *((s32 *) (((u8 *) arg0) + 0xC)));
      }
    }
  }
}
