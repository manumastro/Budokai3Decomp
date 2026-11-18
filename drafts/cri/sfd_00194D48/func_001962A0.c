/* Draft (not built): func_001962A0 at 0x001962A0, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 730 -> 240
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001962A0.s */

// func_001962A0 001962A0 -O2 -G0 ee-gcc 2.96: score 730 -> 240
s32 func_001957B8();                                /* extern */

s32 func_001962A0(u8 *arg0)
{
  s32 var_v0;
  s32 new_var2;
  u8 *temp_a0;
  s32 *new_var;
  if (func_001957B8() == 0)
  {
    return 1;
  }
  new_var = (s32 *) (((u8 *) arg0) + 0x1C70);
  temp_a0 = (*new_var) + 0xFC8;
  new_var2 = *((s32 *) (((u8 *) temp_a0) + 0xC));
  var_v0 = 1;
  if ((*((s32 *) (((u8 *) temp_a0) + 0x20))) != 1)
  {
    var_v0 = 0;
    var_v0 = (new_var2 < 3) == var_v0;
  }
  return var_v0;
}
