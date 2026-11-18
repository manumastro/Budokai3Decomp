/* Draft (not built): func_00197138 at 0x00197138, size 0xE0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00197138.c:27: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197138.s */

s32 func_0017EE78(s32, s32, s32);               /* extern */
s32 func_00197218();                                /* extern */
s32 func_001972B8(s32);                             /* extern */
s32 func_00197370(s32);                             /* extern */
s32 func_001999E0(s32, s32);                    /* extern */
s32 func_0019A718(s32, void *, s32 *);          /* extern */
s32 func_0019AB10(s32, s32, s32, s32);              /* extern */

s32 func_00197138(s32 arg0) {
    s32 sp4;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u8 *temp_v1;

    if (func_00197218() == 0) {
        if ((func_001999E0(arg0, 5) != 1) || (var_v0 = 1, (func_001972B8(arg0) == 0))) {
            if ((func_001999E0(arg0, 6) == 1) && (func_00197370(arg0) != 0)) {
                goto block_5;
            }
            func_0019A718(arg0, sp, &sp4);
            temp_v1 = arg0 + 0xCC0;
            temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x27C);
            temp_s1 = *(s32 *)((u8 *)temp_v1 + 0x278);
            var_v0 = func_0019AB10(sp0, sp4, temp_s1 - func_0017EE78(func_001999E0(arg0, 0x45), temp_s0, 0xF4240), temp_s0) != 0;
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_5:
    return 1;
}
