/* Draft (not built): func_0028CE10 at 0x0028CE10, size 0xD8, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern s32 D_00470850;
extern s32 D_00470858;
extern M2C_UNK *D_00470894;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028CCE0;
extern M2C_UNK func_0028DDF0;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028CE10(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;

    switch (gMcState) {                             /* irregular */
    case 3:
        gMcResult = -5;
        /* fallthrough */
    case 2:
        if (gMcResult == 0) {
            func_00288870(0xD);
            var_v1 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            D_00470850 = 0x3C;
            D_00470894 = &func_0028CCE0;
            return;
        }
        func_00288870(0xE);
        var_v1_2 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_2 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
        D_00470858 = 3;
        D_00470894 = &func_0028C580;
        return;
    }
}
