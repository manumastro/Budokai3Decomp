/* Draft (not built): func_002F9060 at 0x002F9060, size 0x144, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK func_002F8860(void *, s8);                  /* extern */
M2C_UNK func_002F8A40(void *);                      /* extern */
extern M2C_UNK func_002F91B0;
extern f32 gFrameDelta;

void func_002F9060(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s2;
    void *var_s0;
    void *var_s0_2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x30);
    var_s1 = 0;
    if (M2C_FIELD(temp_s2, s8 *, 0xC) > 0) {
        var_s0 = temp_s2;
        do {
            temp_a0 = var_s0 + 0x38;
            if ((M2C_FIELD(var_s0, s16 *, 0x38) != 0) && (M2C_FIELD(temp_a0, s8 *, 0xD) != 0)) {
                M2C_FIELD(temp_a0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x10) + M2C_FIELD(temp_a0, s16 *, 0xE));
                func_002F8860(temp_a0, M2C_FIELD(temp_s2, s8 *, 9));
            }
            var_s1 += 1;
            var_s0 += 0x1C;
        } while (var_s1 < M2C_FIELD(temp_s2, s8 *, 0xC));
    }
    func_002F8A40(temp_s2);
    temp_f1 = M2C_FIELD(temp_s2, f32 *, 0x20) - gFrameDelta;
    M2C_FIELD(temp_s2, f32 *, 0x20) = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_s1_2 = 0;
        if (M2C_FIELD(temp_s2, s8 *, 0xC) > 0) {
            var_s0_2 = temp_s2;
            do {
                temp_a0_2 = var_s0_2 + 0x38;
                if (M2C_FIELD(var_s0_2, s16 *, 0x38) != 0) {
                    M2C_FIELD(temp_a0_2, s32 *, 0x10) = (s32) M2C_FIELD((temp_s2 + (M2C_FIELD(temp_a0_2, s8 *, 0xC) * 8)), s32 *, 0x480);
                    M2C_FIELD(temp_a0_2, s16 *, 0xE) = 0;
                    func_002F8860(temp_a0_2, M2C_FIELD(temp_s2, s8 *, 9));
                }
                var_s1_2 += 1;
                var_s0_2 += 0x1C;
            } while (var_s1_2 < M2C_FIELD(temp_s2, s8 *, 0xC));
        }
        M2C_FIELD(temp_s2, s8 *, 0xA) = 1;
        var_v1 = &func_002F91B0;
        if (&func_002F91B0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
