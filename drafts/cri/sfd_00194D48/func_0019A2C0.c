/* Draft (not built): func_0019A2C0 at 0x0019A2C0, size 0x24, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 120 -> 85
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A2C0.s */

// func_0019A2C0 0019A2C0 -O2 -G0 ee-gcc 2.96: score 120 -> 85


s32 func_0019A2C0(u8 *arg0, u8 *arg1)
{
  u8 *new_var2;
  s32 var_v0;
  int new_var;
  new_var2 = ((u8 *) arg1) + 0x2C0;
  new_var = -1;
  var_v0 = 0;
  if ((*((s32 *) new_var2)) != new_var)
  {
    var_v0 = *((s32 *) (((u8 *) arg0) + 0x4C));
    ;
  }
  return var_v0 == 4;
}
