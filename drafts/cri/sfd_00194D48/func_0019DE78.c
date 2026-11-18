/* Draft (not built): func_0019DE78 at 0x0019DE78, size 0x88, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019DE78.s */

s8 *func_0019DE78(s8 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_a2;
    s8 *var_a0;
    s8 var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    var_a2 = 0;
    if ((var_v1 != 0x2E) && (var_v1 != 0x20) && (var_v1 != 0) && ((u32) (var_v1 - 0x30) < 0xAU)) {
loop_5:
        var_a0 += 1;
        temp_v0 = (var_a2 * 0xA) + var_v1;
        var_v1 = *var_a0;
        var_a2 = temp_v0 - 0x30;
        if ((var_v1 != 0x2E) && (var_v1 != 0x20) && (var_v1 != 0)) {
            if ((u32) (var_v1 - 0x30) < 0xAU) {
                goto loop_5;
            }
        }
    }
    *arg1 = var_a2;
    return var_a0;
}
