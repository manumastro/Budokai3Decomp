/* Draft (not built): func_0028A0A0 at 0x0028A0A0, size 0x258, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Load(s32, M2C_UNK, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
void *func_00288AF0(M2C_UNK *, s32, M2C_UNK);       /* extern */
extern M2C_UNK D_0046B8F0;
extern s32 D_0047084C;
extern M2C_UNK *D_00470894;
extern M2C_UNK D_005AA380;
extern M2C_UNK D_005AA388;
extern s32 D_005AA390;
extern u16 D_005AA394;
extern u16 D_005AA396;
extern s32 D_005AA398;
extern s32 D_005AA39C;
extern M2C_UNK D_005AA3A0;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_00289E80;
extern M2C_UNK func_00289F30;
extern M2C_UNK func_0028DDF0;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028A0A0(void *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    s32 var_a0;
    s8 temp_v0_2;
    void *temp_v0;
    void *var_a2;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    temp_v0 = func_00288AF0(&D_005AA3C0, gMcResult, 0);
    if (temp_v0 != NULL) {
        var_a2 = temp_v0 + 0x20;
        var_a1 = &D_005AA3A0;
        var_a0 = 0x10;
        M2C_FIELD(&D_005AA380, s16 *, 0) = (s16) M2C_FIELD(temp_v0, s16 *, 0);
        M2C_FIELD(&D_005AA380, s16 *, 2) = (s16) M2C_FIELD(temp_v0, s16 *, 2);
        M2C_FIELD(&D_005AA380, s16 *, 4) = (s16) M2C_FIELD(temp_v0, s16 *, 4);
        M2C_FIELD(&D_005AA380, s16 *, 6) = (s16) M2C_FIELD(temp_v0, s16 *, 6);
        M2C_FIELD(&D_005AA388, s16 *, 0) = (s16) M2C_FIELD(temp_v0, s16 *, 8);
        M2C_FIELD(&D_005AA388, s16 *, 2) = (s16) M2C_FIELD(temp_v0, s16 *, 0xA);
        M2C_FIELD(&D_005AA388, s16 *, 4) = (s16) M2C_FIELD(temp_v0, s16 *, 0xC);
        M2C_FIELD(&D_005AA388, s16 *, 6) = (s16) M2C_FIELD(temp_v0, s16 *, 0xE);
        D_005AA390 = M2C_FIELD(temp_v0, s32 *, 0x10);
        D_005AA394 = M2C_FIELD(temp_v0, u16 *, 0x14);
        D_005AA396 = M2C_FIELD(temp_v0, u16 *, 0x16);
        D_005AA398 = M2C_FIELD(temp_v0, s32 *, 0x18);
        D_005AA39C = M2C_FIELD(temp_v0, s32 *, 0x1C);
        do {
            var_a0 -= 1;
            temp_v0_2 = M2C_FIELD(var_a2, s8 *, 1);
            M2C_FIELD(var_a1, s8 *, 0) = (s8) M2C_FIELD(var_a2, s8 *, 0);
            var_a2 += 2;
            M2C_FIELD(var_a1, s8 *, 1) = temp_v0_2;
            var_a1 += 2;
        } while (var_a0 > 0);
        if (amMc_Load(D_0047084C, 0, &D_0046B8F0, 0) != 0) {
            func_00288870(9);
            var_v1 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            D_00470894 = &func_00289E80;
            return;
        }
        func_00288870(8);
        var_v1_2 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_2 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
        D_00470894 = &func_00289F30;
        return;
    }
    if ((gMcResult != 0) && (gMcResult != -6) && (gMcResult != -2) && (gMcResult != -5) && (gMcResult != -4)) {
        func_00288870(9);
        var_v1_3 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_3 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
        D_00470894 = &func_00289E80;
        return;
    }
    func_00288870(7);
    var_v1_4 = &func_0028DDF0;
    if (&func_0028DDF0 == NULL) {
        var_v1_4 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
    D_00470894 = &func_00289E80;
}
