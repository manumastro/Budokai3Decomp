/* Draft (not built): func_0018FBC8 at 0x0018FBC8, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FBC8.s */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00194AB0(s32, s32);                    /* extern */

s32 func_0018FBC8(s32 arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000183);
        return 0;
    }
    return func_00194AB0(arg0, 0xFF000183);
}
