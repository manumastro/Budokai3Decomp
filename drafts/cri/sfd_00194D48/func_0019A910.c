/* Draft (not built): func_0019A910 at 0x0019A910, size 0xF8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0019A910.c:23: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A910.s */

s32 func_0019A288(s32);                             /* extern */
s32 func_0019AA08();                                /* extern */

s32 func_0019A910(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp4;
    s32 (*temp_v0)(s32, u8 *, s32 *);
    s32 temp_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_s0;

    var_v0 = func_0019AA08();
    temp_s0 = arg0 + 0xCC0;
    if (var_v0 != 0) {
        temp_v0 = *(s32 (**)(s32, u8 *, s32 *))((u8 *)temp_s0 + 0x2C8);
        if (temp_v0 != NULL) {
            temp_s2 = temp_v0(*(s32 *)((u8 *)temp_s0 + 0x2DC), sp, &sp4);
            if (func_0019A288(arg0) != 0) {
                if (*(s32 *)((u8 *)temp_s0 + 0x2CC) != -5) {
                    var_v1 = sp0 - *(s32 *)((u8 *)temp_s0 + 0x2CC);
                    if (var_v1 < 0) {
                        var_v1 = var_v1 + *(s32 *)((u8 *)temp_s0 + 0x2D8) + 1;
                    }
                    *(s32 *)((u8 *)temp_s0 + 0x2D0) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2D0) + var_v1);
                }
            }
            var_v0 = temp_s2;
            *(s32 *)((u8 *)temp_s0 + 0x2CC) = sp0;
            *(s32 *)((u8 *)temp_s0 + 0x2D4) = sp4;
            *arg1 = *(s32 *)((u8 *)temp_s0 + 0x2D0);
            var_v1_2 = *(s32 *)((u8 *)temp_s0 + 0x2D4);
        } else {
            var_v1_2 = 1;
            *arg1 = -2;
            var_v0 = 0;
        }
        *arg2 = var_v1_2;
    }
    return var_v0;
}
