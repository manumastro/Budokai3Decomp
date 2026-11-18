/* Draft (not built): func_00198568 at 0x00198568, size 0x8C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198568.s */

s32 func_0018D650(s32, s32);                    /* extern */
s32 func_001985F8(s32, s32 *, s32 *);               /* extern */

s32 func_00198568(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    *arg3 = 0;
    if (*arg2 >= 0) {
        temp_a0 = arg0 + (arg1 * 0x74);
        if (*(s32 *)((u8 *)temp_a0 + 0x12B8) != 0) {
            if (func_001985F8(temp_a0 + 0x12B8, arg2, arg3) == -1) {
                return func_0018D650(arg0, 0xFF000421);
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0;
        }
    }
    return 0;
}
