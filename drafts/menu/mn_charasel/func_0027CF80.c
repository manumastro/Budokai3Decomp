/* Draft (not built): func_0027CF80 at 0x0027CF80, size 0x244, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

s32 CsModel_Create(s32, s16, s8);                   /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0027A4C0(void *);                      /* extern */
s32 func_00280E70(s32, s8);                         /* extern */
extern M2C_UNK D_0046B560;
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470810;
extern f32 D_004E0614;
extern M2C_UNK func_0027C2F0;
extern M2C_UNK func_0027CB20;
extern f32 gFrameDelta;

void func_0027CF80(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s2;
    u8 temp_v1;
    void *temp_s1;
    void *temp_s3;
    void *temp_s4;

    temp_s3 = M2C_FIELD(arg0, void **, 0x30);
    temp_s4 = D_00470810;
    func_0027A4C0(temp_s3);
    temp_f2 = M2C_FIELD(temp_s3, f32 *, 0x68);
    if (temp_f2 < 30.0f) {
        temp_f0 = temp_f2 + gFrameDelta;
        M2C_FIELD(temp_s3, f32 *, 0x68) = temp_f0;
        if (!(temp_f0 < 30.0f)) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 9, 0);
            }
        }
    }
    temp_f1 = M2C_FIELD(temp_s3, f32 *, 0x54) - gFrameDelta;
    M2C_FIELD(temp_s3, f32 *, 0x54) = temp_f1;
    if (temp_f1 <= 0.0f) {
        temp_v1 = M2C_FIELD(temp_s3, u8 *, 7);
        var_s2 = 0;
        if (temp_v1 != 0) {
            var_s2 = 1 & 0xFFFF;
        }
        if (!(M2C_FIELD(temp_s3, u8 *, 6) & 8)) {
            temp_s1 = D_00470810;
            if (M2C_FIELD(temp_s3, s8 *, 1) != 1) {
                M2C_FIELD(temp_s3, s8 *, 1) = 1;
                temp_a0 = M2C_FIELD(temp_s1, s32 *, 0xC);
                D_00470704 = temp_a0;
                D_0047070C = 0x3000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0, 0x3000);
                D_00470238 = 0;
                temp_a0_2 = M2C_FIELD(temp_s3, s32 *, 0x50);
                if (temp_a0_2 != 0) {
                    func_0022D0E0(temp_a0_2, 1);
                }
                M2C_FIELD(temp_s3, s32 *, 0x50) = func_0022D860(*(M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), s32 *, 0x14) + ((temp_v1 == 0) * 4)), 0);
            }
        }
        temp_a0_3 = M2C_FIELD(temp_s4, s32 *, 0xC);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x3000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x3000);
        D_00470238 = 0;
        M2C_FIELD(temp_s3, s32 *, 0x4C) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s4, void **, 8), s32 *, 0x1C) + ((M2C_FIELD(temp_s3, s8 *, 4) + 0x69) * 4)), 0);
        M2C_FIELD(temp_s3, s32 *, 0x2C) = func_00280E70(var_s2, M2C_FIELD(temp_s3, s8 *, 4));
        M2C_FIELD(temp_s3, s32 *, 0x30) = CsModel_Create(var_s2, *(&D_0046B560 + (M2C_FIELD(temp_s3, s8 *, 4) * 2)), M2C_FIELD(temp_s3, s8 *, 5));
        if (M2C_FIELD(temp_s3, u8 *, 6) & 8) {
            var_v1 = &func_0027C2F0;
            M2C_FIELD(temp_s3, s8 *, 0) = 5;
            if (&func_0027C2F0 == NULL) {
                var_v1 = NULL;
            }
        } else {
            M2C_FIELD(temp_s3, s8 *, 0) = 4;
            var_v1 = &func_0027CB20;
            if (&func_0027CB20 == NULL) {
                var_v1 = NULL;
            }
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
