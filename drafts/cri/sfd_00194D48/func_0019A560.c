/* Draft (not built): func_0019A560 at 0x0019A560, size 0x74, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 130 -> 120
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A560.s */

// func_0019A560 0019A560 -O2 -G0 ee-gcc 2.96: score 130 -> 120
s32 func_0018D650(s32, s32, s32);       /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019A5D8(s32, s32, s32);               /* extern */

unsigned long func_0019A560(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var3;
  s32 new_var;
  int new_var2;
  if (1)
  {
    new_var2 = 0;
  }
  if (new_var3 = func_0018D870() != new_var2)
  {
    new_var2 = arg2;
    func_0018D650(0, 0xFF000121, new_var2);
    return;
  }
  new_var = arg1;
  func_0019A5D8(arg0, new_var, new_var2);
}
