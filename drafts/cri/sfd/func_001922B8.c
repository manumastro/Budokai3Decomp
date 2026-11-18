/* Draft (not built): func_001922B8 at 0x001922B8, size 0x12C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001922B8.c:44: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001922B8.s */

s32 func_0017C698(s32, void *);                     /* extern */
s32 func_0017C6F8(s32, s32 *, s32 *, s32 *); /* extern */
s32 func_0018AF78(void *, s32);                 /* extern */
s32 func_0018D650(void *, s32);                 /* extern */
s32 func_001923E8(void *, s32, s32);            /* extern */
s32 func_00192508(void *, s32, s32, s32);       /* extern */
s32 func_00192540(void *, void *);                  /* extern */
s32 func_001999E0(void *, s32);                 /* extern */

s32 func_001922B8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 *temp_s2;
    u8 *temp_s3;

    var_v0 = 0;
    temp_s2 = arg0 + 0x90C;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    if (*(s32 *)((u8 *)temp_s2 + 0x10) == 0) {
        if (func_0017C698(arg1, sp) != 0) {
            return func_0018D650(arg0, 0xFF000F16);
        }
        func_0017C6F8(arg1, &sp4, &sp8, &spC);
        if (func_001999E0(arg0, 0x3C) == 0) {
            *(s32 *)((u8 *)temp_s3 + 0x114) = 0;
        } else {
            temp_v0 = func_0018AF78(arg0, 1);
            var_v1 = spC;
            var_v0_2 = var_v1 < temp_v0;
            if (var_v1 == -1) {
                var_v1 = sp4;
                spC = var_v1;
                var_v0_2 = var_v1 < temp_v0;
            }
            *(s32 *)((u8 *)temp_s3 + 0x114) = (s32) ((var_v0_2 == 0) int temp_v0 : var_v1);
        }
        func_001923E8(arg0, sp0, arg3);
        func_00192508(temp_s2, sp0, arg2, sp4);
        var_v0 = func_00192540(arg0, temp_s2);
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
