/* Draft (not built): func_0018EB30 at 0x0018EB30, size 0x148, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018EB30.c:43: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018EB30.s */

s32 func_0017AAF0(s32);                             /* extern */
s32 func_0018AF98(void *, s32);                     /* extern */
s32 func_0018EA38(void *, s32);             /* extern */
s32 func_0018EC78(void *, s32);                     /* extern */
s32 func_0018ECC8(void *, void *);              /* extern */

s32 func_0018EB30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s3;
    s32 temp_s7;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_s1;
    u8 *temp_s4;

    temp_s1 = arg0 + 0x1C24;
    temp_s4 = *(u8 **)((u8 *)temp_s1 + 8);
    temp_s3 = *(s32 *)((u8 *)temp_s1 + 0x10);
    temp_s7 = *(s32 *)((u8 *)arg0 + 0x28);
    if (arg2 >= 4) {
        var_s2 = func_0017AAF0(arg1);
        if (var_s2 == 0x80000) {
            if (*(s32 *)((u8 *)temp_s1 + 0x20) < 0) {
                *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) (func_0018AF98(arg0, temp_s3) + 4);
            }
            *(s32 *)((u8 *)temp_s4 + 0x30) = 1;
        } else if (var_s2 != 0) {
            *(s32 *)((u8 *)temp_s4 + 0x30) = 0;
        }
    } else {
        var_s2 = 0;
    }
    if (func_0018EC78(arg0, var_s2) != 0) {
        func_0018EA38(arg0, 1);
        goto block_21;
    }
    var_v1 = arg2 < temp_s7;
    if (arg3 < 4) {
        func_0018ECC8(arg0, sp);
        var_v0 = 0;
        if (sp0 == 0) {
            var_v1 = arg2 < temp_s7;
            goto block_16;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    }
block_16:
    var_v0 = 1;
    if (var_v1 != 0) {
        if (var_s2 != 0x10000) {
            return 1;
        }
        func_0018ECC8(arg0, NULL);
block_21:
        var_v0 = 0;
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
