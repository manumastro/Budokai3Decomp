/* Draft (not built): func_0018FC18 at 0x0018FC18, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018FC18.s */

s32 func_0017C840(s32, s32, s32, s32);          /* extern */
s32 func_0018D650(s32, s32, s32, s32);      /* extern */
s32 func_0018D870();                                /* extern */

s32 func_0018FC18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000184, arg2, arg3);
    }
    func_0017C840(**(s32 **)((u8 *)arg0 + 0x1C70), arg1, arg2, arg3);
    return 0;
}
