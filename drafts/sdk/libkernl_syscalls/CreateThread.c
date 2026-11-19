/* Draft (not built): CreateThread at 0x0010A060, size 0x10, segment sdk/libkernl_syscalls (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 400 -> 200
 * Original: asm/sdk/libkernl_syscalls.s */

// CreateThread 0010A060 -O2 -G0 ee-gcc 2.9-991111-01: score 400 -> 200


void CreateThread(void)
{
  unsigned int new_var;
  int new_var3;
  unsigned short new_var2;
  new_var3 = 1;
  new_var = new_var3;
  new_var2 = (new_var = 0);
  new_var += new_var2;
  if (new_var)
  {
    M2C_ERROR();
  }
}
