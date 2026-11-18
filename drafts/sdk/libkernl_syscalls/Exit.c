/* Draft (not built): Exit at 0x00109E80, size 0x10, segment sdk/libkernl_syscalls (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libkernl_syscalls.s */

void Exit(void) {
    M2C_ERROR(/* unknown instruction: syscall 0x0 */);
}
