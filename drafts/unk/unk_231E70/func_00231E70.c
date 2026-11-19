/* Draft (not built): func_00231E70 at 0x00231E70, size 0x19E0, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 971 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1EB8, original 0x19E0
 * Original: asm/nonmatchings/unk/unk_231E70/func_00231E70.s */

// src/unk/unk_231E70.c func_00231E70 size diff=971/1966
s32 func_00146F60(f32 *, f32 *);
s32 func_001D9220(void *);
s32 func_001DF8F0(s32, s32);
s32 func_001E3D60(s32, s32);
f32 func_001E52B0(s32);
s32 func_0022E9D0(void *, s32 *);
extern s32 D_0044FAB0;
extern s32 D_0044FAE8;
extern s32 D_0044FAF8;
extern s32 D_004E0660;
extern void *gBattle;
s16 func_00231E70(u8 *arg0) {
    s32 sp178;
    s32 sp168;
    u8 sp[0x400];
    u32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    u8 *spF0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    u8 *sp130;
    u8 *sp140;
    u8 *sp150;
    f32 sp160;
    f32 sp170;
    s32 sp19C;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_10;
    f32 var_f0_11;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    f32 var_f0_9;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f22;
    f32 var_f23;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s16 temp_v1_12;
    s16 temp_v1_3;
    s16 temp_v1_6;
    s16 temp_v1_8;
    s16 var_a3;
    s16 var_s7;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_2;
    s32 temp_v0_9;
    s32 temp_v1_4;
    s32 temp_v1_7;
    s32 temp_v1_9;
    s32 var_s6;
    s32 var_s7_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 var_s0_2;
    u32 temp_a0_4;
    u32 temp_s0_2;
    u32 temp_v1_11;
    u32 var_a0;
    u32 var_s0_3;
    u8 temp_a1;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_8;
    u8 temp_v1_10;
    u8 temp_v1_2;
    u8 temp_v1_5;
    u8 var_s0;
    u8 *temp_a0_3;
    u8 *temp_fp;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0_6;
    u8 *temp_v1;
    u8 *var_s5;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_s0 = gBattle;
    sp130 = *(u8 **)((u8 *)arg0 + 0x1AE0);
    temp_s2 = ((u8 *)&D_0058BBB0) + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_s1 = *(u8 **)((u8 *)temp_s2 + 8);
    sp150 = *(u8 **)((u8 *)temp_s2 + 0xC);
    temp_fp = ((u8 *)&D_0058BBB0) + (*(s32 *)((u8 *)temp_s3 + 0x1350) * 0xC0);
    if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
        var_f22 = *(f32 *)((u8 *)arg0 + 0x17D4);
    } else {
        var_f22 = *(f32 *)((u8 *)arg0 + 0x17D0);
    }
    temp_f21 = *(f32 *)((u8 *)arg0 + 0x17D4);
    if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {

    }
    temp_f20 = func_001E52B0(0);
    if ((*(s16 *)((u8 *)temp_s2 + 0x1E) == 9) && (temp_f20 < (f32) *(s16 *)((u8 *)sp150 + 4))) {
        *(f32 *)((u8 *)temp_s2 + 0x28) = 0.0f;
    }
    if ((*(s16 *)((u8 *)temp_s2 + 0x1E) == 4) && (var_f22 == temp_f21)) {
        *(f32 *)((u8 *)temp_s2 + 0x28) = 0.0f;
    }
    sp19C = 0;
    sp120 = 0;
    temp_v0 = func_0022E9D0(temp_s3, &sp19C);
    if ((temp_v0 != 0) && (temp_f20 < (f32) *(s16 *)((u8 *)sp150 + 0))) {
        sp120 = 1;
    }
    if ((*(s16 *)((u8 *)temp_s3 + 0xCAC) == 0xF) && (temp_v1 = *(u8 **)((u8 *)temp_s3 + 0x17A0), var_s5 = temp_v1 + 0x20, (temp_v1 != NULL))) {

    } else {
        var_s5 = NULL;
    }
    sp110 = 0;
    if ((temp_v0 == 0) && (var_s5 != NULL) && ((*(s32 *)((u8 *)var_s5 + 0) & 0x14) == 0x14)) {
        sp110 = 1;
    }
    temp_f2 = *(f32 *)((u8 *)temp_s2 + 0x28);
    if (!(temp_f2 <= 0.0f)) {
        *(f32 *)((u8 *)temp_s2 + 0x28) = (f32) (temp_f2 - *(f32 *)((u8 *)temp_s0 + 0x88F0));
        temp_a0 = *(s16 *)((u8 *)temp_s2 + 0x1E);
        switch (temp_a0) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            if (var_s5 != NULL) {
                if (sp120 != 0) {
                    var_s0 = *(u8 *)((u8 *)var_s5 + 0xC);
                    if (var_s0 == 0) {
                        var_s0 = 0x32;
                        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x17A0)) + 0xE) != 0) {

                        } else {
                            var_s0 = 0x64;
                        }
                    }
                    temp_v1_2 = *(u8 *)((u8 *)temp_s1 + 0xD8);
                    temp_s0_2 = ((var_s0 * temp_v1_2) / 100) + ((u32) (var_s0 * temp_v1_2) >> 0x1F);
                    if ((u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 800U) < temp_s0_2) {
                        *(f32 *)((u8 *)temp_s2 + 0x28) = 0.0f;
                    }
                }
                if (*(s32 *)((u8 *)var_s5 + 0) & 0x100) {
                    temp_s0_3 = (s32) (0x64 * *(u16 *)((u8 *)temp_s1 + 0xB4)) >> 8;
                    if ((u32) temp_s0_3 < (u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U)) {
block_57:
                        *(f32 *)((u8 *)temp_s2 + 0x28) = 0.0f;
                    }
                }
            }
            break;
        case 4:                                     /* switch 1 */
            if (*(s16 *)((u8 *)temp_s3 + 0xCAC) == 4) {
                if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
                    var_f23 = *(f32 *)((u8 *)arg0 + 0x17D4);
                } else {
                    var_f23 = *(f32 *)((u8 *)arg0 + 0x17D0);
                }
                if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f1 = 0.0f;
                } else {
                    var_f1 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
                }
                if ((var_f23 < (1000.0f + var_f1)) || (var_f23 < (f32) *(s16 *)((u8 *)temp_s2 + 0xBE))) {
                    *(f32 *)((u8 *)temp_s2 + 0x28) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x28) + *(f32 *)((u8 *)temp_s0 + 0x88F0));
                }
            }
            /* fallthrough */
        case 9:                                     /* switch 1 */
            if (sp110 != 0) {
                goto block_57;
            }
            break;
        }
        if (!(*(f32 *)((u8 *)temp_s2 + 0x28) <= 0.0f)) {
            return *(s16 *)((u8 *)temp_s2 + 0x1E);
        }
        goto block_60;
    }
