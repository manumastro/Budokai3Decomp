/* Draft (not built): func_00128040 at 0x00128040, size 0x1BC, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00128040.c:93: invalid type argument of `unary *'
 * Original: asm/sdk/libc_00127738.s */

s32 func_00128040(s32 arg0, s32 arg1, u32 arg2) {
    s128 temp_v1;
    s128 var_v1;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s64 temp_v0_3;
    s64 temp_v1_2;
    u32 var_a2;
    u8 temp_v0_4;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    temp_t0 = var_a0;
    temp_a3 = var_a1 | var_a0;
    temp_v0 = temp_a3 & 0xF;
    if (!(temp_a3 & 7)) {
        temp_v0_2 = var_a2 < (u32) ((temp_v0 == 0) int 0x10U : 8U);
        if (temp_v0 == 0) {
            if (temp_v0_2 == 0) {
                var_t1 = M2C_ERROR(/* unknown instruction: pcpyld $t1, $a3, $a3 */);
                M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v1 */);
                M2C_ERROR(/* unknown instruction: psubb $v0, $v1, $t1 */);
                var_t2 = M2C_ERROR(/* unknown instruction: pcpyld $t2, $a3, $a3 */);
                M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                var_a3 = temp_t0;
                if ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t2 */) | M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $a0 */)) == 0) {
                    temp_v1 = *var_a1;
                    var_a2 -= 0x10;
                    var_a1 += 0x10;
                    *var_a3 = temp_v1;
                    var_a3 += 0x10;
                    if (var_a2 >= 0x10U) {
                        M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
                        M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $t1 */);
                        M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                        if ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t2 */) | M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $a0 */)) == 0) {
                            var_v1 = *var_a1;
                            goto loop_12;
                        }
                    }
                }
                goto block_16;
            }
        } else if (temp_v0_2 == 0) {
            temp_v1_2 = (s64) *var_a1;
            var_t1 = (((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101;
            var_t2 = (((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080;
            var_a3 = temp_t0;
            if (!((temp_v1_2 - var_t1) & ~temp_v1_2 & var_t2)) {
                var_v1 = (s128) (s64) *var_a1;
loop_12:
                var_a2 -= 8;
                var_a1 += 8;
                *var_a3 = (s64) var_v1;
                var_a3 += 8;
                if (var_a2 >= 8U) {
                    temp_v0_3 = *var_a1;
                    if (!((temp_v0_3 - var_t1) & ~temp_v0_3 & var_t2)) {
                        var_v1 = (s128) *var_a1;
                        goto loop_12;
                    }
                }
            }
block_16:
            var_a0 = var_a3;
        }
    }
loop_17:
    if (var_a2 != 0) {
        temp_v0_4 = *var_a1;
        var_a2 -= 1;
        var_a1 += 1;
        *var_a0 = temp_v0_4;
        var_a0 += 1;
        if ((temp_v0_4 << 0x18) == 0) {
            var_a2_2 = var_a2 - 1;
            if (var_a2 != 0) {
                do {
                    *var_a0 = 0;
                    temp_v0_5 = var_a2_2;
                    var_a0 += 1;
                    var_a2_2 -= 1;
                } while (temp_v0_5 != 0);
            }
        } else {
            goto loop_17;
        }
    }
    return temp_t0;
}
