/* Draft (not built): func_0019DBD8 at 0x0019DBD8, size 0x50, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: pile error: d_0019DBD8.c:9: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019DBD8.s */

s32 func_0019DB48(void *);                          /* extern */
s32 func_0019DE18(void *, s32, s32);                /* extern */

s32 func_0019DBD8(s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = func_0019DB48(sp);
    if (var_v0 != 0) {
        var_v0 = func_0019DE18(sp, arg1, arg2) != 0;
    }
    return var_v0;
}
