/* Draft (not built): func_0018E0A0 at 0x0018E0A0, size 0x178, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018E0A0.c:32: `sp8' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018E0A0.s */

s32 func_0017ADF0(s32, void *);                     /* extern */
s32 func_0018D650(void *, s32);                 /* extern */
s32 func_0018E218(s32, s32, s32, s32);              /* extern */
s32 func_0018ECC8(void *, s32);             /* extern */
extern s32 D_00467490;

s32 func_0018E0A0(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 *temp_s3;
    s32 temp_a0;
    s32 temp_t0;
    s32 var_s6;
    s32 var_v0;
    u8 *temp_s1;

    temp_s3 = M2C_ERROR(/* Read from unset register $t0 */);
    var_s6 = 0;
    *arg3 = 0;
    *temp_s3 = 0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    if (func_0017ADF0(*(s32 *)((u8 *)temp_s1 + 0), sp) != 0) {
        var_s6 = func_0018D650(arg0, 0xFF000D06);
    }
    if (sp1C < 0) {
        return func_0018D650(arg0, 0xFF000D0E);
    }
    if (sp1C != 0) {
        if (arg2 >= sp1C) {
            temp_a0 = *(s32 *)((u8 *)((sp0 * 4) + temp_s1) + -0x2BC);
            if (temp_a0 == 0) {
                var_v0 = *(&D_00467490 + (sp4 * 4))(arg0, sp8, arg1, sp1C);
            } else {
                var_v0 = func_0018E218(temp_a0, *(s32 *)((u8 *)temp_s1 + 0x144), *(s32 *)((u8 *)temp_s1 + 0x148), sp0);
            }
            *temp_s3 = var_v0;
            temp_t0 = *temp_s3;
            if (temp_t0 != 0) {
                if (temp_t0 != 1) {
                    var_s6 = temp_t0;
                } else {
                    *arg3 = sp1C;
                }
            }
            return var_s6;
        }
        func_0018ECC8(arg0, 0);
        return 0;
    }
    *arg3 = 0;
    *temp_s3 = 1;
    return 0;
}
