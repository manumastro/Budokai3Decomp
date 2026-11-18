/* Draft (not built): func_0019A3C8 at 0x0019A3C8, size 0x3C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A3C8.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0019A408();                                /* extern */

s32 func_0019A3C8(s32 arg0) {
    s32 var_v0;

    var_v0 = func_0019A408();
    if (var_v0 != 0) {
        func_0018D650(arg0, 0xFF000222);
        var_v0 = 1;
    }
    return var_v0;
}
