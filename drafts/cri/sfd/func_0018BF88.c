/* Draft (not built): func_0018BF88 at 0x0018BF88, size 0x98, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018BF88.c:19: `sp8' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018BF88.s */

s32 func_00179148(s32, s32, s32, s32 *);    /* extern */
s32 func_0017AC38(s32, void *);                 /* extern */
s32 func_0017B240();                                /* extern */
s32 func_0017B3D0(s32);                         /* extern */

void func_0018BF88(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp10;
    s32 sp14;
    s32 temp_v0;

    temp_v0 = func_0017B240();
    if (temp_v0 != 0) {
        func_00179148(temp_v0, arg0, arg1, &sp10);
        if (sp14 & 0x10000) {
            func_0017AC38(temp_v0, sp);
            func_0017B3D0(temp_v0);
            *arg2 = sp8;
        }
    }
}
