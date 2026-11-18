/* Draft (not built): func_0028BEB0 at 0x0028BEB0, size 0x240, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK func_001EF510(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EF730(s32);                         /* extern */
M2C_UNK func_001EF930(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00288870(M2C_UNK, s32);                /* extern */
s32 memcmp(M2C_UNK *, s32, M2C_UNK);                /* extern */
extern s32 D_00470048;
extern s32 D_00470830;
extern s32 D_0047084C;
extern s32 D_00470850;
extern s32 D_00470858;
extern s32 D_00470870;
extern s32 D_00470874;
extern M2C_UNK *D_00470894;
extern s32 D_00470898;
extern M2C_UNK D_004B4B40;
extern s8 D_004B4B64;
extern s8 D_004B4B65;
extern M2C_UNK D_004B4BC0;
extern M2C_UNK func_0028AAA0;
extern M2C_UNK func_0028BDB0;
extern M2C_UNK func_0028C4C0;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDB0;
extern M2C_UNK func_0028DDF0;
extern M2C_UNK func_0028DF10;
extern s32 gMcState;

void func_0028BEB0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;

    switch (gMcState) {                             /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_v1 = &func_0028BDB0;
        if (&func_0028BDB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        D_00470898 = 0;
        return;
    case 2:                                         /* switch 1 */
        if ((D_00470874 != 0) && (memcmp(&D_004B4BC0, D_00470874, 0x24) == 0)) {
            func_001EF510(D_00470870, 0xD680);
            func_001EF930(&D_004B4B40, D_00470870);
            func_001EF730(D_00470870);
        }
        D_004B4B65 = 0;
        D_004B4B64 = (s8) D_0047084C;
        switch (D_00470048) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_001EF510(D_00470870, 0xD680);
            func_001EF930(&D_004B4B40, D_00470870);
            func_001EF730(D_00470870);
            func_00288870(0x12);
            var_v1_2 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470850 = 0x78;
            D_00470894 = &func_0028AAA0;
            return;
        case 2:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
            D_00470858 = 1;
            func_00288870(0x1B, D_0047084C);
            var_v1_3 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_3 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
            D_00470858 = 1;
            D_00470850 = 0x78;
            D_00470894 = &func_0028C4C0;
            return;
        case 9:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
            D_00470830 = 1;
            var_v1_4 = &func_0028DF10;
            if (&func_0028DF10 == NULL) {
                var_v1_4 = NULL;
            }
block_36:
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
            return;
        case 10:                                    /* switch 2 */
            func_00288870(-1, D_0047084C);
            D_00470894 = &func_0028DDA0;
            var_v1_4 = &func_0028DDB0;
            D_00470858 = 1;
            if (&func_0028DDB0 == NULL) {
                var_v1_4 = NULL;
            }
            goto block_36;
        default:                                    /* switch 2 */
            D_00470830 = 1;
            var_v1_4 = &func_0028DF10;
            if (&func_0028DF10 == NULL) {
                var_v1_4 = NULL;
            }
            goto block_36;
        }
        break;
    }
}
