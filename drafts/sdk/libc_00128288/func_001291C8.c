/* Draft (not built): func_001291C8 at 0x001291C8, size 0x28, segment sdk/libc_00128288 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 160 -> 110
 * Original: asm/nonmatchings/sdk/libc_00128288/func_001291C8.s */

// func_001291C8 001291C8 -O1 -G0 ee-gcc 2.96: score 160 -> 110
s32 func_001220B0(s32);                         /* extern */
s32 func_001291A0();                                /* extern */

void func_001291C8(void)
{
  unsigned int new_var;
  func_001220B0(new_var);
  new_var = func_001291A0();
}
