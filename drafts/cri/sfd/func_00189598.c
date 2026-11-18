/* Draft (not built): func_00189598 at 0x00189598, size 0x3C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1150 -> 875
 * Original: asm/nonmatchings/cri/sfd/func_00189598.s */

// func_00189598 00189598 -O1 -G0 ee-gcc 2.96: score 1150 -> 875
s32 func_00199818(s32, s32, s32);       /* extern */
s32 func_0019AE00(s32 *, s32);          /* extern */
extern s32 func_001895D8;

void func_00189598(s32 arg0)
{
  int new_var2;
  int new_var;
  s32 *new_var3;
  func_0019AE00(new_var3, 2);
  new_var3 = &func_001895D8;
  new_var2 = 2;
  new_var = 0xF;
  func_00199818(arg0, new_var, new_var2);
}
