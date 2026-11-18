/* Draft (not built): func_0010CDB8 at 0x0010CDB8, size 0x28, segment sdk/libkernl_0010BE70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 100 -> 15
 * Original: asm/nonmatchings/sdk/libkernl_0010BE70/func_0010CDB8.s */

// func_0010CDB8 0010CDB8 -O2 -G0 ee-gcc 2.9-991111-01: score 100 -> 15
s32 deci2Putchar(s32);                          /* extern */

s32 func_0010CDB8(s32 arg2)
{
  long new_var;
  new_var = 0;
  if (arg2 != new_var)
  {
    deci2Putchar(arg2);
  }
  return 1;
}
