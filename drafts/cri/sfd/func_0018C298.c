/* Draft (not built): func_0018C298 at 0x0018C298, size 0x7C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018C298.c:17: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018C298.s */

s32 func_00179148(s32, s32, s32, void *);       /* extern */
s32 func_0017B240();                                /* extern */
s32 func_0017B3D0(s32);                         /* extern */

s32 func_0018C298(s32 arg0, s32 arg1) {
    s32 sp4;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0017B240();
    var_v0 = arg0 + ((arg1 < 7) int arg1 : 6);
    if (temp_v0 != 0) {
        func_00179148(temp_v0, arg0, arg1, sp);
        func_0017B3D0(temp_v0);
        var_v0 = arg0 + sp0;
    }
    return var_v0;
}
