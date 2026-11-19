/* Draft (not built): func_00114640 at 0x00114640, size 0x10, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 400 -> 200
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114640.s */

// func_00114640 00114640 -O2 -G0 ee-gcc 2.9-991111-01: score 400 -> 200


void func_00114640(void)
{
  int new_var;
  unsigned int new_var2;
  new_var2 = 1;
  new_var = new_var2 != (new_var2 = 0);
  if (new_var)
  {
    M2C_ERROR();
  }
}
