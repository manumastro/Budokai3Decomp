/* Draft (not built): func_002889C0 at 0x002889C0, size 0x130, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Delete(s32, M2C_UNK, M2C_UNK *, s32);      /* extern */
M2C_UNK func_00288870(M2C_UNK, void *, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_0046B960;
extern s32 D_0047084C;
extern s32 D_00470858;
extern M2C_UNK *D_00470894;
extern M2C_UNK func_0028C3E0;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028DDF0;
extern M2C_UNK gMcInfo;

void func_002889C0(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    s32 var_a0;
    s32 var_a3;
    void *var_a1;

    var_a1 = arg1;
    var_a3 = 0x6B;
    var_a0 = 0;
    if (arg2 > 0) {
        do {
            var_a3 -= (u32) (M2C_FIELD(var_a1, s32 *, 0x10) + 0x3FF) >> 0xA;
            if (M2C_FIELD(var_a1, u16 *, 0x14) & 0x20) {
                var_a3 -= 1;
            }
            var_a0 += 1;
            var_a1 += 0x40;
        } while (var_a0 < arg2);
    }
    if (*(&gMcInfo + 8 + (D_0047084C << 6)) >= var_a3) {
        if (amMc_Delete(D_0047084C, 0, &D_0046B960, var_a3) != 0) {
            func_00288870(0x13);
            var_v1 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            D_00470858 = 3;
            D_00470894 = &func_0028C580;
            return;
        }
        func_00288870(0x11);
        var_v1_2 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_2 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
        D_00470894 = &func_0028C3E0;
        return;
    }
    func_00288870(0xF, var_a1, &D_0046B960, var_a3);
    var_v1_3 = &func_0028DDF0;
    if (&func_0028DDF0 == NULL) {
        var_v1_3 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
    D_00470894 = &func_0028C580;
}
