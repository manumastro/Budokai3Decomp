/* Draft (not built): func_0019B8A0 at 0x0019B8A0, size 0x98, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0019B8A0.c:21: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B8A0.s */

s32 func_00172A40(s32, s32, s32, s32);              /* extern */
s32 func_0019A718(void *, s32 *);               /* extern */

s32 func_0019B8A0(u8 *arg0) {
    s32 sp4;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u8 *temp_v1;

    var_v0 = 1;
    temp_v1 = arg0 + 0xCC0;
    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x274);
    temp_s1 = *(s32 *)((u8 *)temp_v1 + 0x270);
    if (*(s32 *)((u8 *)arg0 + 0x94C) != 0) {
        var_v0 = 0;
        if (temp_s1 != -5) {
            func_0019A718(sp, &sp4);
            var_v0 = func_00172A40(temp_s1 + ((s32) (temp_s0 * 0x7D0) / 59940), temp_s0, sp0, sp4) != 0;
        }
    }
    return var_v0;
}
