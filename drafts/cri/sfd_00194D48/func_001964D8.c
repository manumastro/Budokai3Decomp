/* Draft (not built): func_001964D8 at 0x001964D8, size 0x28, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 185 -> 180
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001964D8.s */

// func_001964D8 001964D8 -O1 -G0 ee-gcc 2.96: score 185 -> 180
s32 func_0019C0D8(s32, s32, s32);       /* extern */

void func_001964D8(s32 arg1)
{
  int new_var;
  unsigned int new_var3;
  new_var = 7;
  new_var3 = 8;
  func_0019C0D8(new_var3 = new_var, new_var3, arg1);
}