block_60:
    if (!(*(f32 *)((u8 *)temp_s2 + 0x30) <= 0.0f) && (*(s16 *)((u8 *)temp_s3 + 0xCAC) == 0x10)) {
        return *(s16 *)((u8 *)temp_s2 + 0x1E);
    }
    *(f32 *)((u8 *)temp_s2 + 0x28) = 0.0f;
    *(s32 *)((u8 *)temp_s2 + 0x2C) = 0;
    *(f32 *)((u8 *)temp_s2 + 0x30) = 0.0f;
    var_f1_2 = temp_f20;
    if (*(s16 *)((u8 *)arg0 + 0xCAC) == 9) {
        var_f1_2 = temp_f20 - 20.0f;
    }
    if (*(s16 *)((u8 *)temp_s3 + 0xCAC) == 9) {
        var_f1_2 -= 20.0f;
    }
    if (!(var_f1_2 <= 0.0f)) {

    }
    var_s6 = 0;
    if (*(s16 *)((u8 *)sp150 + 0) > 0) {

    } else {
        var_s6 = 1;
        if ((f32) 0 < (1.2f * (f32) *(s16 *)((u8 *)sp150 + 2))) {

        } else {
            var_s6 = 2;
        }
    }
    sp140 = temp_s1 + (var_s6 * 9);
    sp100 = (s32) *(&D_0044FAB0 + *(s16 *)((u8 *)temp_s3 + 0xCAC));
    if ((var_s5 != NULL) && (*(s32 *)((u8 *)var_s5 + 0) & 0x10000002)) {
        sp100 = 0;
    }
    spF0 = temp_s1 + (sp100 * 0x12) + 0x1C;
    if ((var_s5 != NULL) && ((*(s32 *)((u8 *)var_s5 + 0) & 0x14) == 0x14) && ((sp130 == NULL) || (*(s32 *)((u8 *)sp130 + 0x14) & 1))) {
        var_v0 = 1;
        if (var_s6 >= 2) {

        } else {
            var_v0 = 5;
        }
        sp100 = var_v0;
        var_s5 = NULL;
        spF0 = temp_s1 + (var_v0 * 0x12) + 0x1C;
    }
    spE0 = 0;
    temp_v1_3 = *(s16 *)((u8 *)temp_s3 + 0xCAC);
    if (temp_v1_3 != 9) {
        if (temp_v1_3 == 5) {
            goto block_92;
        }
    } else {
block_92:
        spE0 = 1;
    }
    spD0 = 0;
    if (*(s16 *)((u8 *)temp_s3 + 0xCAC) != 0x10) {
        if (func_001E3D60(*(s32 *)((u8 *)temp_s3 + 0x17AC), 0x43340000) != 0) {
            goto block_96;
        }
    } else {
block_96:
        spD0 = 1;
    }
    var_a3 = *(s16 *)((u8 *)temp_fp + 0x5E);
    spC0 = 0;
