/* Draft (not built): func_0019A848 at 0x0019A848, size 0x48, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A848.s */

s32 func_0019AA08();                                /* extern */

s32 func_0019A848(s32 *arg1, s32 *arg2) {
    s32 var_v0;

    var_v0 = func_0019AA08();
    if (var_v0 != 0) {
        *arg1 = -2;
        var_v0 = 0;
        *arg2 = 1;
    }
    return var_v0;
}
