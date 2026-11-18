/* Draft (not built): func_0019A5D8 at 0x0019A5D8, size 0xAC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1245 -> 230
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A5D8.s */

// func_0019A5D8 0019A5D8 -O2 -G0 ee-gcc 2.96: score 1245 -> 230
s32 func_0017EE78(s32, s32, s32);                   /* extern */
s32 func_0019A700();                                /* extern */

s32 func_0019A5D8(u8 *arg0, s32 *arg1, s32 *arg2)
{
  s32 temp_a1;
  s32 var_v0;
  u8 *temp_s1;
  u8 *temp_s3;
  temp_s1 = arg0 + 0xDD8;
  temp_s3 = arg0 + 0xCC0;
  var_v0 = func_0019A700();
  temp_a1 = *arg2;
  if (temp_a1 != 1)
  {
    if (!(temp_a1 != (*((s32 *) (((u8 *) temp_s3) + 0x148)))))
    {
      *arg1 += *((s32 *) (((u8 *) temp_s3) + 0x144));
    }
    else
      if ((*((s32 *) (((u8 *) arg0) + 0xDD8))) != 0)
    {
      *arg1 += func_0017EE78(*((s32 *) (((u8 *) temp_s1) + 0x24)), temp_a1, *((s32 *) (((u8 *) temp_s1) + 0x28)));
    }
  }
  return var_v0;
}
