/* Draft (not built): func_0018C978 at 0x0018C978, size 0xB8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018C978.s */

s32 func_0018CA30(s32);                             /* extern */
s32 func_0018CA88(s32, s32);                        /* extern */
s32 func_0018CAE0(s32, s32, s32);                   /* extern */

s32 func_0018C978(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_s2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;

    temp_s2 = M2C_ERROR(/* Read from unset register $t0 */);
    var_s0 = arg2 - 6;
    var_s1 = arg3 + 6;
    *temp_s2 = 0;
    var_v0 = 0;
    if (arg1 == 2) {
        if (func_0018CA30(var_s0) == 0) {
            var_s0 -= 2;
            var_s1 += 2;
            temp_v0 = func_0018CA30(var_s0);
            if (temp_v0 != 0) {
                goto block_5;
            }
            return temp_v0;
        }
block_5:
        temp_s0 = var_s0 - 0xC;
        temp_s1 = var_s1 + 0xC;
        var_v0 = func_0018CA88(temp_s0, temp_s1);
        if (var_v0 != 0) {
            *temp_s2 = func_0018CAE0(arg0, temp_s0, temp_s1);
            var_v0 = 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
