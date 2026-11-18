/* Draft (not built): memchr at 0x001255C8, size 0xE0, segment sdk/libc_00125590 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001255C8.c:47: parse error before ')' token
 * Original: asm/nonmatchings/sdk/libc_00125590/memchr.s */

s128 *memchr(s32 arg0, s32 arg1, u32 arg2) {
    s32 var_a0;
    s32 var_a2_2;
    s32 var_a3;
    u32 var_a2;

    var_a0 = arg0;
    var_a2 = arg2;
    if (var_a2 >= 0x10U) {
        var_a3 = var_a0;
        if (!(var_a0 & 0xF)) {
            M2C_ERROR(/* unknown instruction: pcpyh $t0, $t2 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t1, $t0, $t0 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t0, $v1, $v1 */);
loop_3:
            M2C_ERROR(/* unknown instruction: pxor $v0, $v0, $t1 */);
            M2C_ERROR(/* unknown instruction: pcpyld $t2, $a0, $a0 */);
            M2C_ERROR(/* unknown instruction: pnor $v1, $zero, $v0 */);
            M2C_ERROR(/* unknown instruction: psubb $v0, $v0, $t2 */);
            M2C_ERROR(/* unknown instruction: pand $v0, $v0, $v1 */);
            if ((M2C_ERROR(/* unknown instruction: pand $v0, $v0, $t0 */) | M2C_ERROR(/* unknown instruction: pcpyud $v1, $v0, $t1 */)) == 0) {
                var_a2 -= 0x10;
                var_a3 += 0x10;
                if (var_a2 >= 0x10U) {
                    goto loop_3;
                }
            }
            var_a0 = var_a3;
        }
    }
    var_a2_2 = var_a2 - 1;
    if (var_a2_2 != 0xFFFFFFFF) {
loop_8:
        var_a2_2 -= 1;
        if (*var_a0 != (arg1 & 0xFF)) {
            var_a0 += 1;
            if (var_a2_2 == 0xFFFFFFFF) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return NULL;
            }
            goto loop_8;
        }
        return (s128 *) var_a0;
    }
    return NULL;
}
