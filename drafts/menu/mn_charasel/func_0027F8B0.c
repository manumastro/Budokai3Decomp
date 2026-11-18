/* Draft (not built): func_0027F8B0 at 0x0027F8B0, size 0x13C, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK PracMode_Start(M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0022CF70(void *);                      /* extern */
M2C_UNK func_00269820(M2C_UNK, s8);                 /* extern */
s64 func_0027DAB0(s32);                             /* extern */
M2C_UNK func_0027E120(s32);                         /* extern */
M2C_UNK func_0027EA60(void *);                      /* extern */
M2C_UNK func_002804A0();                            /* extern */
extern f32 gFrameDelta;

void func_0027F8B0(void *arg0) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s8 temp_v1;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x38);
    temp_f1 = M2C_FIELD(temp_s0, f32 *, 0x40);
    temp_s1 = arg0 + 0x30;
    if (!(temp_f1 <= 0.0f)) {
        M2C_FIELD(temp_s0, f32 *, 0x40) = (f32) (temp_f1 - gFrameDelta);
        func_0027EA60(temp_s0);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x38), f32 *, 0x5C) = (f32) ((60.0f - M2C_FIELD(temp_s0, f32 *, 0x40)) / 60.0f);
        func_0022CF70(M2C_FIELD(temp_s0, void **, 0x38));
        return;
    }
    if ((((s64) (func_0027DAB0(M2C_FIELD(temp_s0, s32 *, 0)) << 0x38) >> 0x38) == 7) && (((s64) (func_0027DAB0(M2C_FIELD(temp_s0, s32 *, 4)) << 0x38) >> 0x38) == 7)) {
        temp_v1 = M2C_FIELD(temp_s1, s8 *, 4);
        switch (temp_v1) {                          /* irregular */
        case 0:
            func_00269820(0, M2C_FIELD(temp_s1, s8 *, 5));
            break;
        case 1:
            PracMode_Start(0, 0);
            break;
        }
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
        if (temp_a0 != 0) {
            func_0027E120(temp_a0);
            M2C_FIELD(temp_s0, s32 *, 0) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_a0_2 != 0) {
            func_0027E120(temp_a0_2);
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
        }
        func_002804A0();
    }
}
