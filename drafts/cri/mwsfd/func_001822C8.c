/* Draft (not built): func_001822C8 at 0x001822C8, size 0x38, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1030 -> 885
 * Original: asm/nonmatchings/cri/mwsfd/func_001822C8.s */

// func_001822C8 001822C8 -O1 -G0 ee-gcc 2.96: score 1030 -> 885
s32 func_00183A30(s32, s32, s32);   /* extern */

void func_001822C8(f32 *arg0)
{
  volatile int new_var;
  new_var = 0x1B;
  arg0 = &new_var;
  func_00183A30(0, *arg0, M2C_ERROR());
  func_00183A30(0, 7, 1);
}
