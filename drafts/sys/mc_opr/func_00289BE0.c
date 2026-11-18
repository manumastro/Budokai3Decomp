/* Draft (not built): func_00289BE0 at 0x00289BE0, size 0x208, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_CheckFile(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 amMc_GetInfo(s32, M2C_UNK, M2C_UNK, s32 *);     /* extern */
void func_002898F0(void *arg0);                     /* extern */
void func_00289DF0(void *arg0);                     /* extern */
extern M2C_UNK D_0046B9A0;
extern M2C_UNK D_00470838;
extern s32 D_0047084C;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;

void func_00289BE0(void *arg0) {
    s32 *temp_a3;
    s32 temp_a2;
    s32 var_v1_3;
    void (*var_v1)(void *);
    void (*var_v1_2)(void *);
    void (*var_v1_4)(void *);

    switch (gMcState) {                             /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        gMcResult = -5;
        /* fallthrough */
    case 2:                                         /* switch 1 */
        temp_a3 = &D_00470838 + (D_0047084C * 4);
        temp_a2 = *temp_a3;
        if (temp_a2 & 0x8000) {
            var_v1 = func_00289DF0;
            D_0047084C ^= 1;
            if (func_00289DF0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, void (**)(void *), 0x1C) = var_v1;
            if (*(&D_00470838 + (D_0047084C * 4)) & 0x8000) {
                D_0047084C ^= 1;
            } else if (amMc_GetInfo(D_0047084C, 0, 0, temp_a3) != 0) {
                D_0047084C ^= 1;
            } else {
                var_v1_2 = func_00289BE0;
                if (func_00289BE0 == NULL) {
                    var_v1_2 = NULL;
                }
                M2C_FIELD(arg0, void (**)(void *), 0x1C) = var_v1_2;
            }
            return;
        }
        switch (gMcResult) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if ((temp_a2 == 0) || (temp_a2 == 1)) {
            case -1:                                /* switch 2 */
                var_v1_3 = 5;
                if (*(&gMcInfo + 4 + (D_0047084C << 6)) == 0) {
block_38:
                    *temp_a3 = var_v1_3;
                    goto block_39;
                }
                if (amMc_CheckFile(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) == 0) {
                    var_v1_4 = func_002898F0;
                    *(&D_00470838 + (D_0047084C * 4)) = 2;
                    if (func_002898F0 == NULL) {
                        var_v1_4 = NULL;
                    }
                } else {
                    goto block_39;
                }
            } else {
block_39:
                var_v1_4 = func_00289DF0;
                D_0047084C ^= 1;
                if (func_00289DF0 == NULL) {
                    var_v1_4 = NULL;
                }
            }
            break;
        case -2:                                    /* switch 2 */
            var_v1_3 = 5;
            goto block_38;
        default:                                    /* switch 2 */
        case -5:                                    /* switch 2 */
            var_v1_3 = 1;
            goto block_38;
        }
        M2C_FIELD(arg0, void (**)(void *), 0x1C) = var_v1_4;
        return;
    }
}
