/* Draft (not built): func_00196750 at 0x00196750, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196750.s */

s32 func_00196728(s32);                             /* extern */
extern s32 D_00426AE4;

s32 func_00196750(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    var_s0 = &D_00426AE4;
    var_s1 = 0;
loop_1:
    temp_v0 = *var_s0;
    var_s0 += 4;
    if ((temp_v0 == 0) || (var_v0 = func_00196728(temp_v0), (var_v0 != 0))) {
        var_s1 += 1;
        if (var_s1 >= 8) {
            var_v0 = 1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
