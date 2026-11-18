/* Draft (not built): func_0015FA60 at 0x0015FA60, size 0xE4, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0015FA60.c:30: parse error before "f32"
 * Original: asm/nonmatchings/cri/adx_0015EFB0/func_0015FA60.s */

s32 ADXT_GetTime(void *, void *, s32 *);        /* extern */
s32 func_00158A68(s32);                             /* extern */
s32 func_0015F5F0();                            /* extern */
extern s32 D_00404C14;
extern s32 D_0041115C;
extern s32 D_004111A8;

s32 func_0015FA60(u8 *arg0) {
    s32 sp4;
    f32 temp_f1;
    f32 var_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_v0;

    var_v0 = 0;
    if (*(s8 *)((u8 *)arg0 + 0x72) != 0) {
        temp_s2 = func_00158A68(*(s32 *)((u8 *)arg0 + 0xC));
        func_0015F5F0();
        temp_s1 = D_0041115C;
        D_0041115C = 0;
        ADXT_GetTime(arg0, sp, &sp4);
        temp_f1 = (f32) D_004111A8;
        D_0041115C = temp_s1;
        var_a0 = temp_f1;
        var_v0 = temp_s2;
        if ((((f32) sp0 / (f32) sp4) * temp_f1) >= 2.1474836e9f) {
            var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, temp_f1) | 0x80000000));
        }
        *(f32 *)((u8 *)arg0 + 0x9C) = var_a0;
        *(s32 *)((u8 *)arg0 + 0xA0) = (s32) D_00404C14;
    }
    return var_v0;
}
