/* Draft (not built): func_0018DC00 at 0x0018DC00, size 0xD0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018DC00.c:22: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018DC00.s */

s32 func_0018DCD0(void *, void *, s32 *, s32);      /* extern */
s32 func_0018DD38(void *, s32);                     /* extern */
s32 func_0018DD58(void *, s32, s32, s32 *);         /* extern */

s32 func_0018DC00(u8 *arg0) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_s3;
    s32 var_s1;
    s32 var_v1;

    var_v1 = 0;
    var_s1 = 0;
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x28);
loop_4:
    if (var_s1 <= 0x7FFFFFFE) {
        var_v1 = func_0018DCD0(arg0, sp, &sp4, temp_s3);
        if (var_v1 == 0) {
            var_v1 = func_0018DD58(arg0, sp0, sp4, &spC);
            if ((var_v1 == 0) && (spC != 0)) {
                var_v1 = func_0018DD38(arg0, spC);
                if (var_v1 == 0) {
                    var_s1 += spC;
                    goto loop_4;
                }
            }
        }
    }
    return var_v1;
}
