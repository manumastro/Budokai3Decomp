/* Draft (not built): func_00197460 at 0x00197460, size 0x6C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00197460.c:20: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197460.s */

s32 func_00172A40(s32, s32, s32, s32);              /* extern */
s32 func_0019A718(void *, s32 *);               /* extern */

s32 func_00197460(s32 arg0) {
    s32 sp4;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u8 *temp_v1;

    temp_v1 = arg0 + 0x9A0;
    var_v0 = 0;
    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x50);
    temp_s1 = *(s32 *)((u8 *)temp_v1 + 0x54);
    if (temp_s0 != -4) {
        func_0019A718(sp, &sp4);
        var_v0 = 0;
        if (sp0 >= 0) {
            var_v0 = func_00172A40(sp0, sp4, temp_s0, temp_s1) == 0;
        }
    }
    return var_v0;
}
