/* Draft (not built): func_00191260 at 0x00191260, size 0x9C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00191260.s */

s32 func_0018D650();

s32 func_00191260(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    switch (arg1) {                                 /* irregular */
    case 0:
        return 0;
    case -2:
        if (arg2 <= 0) {
            return func_0018D650();
        }
        return 0;
    case -3:
        if (arg2 <= 0) {
            return func_0018D650();
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return 0;
    default:
        return func_0018D650(arg0, arg3);
    }
}
