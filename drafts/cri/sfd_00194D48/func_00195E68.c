/* Draft (not built): func_00195E68 at 0x00195E68, size 0x12C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195E68.s */

s32 memcpy(s32, s32, s32);                      /* extern */

s32 func_00195E68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a3;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_v0;

    var_v0 = 0;
    temp_s0 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s5 = M2C_ERROR(/* Read from unset register $t3 */);
    temp_fp = temp_s0 + temp_s5;
    temp_a3 = (arg1 + arg3) < temp_fp;
    temp_s2 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s4 = M2C_ERROR(/* Read from unset register $t2 */);
    if (temp_a3 == 0) {
        if (temp_s0 < arg1) {
            temp_s3 = arg1 - temp_s0;
            if (temp_s5 >= temp_s3) {
                memcpy(temp_s2, temp_s0, temp_a3);
                memcpy(arg0 + temp_s0, temp_s4, temp_s3);
                memcpy(arg2, (temp_s4 + arg1) - temp_s0, temp_s5 - temp_s3);
            } else {
                memcpy(temp_s2, temp_s0, temp_a3);
                memcpy(arg0 + temp_s0, temp_s4, temp_s5);
            }
        } else {
            memcpy(temp_s2, arg1, temp_a3);
            memcpy(arg2, temp_s2 + arg1, temp_s0 - arg1);
            memcpy((arg2 + temp_s0) - arg1, temp_s4, temp_s5);
        }
        var_v0 = temp_fp;
    }
    return var_v0;
}
