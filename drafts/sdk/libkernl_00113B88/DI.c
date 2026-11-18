/* Draft (not built): DI at 0x00114320, size 0x50, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/DI.s */

s32 DI(void) {
    s32 temp_v1;

    temp_v1 = M2C_ERROR(/* mfc0 $t0 */) & 0x10000;
    if (temp_v1 == 0) {
        goto block_4;
    }
loop_2:
    M2C_ERROR(/* unknown instruction: di */);
    M2C_ERROR(/* unknown instruction: sync.p */);
    if (M2C_ERROR(/* mfc0 $t0 */) & 0x10000) {
        goto loop_2;
    }
    return temp_v1 != 0;
block_4:
    return 0;
}
