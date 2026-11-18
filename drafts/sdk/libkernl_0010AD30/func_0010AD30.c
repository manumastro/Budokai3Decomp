/* Draft (not built): func_0010AD30 at 0x0010AD30, size 0x10, segment sdk/libkernl_0010AD30 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libkernl_0010AD30.s */

s32 func_0010AD30(void) {
    return (M2C_ERROR(/* mfc0 $t0 */) ^ 1) & 1;
}
