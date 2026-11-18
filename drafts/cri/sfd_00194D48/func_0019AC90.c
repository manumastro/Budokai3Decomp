/* Draft (not built): func_0019AC90 at 0x0019AC90, size 0x88, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 17 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AC90.s */

s32 func_0019AD18();
extern s32 D_00426AE4;

s32 func_0019AC90(s32 arg0) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    if (arg0 == 0) {
        var_s2 = 0;
        var_s1 = &D_00426AE4;
        var_s0 = 7;
        var_v0 = D_00426AE4;
loop_2:
        var_s1 += 4;
        if (var_v0 != 0) {
            temp_v0 = func_0019AD18(var_v0);
            var_s2 = (temp_v0 != 0) ? temp_v0 : var_s2;
        }
        var_s0 -= 1;
        if (var_s0 >= 0) {
            var_v0 = *var_s1;
            goto loop_2;
        }
        return var_s2;
    }
    return func_0019AD18();
}
