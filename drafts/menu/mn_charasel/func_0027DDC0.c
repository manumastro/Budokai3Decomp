/* Draft (not built): func_0027DDC0 at 0x0027DDC0, size 0x23C, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK CsModel_SetMode(s32, s8, s8);               /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00280DC0(s32);                         /* extern */
extern s128 D_004532E0;
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470810;
extern f32 D_004E0614;
extern M2C_UNK func_0027B7E0;
extern f32 gFrameDelta;

void func_0027DDC0(void *arg0) {
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 *sp80;
    s128 sp70;
    M2C_UNK *var_v1_2;
    s128 *var_s5;
    s32 **var_s0;
    s32 **var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;

    var_v0 = 0x10;
    var_v1 = &sp80;
    temp_s3 = M2C_FIELD(arg0, void **, 0x30);
    temp_s2 = D_00470810;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp80 = temp_s3 + 0x38;
    sp84 = temp_s3 + 0x3C;
    sp88 = temp_s3 + 0x40;
    sp8C = temp_s3 + 0x48;
    sp70 = D_004532E0;
    temp_a0 = M2C_FIELD(temp_s2, s32 *, 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x3000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp80;
    var_s5 = &sp70;
    do {
        temp_a0_2 = **var_s0;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        temp_v0 = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s2, void **, 8), s32 *, 0x1C) + (*(var_s5 + (M2C_FIELD(temp_s3, u8 *, 7) * 2)) * 4)), 0);
        var_s1 += 1;
        var_s5 += 4;
        **var_s0 = temp_v0;
        var_s0 += 4;
    } while (var_s1 < 4);
    temp_s1 = D_00470810;
    temp_s0 = (M2C_FIELD(temp_s3, u8 *, 7) == 0) ? 3 : 2;
    if (M2C_FIELD(temp_s3, s8 *, 1) == 1) {
        M2C_FIELD(temp_s3, s8 *, 1) = 2;
        temp_a0_3 = M2C_FIELD(temp_s1, s32 *, 0xC);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x3000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x3000);
        D_00470238 = 0;
        temp_a0_4 = M2C_FIELD(temp_s3, s32 *, 0x50);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        M2C_FIELD(temp_s3, s32 *, 0x50) = func_0022D860(*(M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), s32 *, 0x14) + (temp_s0 * 4)), 0);
    }
    SoundRpc_SetVolume(1, 0, D_004E0614);
    if (!(D_004E0614 <= 0.0f)) {
        SoundRpc_Send3(1, 0, 9, 0);
    }
    CsModel_SetMode(M2C_FIELD(temp_s3, s32 *, 0x30), M2C_FIELD(temp_s3, s8 *, 4), M2C_FIELD(temp_s3, s8 *, 5));
    func_00280DC0(M2C_FIELD(temp_s3, s32 *, 0x2C));
    M2C_FIELD(temp_s3, s32 *, 0x54) = 0x42700000;
    var_v1_2 = &func_0027B7E0;
    M2C_FIELD(M2C_FIELD(temp_s3, void **, 0x44), f32 *, 0x10) = (f32) gFrameDelta;
    M2C_FIELD(temp_s3, s8 *, 0) = 6;
    M2C_FIELD(temp_s3, s8 *, 0xB) = 2;
    if (&func_0027B7E0 == NULL) {
        var_v1_2 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
}
