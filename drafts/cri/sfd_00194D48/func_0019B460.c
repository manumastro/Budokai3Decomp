/* Draft (not built): func_0019B460 at 0x0019B460, size 0x34, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0019B460.c:11: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B460.s */

s32 func_0019B5E8(void *);                      /* extern */

s32 func_0019B460(s32 arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (*(s32 *)((u8 *)(arg0 + 0x9A0) + 0x38) == 0) {
        func_0019B5E8(sp);
        var_v0 = sp0;
    }
    return var_v0;
}
