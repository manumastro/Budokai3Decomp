/* Draft (not built): func_002F9710 at 0x002F9710, size 0x15C, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

extern void *D_004706CC;

void func_002F9710(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    void *temp_a1;

    temp_a1 = arg1 + *(M2C_FIELD(arg1, s32 *, 0x14) + arg1 + ((arg2 - M2C_FIELD(arg1, s32 *, 0x18)) * 4));
    temp_f4 = (f32) M2C_FIELD(temp_a1, s16 *, 0x10);
    temp_f3 = (f32) M2C_FIELD(temp_a1, s16 *, 0x12);
    if (arg3 & 1) {
        M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
        var_f0 = temp_f3 * M2C_FIELD(D_004706CC, f32 *, 0x3C);
        goto block_6;
    }
    if (arg3 & 2) {
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (-temp_f3 * M2C_FIELD(D_004706CC, f32 *, 0x3C));
        M2C_FIELD(arg0, f32 *, 0x3C) = 0.0f;
    } else {
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((-temp_f3 / 2.0f) * M2C_FIELD(D_004706CC, f32 *, 0x3C));
        var_f0 = (temp_f3 / 2.0f) * M2C_FIELD(D_004706CC, f32 *, 0x3C);
block_6:
        M2C_FIELD(arg0, f32 *, 0x3C) = var_f0;
    }
    if (arg3 & 8) {
        M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f4 * M2C_FIELD(D_004706CC, f32 *, 0x38));
    } else if (arg3 & 0x10) {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (-temp_f4 * M2C_FIELD(D_004706CC, f32 *, 0x38));
        M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    } else {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((-temp_f4 / 2.0f) * M2C_FIELD(D_004706CC, f32 *, 0x38));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((temp_f4 / 2.0f) * M2C_FIELD(D_004706CC, f32 *, 0x38));
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, f32 *, 0x48) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x4C) = temp_f3;
}
