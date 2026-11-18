/* Draft (not built): func_0018A358 at 0x0018A358, size 0xC8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0018A358.c:24: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd/func_0018A358.s */

s32 func_0018A420(void *, s32, s32, s32);       /* extern */
s32 func_0018A750(s32, s32, s32);       /* extern */
s32 func_0018A900(s32, void *, s32, s32);   /* extern */

s32 func_0018A358(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s2;
    s32 var_s3;
    s32 temp_s0;
    s32 temp_t1;
    s32 temp_v1;

    temp_t1 = arg3 * 4;
    temp_s0 = arg0 + (arg3 * 0x74);
    temp_v1 = *(arg2 + temp_t1);
    if (temp_v1 == 0) {
        var_s3 = 0;
        var_s2 = 4;
        goto block_6;
    }
    var_s3 = 1;
    var_s2 = 5;
    if (func_0018A420(sp, *(arg1 + temp_t1), temp_v1, M2C_ERROR(/* Read from unset register $t0 */)) == 0) {
        return -1;
    }
    func_0018A900(temp_s0 + 0x10, sp, temp_s0, 1);
block_6:
    func_0018A750(temp_s0, var_s2, var_s3);
    return 0;
}
