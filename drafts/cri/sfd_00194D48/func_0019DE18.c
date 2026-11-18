/* Draft (not built): func_0019DE18 at 0x0019DE18, size 0x60, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019DE18.s */

s32 func_0019DE78(s32, s32);                        /* extern */
s32 strstr(s32 *);                              /* extern */
extern s32 D_00467A58;

s32 func_0019DE18(s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = strstr(&D_00467A58);
    if (var_v0 != 0) {
        func_0019DE78(func_0019DE78(var_v0 + 4, arg1) + 1, arg2);
        var_v0 = 1;
    }
    return var_v0;
}
