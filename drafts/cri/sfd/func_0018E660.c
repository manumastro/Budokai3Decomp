/* Draft (not built): func_0018E660 at 0x0018E660, size 0x9C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0018E660.c:10: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_0018E660.s */

s32 func_0018C978();                                /* extern */
s32 func_0018E700(s32, s32, s32, s32);              /* extern */
s32 func_0018F5C8(s32, s32, s32, s32);          /* extern */

s32 func_0018E660(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0018C978() != 0) {
        func_0018F5C8(arg0, arg1, arg2, arg3);
        if (sp0 != 0) {
            func_0018E700(arg0, 0, arg2 - 0x12, arg3 + 0x12);
        }
        return 1;
    }
    return func_0018E700(arg0, arg1, arg2, arg3);
}
