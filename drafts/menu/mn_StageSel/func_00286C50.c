/* Draft (not built): func_00286C50 at 0x00286C50, size 0x148, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */

void func_00286C50(void *arg0) {
    s32 temp_a0;
    s32 temp_s7;
    s32 var_s1;
    s32 var_s1_2;
    s64 var_s3;
    s64 var_s5;
    void *temp_s4;
    void *var_s0;
    void *var_s0_2;
    void *var_s2;

    var_s5 = 0;
    var_s1 = 0;
    var_s0 = arg0;
    temp_s7 = 0x10000 / (s32) M2C_FIELD(arg0, u8 *, 0x261);
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x44);
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            M2C_FIELD(var_s0, s32 *, 0x44) = 0;
        }
        var_s1 += 1;
        var_s0 += 0xC;
    } while (var_s1 < 0xD);
    var_s3 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x261) > 0) {
        var_s2 = arg0;
        var_s1_2 = 0;
        var_s0_2 = arg0;
        do {
            temp_s4 = var_s2 + 0x44;
            M2C_FIELD(var_s2, s32 *, 0x44) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x1C), s32 *, 0x30), 0);
            M2C_FIELD(temp_s4, s32 *, 4) = var_s1_2;
            M2C_FIELD(temp_s4, s16 *, 8) = (s16) M2C_FIELD(var_s0_2, s16 *, 0x242);
            if (M2C_FIELD(temp_s4, s16 *, 8) == M2C_FIELD(arg0, s16 *, 0x25C)) {
                var_s5 = (s64) (var_s3 << 0x30) >> 0x30;
            }
            var_s3 += 1;
            var_s2 += 0xC;
            var_s1_2 += temp_s7;
            var_s0_2 += 2;
        } while (var_s3 < (s32) M2C_FIELD(arg0, u8 *, 0x261));
    }
    M2C_FIELD(arg0, s8 *, 0x260) = (s8) var_s5;
    M2C_FIELD(arg0, s32 *, 0x26C) = (s32) M2C_FIELD((arg0 + (((s64) (var_s5 << 0x30) >> 0x30) * 0xC)), u16 *, 0x48);
}
