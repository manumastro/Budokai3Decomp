/* Draft (not built): func_0018C488 at 0x0018C488, size 0x78, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018C488.c:14: `sp2' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018C488.s */

s32 func_0018C660(void *, s32, s32);                /* extern */
extern s32 D_004672C0;

s32 func_0018C488(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;

    if (func_0018C660(sp, arg0, arg1) == 0) {
        return -1;
    }
    var_v0 = -1;
    temp_v1 = *(&D_004672C0 + (((sp0 * 0x10) + sp2) * 4));
    if (temp_v1 != -1) {
        var_v0 = temp_v1 * 0x3E8;
    }
    return var_v0;
}
