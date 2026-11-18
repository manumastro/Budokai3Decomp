/* Draft (not built): mfCiOpenEntry at 0x0016AF50, size 0x84, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mfci/mfCiOpenEntry.s */

s32 func_0016A7B0(s32, s32 *);          /* extern */
s32 func_0016A988(s32 *);                       /* extern */
s32 func_0016AA00(s32, s32 *);              /* extern */
extern s32 D_00464138;
extern s32 D_00464168;
extern s32 D_00464190;

s32 mfCiOpenEntry(s32 arg0, s32 arg2) {
    s32 *var_a1;
    s32 temp_v0;

    if (arg0 <= 0) {
        var_a1 = &D_00464138;
        goto block_6;
    }
    if (arg2 != 0) {
        var_a1 = &D_00464168;
        goto block_6;
    }
    temp_v0 = func_0016A988(&D_00464168);
    var_a1 = &D_00464190;
    if (temp_v0 == 0) {
block_6:
        func_0016A7B0(0, var_a1);
        return 0;
    }
    func_0016AA00(temp_v0, &D_00464190);
    return temp_v0;
}
