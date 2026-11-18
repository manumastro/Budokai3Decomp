/* Draft (not built): func_0018D3C0 at 0x0018D3C0, size 0x38, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 11 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 190 -> 20
 * Original: asm/nonmatchings/cri/sfd/func_0018D3C0.s */

// func_0018D3C0 0018D3C0 -O2 -G0 ee-gcc 2.96: score 190 -> 20


s32 func_0018D3C0(u8 *arg0)
{
  s32 var_v0;
  u8 *temp_a0;
  s32 new_var;
  temp_a0 = arg0 + 0x78;
  var_v0 = 0;
  new_var = *((s32 *) (((u8 *) arg0) + 0x78));
  if (new_var != 0)
  {
    new_var = *((s32 *) (((u8 *) temp_a0) + 8));
    var_v0 = ((*((s32 *) (((u8 *) temp_a0) + 4))) * 0x64) + new_var;
  }
  return var_v0;
}
