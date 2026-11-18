/* Draft (not built): func_0027F680 at 0x0027F680, size 0x208, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK PracMode_Load();                            /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK VsMode_Load();                              /* extern */
s64 func_0027DAA0(void *);                          /* extern */
s64 func_0027DAB0(void *);                          /* extern */
M2C_UNK func_0027DAC0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0027DB20(void *);                      /* extern */
M2C_UNK func_0027E9C0(void **);                     /* extern */
extern u16 D_00492FCE;
extern f32 D_004E0614;
extern M2C_UNK func_0027F8B0;

void func_0027F680(void *arg0) {
    M2C_UNK *var_v0;
    s32 var_s4;
    s8 temp_v1;
    u16 temp_s0;
    u8 temp_v1_2;
    void **temp_s2;
    void **temp_s3;
    void **var_s3;
    void *temp_s1;

    temp_s2 = M2C_FIELD(arg0, void ***, 0x38);
    temp_s0 = D_00492FCE;
    if ((((s64) (func_0027DAB0(M2C_FIELD(temp_s2, void **, 0)) << 0x38) >> 0x38) == 4) && (temp_s0 & 0xFFFF & 0x1000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_s4 = 0;
        var_s3 = temp_s2;
        do {
            func_0027DB20(*var_s3);
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < 2);
        temp_s3 = M2C_FIELD(arg0, void ***, 0x38);
        func_0027E9C0(temp_s3);
        M2C_FIELD(temp_s3, s32 *, 0x40) = 0x42700000;
        temp_v1 = M2C_FIELD((arg0 + 0x30), s8 *, 4);
        switch (temp_v1) {                          /* irregular */
        case 0:
            VsMode_Load();
            break;
        case 1:
            PracMode_Load();
            break;
        }
        var_v0 = &func_0027F8B0;
        if (&func_0027F8B0 == NULL) {
            var_v0 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v0;
    }
    if (((s64) (func_0027DAA0(M2C_FIELD(temp_s2, void **, 0)) << 0x38) >> 0x38) == 1) {
        temp_s1 = M2C_FIELD(M2C_FIELD(temp_s2, void **, 4), void **, 0x30);
        temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 6);
        if (temp_v1_2 & 8) {
            M2C_FIELD(temp_s1, u8 *, 6) = (u8) (temp_v1_2 & 0xF7);
            func_0027DAC0(M2C_FIELD(temp_s2, void **, 4), 4);
        }
        if ((((s64) (func_0027DAB0(M2C_FIELD(temp_s2, void **, 4)) << 0x38) >> 0x38) == 4) && (temp_s0 & 0xFFFF & 0x1000)) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            M2C_FIELD(temp_s1, u8 *, 6) = (u8) (M2C_FIELD(temp_s1, u8 *, 6) | 8);
            func_0027DAC0(M2C_FIELD(temp_s2, void **, 0), 4);
        }
    }
}
