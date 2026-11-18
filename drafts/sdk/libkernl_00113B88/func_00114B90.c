/* Draft (not built): func_00114B90 at 0x00114B90, size 0x70, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114B90.s */

s32 func_00114B90(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_ERROR(/* mfc0 $t0 */) & 0x10000;
    if (temp_v1 == 0) {
        goto block_3;
    }
loop_2:
    M2C_ERROR(/* unknown instruction: di */);
    M2C_ERROR(/* unknown instruction: sync.p */);
    if (M2C_ERROR(/* mfc0 $t0 */) & 0x10000) {
        goto loop_2;
    }
block_3:
    M2C_ERROR(/* unknown instruction: sync.p */);
    M2C_ERROR(/* mtc0 $v0, $t0 */);
    M2C_ERROR(/* unknown instruction: sync.p */);
    *arg0 = arg1;
    M2C_ERROR(/* mtc0 $ra, $fp */);
    M2C_ERROR(/* unknown instruction: sync.p */);
    M2C_ERROR(/* unknown instruction: eret */);
    return ((M2C_ERROR(/* mfc0 $t0 */) | 6) ^ 2) | temp_v1;
}