loop_102:
    if (var_a3 != *(s16 *)((u8 *)temp_fp + 0x60)) {
        if ((*(s16 *)((u8 *)((var_a3 * 2) + temp_fp) + 0x62) != *(s32 *)((u8 *)temp_s3 + 0xB70)) || (temp_v0_2 = spC0 + 1, spC0 = temp_v0_2, (temp_v0_2 != 5))) {
            var_a3 += 1;
            if (var_a3 == 0x20) {
                var_a3 = 0;
            }
            goto loop_102;
        }
    }
    spB0 = 0;
    var_s7_2 = 0;
loop_246:
    if (var_s7_2 < 6) {
        var_s0_2 = *(spF0 + (var_s7_2 * 2));
        switch (var_s7_2) {                         /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            if (func_001D9220(arg0) == 0) {
                var_s0_2 = 0;
            } else {
                if (var_s5 != NULL) {
                    if ((*(f32 *)((u8 *)temp_s3 + 0x1848) <= 0.0f) && (sp120 == 0) && (sp110 == 0) && !(*(s32 *)((u8 *)var_s5 + 0) & 0x80)) {
                        var_s0_2 = (u16) ((s32) (var_s0_2 * *(&D_0044FAE8 + (spC0 * 2))) >> 8);
                    }
                    if (*(s32 *)((u8 *)var_s5 + 0) & 0x100) {
                        var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xB4)) >> 8);
                    }
                    if (*(s8 *)((u8 *)temp_s2 + 0xA4) == 0) {
                        var_s0_2 *= 4;
                    }
                }
                if ((*(s16 *)((u8 *)temp_s2 + 0x1E) == 9) && (spE0 == 0)) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xAC)) >> 8);
                }
                if ((*(s16 *)((u8 *)arg0 + 0xCAC) == 0x1A) && (*(f32 *)((u8 *)temp_s3 + 0x1848) <= 0.0f)) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xAE)) >> 8);
                }
                if ((sp120 == 0) && (*(f32 *)((u8 *)arg0 + 0x17C0) < (0.2f * *(f32 *)((u8 *)arg0 + 0x17C4))) && (*(f32 *)((u8 *)temp_s3 + 0x1848) <= 0.0f)) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xB0)) >> 8);
                }
                if (var_s5 != NULL) {
                    temp_v1_4 = *(s32 *)((u8 *)var_s5 + 0);
                    if ((temp_v1_4 & 0x10) && !(temp_v1_4 & 4)) {
                        var_s0_2 = (u16) ((s32) var_s0_2 >> 4);
                    }
                }
                if ((sp110 != 0) && (var_s6 > 0)) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xB2)) >> 8);
                }
                if (spD0 == 0) {
                    temp_f0 = *(s32 *)((u8 *)temp_fp + 0x54);
                    if ((temp_f0 >> 4) != 0) {
                        var_s0_2 = (u16) ((s32) (var_s0_2 * ((temp_f0 >> 1) + 0x100)) >> 8);
                    }
                }
            }
            break;
        case 2:                                     /* switch 2 */
            if ((var_s5 != NULL) && (temp_f20 < (f32) *(s16 *)((u8 *)var_s5 + 0xA)) && (var_s6 == 0)) {
                temp_v1_5 = *(u8 *)((u8 *)var_s5 + 0x19);
                var_s0_2 = ((var_s0_2 * temp_v1_5) / 100) + ((u32) (var_s0_2 * temp_v1_5) >> 0x1F);
            }
            if ((sp110 != 0) || ((sp130 != NULL) && !(*(s32 *)((u8 *)sp130 + 0x14) & 1) && (var_s6 < 2))) {
                var_s0_2 = (u16) ((s32) var_s0_2 >> 3);
            }
            break;
        case 4:                                     /* switch 2 */
            if (*(s8 *)((u8 *)temp_s2 + 0xB5) != 0) {
                var_s0_2 = 0;
            } else if (var_f22 == temp_f21) {
                var_s0_2 = 0;
            } else if (*(s32 *)((u8 *)arg0 + 0x1A4C) != 0) {
                var_s0_2 = 0;
            } else {
                temp_v0_3 = *(u8 *)((u8 *)temp_s1 + 0xB6);
                if ((s32) temp_v0_3 >= 0) {
                    var_f0 = (f32) temp_v0_3;
                } else {
                    var_f0 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
                }
                if (!(var_f22 < ((temp_f21 * var_f0) / 256.0f))) {
                    var_v0_2 = var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xB8);
                    goto block_172;
                }
                if (var_s6 == 2) {
                    temp_v0_4 = *(u8 *)((u8 *)temp_s1 + 0xB7);
                    if ((s32) temp_v0_4 >= 0) {
                        var_f0_2 = (f32) temp_v0_4;
                    } else {
                        var_f0_2 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
                    }
                    if (var_f22 < ((temp_f21 * var_f0_2) / 256.0f)) {
                        var_v0_2 = var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xBA);
block_172:
                        var_s0_2 = (u16) (var_v0_2 >> 8);
                    }
                }
            }
            temp_v0_5 = *(s16 *)((u8 *)temp_s2 + 0xBE);
            if ((temp_v0_5 > 0) && (var_f22 < (f32) temp_v0_5)) {
                var_s0_2 *= 0x10;
            }
            temp_v1_6 = *(s16 *)((u8 *)temp_s3 + 0xCAC);
            switch (temp_v1_6) {                    /* switch 3; irregular */
            case 23:                                /* switch 3 */
            case 18:                                /* switch 3 */
            case 4:                                 /* switch 3 */
                var_s0_2 *= 4;
                break;
            case 9:                                 /* switch 3 */
                var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xBC)) >> 8);
                /* fallthrough */
            default:                                /* switch 3 */
                if (var_s6 == 0) {
                    var_s0_2 = (u16) ((s32) var_s0_2 >> 2);
                }
                break;
            }
            break;
        case 3:                                     /* switch 2 */
            if ((*(s16 *)((u8 *)temp_s2 + 0x1E) != 9) && (spE0 != 0) && !(temp_f20 < (f32) *(s16 *)((u8 *)sp150 + 6)) && (var_s6 < 2)) {
                if (*(s16 *)((u8 *)temp_fp + 0x5C) < 3) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xBE)) >> 8);
                } else {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xC0)) >> 8);
                }
            }
            if ((var_s5 != NULL) && (temp_f20 < (f32) *(s16 *)((u8 *)var_s5 + 0xA))) {
                temp_a1 = *(u8 *)((u8 *)var_s5 + 0x18);
                temp_v1_7 = *(s32 *)((u8 *)var_s5 + 0);
                var_s0_2 = ((var_s0_2 * temp_a1) / 100) + ((u32) (var_s0_2 * temp_a1) >> 0x1F);
                if (temp_v1_7 & 0x400) {
                    var_v0_3 = var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xC8);
                    goto block_204;
                }
                if (temp_v1_7 & 0x200) {
                    var_v0_3 = var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xC6);
                    goto block_204;
                }
                if (temp_v1_7 & 0x100) {
                    var_v0_3 = var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xC4);
