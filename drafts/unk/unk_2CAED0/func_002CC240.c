/* Draft (not built): func_002CC240 at 0x002CC240, size 0x20C, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x214, original 0x20C
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CC240.s */

// src/unk/unk_2CAED0.c func_002CC240 size diff=55/133
s32 func_002CA5D0(s32, void *);
s32 func_002CC240(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    var_v0_4 = -3;
    if ((gTutWork != NULL) && (temp_v1 = *(s32 *)((u8 *)gTutWork + 0xC), (temp_v1 >= 0)) && (temp_v1 < 0x22)) {
        var_a1 = *(((u8 *)&D_004565B0) + (temp_v1 * 4));
    } else {
        var_a1 = 0;
    }
    if (var_a1 & 1) {
        var_v0_4 = 0;
    }
    if (var_a1 & 4) {
        var_v0_4 = 1;
    }
    if (var_a1 & 0x20) {
        var_v0_4 = 0xB;
    }
    if (var_a1 & 0x40) {
        var_v0_4 = 9;
    }
    temp_a1 = *(s32 *)((u8 *)gTutWork + 0xC);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 17:                                        /* switch 1 */
        temp_a1_2 = *(s32 *)((u8 *)gTutWork + 0x20);
        var_v0 = 0;
        switch (temp_a1_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_v1 = temp_a1_2 + 1;
            if ((s32)(*(s32 *)((u8 *)gTutWork + 0)) == (s32)(arg0)) {
                var_v0 = 5;
block_28:
                *(s32 *)((u8 *)gTutWork + 0x20) = var_v1;
            }
            break;
        case 1:                                     /* switch 2 */
            if ((s32)(*(s32 *)((u8 *)gTutWork + 0)) == (s32)(arg0)) {
                var_v1 = temp_a1_2 + 1;
                if (*(s16 *)((u8 *)arg0 + 0xCAE) == 5) {
                    goto block_28;
                }
            }
            break;
        }
        return var_v0;
    case 19:                                        /* switch 1 */
        temp_a1_3 = *(s32 *)((u8 *)gTutWork + 0x20);
        var_v0_2 = 0;
        switch (temp_a1_3) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            var_v1_2 = temp_a1_3 + 1;
            if ((s32)(*(s32 *)((u8 *)gTutWork + 0)) == (s32)(arg0)) {
                var_v0_2 = 5;
block_38:
                *(s32 *)((u8 *)gTutWork + 0x20) = var_v1_2;
            }
            break;
        case 1:                                     /* switch 3 */
            if ((s32)(*(s32 *)((u8 *)gTutWork + 0)) == (s32)(arg0)) {
                var_v1_2 = temp_a1_3 + 1;
                if (*(s16 *)((u8 *)arg0 + 0xCAE) == 5) {
                    goto block_38;
                }
            }
            break;
        }
        return var_v0_2;
    case 21:                                        /* switch 1 */
        temp_a1_4 = *(s32 *)((u8 *)gTutWork + 0x20);
        var_v0_3 = 0;
        switch (temp_a1_4) {                        /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            var_v1_3 = temp_a1_4 + 1;
            if ((s32)(*(s32 *)((u8 *)gTutWork + 0)) == (s32)(arg0)) {
                var_v0_3 = 5;
block_48:
                *(s32 *)((u8 *)gTutWork + 0x20) = var_v1_3;
            }
            break;
        case 1:                                     /* switch 4 */
            if ((s32)(*(s32 *)((u8 *)gTutWork + 0)) == (s32)(arg0)) {
                var_v1_3 = temp_a1_4 + 1;
                if (*(s16 *)((u8 *)arg0 + 0xCAE) == 5) {
                    goto block_48;
                }
            }
            break;
        }
        return var_v0_3;
    case 33:                                        /* switch 1 */
        return func_002CA5D0(temp_a1, gTutWork);
    default:                                        /* switch 1 */
        return var_v0_4;
    }
}
