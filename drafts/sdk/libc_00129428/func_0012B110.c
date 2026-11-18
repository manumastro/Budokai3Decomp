/* Draft (not built): func_0012B110 at 0x0012B110, size 0x1C0, segment sdk/libc_00129428 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0012B110.c:59: invalid operands to binary -
 * Original: asm/nonmatchings/sdk/libc_00129428/func_0012B110.s */

s64 func_00121988(s32, s64);                    /* extern */
s32 func_00121ED8(s64, s32);                    /* extern */
s8 *func_00122560(s32, s64, s32, s32);          /* extern */

s8 *func_0012B110(s32 arg0, s64 arg1, s32 arg2, s32 arg3) {
    u32 sp4;
    s32 var_s4;
    s32 *temp_s5;
    s32 temp_s1;
    s32 var_s3;
    s64 var_s2;
    s8 *temp_s0;
    s8 *temp_s4;
    s8 *var_s0;
    u32 var_a0;
    u32 var_v1;

    temp_s1 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    var_s2 = arg1;
    var_s3 = arg2;
    var_s4 = 3;
    temp_s5 = M2C_ERROR(/* Read from unset register $t1 */);
    if ((temp_s1 != 0x66) && ((temp_s1 == 0x65) || (var_s4 = 2, (temp_s1 == 0x45)))) {
        var_s3 += 1;
        var_s4 = 2;
    }
    if ((var_s2 >> 0x20) >= 0) {
        *temp_s0 = 0;
    } else {
        var_s2 = func_00121988(0, var_s2);
        *temp_s0 = 0x2D;
    }
    temp_s4 = func_00122560(arg0, var_s2, var_s4, var_s3);
    if (((temp_s1 != 0x67) && (temp_s1 != 0x47)) || (arg3 & 1)) {
        var_s0 = &temp_s4[var_s3];
        if (temp_s1 == 0x66) {
            if ((*temp_s4 == 0x30) && (func_00121ED8(var_s2, 0) != 0)) {
                *temp_s5 = 1 - var_s3;
            }
            var_s0 = &var_s0[*temp_s5];
        }
        var_v1 = (u32) (((func_00121ED8(var_s2, 0) ^ 0) == 0) int var_s0 : (s8 *) sp4);
        sp4 = var_v1;
        var_a0 = var_v1;
        if (var_v1 < (u32) var_s0) {
            do {
                var_v1 = var_a0 + 1;
                *var_a0 = 0x30;
                sp4 = var_v1;
                var_a0 = var_v1;
            } while (var_v1 < (u32) var_s0);
        }
    } else {
        var_v1 = sp4;
    }
    *M2C_ERROR(/* Read from unset register $t3 */) = var_v1 - temp_s4;
    return temp_s4;
}
