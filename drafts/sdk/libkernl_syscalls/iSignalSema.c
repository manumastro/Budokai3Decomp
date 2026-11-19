/* Draft (not built): iSignalSema at 0x0010A290, size 0x10, segment sdk/libkernl_syscalls (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 400 -> 200
 * Original: asm/sdk/libkernl_syscalls.s */

// iSignalSema 0010A290 -O2 -G0 ee-gcc 2.9-991111-01: score 400 -> 200


void iSignalSema(void)
{
  int new_var;
  new_var = 1;
  if (new_var)
  {
    new_var = 0;
    if (new_var, new_var)
    {
      M2C_ERROR();
    }
  }
}
