/* Draft (not built): mfCiOpen at 0x0016AA70, size 0x9C, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mfci/mfCiOpen.s */

s32 func_00127A88(s32, s32);                    /* extern */
s32 func_0016A7B0(s32, s32 *);              /* extern */
s32 func_0016A988(s32 *);                       /* extern */
s32 func_0016AA00(s32);                         /* extern */
extern s32 D_00463FC8;
extern s32 D_00463FF0;
extern s32 D_00464018;

s32 mfCiOpen(s32 arg0, s32 arg2) {
    s32 *var_a1;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a0;

    var_a0 = arg0;
    temp_s1 = var_a0;
    if (temp_s1 == 0) {
        var_a1 = &D_00463FC8;
        goto block_7;
    }
    if (arg2 != 0) {
        var_a0 = 0;
        var_a1 = &D_00463FF0;
        goto block_7;
    }
    temp_v0 = func_0016A988(&D_00463FF0);
    var_a1 = &D_00464018;
    var_a0 = 0;
    if (temp_v0 == 0) {
block_7:
        func_0016A7B0(var_a0, var_a1);
        return 0;
    }
    func_00127A88(temp_v0 + 0x1C, temp_s1);
    func_0016AA00(temp_v0);
    return temp_v0;
}
