/* Draft (not built): func_00115FB0 at 0x00115FB0, size 0x12C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115FB0.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_001155B8();                                /* extern */
s32 func_00115850(s32);                         /* extern */
s32 func_00115CD8(s32, s32, s32 *, s32 *); /* extern */
extern s32 *D_00478700;
extern s32 func_00115F50;

s32 func_00115FB0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s0;
    s32 *temp_v0_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 == 0) {
        return 0x80000016;
    }
    temp_s0 = D_00478700;
    temp_s3 = DI();
    if (temp_s0 != NULL) {
        D_00478700 = *(s32 **)((u8 *)temp_s0 + 0);
    }
    if (temp_s0 == NULL) {
        if (temp_s3 != 0) {
            EI();
        }
        return 0x80008005;
    }
    temp_v0 = func_001155B8();
    if (temp_v0 >= 0) {
        *(s32 *)((u8 *)temp_s0 + 8) = arg1;
        *(s32 *)((u8 *)temp_s0 + 0xC) = arg2;
        *(s32 *)((u8 *)temp_s0 + 4) = temp_v0;
        func_00115CD8(temp_v0, arg0, &func_00115F50, temp_s0);
        func_00115850(temp_v0);
        var_v0_2 = (s32) temp_s0 * 0x10;
        if (temp_s3 != 0) {
            EI();
            var_v0_2 = (s32) temp_s0 * 0x10;
        }
        var_v0 = var_v0_2 | (temp_v0 & 0xFE) | 1;
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_v0_2 = D_00478700;
    D_00478700 = temp_s0;
    *(s32 **)((u8 *)temp_s0 + 0) = temp_v0_2;
    *(s32 *)((u8 *)temp_s0 + 4) = 0;
    var_v0 = temp_v0;
    if (temp_s3 != 0) {
        EI();
        return temp_v0;
    }
    return var_v0;
}
