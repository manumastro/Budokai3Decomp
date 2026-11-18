/* Draft (not built): func_001884E8 at 0x001884E8, size 0x90, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001884E8.c:23: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001884E8.s */

s32 func_00188440(s32);                         /* extern */
s32 func_00188578(s32, void *);                     /* extern */
s32 func_00188D98(s32);                         /* extern */
s32 func_00188E68(s32, s32);                    /* extern */
s32 func_00189088(s32);                             /* extern */
s32 func_001890C0(s32);                         /* extern */
s32 func_001891A0(s32);                         /* extern */
s32 func_001999E0(s32);                         /* extern */

s32 func_001884E8(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_001999E0(6);
    if (var_v0 != 0) {
        if (func_00189088(arg0) == 1) {
            return 0;
        }
        temp_s0 = func_00188578(arg0, sp);
        func_00188D98(arg0);
        func_00188E68(arg0, sp0);
        func_001890C0(arg0);
        func_001891A0(arg0);
        func_00188440(arg0);
        var_v0 = temp_s0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
