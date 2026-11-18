/* Draft (not built): func_0015C418 at 0x0015C418, size 0x5C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1150 -> 850
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C418.s */

// func_0015C418 0015C418 -O1 -G0 ee-gcc 2.96: score 1150 -> 850
s32 func_0015C1E0(s32, s32);                    /* extern */
s32 func_0015C1E8(s32, s32);                /* extern */
s32 func_0015C1F0();                            /* extern */
s32 func_0015C270(s32, s32);                    /* extern */

void func_0015C418(s32 arg0, s32 arg2, s32 arg3)
{
  s32 new_var;
  s32 new_var2;
  func_0015C1F0();
  new_var2 = arg3;
  func_0015C1E0(arg0, new_var2 = arg2);
  if (1)
  {
    new_var = new_var2;
    func_0015C270(arg0, new_var);
    func_0015C1E8(arg0, 0x11C);
  }
}
