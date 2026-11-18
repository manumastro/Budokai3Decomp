/* Draft (not built): EI at 0x00114370, size 0x18, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/EI.s */

s32 EI(void) {
    M2C_ERROR(/* unknown instruction: ei */);
    return (M2C_ERROR(/* mfc0 $t0 */) & 0x10000) != 0;
}
