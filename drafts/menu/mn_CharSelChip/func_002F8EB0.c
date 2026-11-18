/* Draft (not built): func_002F8EB0 at 0x002F8EB0, size 0x1A8, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void func_002F8EB0(void *arg0) {
    s32 var_a2;
    s32 var_a3_2;
    s64 temp_a1;
    s64 temp_t5;
    s64 var_a3;
    s64 var_t0;
    s64 var_t1;
    s8 temp_v1;
    void *temp_t4;
    void *temp_t4_2;
    void *var_a1;
    void *var_a2_2;

    temp_v1 = M2C_FIELD(arg0, s8 *, 0xC);
    var_t0 = 1;
    var_t1 = (s64) ((temp_v1 - 1) << 0x30) >> 0x30;
    if (temp_v1 < 6) {
        var_a2 = 0x1200;
    } else {
        var_a2 = 0x1200;
        if (temp_v1 < 8) {

        } else {
            var_a2 = 0x1000;
            if (temp_v1 < 0xA) {

            } else {
                var_a2 = 0xD00;
                if (temp_v1 < 0xC) {

                } else {
                    var_a2 = 0xB00;
                }
            }
        }
    }
    M2C_FIELD(arg0, s16 *, 0x47E) = 1;
    temp_a1 = (s64) (var_t1 << 0x30) >> 0x30;
    var_a3 = 2;
    M2C_FIELD(arg0, s32 *, 0x480) = 0;
    if (temp_a1 > 0) {
        var_a1 = arg0 + (temp_a1 * 8);
        do {
            temp_t5 = (s64) (var_a3 << 0x30) >> 0x30;
            if (!(temp_t5 & 1)) {
                temp_t4 = arg0 + (((s64) (var_t0 << 0x30) >> 0x30) * 8) + 0x47C;
                if (temp_t5 < 0x11) {
                    M2C_FIELD(temp_t4, s16 *, 2) = 1;
                    var_t0 = (s64) ((var_t0 + 1) << 0x30) >> 0x30;
                    M2C_FIELD(temp_t4, s32 *, 4) = (s32) ((temp_t5 >> 1) * var_a2);
                } else {
                    M2C_FIELD(temp_t4, s16 *, 2) = 0;
                    M2C_FIELD(temp_t4, s32 *, 4) = 0;
                    var_t0 = (s64) ((var_t0 + 1) << 0x30) >> 0x30;
                }
            } else {
                temp_t4_2 = var_a1 + 0x47C;
                if (temp_t5 < 0x11) {
                    M2C_FIELD(temp_t4_2, s16 *, 2) = 1;
                    var_a1 -= 8;
                    M2C_FIELD(temp_t4_2, s32 *, 4) = (s32) (0x10000 - ((temp_t5 >> 1) * var_a2));
                } else {
                    M2C_FIELD(temp_t4_2, s16 *, 2) = 0;
                    M2C_FIELD(temp_t4_2, s32 *, 4) = 0;
                    var_t0 = (s64) ((var_t0 + 1) << 0x30) >> 0x30;
                }
            }
            var_t1 = (s64) ((var_t1 - 1) << 0x30) >> 0x30;
            var_a3 = (s64) ((var_a3 + 1) << 0x30) >> 0x30;
        } while (var_t1 > 0);
    }
    var_a3_2 = 0;
    if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
        var_a2_2 = arg0;
        do {
            M2C_FIELD(var_a2_2, s16 *, 0x47C) = 1;
            var_a3_2 += 1;
            var_a2_2 += 8;
        } while (var_a3_2 < M2C_FIELD(arg0, s8 *, 0xC));
    }
}
