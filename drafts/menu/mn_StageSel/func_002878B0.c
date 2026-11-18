/* Draft (not built): func_002878B0 at 0x002878B0, size 0x1BC, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK amModel_SetCurrent(s32, M2C_UNK, u8);       /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00284AA0(void *);                      /* extern */
M2C_UNK func_002861B0(void *);                      /* extern */
extern M2C_UNK D_0046B860;
extern M2C_UNK D_0046B861;
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern M2C_UNK func_002872A0;
extern f32 gFrameDelta;

void func_002878B0(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;
    s16 temp_a0_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    u8 temp_a2;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x30);
    func_00284AA0(temp_s0);
    func_002861B0(temp_s0);
    temp_f1 = M2C_FIELD(temp_s0, f32 *, 0x28C) - gFrameDelta;
    M2C_FIELD(temp_s0, f32 *, 0x28C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        temp_a2 = M2C_FIELD(temp_s0, u8 *, 0x260);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x230), s16 *, 0x34) = (s16) M2C_FIELD(((temp_a2 * 0xC) + temp_s0), s16 *, 0x4C);
        M2C_FIELD(temp_s0, s8 *, 0x263) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x262) = 2;
        M2C_FIELD(temp_s0, s8 *, 0x264) = 2;
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 4);
        D_00470704 = temp_a0;
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x7000, temp_a2);
        D_00470238 = 0;
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x3C);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        M2C_FIELD(temp_s0, s32 *, 0x3C) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 0x1C), s32 *, 0x68), 0);
        temp_a0_3 = M2C_FIELD(temp_s0, s16 *, 0x25C);
        if (M2C_FIELD(temp_s0, s16 *, 0x25E) != temp_a0_3) {
            M2C_FIELD(temp_s0, s16 *, 0x25E) = temp_a0_3;
            temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 4);
            D_00470704 = temp_a0_4;
            D_0047070C = 0x7000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_4, 0x7000);
            D_00470238 = 0;
            temp_a0_5 = M2C_FIELD(temp_s0, s32 *, 0x18);
            if (temp_a0_5 != 0) {
                func_0022D0E0(temp_a0_5, 1);
            }
            M2C_FIELD(temp_s0, s32 *, 0x18) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 0x1C) + (*(&D_0046B860 + (M2C_FIELD(temp_s0, s16 *, 0x25C) * 2)) * 4)), 0);
            temp_a0_6 = M2C_FIELD(temp_s0, s32 *, 0x28);
            if (temp_a0_6 != 0) {
                func_0022D0E0(temp_a0_6, 1);
            }
            M2C_FIELD(temp_s0, s32 *, 0x28) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void **, 0x1C) + (*(&D_0046B861 + (M2C_FIELD(temp_s0, s16 *, 0x25C) * 2)) * 4)), 0);
        }
        var_v1 = &func_002872A0;
        if (&func_002872A0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
