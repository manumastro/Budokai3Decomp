/* Draft (not built): SetVSyncFlag at 0x0010A5D0, size 0x10, segment sdk/libkernl_syscalls (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 400 -> 200
 * Original: asm/sdk/libkernl_syscalls.s */

// SetVSyncFlag 0010A5D0 -O2 -G0 ee-gcc 2.9-991111-01: score 400 -> 200


void SetVSyncFlag(void)
{
  int new_var;
  char new_var2;
  int *new_var3;
 new_var3 = &new_var; new_var = (new_var2 = 0); if (*new_var3) { M2C_ERROR(); }
}
