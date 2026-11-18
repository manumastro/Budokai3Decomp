/* Draft (not built): func_00197EC8 at 0x00197EC8, size 0x5C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1555 -> 315
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197EC8.s */

// func_00197EC8 00197EC8 -O1 -G0 ee-gcc 2.96: score 1555 -> 315
s32 func_0019C0D8(s32, s32, s32);       /* extern */

s32 func_00197EC8(u8 *arg0)
{
  short new_var;
  s32 var_v0;
  u8 *new_var2;
  new_var = 4;
  new_var2 = (u8 *) arg0;
  if (((*((s32 *) (new_var2 + 0x48))) != new_var) || ((var_v0 = func_0019C0D8(7, 7, 0), var_v0 == 0)))
  {
    *((s32 *) (new_var2 + 0x4C)) = 1;
    *((s32 *) (new_var2 + 0x48)) = 1;
    var_v0 = 0;
  }
  return var_v0;
}
