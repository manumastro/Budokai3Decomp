/* Draft (not built): func_0019E020 at 0x0019E020, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 245 -> 140
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E020.s */

// func_0019E020 0019E020 -O2 -G0 ee-gcc 2.96: score 245 -> 140
s32 func_0019D780();                                /* extern */

s32 func_0019E020(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s1;
  temp_s1 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780();
  if (var_v0 != 0)
  {
    var_v0 = 0;
    if ((*((s32 *) (((u8 *) arg0) + 0xC))) >= 0x6E)
    {
      var_v0 = 1;
      *arg1 = *((s32 *) (((u8 *) temp_s1) + 4));
    }
    return var_v0;
  }
}
