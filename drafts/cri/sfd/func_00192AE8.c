/* Draft (not built): func_00192AE8 at 0x00192AE8, size 0x178, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00192AE8.c:49: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00192AE8.s */

s32 func_00172A40(s32, s32, s32, s32);              /* extern */
s32 func_00192C60(void *, s32, s32 *, s32 *);   /* extern */
s32 func_0019A080(void *, s32, void *);         /* extern */
s32 func_0019A120(void *, s32);                     /* extern */
s32 func_0019A718(void *, void *, s32 *);       /* extern */
s32 func_0019B940(void *);                          /* extern */

s32 func_00192AE8(u8 *arg0, s32 arg1) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 (*temp_v0)(u8 *, s32, s32, s32);
    s32 temp_s3;
    s32 var_s4;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_s1;
    u8 *temp_s5;

    temp_s1 = arg0 + 0xCC0;
    var_s4 = 0;
    temp_a2 = arg0 + 0xD80;
    temp_s5 = *(u8 **)((u8 *)arg0 + 0x1C70);
    if (*(s32 *)((u8 *)arg0 + 0xDD8) != 0) {
        var_s4 = (*(s32 *)((u8 *)temp_a2 + 0x24) - *(s32 *)((u8 *)(arg0 + 0xDD8) + 0x24)) + *(s32 *)((u8 *)temp_s1 + 0x158);
    }
    temp_v0 = *(s32 (**)(u8 *, s32, s32, s32))((u8 *)temp_s1 + 0x18);
    temp_s3 = *(s32 *)((u8 *)temp_a2 + 0x28);
    if (temp_v0 != NULL) {
        return temp_v0(arg0, arg1, var_s4, temp_s3);
    }
    if (arg1 == 1) {
        func_0019A080(temp_s1, var_s4, temp_a2);
    }
    if ((u32) (arg1 - 1) < 2U) {
        var_s4 = func_0019A120(temp_s1, var_s4);
    }
    if (func_0019B940(arg0) < 0x3E9) {
        var_v0 = 0;
        if (*(s32 *)((u8 *)temp_s5 + 0x84) < *(s32 *)((u8 *)arg0 + 0xA38)) {
            goto block_11;
        }
    } else {
block_11:
        func_0019A718(arg0, sp, &sp4);
        var_v0 = 0;
        if (sp0 >= 0) {
            func_00192C60(arg0, arg1, &sp8, &spC);
            var_v0 = 0;
            if (func_00172A40(sp0, sp4, var_s4 - ((s32) (temp_s3 * sp8) / spC), temp_s3) == 0) {
                var_v0 = 1;
                *(s32 *)((u8 *)temp_s5 + 0x84) = (s32) (*(s32 *)((u8 *)temp_s5 + 0x84) + 1);
            }
        }
    }
    return var_v0;
}
