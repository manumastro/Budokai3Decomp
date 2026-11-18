/* Draft (not built): func_0016BBC8 at 0x0016BBC8, size 0x18, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 100 -> 5
 * Original: asm/nonmatchings/cri/mfci/func_0016BBC8.s */

// func_0016BBC8 0016BBC8 -O2 -G0 ee-gcc 2.96: score 100 -> 5
s32 ADXERR_CallErrFunc1(s32);                   /* extern */

void func_0016BBC8(s32 arg1)
{
  s32 new_var;
  unsigned short pad;
  int new_var2;
  new_var = arg1;
  new_var2 = 1;
 new_var = 0; do { if (new_var2) { } } while (new_var);
  ADXERR_CallErrFunc1(new_var);
}
