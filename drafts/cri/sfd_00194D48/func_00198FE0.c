/* Draft (not built): func_00198FE0 at 0x00198FE0, size 0xA0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00198FE0.c:14: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198FE0.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00198F70(s32, void *);                 /* extern */
s32 func_00199080(s32, s32, s32, s32 *);        /* extern */

s32 func_00198FE0(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    *arg3 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000156);
    }
    func_00198F70(*(s32 *)((u8 *)arg0 + 0x31E8), sp);
    if (sp0 != 0) {
        func_00199080(*(s32 *)((u8 *)arg0 + 0x31E8), arg1, arg2, arg3);
    }
    return 0;
}
