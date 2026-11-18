/* Draft (not built): strlen at 0x00127BA0, size 0x138, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00127BA0.c:44: invalid type argument of `unary *'
 * Original: asm/sdk/libc_00127738.s */

s32 strlen(s32 arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_a0;
    s32 var_a1;
    s64 temp_v0;
    s64 temp_v1;

    var_a0 = arg0;
    temp_a3 = var_a0;
    if (!(var_a0 & 7)) {
        var_a1 = var_a0;
        if (!(var_a0 & 0xF)) {
            M2C_ERROR(/* unknown instruction: pcpyld $t0, $v0, $v0 */);
            M2C_ERROR(/* unknown instruction: psubb $v0, $v1, $t0 */);
            M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v1 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t1, $a0, $a0 */);
            M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
            if ((M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $t0 */) | M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t1 */)) == 0) {
                do {
                    var_a1 += 0x10;
                    M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
                    M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $t0 */);
                    M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                } while ((M2C_ERROR(/* unknown instruction: pcpyud $v1, $a0, $a2 */) | M2C_ERROR(/* unknown instruction: pand $a0, $v0, $t1 */)) == 0);
            }
        } else {
            temp_v1 = (s64) *var_a1;
            temp_a0 = (((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080;
            if (!((temp_v1 - ((((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101)) & ~temp_v1 & temp_a0)) {
                do {
                    var_a1 += 8;
                    temp_v0 = *var_a1;
                } while (!((temp_v0 - ((((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101)) & ~temp_v0 & temp_a0));
            }
        }
        var_a0 = var_a1;
    }
loop_9:
    if (*var_a0 != 0) {
        var_a0 += 1;
        goto loop_9;
    }
    return var_a0 - temp_a3;
}
