/* Draft (not built): func_0027C140 at 0x0027C140, size 0x1AC, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK CsModel_Ease(s32, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00280D90(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_002F9510(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_003101D0(s32);                             /* extern */
M2C_UNK func_00310290(s32);                         /* extern */
M2C_UNK memcpy(void *, s32, M2C_UNK);               /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470810;
extern M2C_UNK func_0027CB20;

void func_0027C140(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x30);
    if ((func_003101D0(M2C_FIELD(temp_s2, s32 *, 0x34)) & 0xFF) == 4) {
        func_00310290(M2C_FIELD(temp_s2, s32 *, 0x34));
        M2C_FIELD(temp_s2, s32 *, 0x34) = 0;
        M2C_FIELD(temp_s2, s8 *, 0) = 4;
        M2C_FIELD(temp_s2, s8 *, 2) = -1;
        M2C_FIELD(temp_s2, s8 *, 0xB) = 0;
        memcpy(temp_s2 + 0x6C, M2C_FIELD(temp_s2, s32 *, 0x78) + (M2C_FIELD(temp_s2, s8 *, 4) * 0xC) + 0x258, 0xC);
        temp_s1 = D_00470810;
        temp_s0 = M2C_FIELD(temp_s2, u8 *, 7) == 0;
        if (M2C_FIELD(temp_s2, s8 *, 1) != 1) {
            M2C_FIELD(temp_s2, s8 *, 1) = 1;
            temp_a0 = M2C_FIELD(temp_s1, s32 *, 0xC);
            D_00470704 = temp_a0;
            D_0047070C = 0x3000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0, 0x3000);
            D_00470238 = 0;
            temp_a0_2 = M2C_FIELD(temp_s2, s32 *, 0x50);
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
            }
            M2C_FIELD(temp_s2, s32 *, 0x50) = func_0022D860(*(M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), s32 *, 0x14) + (temp_s0 * 4)), 0);
        }
        temp_s0_2 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_s0_2, s32 *, 0x60) = 0x3F800000;
        temp_f1 = (1.0f - M2C_FIELD(temp_s0_2, f32 *, 0x5C)) / 10.0f;
        M2C_FIELD(temp_s0_2, f32 *, 0x64) = temp_f1;
        M2C_FIELD(temp_s0_2, f32 *, 0x5C) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0x5C) + temp_f1);
        temp_a0_3 = M2C_FIELD(temp_s0_2, s32 *, 0x28);
        if (temp_a0_3 != 0) {
            func_002F9510(temp_a0_3, 0x3F800000, 0x41200000);
        }
        temp_a0_4 = M2C_FIELD(temp_s0_2, s32 *, 0x2C);
        if (temp_a0_4 != 0) {
            func_00280D90(temp_a0_4, 0x3F800000, 0x41200000);
        }
        temp_a0_5 = M2C_FIELD(temp_s0_2, s32 *, 0x30);
        if (temp_a0_5 != 0) {
            CsModel_Ease(temp_a0_5, 0x3F800000, 0x41200000);
        }
        var_v1 = &func_0027CB20;
        if (&func_0027CB20 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
