/* Draft (not built): func_0028C0F0 at 0x0028C0F0, size 0x160, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_GetDir(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 amMc_Save(s32, M2C_UNK, M2C_UNK *, s32);        /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern M2C_UNK D_0046B8F0;
extern M2C_UNK D_0046BA10;
extern s32 D_00470048;
extern s32 D_0047084C;
extern s32 D_00470860;
extern s32 D_00470870;
extern s32 D_00470898;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_0028AD20;
extern M2C_UNK func_0028AE60;
extern M2C_UNK func_0028BDB0;
extern M2C_UNK func_0028BEB0;
extern s32 gMcState;

void func_0028C0F0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;

    switch (gMcState) {                             /* irregular */
    case 3:
        var_v1 = &func_0028BDB0;
        if (&func_0028BDB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        D_00470898 = 0;
        return;
    case 2:
        if (D_00470048 == 0) {
            D_00470860 = 0;
            func_00288870(0x11);
            if (amMc_GetDir(D_0047084C, 0, &D_0046BA10, &D_005AA3C0) == 0) {
                var_v1_2 = &func_0028AE60;
                if (&func_0028AE60 == NULL) {
                    var_v1_2 = NULL;
                }
                goto block_24;
            }
            if (amMc_GetDir(D_0047084C, 0, &D_0046BA10, &D_005AA3C0) == 0) {
                var_v1_2 = &func_0028AD20;
                if (&func_0028AD20 == NULL) {
                    var_v1_2 = NULL;
                }
                goto block_24;
            }
            return;
        }
        if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) != 0) {
            var_v1_3 = &func_0028BDB0;
            if (&func_0028BDB0 == NULL) {
                var_v1_3 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
            D_00470898 = 0;
            return;
        }
        var_v1_2 = &func_0028BEB0;
        if (&func_0028BEB0 == NULL) {
            var_v1_2 = NULL;
        }
block_24:
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
        return;
    }
}
