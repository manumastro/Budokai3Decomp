/* Draft (not built): func_002F8C60 at 0x002F8C60, size 0x17C, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK amModel_SetCurrent(s32, u16);               /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
M2C_UNK func_002F8860(void *, s8);                  /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;

void func_002F8C60(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    s8 var_s2;
    u16 temp_a1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *var_s0;
    void *var_s0_2;
    void *var_s1_2;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x3C);
        temp_s2 = var_s0 + 0x38;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            M2C_FIELD(temp_s2, s32 *, 4) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s2, s32 *, 8);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            M2C_FIELD(temp_s2, s32 *, 8) = 0;
        }
        var_s1 += 1;
        var_s0 += 0x1C;
    } while (var_s1 < 0x27);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 4);
    D_00470704 = temp_a0_3;
    D_0047070C = (s32) temp_a1;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, temp_a1);
    D_00470238 = 0;
    var_s2 = 0;
    if (M2C_FIELD(arg0, s8 *, 0xC) > 0) {
        var_s1_2 = arg0;
        var_s0_2 = arg0;
        do {
            temp_s3 = var_s1_2 + 0x47C;
            M2C_FIELD(var_s0_2, s16 *, 0x38) = 1;
            temp_s4 = var_s0_2 + 0x38;
            if (M2C_FIELD(var_s0_2, s32 *, 0x3C) == 0) {
                M2C_FIELD(temp_s4, s32 *, 4) = func_0022D670(M2C_FIELD((M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x1C) + (((s64) ((s64) M2C_FIELD(var_s0_2, s8 *, 0x3A) << 0x38) >> 0x38) * 4)), s32 *, 0xF4), 0);
            }
            if (M2C_FIELD(temp_s4, s32 *, 8) == 0) {
                M2C_FIELD(temp_s4, s32 *, 8) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x1C), s32 *, 0x240), 0);
            }
            M2C_FIELD(temp_s4, s8 *, 0xC) = var_s2;
            M2C_FIELD(temp_s4, s16 *, 0xE) = 0;
            M2C_FIELD(temp_s4, s32 *, 0x10) = (s32) M2C_FIELD(temp_s3, s32 *, 4);
            M2C_FIELD(temp_s4, s8 *, 0xD) = (s8) M2C_FIELD(temp_s3, s16 *, 2);
            func_002F8860(temp_s4, M2C_FIELD(arg0, s8 *, 9));
            var_s2 += 1;
            var_s1_2 += 8;
            var_s0_2 += 0x1C;
        } while (var_s2 < M2C_FIELD(arg0, s8 *, 0xC));
    }
}
