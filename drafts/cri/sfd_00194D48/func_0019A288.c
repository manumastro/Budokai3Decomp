/* Draft (not built): func_0019A288 at 0x0019A288, size 0x34, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 750 -> 275
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A288.s */

// func_0019A288 0019A288 -O2 -G0 ee-gcc 2.96: score 750 -> 275


s32 func_0019A288(u8 *arg0)
{
  s32 var_v0;
  s32 *new_var;
  var_v0 = 0;
  new_var = &(*((s32 *) (((u8 *) arg0) - -0x50)));
  var_v0 = *((s32 *) (((u8 *) arg0) + 0x48));
  if ((var_v0 == 4) && ((*new_var) == 0))
  {
    var_v0 = (*((s32 *) (((u8 *) (arg0 + 0x94C)) + 0x1C))) == 0;
  }
  return var_v0;
}
