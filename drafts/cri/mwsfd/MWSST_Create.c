/* Draft (not built): MWSST_Create at 0x00186B38, size 0x120, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00186B38.c:34: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/MWSST_Create.s */

s32 func_0016E120(s32, s32, s32);                   /* extern */
s32 func_001866B8();                            /* extern */
s32 func_00186780(void *, s32 *, s32 *);            /* extern */
s32 func_001867E8(s32, s32);                        /* extern */
s32 func_00186DB8();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_0018DA30(s32, s32, s32, s32);      /* extern */
extern s32 D_00467058;
extern s32 D_00467088;
extern s32 D_004670B0;

s32 MWSST_Create(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 sp8;
    s32 *var_a0;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u8 *temp_s2;

    temp_s2 = arg0 + 0x294;
    var_v0 = func_00186DB8();
    if (var_v0 != 0) {
        func_001866B8();
        temp_s5 = *(s32 *)((u8 *)arg0 + 0x40);
        *(s32 *)((u8 *)temp_s2 + 8) = arg2;
        *(s32 *)((u8 *)temp_s2 + 4) = arg1;
        *(s32 *)((u8 *)temp_s2 + 0x10) = arg3;
        var_a0 = &D_00467058;
        if (arg2 >= func_00186780(sp, &sp4, &sp8)) {
            temp_v0 = func_0016E120(arg1 + sp0, sp4, sp8);
            if (temp_v0 == 0) {
                var_a0 = &D_00467088;
                goto block_7;
            }
            *(s32 *)((u8 *)temp_s2 + 0xC) = temp_v0;
            temp_v0_2 = func_001867E8(arg1, sp0);
            if (temp_v0_2 == 0) {
                var_a0 = &D_004670B0;
                goto block_7;
            }
            *(s32 *)((u8 *)temp_s2 + 0x14) = temp_v0_2;
            *(s32 *)((u8 *)arg0 + 0x294) = 1;
            func_0018DA30(temp_s5, arg3 + 0xC0, temp_v0, 0);
            var_v0 = temp_v0_2;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
block_7:
        func_001870E8(var_a0);
        return 0;
    }
    return var_v0;
}
