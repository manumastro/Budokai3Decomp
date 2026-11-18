/* Draft (not built): func_00127A88 at 0x00127A88, size 0x114, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00127A88.c:58: invalid type argument of `unary *'
 * Original: asm/sdk/libc_00127738.s */

s32 func_00127A88(s32 arg0, s32 arg1) {
    s128 var_t1;
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_t1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;
    s64 var_t2;
    u8 temp_v0;

    var_a1 = arg1;
    temp_t0 = var_a1 | arg0;
    var_v1 = arg0;
    if (!(temp_t0 & 7)) {
        temp_t1 = (((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101;
        temp_a0 = (((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080;
        if (temp_t0 & 0xF) {
            var_t2 = *var_a1;
            var_a2 = arg0;
            if (!((var_t2 - temp_t1) & ~var_t2 & temp_a0)) {
                do {
                    *var_a2 = var_t2;
                    var_a1 += 8;
                    var_t2 = *var_a1;
                    var_a2 += 8;
                } while (!((var_t2 - temp_t1) & ~var_t2 & temp_a0));
            }
        } else {
            M2C_ERROR(/* unknown instruction: pcpyld $t2, $t1, $t1 */);
            var_t1 = (s128) *var_a1;
            M2C_ERROR(/* unknown instruction: pcpyld $t0, $a0, $a0 */);
            M2C_ERROR(/* unknown instruction: psubb $v0, $t1, $t2 */);
            M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $t1 */);
            M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
            var_a2 = arg0;
            if ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t0 */) | M2C_ERROR(/* unknown instruction: pcpyud $a0, $v0, $t1 */)) == 0) {
                do {
                    *var_a2 = var_t1;
                    var_a1 += 0x10;
                    var_t1 = *var_a1;
                    M2C_ERROR(/* unknown instruction: psubb $v0, $t1, $t2 */);
                    M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $t1 */);
                    M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                    var_a2 += 0x10;
                } while ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t0 */) | M2C_ERROR(/* unknown instruction: pcpyud $a0, $v0, $t1 */)) == 0);
            }
        }
        var_v1 = var_a2;
    }
    do {
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while ((temp_v0 << 0x18) != 0);
    return arg0;
}
