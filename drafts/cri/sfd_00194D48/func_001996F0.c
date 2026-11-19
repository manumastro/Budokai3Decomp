/* Draft (not built): func_001996F0 at 0x001996F0, size 0xB4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 805 -> 520
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001996F0.s */

// func_001996F0 001996F0 -O2 -G0 ee-gcc 2.96: score 805 -> 520
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001997A8(s32, s32);                    /* extern */
s32 func_00199818(s32, s32, s32);               /* extern */
s32 func_00199868(s32, s32, s32);               /* extern */
extern s32 D_004268E0;

s32 func_001996F0(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  s32 new_var2;
  if (arg0 == 0)
  {
    new_var2 = arg1;
    new_var = 4;
    func_001997A8(new_var2, arg2);
    *((&D_004268E0) + (new_var2 * new_var)) = arg2;
    return 0;
  }
  if (func_0018D870() != 0)
  {
    return func_0018D650(0, 0xFF000112);
  }
  func_00199818(arg0, new_var2, arg2);
  func_00199868(arg0, new_var2, arg2);
  return 0;
}
