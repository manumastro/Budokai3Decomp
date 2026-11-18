/* Draft (not built): func_001929B8 at 0x001929B8, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1090 -> 370
 * Original: asm/nonmatchings/cri/sfd/func_001929B8.s */

// func_001929B8 001929B8 -O1 -G0 ee-gcc 2.96: score 1090 -> 370


s32 func_001929B8(s32 arg0, u32 arg1)
{
  u8 *new_var;
  s32 var_v0;
  u8 *temp_a0;
  temp_a0 = arg0 + 0x9A0;
  if (arg1 != 2)
  {
    if (arg1 < 3U)
    {
      new_var = temp_a0;
      if (arg1 == 1)
      {
        var_v0 = *((s32 *) (((u8 *) new_var) + 8));
        goto block_12;
      }
      return 1;
    }
    if (arg1 == 3)
    {
      var_v0 = *((s32 *) (((u8 *) new_var) + 0x10));
      goto block_12;
    }
    return 1;
  }
  var_v0 = *((s32 *) (((u8 *) temp_a0) + 0xC));
  block_12:
  return (*((s32 *) (((u8 *) temp_a0) + 0xC))) == 0;

}
