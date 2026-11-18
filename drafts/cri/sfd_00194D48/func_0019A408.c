/* Draft (not built): func_0019A408 at 0x0019A408, size 0x80, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0019A408.c:15: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A408.s */

s32 func_001999E0(s32, s32);                    /* extern */
s32 func_0019A330(s32, s32, void *, s32 *);     /* extern */

s32 func_0019A408(s32 arg0) {
    s32 sp4;
    s32 var_v0;

    var_v0 = func_001999E0(6);
    if (var_v0 != 0) {
        var_v0 = func_001999E0(arg0, 0x33);
        if (var_v0 != 0) {
            func_0019A330(arg0, arg0 + 0xCC0, sp, &sp4);
            var_v0 = var_v0 < (sp0 / sp4);
        }
    }
    return var_v0;
}
