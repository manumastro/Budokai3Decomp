/* Draft (not built): func_00289210 at 0x00289210, size 0x170, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_CheckFile(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00288870(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_0046B9A0;
extern M2C_UNK D_00470838;
extern s32 D_0047084C;
extern s32 D_00470854;
extern M2C_UNK *D_00470894;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_00288BF0;
extern M2C_UNK func_00288E70;
extern M2C_UNK func_00289380;
extern M2C_UNK func_0028DDF0;
extern s32 gMcResult;
extern s32 gMcState;

void func_00289210(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;

    switch (gMcState) {                             /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        gMcResult = -5;
        /* fallthrough */
    case 2:                                         /* switch 1 */
        switch (gMcResult) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (*(&D_00470838 + (D_0047084C * 4)) == 0) {
            case -2:                                /* switch 2 */
            case -1:                                /* switch 2 */
                if (amMc_CheckFile(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) == 0) {
                    var_v1 = &func_00288E70;
                    *(&D_00470838 + (D_0047084C * 4)) = 2;
                    if (&func_00288E70 == NULL) {
                        var_v1 = NULL;
                    }
                } else {
                    goto block_21;
                }
            } else {
block_21:
                var_v1 = &func_00289380;
                if (&func_00289380 == NULL) {
                    var_v1 = NULL;
                }
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            return;
        default:                                    /* switch 2 */
        case -5:                                    /* switch 2 */
            *(&D_00470838 + (D_0047084C * 4)) = 1;
            func_00288870(5, 1);
            var_v1_2 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470894 = &func_00288BF0;
            D_00470854 = 1;
            return;
        }
        break;
    }
}
