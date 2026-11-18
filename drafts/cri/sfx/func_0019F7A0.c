/* Draft (not built): func_0019F7A0 at 0x0019F7A0, size 0x4C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 260 -> 230
 * Original: asm/nonmatchings/cri/sfx/func_0019F7A0.s */

// func_0019F7A0 0019F7A0 -O2 -G0 ee-gcc 2.96: score 260 -> 230
s32 func_0019F800(s32);                     /* extern */

void func_0019F7A0(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  func_0019F800(0x64);
  new_var = arg0 + (arg1 * 4);
  *((s32 *) (((u8 *) new_var) + 0x3C)) = arg2;
}
