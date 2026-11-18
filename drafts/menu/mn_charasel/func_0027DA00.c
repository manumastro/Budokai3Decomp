/* Draft (not built): func_0027DA00 at 0x0027DA00, size 0x98, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK CsModel_Ease(s32, f32, f32);                /* extern */
M2C_UNK func_00280D90(s32, f32, f32);               /* extern */
M2C_UNK func_002F9510(s32);                         /* extern */

void func_0027DA00(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_s0, f32 *, 0x60) = fparg0;
    temp_f1 = (fparg0 - M2C_FIELD(temp_s0, f32 *, 0x5C)) / fparg1;
    M2C_FIELD(temp_s0, f32 *, 0x64) = temp_f1;
    M2C_FIELD(temp_s0, f32 *, 0x5C) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x5C) + temp_f1);
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x28);
    if (temp_a0 != 0) {
        func_002F9510(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x2C);
    if (temp_a0_2 != 0) {
        func_00280D90(temp_a0_2, fparg0, fparg1);
    }
    temp_a0_3 = M2C_FIELD(temp_s0, s32 *, 0x30);
    if (temp_a0_3 != 0) {
        CsModel_Ease(temp_a0_3, fparg0, fparg1);
    }
}
