/* Draft (not built): func_00127940 at 0x00127940, size 0x144, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00127940.c:59: invalid type argument of `unary *'
 * Original: asm/sdk/libc_00127738.s */

s32 func_00127940(s32 arg0, s32 arg1) {
    s32 temp_t0;
    s32 var_a0;
    s32 var_a1;
    s64 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_t0 = var_a0 | var_a1;
    if (!(temp_t0 & 7)) {
        if (!(temp_t0 & 0xF)) {
            M2C_ERROR(/* unknown instruction: pcpyld $t0, $a3, $a3 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t2, $a2, $a2 */);
            if ((M2C_ERROR(/* unknown instruction: pcpyud $a2, $a3, $a0 */) | M2C_ERROR(/* unknown instruction: psubw $a3, $v0, $v1 */)) == 0) {
loop_4:
                M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
                M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $t0 */);
                M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                var_a0 += 0x10;
                if ((M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $a0 */) | M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t2 */)) != 0) {
                    return 0;
                }
                var_a1 += 0x10;
                if ((M2C_ERROR(/* unknown instruction: pcpyud $a2, $a3, $a0 */) | M2C_ERROR(/* unknown instruction: psubw $a3, $v0, $v1 */)) != 0) {
                    goto loop_16;
                }
                goto loop_4;
            }
            goto loop_16;
        }
        if ((s64) *var_a0 == *var_a1) {
            var_v0 = (s64) *var_a0;
loop_10:
            var_a0 += 8;
            if ((var_v0 - ((((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101)) & ~var_v0 & ((((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080)) {
                return 0;
            }
            var_a1 += 8;
            var_v0 = *var_a0;
            if (*var_a1 != var_v0) {
                goto loop_16;
            }
            goto loop_10;
        }
        goto loop_16;
    }
loop_16:
    if (*var_a0 != 0) {
        if ((s8) (u8) *var_a0 == *var_a1) {
            var_a0 += 1;
            var_a1 += 1;
            goto loop_16;
        }
    }
    return (u8) *var_a0 - (u8) *var_a1;
}
