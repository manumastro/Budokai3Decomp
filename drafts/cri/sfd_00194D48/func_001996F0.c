/* Draft (not built): func_001996F0 at 0x001996F0, size 0xB4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001996F0.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001997A8(s32, s32);                    /* extern */
s32 func_00199818(s32, s32, s32);               /* extern */
s32 func_00199868(s32, s32, s32);               /* extern */
extern s32 D_004268E0;

s32 func_001996F0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        func_001997A8(arg1, arg2);
        *(&D_004268E0 + (arg1 * 4)) = arg2;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000112);
    }
    func_00199818(arg0, arg1, arg2);
    func_00199868(arg0, arg1, arg2);
    return 0;
}
