/* Draft (not built): DisableCache at 0x0010A4C0, size 0x10, segment sdk/libkernl_syscalls (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 400 -> 200
 * Original: asm/sdk/libkernl_syscalls.s */

// DisableCache 0010A4C0 -O2 -G0 ee-gcc 2.9-991111-01: score 400 -> 200


void DisableCache(void)
{
  goto dummy_label_408363;
  M2C_ERROR();
 dummy_label_408363: ;
}
