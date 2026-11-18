/* Draft (not built): func_0018A700 at 0x0018A700, size 0x4C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 865 -> 385
 * Original: asm/nonmatchings/cri/sfd/func_0018A700.s */

// func_0018A700 0018A700 -O2 -G0 ee-gcc 2.96: score 865 -> 385
s32 func_0018A750(s32, s32, s32);       /* extern */
s32 func_0018A770(s32);                         /* extern */

void func_0018A700(s32 arg0, s32 arg3)
{
  int new_var;
  s32 temp_s0;
  new_var = arg0 + (arg3 * 0x74);
  temp_s0 = new_var;
  new_var = temp_s0 + 0x10;
  func_0018A750(temp_s0, 3, 1);
  func_0018A770(new_var);
}
