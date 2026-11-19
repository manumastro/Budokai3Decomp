/* Draft (not built): func_001974D0 at 0x001974D0, size 0xC8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1415 -> 1190
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001974D0.s */

// func_001974D0 001974D0 -O2 -G0 ee-gcc 2.96: score 1415 -> 1190
s32 func_001999E0(s32, s32);                    /* extern */
s32 func_0019C170(s32, s32);                    /* extern */

s32 func_001974D0(s32 arg0)
{
  s32 new_var;
  s32 temp_s1;
  s32 temp_s2;
  unsigned int temp_v0;
  s32 var_a0;
  s32 var_v0;
  u8 *temp_v1;
  new_var = arg0;
  temp_v1 = arg0 + 0x9A0;
  if ((*((s32 *) (((u8 *) temp_v1) + 0x18))) == 0)
  {
    var_v0 = 1;
    if ((*((s32 *) (((u8 *) temp_v1) + 0x14))) != 0)
    {
      goto block_3;
    }
    return var_v0;
  }
  block_3:
  temp_s2 = func_0019C170(arg0, 6);

  temp_s1 = func_0019C170(new_var, 7);
  temp_v0 = func_001999E0(new_var, 0x19);
  switch (temp_v0)
  {
    case 0:
      var_a0 = temp_s1 & temp_s2;
      block_14:
    var_v0 = var_a0;

      return var_v0;

    case 1:
      var_a0 = temp_s1;
      goto block_14;

    case 2:
      var_a0 = temp_s2;
      goto block_14;

    case 3:
      var_a0 = temp_s1 | temp_s2;
      goto block_14;

    default:
      return 0;

  }

}
