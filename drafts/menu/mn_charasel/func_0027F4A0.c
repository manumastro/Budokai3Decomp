/* Draft (not built): func_0027F4A0 at 0x0027F4A0, size 0x1D8, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK PracMode_Load(s8);                          /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK VsMode_Load(s8);                            /* extern */
s64 func_0027DAA0(void *);                          /* extern */
s64 func_0027DAB0(void *);                          /* extern */
M2C_UNK func_0027DAC0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0027DB20(void *);                      /* extern */
M2C_UNK func_0027E9C0(void **);                     /* extern */
extern M2C_UNK D_00492FC0;
extern f32 D_004E0614;
extern M2C_UNK func_0027F8B0;

void func_0027F4A0(void *arg0) {
    M2C_UNK *var_s1;
    M2C_UNK *var_v1;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s64 temp_a0_2;
    s8 temp_a0_3;
    void **temp_s0;
    void **var_s0;
    void **var_s5;
    void *temp_a0;
    void *temp_s4;

    var_s3 = 0;
    var_s2 = 0;
    var_s5 = M2C_FIELD(arg0, void ***, 0x38);
    var_s1 = &D_00492FC0;
    var_s0 = var_s5;
    do {
        if (M2C_FIELD(var_s1, u16 *, 0xE) & 0x1000) {
            temp_a0 = *var_s0;
            temp_s4 = M2C_FIELD(temp_a0, void **, 0x30);
            temp_a0_2 = (s64) (func_0027DAB0(temp_a0) << 0x38) >> 0x38;
            switch (temp_a0_2) {                    /* switch 1; irregular */
            case 4:                                 /* switch 1 */
                var_s3 = 1;
                break;
            case 5:                                 /* switch 1 */
                if (((s64) (func_0027DAA0(*var_s0) << 0x38) >> 0x38) == 1) {
                    M2C_FIELD(temp_s4, u8 *, 6) = (u8) (M2C_FIELD(temp_s4, u8 *, 6) & 0xF7);
                    func_0027DAC0(*var_s0, 4);
                }
                break;
            }
        }
        var_s2 += 1;
        var_s1 += 0xB8;
        var_s0 += 4;
    } while (var_s2 < 2);
    if (var_s3 != 0) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_s0_2 = 0;
        do {
            func_0027DB20(*var_s5);
            var_s0_2 += 1;
            var_s5 += 4;
        } while (var_s0_2 < 2);
        temp_s0 = M2C_FIELD(arg0, void ***, 0x38);
        func_0027E9C0(temp_s0);
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0x42700000;
        temp_a0_3 = M2C_FIELD((arg0 + 0x30), s8 *, 4);
        switch (temp_a0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            VsMode_Load(temp_a0_3);
            break;
        case 1:                                     /* switch 2 */
            PracMode_Load(temp_a0_3);
            break;
        }
        var_v1 = &func_0027F8B0;
        if (&func_0027F8B0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
