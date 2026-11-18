/* Draft (not built): func_0027F9F0 at 0x0027F9F0, size 0xE4, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK Scene_Request(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001F07E0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0022CF70(void *);                      /* extern */
M2C_UNK func_0027EA60(void *);                      /* extern */
M2C_UNK func_002804A0();                            /* extern */
M2C_UNK func_00287C60(void *);                      /* extern */
extern f32 gFrameDelta;

void func_0027F9F0(void *arg0) {
    s8 temp_v1_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x38);
    func_0027EA60(temp_s0);
    temp_v1 = M2C_FIELD(temp_s0, void **, 0x38);
    M2C_FIELD(temp_v1, f32 *, 0x5C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x5C) + (0.05f * gFrameDelta));
    func_0022CF70(M2C_FIELD(temp_s0, void **, 0x38));
    temp_a0 = M2C_FIELD(temp_s0, void **, 0x38);
    if (!(M2C_FIELD(temp_a0, f32 *, 0x5C) < 1.0f)) {
        if (M2C_FIELD(temp_s0, s32 *, 8) != 0) {
            func_00287C60(temp_a0);
            M2C_FIELD(temp_s0, s32 *, 8) = 0;
        }
        func_002804A0();
        temp_v1_2 = M2C_FIELD((arg0 + 0x30), s8 *, 4);
        if (temp_v1_2 == 0) {
            Scene_Request(0xF, 0);
        } else if (temp_v1_2 == 1) {
            Scene_Request(0x14, 0);
        }
        func_001F07E0(0xA, 0);
    }
}
