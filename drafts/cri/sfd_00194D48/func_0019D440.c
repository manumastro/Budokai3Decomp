/* Draft (not built): func_0019D440 at 0x0019D440, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D440.s */

s32 func_0018B648(s32, s32 *);                      /* extern */
s32 func_0019B428(void *, s32);                     /* extern */

s32 func_0019D440(u8 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    if ((u32) (*(s32 *)((u8 *)arg0 + 0x48) - 3) >= 2U) {
        *arg1 = 0;
        goto block_6;
    }
    var_v0 = func_0018B648(*(s32 *)((u8 *)arg0 + 0x1D88), arg1);
    if (var_v0 == 0) {
        temp_v0 = func_0019B428(arg0, *arg1);
        if (temp_v0 == 0) {
            *arg1 = 0;
            return temp_v0;
        }
block_6:
        var_v0 = 0;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
