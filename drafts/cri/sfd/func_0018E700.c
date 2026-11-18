/* Draft (not built): func_0018E700 at 0x0018E700, size 0xD8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018E700.c:23: `spC' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018E700.s */

s32 func_0018A9F8(s32, s32, void *);            /* extern */
s32 func_0018E7D8(s32, s32, s32);                   /* extern */

s32 func_0018E700(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 1;
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x1C40);
    if (temp_v1 != 8) {
        func_0018A9F8(temp_v1, arg1, sp);
        var_v0 = 1;
        if (sp0 != 0) {
            temp_v0 = func_0018E7D8(sp0, arg2, arg3);
            if (temp_v0 == 1) {
                if (sp4 != NULL) {
                    sp4(arg0, arg1);
                }
                if (sp8 != NULL) {
                    sp8(spC, arg1);
                }
            }
            var_v0 = temp_v0;
        }
    }
    return var_v0;
}
