/* Draft (not built): func_0019A738 at 0x0019A738, size 0x74, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 130 -> 120
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A738.s */

// func_0019A738 0019A738 -O2 -G0 ee-gcc 2.96: score 130 -> 120
s32 func_0018D650(s32, s32, s32);       /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019A7B0(s32, s32, s32);               /* extern */

void func_0019A738(s32 arg0, s32 arg1, s32 arg2)
{
  s32 new_var;
  new_var = func_0018D870();
  if (0 != new_var)
  {
    new_var = arg2;
    func_0018D650(0, 0xFF000128, new_var);
    return;
  }
  func_0019A7B0(arg0, arg1, new_var);
}
