/* Draft (not built): func_002F85D0 at 0x002F85D0, size 0x13C, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

extern f32 gFrameDelta;

void func_002F85D0(void *arg0) {
    s32 temp_t0_3;
    s32 var_a1;
    s32 var_a3_2;
    s64 temp_t0;
    s64 var_a3;
    s8 temp_t5;
    void *temp_a2;
    void *temp_t0_2;
    void *temp_t4;
    void *var_v1;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
        var_v1 = arg0;
        do {
            temp_t5 = M2C_FIELD(var_v1, s8 *, 0x44);
            temp_a2 = var_v1 + 0x38;
            if (temp_t5 == (M2C_FIELD(arg0, s8 *, 0xC) - 1)) {
                var_a3 = 0;
            } else {
                var_a3 = (s64) ((temp_t5 + 1) << 0x30) >> 0x30;
            }
            temp_t0 = (s64) (var_a3 << 0x30) >> 0x30;
            M2C_FIELD(temp_a2, s8 *, 0xC) = (s8) temp_t0;
            if (M2C_FIELD(temp_a2, s8 *, 0xC) == 0) {
                M2C_FIELD(arg0, void **, 0x34) = temp_a2;
            }
            temp_t4 = arg0 + (((s64) (temp_t0 << 0x30) >> 0x30) * 8);
            if (M2C_FIELD(temp_t4, s16 *, 0x47E) == 0) {
                M2C_FIELD(temp_a2, s8 *, 0xD) = 0;
            } else {
                M2C_FIELD(temp_a2, s8 *, 0xD) = 1;
                temp_t0_2 = arg0 + (((s64) ((s64) temp_t5 << 0x30) >> 0x30) * 8);
                if (M2C_FIELD(temp_t0_2, s16 *, 0x47E) == 0) {
                    M2C_FIELD(temp_a2, s32 *, 0x10) = (s32) M2C_FIELD(temp_t4, s32 *, 0x480);
                    M2C_FIELD(temp_a2, s16 *, 0xE) = 0;
                } else {
                    temp_t0_3 = M2C_FIELD(temp_t0_2, s32 *, 0x480);
                    var_a3_2 = M2C_FIELD(temp_t4, s32 *, 0x480);
                    if (var_a3_2 < temp_t0_3) {
                        var_a3_2 += 0x10000;
                    }
                    M2C_FIELD(temp_a2, s16 *, 0xE) = M2C_BITWISE(s16, (gFrameDelta * (f32) (((var_a3_2 - temp_t0_3) / 12) + ((u32) (var_a3_2 - temp_t0_3) >> 0x1F))));
                }
            }
            var_a1 += 1;
            var_v1 += 0x1C;
        } while (var_a1 < M2C_FIELD(arg0, s8 *, 0xC));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0x41400000;
}
