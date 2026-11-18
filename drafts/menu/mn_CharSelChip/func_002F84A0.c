/* Draft (not built): func_002F84A0 at 0x002F84A0, size 0x12C, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK func_002F8860(void *, s8);                  /* extern */

void func_002F84A0(void *arg0, s64 arg1) {
    s32 var_a3;
    s32 var_s1;
    s8 temp_a0;
    s8 temp_s2;
    void *var_a2;
    void *var_s0;
    void *var_t0;

    var_t0 = NULL;
    temp_a0 = M2C_FIELD(arg0, s8 *, 0xC);
    var_a3 = 0;
    if (temp_a0 > 0) {
        var_a2 = arg0;
loop_2:
        if (M2C_FIELD(var_a2, s8 *, 0x3A) == ((s64) (arg1 << 0x30) >> 0x30)) {
            var_t0 = arg0 + (var_a3 * 0x1C) + 0x38;
        } else {
            var_a3 += 1;
            var_a2 += 0x1C;
            if (var_a3 < temp_a0) {
                goto loop_2;
            }
        }
    }
    if (var_t0 != NULL) {
        M2C_FIELD(arg0, void **, 0x34) = var_t0;
        var_s1 = 0;
        temp_s2 = -M2C_FIELD(var_t0, s8 *, 0xC);
        if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
            var_s0 = arg0;
            do {
                M2C_FIELD(var_s0, s8 *, 0x44) = (s8) ((s32) (M2C_FIELD(arg0, s8 *, 0xC) + (M2C_FIELD(var_s0, s8 *, 0x44) + temp_s2)) % M2C_FIELD(arg0, s8 *, 0xC));
                M2C_FIELD(var_s0, s32 *, 0x48) = (s32) M2C_FIELD((arg0 + (M2C_FIELD(var_s0, s8 *, 0x44) * 8)), s32 *, 0x480);
                M2C_FIELD(var_s0, s16 *, 0x46) = 0;
                M2C_FIELD(var_s0, s8 *, 0x45) = (s8) M2C_FIELD((arg0 + (M2C_FIELD(var_s0, s8 *, 0x44) * 8)), s16 *, 0x47E);
                func_002F8860(var_s0 + 0x38, M2C_FIELD(arg0, s8 *, 9));
                var_s1 += 1;
                var_s0 += 0x1C;
            } while (var_s1 < M2C_FIELD(arg0, s8 *, 0xC));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}
