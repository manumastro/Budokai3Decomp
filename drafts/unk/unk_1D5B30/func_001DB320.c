/* Draft (not built): func_001DB320 at 0x001DB320, size 0x338, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 164 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DB320.s */

// src/unk/unk_1D5B30.c func_001DB320 diff diff=164/206
s32 func_001DB320(u8 *arg0) {
    f32 temp_f1;
    f32 var_f0;
    f32 var_f20;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0_3;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *var_a3;

    temp_s0 = arg0 + 0x920;
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) <= 0) {
        return 2;
    }
    if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
        var_f20 = *(f32 *)((u8 *)arg0 + 0x17D4);
    } else {
        var_f20 = *(f32 *)((u8 *)arg0 + 0x17D0);
    }
    if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
        var_f0 = 0.0f;
    } else {
        var_f0 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
    }
    if (!(var_f20 < var_f0)) {
        temp_v1 = *(s16 *)((u8 *)arg0 + 0xCAC);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 5:                                     /* switch 1 */
            if (*(u16 *)((u8 *)arg0 + 0xCB2) & 0x40) {
            case 9:                                 /* switch 1 */
                return 4;
            }
            if (temp_v1 == 0xF) {
            case 15:                                /* switch 1 */
                temp_v1_2 = *(s16 *)((u8 *)arg0 + 0xCAE);
                if (temp_v1_2 != 5) {
                    if (temp_v1_2 == 9) {
                        goto block_20;
                    }
                    goto block_24;
                }
block_20:
                if (!(*(f32 *)((u8 *)arg0 + 0xC58) < (f32) *(s32 *)((u8 *)temp_s0 + 0x248))) {
                    if (*(s8 *)((u8 *)temp_s0 + 0x1A9) > 0) {
                        goto block_23;
                    }
                    goto block_24;
                }
block_23:
                return 4;
            }
            goto block_24;
        }
    } else {
block_24:
        temp_v1_3 = *(s16 *)((u8 *)arg0 + 0xCAC);
        switch (temp_v1_3) {                        /* switch 2; irregular */
        case 15:                                    /* switch 2 */
            if ((*(s8 *)((u8 *)temp_s0 + 0x1AD) <= 0) && (*(s8 *)((u8 *)temp_s0 + 0x1A9) > 0)) {
                var_a3 = *(u8 **)((u8 *)temp_s0 + 0x1A0);
                if (var_a3 != NULL) {
loop_38:
                    temp_v0 = *(u8 **)((u8 *)var_a3 + 0x20);
                    if ((*(u16 *)((u8 *)temp_v0 + 8) & 1) && ((temp_v0_2 = *(s16 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1A4)) + 0x1C) + (*(s32 *)((u8 *)temp_v0 + 4) << 7)) + 4), (temp_v0_2 == 2)) || (temp_v0_2 == 3))) {
                        return 6;
                    }
                    var_a3 = *(u8 **)((u8 *)var_a3 + 0x2C);
                    if (var_a3 == NULL) {
                        goto block_44;
                    }
                    goto loop_38;
                }
block_44:
                return 4;
            }
block_65:
        default:                                    /* switch 2 */
            return 2;
        case 26:                                    /* switch 2 */
        case 1:                                     /* switch 2 */
        case 32:                                    /* switch 2 */
        case 31:                                    /* switch 2 */
        case 3:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
                if (*(s8 *)((u8 *)arg0 + 0x2010) == 0) {
                    if ((*(s8 *)((u8 *)arg0 + 0x1FCD) > 0) && (*(s32 *)((u8 *)arg0 + 0x13B0) > 0)) {
                        return 5;
                    }
                    if ((*(s8 *)((u8 *)arg0 + 0x1FCC) > 0) && (*(s32 *)((u8 *)arg0 + 0x13B0) > 0)) {
                        return 3;
                    }
                    goto block_54;
                }
block_54:
                temp_f1 = *(f32 *)((u8 *)arg0 + 0x1778);
                if (temp_f1 < 5.0f) {
                    return 5;
                }
                if (temp_f1 < 12.0f) {
                    return 3;
                }
                goto block_65;
            }
            temp_v0_3 = func_001E9050(arg0);
            if (temp_v0_3 == 1) {
                return 3;
            }
            if (temp_v0_3 == 2) {
                return 5;
            }
            goto block_65;
        }
    }
}
