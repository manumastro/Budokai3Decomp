/* Draft (not built): func_0027D820 at 0x0027D820, size 0x1D8, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

extern s32 D_00495B60;
extern s32 D_00495B64;
extern s32 D_00495B68;
extern s32 D_00495B6C;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern M2C_UNK D_0058F660;

void func_0027D820(s64 arg0) {
    s8 var_a2;
    s8 var_v1;

    var_a2 = D_004B4B41;
    if ((M2C_FIELD(&D_0058F660, s16 *, 0) == var_a2) && (M2C_FIELD(&D_0058F660, s16 *, 2) == D_004B4B59)) {
        if (((s64) (arg0 << 0x30) >> 0x30) != 0) {
            goto block_4;
        }
    } else {
block_4:
        D_00495B6C = 0;
        D_00495B68 = 0;
        D_00495B64 = 0;
        D_00495B60 = 0;
        if (arg0 != 0) {
            var_a2 = -1;
        }
        M2C_FIELD(&D_0058F660, s16 *, 0) = (s16) var_a2;
        if (arg0 != 0) {
            var_v1 = -1;
        } else {
            var_v1 = D_004B4B59;
        }
        M2C_FIELD(&D_0058F660, s16 *, 2) = (s16) var_v1;
        M2C_FIELD(&D_0058F660, s16 *, 4) = 0;
        M2C_FIELD(&D_0058F660, s16 *, 6) = 0;
        M2C_FIELD(&D_0058F660, s8 *, 8) = 0;
        M2C_FIELD(&D_0058F660, s8 *, 9) = 1;
        M2C_FIELD(&D_0058F660, s8 *, 0xC) = -1;
        M2C_FIELD(&D_0058F660, s8 *, 0xD) = -1;
        M2C_FIELD(&D_0058F660, s8 *, 0xE) = 0;
        M2C_FIELD(&D_0058F660, s8 *, 0xF) = 0;
        M2C_FIELD(&D_0058F660, s8 *, 0x10) = 3;
        M2C_FIELD(&D_0058F660, s8 *, 0x11) = 3;
        switch (D_004B4B41) {                       /* switch 1; irregular */
        case 5:                                     /* switch 1 */
        case 3:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
        case 0:                                     /* switch 1 */
            M2C_FIELD(&D_0058F660, s8 *, 0xA) = 0;
            M2C_FIELD(&D_0058F660, s8 *, 0xB) = -2;
            return;
        case 6:                                     /* switch 1 */
            switch (D_004B4B59) {                   /* switch 2; irregular */
            case 2:                                 /* switch 2 */
            case 1:                                 /* switch 2 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = 0;
                M2C_FIELD(&D_0058F660, s8 *, 0xB) = -2;
                return;
            case 0:                                 /* switch 2 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = 0;
                M2C_FIELD(&D_0058F660, s8 *, 0xB) = 1;
                return;
            case 3:                                 /* switch 2 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = -1;
block_38:
                M2C_FIELD(&D_0058F660, s8 *, 0xB) = -1;
                return;
            }
            break;
        default:                                    /* switch 1 */
            switch (D_004B4B59) {                   /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = 0;
                goto block_38;
            case 2:                                 /* switch 3 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = -1;
                M2C_FIELD(&D_0058F660, s8 *, 0xB) = 1;
                return;
            case 0:                                 /* switch 3 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = 0;
                M2C_FIELD(&D_0058F660, s8 *, 0xB) = 1;
                return;
            case 3:                                 /* switch 3 */
                M2C_FIELD(&D_0058F660, s8 *, 0xA) = -1;
                goto block_38;
            }
            break;
        }
    }
}
