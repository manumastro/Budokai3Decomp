/* Draft (not built): func_00198890 at 0x00198890, size 0x40, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 11 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 170 -> 160
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198890.s */

// func_00198890 00198890 -O2 -G0 ee-gcc 2.96: score 170 -> 160


s32 func_00198890(s32 arg0, s32 arg1)
{
  s32 var_v0;
  u8 *temp_a0;
  u8 *temp_a0_2;
  temp_a0 = arg0 + (var_v0 = arg1 * 0x74);
  temp_a0_2 = temp_a0 + 0x12B8;
  var_v0 = 0;
  if ((*((s32 *) (((u8 *) temp_a0) + 0x12B8))) != 0)
  {
    var_v0 = (*((s32 *) (((u8 *) temp_a0_2) + 8))) >= (*((s32 *) (((u8 *) temp_a0_2) + 4)));
  }
  return var_v0;
}
