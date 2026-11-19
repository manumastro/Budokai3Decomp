/* Draft (not built): func_00127810 at 0x00127810, size 0x12C, segment sdk/libc_00127738 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00127810.c:62: parse error before ')' token
 * Original: asm/nonmatchings/sdk/libc_00127738/func_00127810.s */

s32 func_00127A88(s128 *, s128 *, s32);         /* extern */

s64 func_00127810(s64 arg0, s64 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a3;
    s64 temp_s0;
    s64 temp_v0;
    s64 var_a0;
    s64 var_a2;

    var_a0 = arg0;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_s0 = var_a0;
    if (!(temp_s0 & 7)) {
        temp_v1 = (((0x01010101 << 0x10) | 0x101) << 0x10) | 0x101;
        temp_a0 = (((0x80808080 << 0x10) | 0x8080) << 0x10) | 0x8080;
        var_a2 = *temp_s0;
        if (!(temp_s0 & 0xF)) {
            var_a3 = M2C_ERROR(/* unknown instruction: pcpyld $a3, $v1, $v1 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t0, $a0, $a0 */);
            M2C_ERROR(/* unknown instruction: psubb $v1, $v0, $a3 */);
            M2C_ERROR(/* unknown instruction: pnor $v0, $zero, $v0 */);
            M2C_ERROR(/* unknown instruction: pand $v1, $v1, $v0 */);
            var_a0 = temp_s0;
            if ((M2C_ERROR(/* unknown instruction: pcpyud $v0, $v1, $v1 */) | M2C_ERROR(/* unknown instruction: pand $v1, $v1, $t0 */)) == 0) {
                var_a2 = var_a0 + 0x10;
loop_4:
                M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
                M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $a3 */);
                M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
                if ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t0 */) | M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $v0 */)) == 0) {
                    var_a2 += 0x10;
                    goto loop_4;
                }
                goto block_13;
            }
        } else {
            var_a3 = temp_v1;
            var_a0 = temp_s0;
            if (!((var_a2 - temp_v1) & ~var_a2 & temp_a0)) {
                var_a2 = temp_s0 + 8;
loop_10:
                temp_v0 = *var_a2;
                if (!((temp_v0 - var_a3) & ~temp_v0 & temp_a0)) {
                    var_a2 += 8;
                    goto loop_10;
                }
block_13:
                var_a0 = var_a2;
            }
        }
    }
loop_14:
    if (*var_a0 != 0) {
        var_a0 += 1;
        goto loop_14;
    }
    func_00127A88((s128 *) var_a0, (s128 *) var_a2, var_a3);
    return temp_s0;
}