block_204:
                    var_s0_2 = (u16) (var_v0_3 >> 8);
                }
            }
            if (sp130 != NULL) {
                var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xC2)) >> 8);
            }
            break;
        case 5:                                     /* switch 2 */
            if (spD0 == 0) {
                temp_f0_2 = *(s32 *)((u8 *)temp_fp + 0x54);
                if ((temp_f0_2 >> 4) != 0) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * (0x100 - (temp_f0_2 >> 1))) >> 8);
                }
            }
            if ((*(s16 *)((u8 *)temp_s2 + 0x1E) == 9) && (spE0 == 0)) {
                var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xCA)) >> 8);
            }
            if ((spE0 != 0) && (var_s6 == 0) && (*(s16 *)((u8 *)arg0 + 0xCAC) != 0x13)) {
                var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xCC)) >> 8);
            }
            temp_v1_8 = *(s16 *)((u8 *)arg0 + 0xCAC);
            if ((temp_v1_8 != 0x13) && (temp_v1_8 != 0x23)) {
                if (sp120 == 0) {
                    if (var_s5 != NULL) {
                        temp_v1_9 = *(s32 *)((u8 *)var_s5 + 0);
                        if ((temp_v1_9 & 0x10) && !(temp_v1_9 & 4) && (var_s6 == 0)) {
                            goto block_226;
                        }
                    }
                } else {
block_226:
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xCE)) >> 8);
                    if (sp120 != 0) {
                        var_s0_2 = (u16) ((s32) (var_s0_2 * *(&D_0044FAF8 + (spC0 * 2))) >> 8);
                    }
                }
            }
            if (sp19C != 0) {
                var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xD0)) >> 8);
            }
            if (!(*(f32 *)((u8 *)temp_s3 + 0x1848) <= 0.0f)) {
                if (*(s16 *)((u8 *)temp_fp + 0x58) < -1) {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xD2)) >> 8);
                } else {
                    var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xD4)) >> 8);
                }
            }
            if (*(s16 *)((u8 *)temp_s2 + 0x1C) == 6) {
                var_s0_2 *= 0x64;
            }
            if ((func_001E3D60(*(s32 *)((u8 *)temp_s3 + 0x17AC), 0x43340000) != 0) && (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) == 0)) {
                var_s0_2 = (u16) ((s32) (var_s0_2 * *(u16 *)((u8 *)temp_s1 + 0xD6)) >> 8);
            }
            if (*(f32 *)((u8 *)temp_s3 + 0x17C0) <= 0.0f) {
                var_s0_2 = 0;
            }
            if ((var_s6 == 2) && (((*(f32 *)((u8 *)arg0 + 0x17C0) - *(f32 *)((u8 *)temp_s3 + 0x17C0)) < (0.5f * *(f32 *)((u8 *)arg0 + 0x17C4))) || (sp100 != 4))) {
                temp_v1_10 = *(u8 *)((u8 *)temp_s1 + 0xD9);
                var_s0_2 = ((var_s0_2 * temp_v1_10) / 100) + ((u32) (var_s0_2 * temp_v1_10) >> 0x1F);
            }
            break;
        }
        temp_v1_11 = var_s0_2 * *(sp140 + var_s7_2);
        temp_v0_6 = (var_s7_2 * 4) + sp;
        var_s7_2 += 1;
        *(u32 *)((u8 *)temp_v0_6 + 0x180) = (u32) (temp_v1_11 >> 8);
        spB0 += *(u32 *)((u8 *)temp_v0_6 + 0x180);
        goto loop_246;
    }
    if (spB0 != 0) {
        var_s7 = -1;
        var_a0 = (u32) (func_0012EAE0(0x20, 0) / 10) % spB0;
        do {
            var_s7 += 1;
            var_a0 -= *(s32 *)((u8 *)((var_s7 * 4) + sp) + 0x180);
        } while ((s32) var_a0 >= 0);
    } else {
        var_s7 = 0;
    }
    *(s16 *)((u8 *)temp_s2 + 0x1C) = var_s7;
    temp_v0_7 = *(s16 *)((u8 *)temp_s2 + 0x1C);
    switch (temp_v0_7) {                            /* switch 4 */
    case 0:                                         /* switch 4 */
        temp_a0_2 = *(s16 *)((u8 *)arg0 + 0x1FEC);
        var_s7 = 0;
        if (temp_a0_2 != 0) {
            temp_a0_3 = (unsigned char *)(&D_004E0660 + (temp_a0_2 * 0x28));
            if ((var_s6 == 2) && (*(s16 *)((u8 *)temp_s3 + 0xCAC) != 9) && (sp130 == NULL)) {
                temp_v0_8 = *(u8 *)((u8 *)temp_a0_3 + 0x15);
                var_s0_3 = 0xA;
                switch (temp_v0_8) {                /* switch 5 */
                case 0x64:                          /* switch 5 */
                    temp_f0_3 = *(f32 *)((u8 *)arg0 + 0x17C0);
                    if (((M2C_BITWISE(s32, temp_f0_3) - M2C_BITWISE(s32, temp_f0_3)) * 2) < (*(s16 *)((u8 *)temp_a0_3 + 0x16) * 0x64)) {
                        var_s0_3 = 0;
                    }
                    break;
                case 0x65:                          /* switch 5 */
                    if ((3.0f * (temp_f21 - var_f22)) < (f32) (*(s16 *)((u8 *)temp_a0_3 + 0x16) * 0x64)) {
                        var_s0_3 = 0;
                    } else if (var_f22 < 1000.0f) {
                        var_s0_3 = M2C_BITWISE(u32, ((f32) 0xAU + ((1000.0f - var_f22) / 10.0f)));
                    }
                    break;
                case 0x66:                          /* switch 5 */
                    temp_f0_4 = *(f32 *)((u8 *)arg0 + 0x17C0);
                    if (((M2C_BITWISE(s32, temp_f0_4) - M2C_BITWISE(s32, temp_f0_4)) * 2) < (*(s16 *)((u8 *)temp_a0_3 + 0x16) * 0x64)) {
                        var_s0_3 = 0;
                    }
                    break;
                case 0x67:                          /* switch 5 */
                    if ((*(s32 *)((u8 *)arg0 + 0x17E4) * 2) < (*(s16 *)((u8 *)temp_a0_3 + 0x16) * 0x64)) {
                        var_s0_3 = 0;
                    }
                    break;
                case 0x6F:                          /* switch 5 */
                    if ((*(s8 *)((u8 *)arg0 + 0x1FD1) > 0) || (*(s8 *)((u8 *)temp_s3 + 0x1FD1) > 0)) {
                        var_s0_3 = 0x64;
                    } else {
                        var_s0_3 = 0;
                    }
                    break;
                }
                if ((u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U) < var_s0_3) {
                    var_s7 = 0x30;
                }
            }
        }
        break;
    case 1:                                         /* switch 4 */
        var_s7 = 1;
        temp_v0_9 = *(u8 *)((u8 *)temp_s1 + 0xDA) + ((u32) (func_0012EAE0(0x20, 0) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xDB));
        if (temp_v0_9 >= 0) {
            var_f0_3 = (f32) temp_v0_9;
        } else {
            var_f0_3 = 2.0f * (f32) (((u32) temp_v0_9 >> 1) | (temp_v0_9 & 1));
        }
        *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_3;
        break;
    case 2:                                         /* switch 4 */
        if ((*(s8 *)((u8 *)temp_fp + 0xB5) != 0) && (*(s8 *)((u8 *)temp_s2 + 0xB5) == 0) && (*(s32 *)((u8 *)arg0 + 0x1A4C) == 0)) {
            var_s7 = 0xB;
            temp_v0_10 = *(u8 *)((u8 *)temp_s1 + 0xDC) + ((u32) (func_0012EAE0(0x20, 0) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xDD));
            if (temp_v0_10 >= 0) {
                var_f0_4 = (f32) temp_v0_10;
            } else {
                var_f0_4 = 2.0f * (f32) (((u32) temp_v0_10 >> 1) | (temp_v0_10 & 1));
            }
            *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_4;
        } else if ((var_s6 == 2) || ((var_s6 == 1) && (*(s8 *)((u8 *)temp_s3 + 0x2013) != 0))) {
            var_s7 = 9;
            temp_v0_11 = *(u8 *)((u8 *)temp_s1 + 0xDC) + ((u32) (func_0012EAE0(0x20, 0) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xDD));
            if (temp_v0_11 >= 0) {
                var_f0_5 = (f32) temp_v0_11;
            } else {
                var_f0_5 = 2.0f * (f32) (((u32) temp_v0_11 >> 1) | (temp_v0_11 & 1));
            }
            *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_5;
        } else {
            temp_v1_12 = *(s16 *)((u8 *)temp_s3 + 0xCAC);
            if (temp_v1_12 == 0x10) {
                var_s7 = 2;
                temp_v0_12 = ((u32) (func_0012EAE0(0x20, 0) / 10) % 5U) + 5;
                if (temp_v0_12 >= 0) {
                    var_f0_6 = (f32) temp_v0_12;
                } else {
                    var_f0_6 = 2.0f * (f32) (((u32) temp_v0_12 >> 1) | (temp_v0_12 & 1));
                }
                *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_6;
            } else if (var_s6 == 1) {
                temp_a0_4 = (u32) (func_0012EAE0(0x20, 0) / 10) % 100U;
                if (!(*(f32 *)((u8 *)temp_s3 + 0x1848) <= 0.0f) && (var_s7 = 6, !((15.0f + (f32) *(s16 *)((u8 *)var_s5 + 0xA)) <= temp_f20))) {

                } else if ((s32) temp_a0_4 < (s32) *(u8 *)((u8 *)temp_s1 + 0xDE)) {
                    var_s7 = 9;
                    temp_v0_13 = *(u8 *)((u8 *)temp_s1 + 0xDF) + ((u32) (func_0012EAE0(0x20, 0) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xE0));
                    if (temp_v0_13 >= 0) {
                        var_f0_7 = (f32) temp_v0_13;
                    } else {
                        var_f0_7 = 2.0f * (f32) (((u32) temp_v0_13 >> 1) | (temp_v0_13 & 1));
                    }
                    *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_7;
                } else {
                    var_s7 = 2;
                    temp_v0_14 = *(u8 *)((u8 *)temp_s1 + 0xE1) + ((u32) (func_0012EAE0(0x20, 0) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xE2));
                    if (temp_v0_14 >= 0) {
                        var_f0_8 = (f32) temp_v0_14;
                    } else {
                        var_f0_8 = 2.0f * (f32) (((u32) temp_v0_14 >> 1) | (temp_v0_14 & 1));
                    }
                    *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_8;
                }
            } else {
                var_s7 = 6;
                if (temp_v1_12 == 0xF) {

                } else {
                    temp_a0_5 = ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U) - *(u8 *)((u8 *)temp_s1 + 0xE3);
                    if (temp_a0_5 < 0) {
                        var_s7 = 9;
                        temp_v0_15 = *(u8 *)((u8 *)temp_s1 + 0xE6) + ((u32) (func_0012EAE0(0x20, 0xCCCCCCCD) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xE7));
                        if (temp_v0_15 >= 0) {
                            var_f0_9 = (f32) temp_v0_15;
                        } else {
                            var_f0_9 = 2.0f * (f32) (((u32) temp_v0_15 >> 1) | (temp_v0_15 & 1));
                        }
                        *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_9;
                    } else {
                        temp_a0_6 = temp_a0_5 - *(u8 *)((u8 *)temp_s1 + 0xE4);
                        var_s7 = 5;
                        if (temp_a0_6 < 0) {

                        } else if (temp_a0_6 < (s32) *(u8 *)((u8 *)temp_s1 + 0xE5)) {
                            var_s7 = 2;
                            temp_v0_16 = *(u8 *)((u8 *)temp_s1 + 0xE8) + ((u32) (func_0012EAE0(0x20, 0xCCCCCCCD) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xE9));
                            if (temp_v0_16 >= 0) {
                                var_f0_10 = (f32) temp_v0_16;
                            } else {
                                var_f0_10 = 2.0f * (f32) (((u32) temp_v0_16 >> 1) | (temp_v0_16 & 1));
                            }
                            *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_10;
                        } else {
                            var_s7 = 6;
                        }
                    }
                }
            }
        }
        break;
    case 3:                                         /* switch 4 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_00146F60(&sp160, &sp170);
        temp_f1 = fabsf((sp168 * *(f32 *)((u8 *)arg0 + 0x650)) - (sp160 * *(f32 *)((u8 *)(arg0 + 0x650) + 8)));
        if ((temp_f1 < 150.0f) && (sp130 != NULL)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            var_s7 = 8;
            if (!(-((sp178 * sp160) - (sp170 * sp168)) < 0.0f)) {

            } else {
                var_s7 = 7;
            }
        } else if ((*(s16 *)((u8 *)gBattle + 0x7E2) != 2) || (temp_f1 < 150.0f)) {
            var_s7 = ((func_0012EAE0(0x20, 0) / 10) & 1) + 7;
        } else {
            M2C_ERROR(/* unknown instruction: mula.s $f4, $f3 */);
            var_s7 = 7;
            if (!(-M2C_ERROR(/* unknown instruction: msub.s $f1, $f2, $f1 */) < 0.0f)) {

            } else {
                var_s7 = 8;
            }
        }
        break;
    case 4:                                         /* switch 4 */
        var_s7 = 4;
        temp_v0_17 = *(u8 *)((u8 *)temp_s1 + 0xEA) + ((u32) (func_0012EAE0(0x20, 0) / 10) % (u8) *(u8 *)((u8 *)temp_s1 + 0xEB));
        if (temp_v0_17 >= 0) {
            var_f0_11 = (f32) temp_v0_17;
        } else {
            var_f0_11 = 2.0f * (f32) (((u32) temp_v0_17 >> 1) | (temp_v0_17 & 1));
        }
        *(f32 *)((u8 *)temp_s2 + 0x28) = var_f0_11;
        break;
    case 5:                                         /* switch 4 */
        var_s7 = 0;
        break;
    }
    *(s16 *)((u8 *)temp_s2 + 0x1E) = var_s7;
    return var_s7;
}
