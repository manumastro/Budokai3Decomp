/* Draft (not built): func_00127E88 at 0x00127E88, size 0x1B8, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: e error: d_00127E88.c:109: invalid type argument of `unary *'
 * Original: asm/sdk/libc_00127738.s */

s32 func_00127E88(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_t0;
    s64 temp_v0;
    s8 var_v1;
    u32 var_a2;
    u32 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    temp_v1 = var_a0 | var_a1;
    if (var_a2 == 0) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 0;
    }
    var_v0 = var_a2;
    if (!(temp_v1 & 7)) {
        var_a3 = var_a0;
        if (((temp_v1 & 0xF) | (var_a2 < 0x10U)) == 0) {
            M2C_ERROR(/* unknown instruction: pcpyld $t2, $t1, $t1 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t1, $t0, $t0 */);
            var_t0 = var_a1;
            var_v0 = var_a2;
            if ((M2C_ERROR(/* unknown instruction: pcpyud $v0, $v1, $a0 */) | M2C_ERROR(/* unknown instruction: psubw $v1, $v1, $v0 */)) == 0) {
loop_5:
                var_a2 -= 0x10;
                if (var_a2 != 0) {
                    M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
                    M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $t2 */);
                    M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                    var_a3 += 0x10;
                    if ((M2C_ERROR(/* unknown instruction: pcpyud $v0, $v1, $a0 */) | M2C_ERROR(/* unknown instruction: pand $v1, $v0, $t1 */)) == 0) {
                        var_t0 += 0x10;
                        if (var_a2 >= 0x10U) {
                            if ((M2C_ERROR(/* unknown instruction: pcpyud $v0, $v1, $a0 */) | M2C_ERROR(/* unknown instruction: psubw $v1, $v1, $v0 */)) != 0) {
                                goto block_19;
                            }
                            goto loop_5;
                        }
                        goto block_19;
                    }
                }
                /* Duplicate return node #1. Try simplifying control flow for better match */
                return 0;
            }
            goto block_20;
        }
        var_t0 = var_a1;
        if (var_a2 >= 8U) {
            var_v0 = var_a2;
            if ((s64) *var_a0 == (s64) *var_a1) {
                var_a2 -= 8;
loop_13:
                if (var_a2 != 0) {
                    temp_v0 = *var_a3;
                    var_a3 += 8;
                    if (!((temp_v0 - ((((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101)) & ~temp_v0 & ((((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080))) {
                        var_t0 += 8;
                        if (var_a2 >= 8U) {
                            if (*var_a3 == *var_t0) {
                                var_a2 -= 8;
                                goto loop_13;
                            }
                            goto block_19;
                        }
                        goto block_19;
                    }
                }
                /* Duplicate return node #1. Try simplifying control flow for better match */
                return 0;
            }
            goto block_20;
        }
block_19:
        var_a0 = var_a3;
        var_a1 = var_t0;
        var_v0 = var_a2;
        goto block_20;
    }
block_20:
    var_a2_2 = var_a2 - 1;
    if (var_v0 != 0) {
        var_v1 = *var_a0;
loop_26:
        if (var_v1 != *var_a1) {
            /* Duplicate return node #27. Try simplifying control flow for better match */
            return *var_a0 - *var_a1;
        }
        if (var_a2_2 != 0) {
            var_a0 += 1;
            if (*var_a0 != 0) {
                var_a1 += 1;
                var_v1 = *var_a0;
                var_a2_2 -= 1;
                goto loop_26;
            }
        }
        return 0;
    }
    return *var_a0 - *var_a1;
}
