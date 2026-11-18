/* Draft (not built): memcmp at 0x001256A8, size 0x94, segment sdk/libc_00125590 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_001256A8.c:35: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libc_00125590/memcmp.s */

s32 memcmp(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_t1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2_2;
    u32 var_a2;
    u8 temp_v0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    if ((var_a2 >= 0x10U) && !((var_a0 | var_a1) & 0xF)) {
loop_2:
        var_a0 += 0x10;
        temp_t1 = M2C_ERROR(/* unknown instruction: pcpyud $t2, $t0, $a3 */) | M2C_ERROR(/* unknown instruction: pxor $t0, $v0, $v1 */);
        var_a1 = (temp_t1 == 0) int (var_a1 + 0x10) : var_a1;
        if (temp_t1 != 0) {
            var_a0 -= 0x10;
        } else {
            var_a2 -= 0x10;
            if (var_a2 >= 0x20U) {
                goto loop_2;
            }
        }
    }
    var_a2_2 = var_a2 - 1;
    if (var_a2_2 != 0xFFFFFFFF) {
loop_8:
        temp_v1 = *var_a0;
        temp_v0 = *var_a1;
        var_a0 += 1;
        if (temp_v1 != temp_v0) {
            return temp_v1 - temp_v0;
        }
        var_a2_2 -= 1;
        var_a1 += 1;
        if (var_a2_2 == 0xFFFFFFFF) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_8;
    }
    return 0;
}
