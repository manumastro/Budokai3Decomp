/* Draft (not built): func_0028B270 at 0x0028B270, size 0x110, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK func_00288870(s32);                         /* extern */
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470860;
extern M2C_UNK *D_00470894;
extern M2C_UNK func_0028AFB0;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028DDF0;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028B270(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;

    switch (gMcState) {                             /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        gMcResult = -5;
        /* fallthrough */
    case 2:                                         /* switch 1 */
        D_00470860 = 0;
        switch (gMcResult) {                        /* switch 2; irregular */
        case -2:                                    /* switch 2 */
        case -1:                                    /* switch 2 */
        case 0:                                     /* switch 2 */
            func_00288870(D_0047084C + 0xB);
            var_v1 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            D_00470894 = &func_0028AFB0;
            D_00470854 = 1;
            return;
        default:                                    /* switch 2 */
        case -5:                                    /* switch 2 */
            func_00288870(4);
            var_v1_2 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470858 = 3;
            D_00470894 = &func_0028C580;
            D_00470854 = 1;
            return;
        }
        break;
    }
}
