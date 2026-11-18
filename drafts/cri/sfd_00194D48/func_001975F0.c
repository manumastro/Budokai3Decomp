/* Draft (not built): func_001975F0 at 0x001975F0, size 0x90, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001975F0.c:17: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001975F0.s */

s32 func_001999E0(void *, s32);                 /* extern */
s32 func_0019A5D8(void *, s32 *);                   /* extern */
s32 func_0019AB10(s32, s32, s32, s32);          /* extern */

s32 func_001975F0(u8 *arg0) {
    s32 sp4;
    s32 var_v0;

    if (*(s32 *)((u8 *)arg0 + 0x48) == 4) {
        var_v0 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x50) != 1) {
            if ((*(s32 *)((u8 *)(arg0 + 0x94C) + 0x1C) == 1) || (var_v0 = func_0019A5D8(sp, &sp4), (var_v0 != 0))) {
                goto block_4;
            }
            if (sp0 >= 0) {
                var_v0 = func_0019AB10(func_001999E0(arg0, 0x36), 0x3E8, sp0, sp4) != 0;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_4:
    return 0;
}
