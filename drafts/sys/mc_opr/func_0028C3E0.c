/* Draft (not built): func_0028C3E0 at 0x0028C3E0, size 0xE0, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Unformat(s32, M2C_UNK, M2C_UNK *);         /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern M2C_UNK D_0046BA30;
extern s32 D_0047084C;
extern s32 D_00470858;
extern M2C_UNK *D_00470894;
extern s32 D_00470898;
extern M2C_UNK func_0028BDB0;
extern M2C_UNK func_0028C310;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028DDF0;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028C3E0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;

    switch (gMcState) {                             /* irregular */
    case 3:
        if (gMcResult != -4) {
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
    case 2:
        if (amMc_Unformat(D_0047084C, 0, &D_0046BA30) != 0) {
            var_v1_2 = &func_0028BDB0;
            if (&func_0028BDB0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470898 = 0;
            return;
        }
        var_v1_3 = &func_0028C310;
        if (&func_0028C310 == NULL) {
            var_v1_3 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
        return;
    }
}
