/* Draft (not built): func_00127CD8 at 0x00127CD8, size 0x1AC, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00127CD8.c:72: `temp_v0_4' undeclared (first use in this function)
 * Original: asm/sdk/libc_00127738.s */

s32 func_00127CD8(s32 arg0, u8 *arg1, s32 arg2) {
    s128 *var_a3_2;
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_t1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s64 temp_v0;
    s64 temp_v0_2;
    u8 *var_a0_2;
    u8 *var_a1;
    u8 temp_v0_3;
    u8 temp_v0_4;

    var_a0 = arg0;
    temp_t0 = var_a0;
    if (!(temp_t0 & 7)) {
        if (temp_t0 & 0xF) {
            temp_v0 = *temp_t0;
            temp_t1 = (((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101;
            temp_a0 = (((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080;
            var_a3 = temp_t0;
            if (!((temp_v0 - temp_t1) & ~temp_v0 & temp_a0)) {
                do {
                    var_a3 += 8;
                    temp_v0_2 = *var_a3;
                } while (!((temp_v0_2 - temp_t1) & ~temp_v0_2 & temp_a0));
            }
        } else {
            M2C_ERROR(/* unknown instruction: pcpyld $t1, $a3, $a3 */);
            M2C_ERROR(/* unknown instruction: psubb $v1, $v0, $t1 */);
            M2C_ERROR(/* unknown instruction: pnor $v0, $zero, $v0 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t2, $a0, $a0 */);
            M2C_ERROR(/* unknown instruction: pand $v1, $v1, $v0 */);
            var_a3 = temp_t0;
            if ((M2C_ERROR(/* unknown instruction: pand $v1, $v1, $t2 */) | M2C_ERROR(/* unknown instruction: pcpyud $v0, $v1, $a0 */)) == 0) {
                var_a3_2 = var_a3 + 0x10;
                do {
                    M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
                    M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $t1 */);
                    M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                    var_a3_2 += 0x10;
                } while ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t2 */) | M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $a0 */)) == 0);
                var_a3 = (s32) (var_a3_2 - 0x10);
            }
        }
        var_a0 = var_a3;
    }
    var_a2 = arg2 - 1;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    if (var_a2 != 0xFFFFFFFF) {
        temp_v0_3 = *arg1;
        var_a1 = arg1 + 1;
        *var_a0 = temp_v0_3;
        var_a0_2 = var_a0 + 1;
        if ((temp_v0_3 << 0x18) != 0) {
loop_16:
            if (var_a2 == 0) {
                *var_a0_2 = 0;
            }
            var_a2 -= 1;
            if (var_a2 != 0xFFFFFFFF) {
                temp_v0_4 = *var_a1;
                var_a1 += 1;
                *var_a0_2 = temp_v0_4;
                var_a0_2 += 1;
                if ((temp_v0_4 << 0x18) != 0) {
                    goto loop_16;
                }
            }
        }
    }
    return temp_t0;
}
