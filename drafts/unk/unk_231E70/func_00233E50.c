/* Draft (not built): func_00233E50 at 0x00233E50, size 0xDCC, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  *)((u8 *)temp_s4 + 0x17) * 4)); @ 135: (u8 *)(*(u8 **)((u8 *)temp_s4 + 4)) + 8) + (*(s8 *)((u8 *)temp_s4 + 0x15) * 4));
 * Original: asm/nonmatchings/unk/unk_231E70/func_00233E50.s */

// src/unk/unk_231E70.c func_00233E50 cerr diff=-1/0
f32 func_001D7DF0(void *);
s16 func_001D99C0(void *, s32);
s32 func_001DF8F0(s32, s32, s32);
s32 func_001DFA90(void *, s16, void *, s32);
f32 func_001E52B0(s32);
extern s32 D_004E0660;
extern void *gBattle;
void func_00233E50(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f21;
    f32 var_f22;
    s16 *temp_s1_3;
    s16 temp_a0_11;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s32 temp_a0_13;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a1;
    s32 var_v1;
    s64 var_v0_2;
    s64 var_v0_3;
    s8 temp_a0;
    s8 temp_a0_12;
    s8 temp_a1_2;
    s8 temp_s1;
    s8 temp_v1_10;
    s8 var_v0_4;
    u32 temp_hi;
    u32 temp_hi_2;
    u32 temp_hi_3;
    u8 temp_a0_10;
    u8 temp_a0_2;
    u8 temp_a0_9;
    u8 temp_v0_6;
    u8 temp_v1_3;
    u8 *temp_a2_2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_v0_5;
    u8 *temp_v1_9;
    u8 *var_v0;

    temp_s5 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x1A40);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_s6 = gBattle;
    temp_s4 = ((u8 *)&D_0058BBB0) + (temp_a2 * 0xC0);
    temp_s2 = *(u8 **)((u8 *)temp_s4 + 8);
    temp_s3 = ((u8 *)&D_0058BBB0) + (*(s32 *)((u8 *)temp_s5 + 0x1350) * 0xC0);
    if (!(temp_f1 <= 0.0f)) {
        var_f20 = *(f32 *)((u8 *)arg0 + 0x17D4);
    } else {
        var_f20 = *(f32 *)((u8 *)arg0 + 0x17D0);
    }
    if (!(temp_f1 <= 0.0f)) {
        var_f22 = *(f32 *)((u8 *)arg0 + 0x17D4);
    } else {
        var_f22 = *(f32 *)((u8 *)arg0 + 0x17D0);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        if (!(temp_f1 <= 0.0f)) {
            var_f0 = *(f32 *)((u8 *)arg0 + 0x17D4);
        } else {
            var_f0 = *(f32 *)((u8 *)arg0 + 0x17E0);
        }
        if (!(var_f22 <= var_f0)) {

        } else if (!(temp_f1 <= 0.0f)) {
            var_f22 = *(f32 *)((u8 *)arg0 + 0x17D4);
        } else {
            var_f22 = *(f32 *)((u8 *)arg0 + 0x17E0);
        }
    }
    if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B, temp_a2) > 0)) {
        var_f21 = 0.0f;
    } else {
        var_f21 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
    }
    temp_f0 = func_001E52B0(0);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xB9C);
    if (*(s8 *)((u8 *)temp_s4 + 0x15) != temp_v1) {
        *(s8 *)((u8 *)temp_s4 + 0x15) = (s8) temp_v1;
        *(s32 *)((u8 *)temp_s4 + 0xC) = (s32) *(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 4)) + 8) + (*(s8 *)((u8 *)temp_s4 + 0x15) * 4));
    }
    temp_v0 = *(s32 *)((u8 *)temp_s5 + 0x17A0);
    if (temp_v0 != 0) {
        var_v0 = (unsigned char *)(temp_v0 + 0x20);
    } else {
        var_v0 = NULL;
    }
    if (*(s8 *)((u8 *)temp_s4 + 0x42) != -1) {
        *(f32 *)((u8 *)temp_s4 + 0x4C) = (f32) (*(f32 *)((u8 *)temp_s4 + 0x4C) + *(f32 *)((u8 *)temp_s6 + 0x88F0));
    }
    temp_f3 = *(f32 *)((u8 *)temp_s4 + 0x18);
    if (!(temp_f3 <= 0.0f)) {
        temp_f1_2 = temp_f3 - *(f32 *)((u8 *)temp_s6 + 0x88F0);
        *(f32 *)((u8 *)temp_s4 + 0x18) = temp_f1_2;
        if (temp_f1_2 <= 0.0f) {
            *(f32 *)((u8 *)temp_s4 + 0x18) = 0.0f;
            temp_a0 = *(s8 *)((u8 *)temp_s4 + 0x17);
            if (*(s8 *)((u8 *)temp_s4 + 0x16) < temp_a0) {
                *(s8 *)((u8 *)temp_s4 + 0x17) = (s8) (temp_a0 - 1);
            }
            if (*(s8 *)((u8 *)temp_s4 + 0x16) < *(s8 *)((u8 *)temp_s4 + 0x17)) {
                *(f32 *)((u8 *)temp_s4 + 0x18) = 600.0f;
            }
            *(u8 **)((u8 *)temp_s4 + 8) = (u8 *) *(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 4)) + 0x10) + (*(s8 *)((u8 *)temp_s4 + 0x17) * 4));
            temp_a0_2 = *(u8 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 8)) + 0x11E);
            if (*(s16 *)((u8 *)temp_s4 + 0x22) < (s32) temp_a0_2) {
                *(s16 *)((u8 *)temp_s4 + 0x22) = (s16) temp_a0_2;
            }
        }
    }
    temp_a0_3 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if (*(s8 *)((u8 *)temp_s4 + 0x34) != temp_a0_3) {
        if (temp_a0_3 != 0xE) {
            if ((temp_a0_3 >= 0x10) && (temp_a0_3 < 0x34)) {
                goto block_41;
            }
        } else {
block_41:
            *(f32 *)((u8 *)temp_s4 + 0x28) = 0.0f;
            *(s32 *)((u8 *)temp_s4 + 0x2C) = 0;
            *(s32 *)((u8 *)temp_s4 + 0x30) = 0;
            *(s16 *)((u8 *)temp_s4 + 0x1C) = -1;
            *(s8 *)((u8 *)temp_s4 + 0x36) = 0;
            *(s8 *)((u8 *)temp_s4 + 0x37) = 0;
            *(s8 *)((u8 *)temp_s4 + 0x38) = 0;
            *(s16 *)((u8 *)temp_s4 + 0x3A) = -1;
            *(s32 *)((u8 *)temp_s4 + 0x48) = 0;
            *(s8 *)((u8 *)temp_s4 + 0x42) = -1;
            *(f32 *)((u8 *)temp_s4 + 0x4C) = 0.0f;
        }
    }
    temp_a0_4 = *(s16 *)((u8 *)temp_s4 + 0x1C);
    if ((temp_a0_4 < 3) && (temp_a0_4 != 1) && (*(s8 *)((u8 *)temp_s3 + 0x39) != 0)) {
        *(f32 *)((u8 *)temp_s4 + 0x28) = 0.0f;
        *(s16 *)((u8 *)temp_s4 + 0x1C) = -1;
        *(s16 *)((u8 *)temp_s4 + 0x3A) = -1;
    }
    temp_s1 = *(s8 *)((u8 *)temp_s4 + 0x34);
    *(s8 *)((u8 *)temp_s4 + 0x34) = (s8) *(s16 *)((u8 *)arg0 + 0xCAC);
    if (*(s16 *)((u8 *)arg0 + 0xCAC) != 0xF) {
        *(s16 *)((u8 *)temp_s4 + 0x3A) = -1;
        *(s8 *)((u8 *)temp_s4 + 0x38) = 0;
    }
    if ((*(s16 *)((u8 *)arg0 + 0xCAC) == 9) && !(*(f32 *)((u8 *)temp_s4 + 0x28) < 5.0f)) {
        temp_a0_5 = *(s16 *)((u8 *)temp_s5 + 0xCAC);
        switch (temp_a0_5) {                        /* switch 1; irregular */
        case 15:                                    /* switch 1 */
            if ((var_v0 != NULL) && !(*(s32 *)((u8 *)var_v0 + 0) & 0x10) && ((f32) (*(s16 *)((u8 *)var_v0 + 0xA) + 0x14) < temp_f0)) {
                temp_hi = (u32) (func_0012EAE0(0x20, 9) / 10) % 5U;
                if ((s32) temp_hi >= 0) {
                    var_f0_2 = (f32) temp_hi;
                } else {
                    var_f0_2 = 2.0f * (f32) ((temp_hi >> 1) | (temp_hi & 1));
                }
block_73:
                *(f32 *)((u8 *)temp_s4 + 0x28) = var_f0_2;
            }
            break;
        case 8:                                     /* switch 1 */
        case 7:                                     /* switch 1 */
            temp_hi_2 = (u32) (func_0012EAE0(0x20, 9) / 10) % 5U;
            if ((s32) temp_hi_2 >= 0) {
                var_f0_2 = (f32) temp_hi_2;
            } else {
                var_f0_2 = 2.0f * (f32) ((temp_hi_2 >> 1) | (temp_hi_2 & 1));
            }
            goto block_73;
        case 5:                                     /* switch 1 */
            if (temp_f0 < 40.0f) {
            case 9:                                 /* switch 1 */
                temp_hi_3 = (u32) (func_0012EAE0(0x20, 9) / 10) % 5U;
                if ((s32) temp_hi_3 >= 0) {
                    var_f0_2 = (f32) temp_hi_3;
                } else {
                    var_f0_2 = 2.0f * (f32) ((temp_hi_3 >> 1) | (temp_hi_3 & 1));
                }
                goto block_73;
            }
            break;
        }
    }
    if (*(s8 *)((u8 *)temp_s4 + 0x35) != 0) {
        temp_v0_2 = *(s16 *)((u8 *)arg0 + 0xCAC);
        if ((temp_v0_2 != 0x1B) && (temp_v0_2 != 0x1D)) {
            temp_a0_6 = *(s16 *)((u8 *)temp_s4 + 0x22);
            temp_a0_7 = ((temp_a0_6 - 0xF) / 5) + ((u32) (temp_a0_6 - 0xF) >> 0x1F);
            temp_a0_8 = temp_a0_7 * (temp_a0_7 + 1);
            var_v1 = temp_a0_8 >> 1;
            if (temp_a0_8 < 0) {
                var_v1 = (s32) (temp_a0_8 + 1) >> 1;
            }
            var_a1 = (s16) *(s16 *)((u8 *)arg0 + 0x1A38) / (s32) (var_v1 + 0xC);
            if (var_a1 >= 0x15) {
                var_a1 = 0x14;
            }
            if (temp_v0_2 != 0x1C) {
                if (temp_v0_2 == 0x1E) {
                    goto block_84;
                }
                temp_a0_9 = *(u8 *)((u8 *)temp_s2 + 0x11F);
                temp_v1_2 = 0x18 - var_a1;
                var_v0_2 = ((temp_a0_9 * temp_v1_2) / 40) + ((u32) (temp_a0_9 * temp_v1_2) >> 0x1F);
                if (var_v0_2 < 2) {
                    var_v0_2 = 2;
                }
                *(s16 *)((u8 *)temp_s4 + 0x22) = (s16) (*(s16 *)((u8 *)temp_s4 + 0x22) - ((s64) (var_v0_2 << 0x30) >> 0x30));
                if (*(s16 *)((u8 *)temp_s4 + 0x22) < 0x1E) {
                    *(s16 *)((u8 *)temp_s4 + 0x22) = 0x1E;
                }
                temp_v1_3 = *(u8 *)((u8 *)temp_s2 + 0x11E);
                if (*(s16 *)((u8 *)temp_s4 + 0x22) < (s32) temp_v1_3) {
                    *(s16 *)((u8 *)temp_s4 + 0x22) = (s16) temp_v1_3;
                }
            } else {
block_84:
                temp_a0_10 = *(u8 *)((u8 *)temp_s2 + 0x11F);
                temp_v1_4 = 0x18 - var_a1;
                var_v0_3 = ((temp_a0_10 * temp_v1_4) / 20) + ((u32) (temp_a0_10 * temp_v1_4) >> 0x1F);
                if (var_v0_3 < 4) {
                    var_v0_3 = 4;
                }
                *(s16 *)((u8 *)temp_s4 + 0x22) = (s16) (*(s16 *)((u8 *)temp_s4 + 0x22) + ((s64) (var_v0_3 << 0x30) >> 0x30));
            }
            *(s8 *)((u8 *)temp_s4 + 0x35) = 0;
        }
    }
    temp_v1_5 = *(s16 *)((u8 *)arg0 + 0xCAC);
    switch (temp_v1_5) {                            /* switch 2; irregular */
    case 26:                                        /* switch 2 */
    case 0:                                         /* switch 2 */
        break;
    case 1:                                         /* switch 2 */
        *(f32 *)((u8 *)temp_s4 + 0x50) = (f32) (*(f32 *)((u8 *)temp_s4 + 0x50) + *(f32 *)((u8 *)temp_s6 + 0x88F0));
        break;
    default:                                        /* switch 2 */
        *(f32 *)((u8 *)temp_s4 + 0x50) = 0.0f;
        break;
    }
    if (!(*(f32 *)((u8 *)arg0 + 0x1848) < 0.0f)) {
        *(s16 *)((u8 *)temp_s4 + 0x5A) = (s16) (*(s16 *)((u8 *)temp_s4 + 0x5A) + 1);
    }
    if (*(s8 *)((u8 *)temp_s4 + 0x36) == 0) {
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x1848);
        if (!(temp_f2 <= 0.0f) && !((*(f32 *)((u8 *)arg0 + 0xCB8) - temp_f2) < 10.0f)) {
            *(s8 *)((u8 *)temp_s4 + 0x36) = 1;
        }
    } else {
        temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x1848);
        if (!((*(f32 *)((u8 *)arg0 + 0xCB8) - temp_f2_2) < 30.0f)) {
            temp_a0_11 = *(s16 *)((u8 *)temp_s4 + 0x58);
            if (temp_a0_11 >= -4) {
                *(s16 *)((u8 *)temp_s4 + 0x58) = (s16) (temp_a0_11 - 1);
            } else if (*(s16 *)((u8 *)arg0 + 0xCAC) != 0xF) {
                if (temp_a0_11 >= -4) {
                    *(s16 *)((u8 *)temp_s4 + 0x58) = (s16) (temp_a0_11 - 1);
                }
                *(s8 *)((u8 *)temp_s4 + 0x36) = 0;
            } else if (temp_f2_2 < 0.0f) {
                if (temp_a0_11 < 5) {
                    *(s16 *)((u8 *)temp_s4 + 0x58) = (s16) (temp_a0_11 + 1);
                }
                *(s8 *)((u8 *)temp_s4 + 0x36) = 0;
            }
        }
    }
    temp_a0_12 = *(s8 *)((u8 *)temp_s4 + 0x37);
    if (temp_a0_12 == 0) {
        if (*(s16 *)((u8 *)arg0 + 0xCAC) == 9) {
            *(s8 *)((u8 *)temp_s4 + 0x37) = 1;
        }
    } else {
        temp_v1_6 = *(s16 *)((u8 *)arg0 + 0xCAC);
        switch (temp_v1_6) {                        /* switch 3; irregular */
        case 9:                                     /* switch 3 */
            break;
        case 10:                                    /* switch 3 */
            if (((s64) ((s64) temp_a0_12 << 0x38) >> 0x38) < 2) {
                temp_v0_3 = *(s16 *)((u8 *)temp_s4 + 0x5C);
                if (temp_v0_3 < 7) {
                    *(s16 *)((u8 *)temp_s4 + 0x5C) = (s16) (temp_v0_3 + 1);
                }
                *(s8 *)((u8 *)temp_s4 + 0x37) = 2;
            }
            if ((*(s8 *)((u8 *)temp_s4 + 0x37) < 3) && !(*(f32 *)((u8 *)arg0 + 0xC58) <= 4.0f)) {
                *(s16 *)((u8 *)temp_s4 + 0x5C) = (s16) (*(s16 *)((u8 *)temp_s4 + 0x5C) - 2);
                if (*(s16 *)((u8 *)temp_s4 + 0x5C) < 0) {
                    *(s16 *)((u8 *)temp_s4 + 0x5C) = 0;
                }
                *(s8 *)((u8 *)temp_s4 + 0x37) = 3;
            }
            break;
        case 15:                                    /* switch 3 */
            if (((s64) ((s64) temp_a0_12 << 0x38) >> 0x38) < 2) {
                temp_v0_4 = *(s16 *)((u8 *)temp_s4 + 0x5C);
                if (temp_v0_4 > 0) {
                    *(s16 *)((u8 *)temp_s4 + 0x5C) = (s16) (temp_v0_4 - 1);
                }
            }
            *(s8 *)((u8 *)temp_s4 + 0x37) = 0;
            break;
        default:                                    /* switch 3 */
            *(s8 *)((u8 *)temp_s4 + 0x37) = 0;
            break;
        }
    }
    temp_v1_7 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if ((temp_v1_7 == 7) || (temp_v1_7 == 8)) {
        temp_f2_3 = *(f32 *)((u8 *)temp_s4 + 0x54);
        if (temp_f2_3 < 255.0f) {
            *(f32 *)((u8 *)temp_s4 + 0x54) = (f32) (temp_f2_3 + (2.0f * *(f32 *)((u8 *)temp_s6 + 0x88F0)));
        } else {
            *(f32 *)((u8 *)temp_s4 + 0x54) = 256.0f;
        }
    } else if (temp_v1_7 < 0xA) {
        temp_f1_3 = *(f32 *)((u8 *)temp_s4 + 0x54);
        if (!(temp_f1_3 <= 257.0f)) {
            if (temp_f1_3 < 1.0f) {
                *(f32 *)((u8 *)temp_s4 + 0x54) = 1.0f;
            }
        } else {
            *(f32 *)((u8 *)temp_s4 + 0x54) = 0.0f;
        }
    }
    if ((*(s16 *)((u8 *)arg0 + 0xCAC) == 0xF) && (*(s32 *)((u8 *)arg0 + 0xB70) != *(s16 *)((u8 *)temp_s4 + 0x3A)) && !(*(f32 *)((u8 *)arg0 + 0xC58) < 2.0f)) {
        *(s8 *)((u8 *)temp_s4 + 0x39) = 1;
        *(s16 *)((u8 *)temp_s4 + 0x3A) = (s16) *(s32 *)((u8 *)arg0 + 0xB70);
        *(s16 *)((u8 *)((*(s16 *)((u8 *)temp_s4 + 0x60) * 2) + temp_s4) + 0x62) = (s16) *(s16 *)((u8 *)temp_s4 + 0x3A);
        *(s16 *)((u8 *)temp_s4 + 0x60) = (s16) ((s32) (*(s16 *)((u8 *)temp_s4 + 0x60) + 1) % 32);
        temp_v1_8 = *(s16 *)((u8 *)temp_s4 + 0x5E);
        if (temp_v1_8 == *(s16 *)((u8 *)temp_s4 + 0x60)) {
            *(s16 *)((u8 *)temp_s4 + 0x5E) = (s16) ((s32) (temp_v1_8 + 1) % 32);
        }
        *(s8 *)((u8 *)temp_s4 + 0x38) = 0;
        temp_v0_5 = *(u8 **)((u8 *)arg0 + 0x17A0);
        temp_v1_9 = temp_v0_5 + 0x20;
        if (temp_v0_5 != NULL) {
            if ((temp_v1_9 != NULL) && (*(s32 *)((u8 *)temp_v0_5 + 0x20) & 2)) {
                *(s8 *)((u8 *)temp_s4 + 0x38) = 1;
            }
            temp_v0_6 = *(u8 *)((u8 *)temp_v1_9 + 0x1B);
            if ((s32) temp_v0_6 < 0xFF) {
                *(u8 *)((u8 *)temp_v1_9 + 0x1B) = (u8) (temp_v0_6 + 1);
            }
        }
        if (*(s16 *)((u8 *)temp_s3 + 0x1C) == 7) {
            *(s16 *)((u8 *)temp_s3 + 0x1C) = -1;
        }
        *(s16 *)((u8 *)temp_s4 + 0x5A) = 0;
        *(f32 *)((u8 *)temp_s4 + 0x4C) = 0.0f;
    } else {
        *(s8 *)((u8 *)temp_s4 + 0x39) = 0;
    }
    var_v0_4 = 1;
    if (var_f20 <= var_f21) {
        var_v0_4 = 0;
    }
    *(s8 *)((u8 *)temp_s4 + 0xA2) = var_v0_4;
    var_f20_2 = 1.0f;
    if (*(s8 *)((u8 *)arg0 + 0x1FD5) <= 0) {
        if (*(s8 *)((u8 *)temp_s5 + 0x1FD5) > 0) {
            goto block_174;
        }
    } else {
block_174:
        var_f20_2 = 1.0f * 2.0f;
    }
    if ((*(s8 *)((u8 *)arg0 + 0x1FD6) > 0) || (*(s8 *)((u8 *)temp_s5 + 0x1FD6) > 0)) {
        var_f20_2 *= 0.5f;
    }
    var_f1 = 300.0f * *(f32 *)((u8 *)arg0 + 0x1A20);
    if (!(var_f1 <= 1.0f)) {

    } else {
        var_f1 = 1.0f;
    }
    *(s8 *)((u8 *)temp_s4 + 0xA3) = M2C_BITWISE(s8, (var_f22 / (var_f1 * var_f20_2)));
    var_f0_3 = *(f32 *)((u8 *)arg0 + 0x1A20) * func_001D7DF0(arg0);
    if (!(var_f0_3 <= 1.0f)) {

    } else {
        var_f0_3 = 1.0f;
    }
    *(s8 *)((u8 *)temp_s4 + 0xA4) = M2C_BITWISE(s8, (var_f22 / (var_f0_3 * var_f20_2)));
    *(s16 *)((u8 *)temp_s4 + 0xA6) = func_001D99C0(arg0, 8);
    *(s16 *)((u8 *)temp_s4 + 0xA8) = func_001D99C0(arg0, 9);
    temp_f1_4 = *(f32 *)((u8 *)temp_s4 + 0xAC);
    if (!(temp_f1_4 <= 0.0f)) {
        *(f32 *)((u8 *)temp_s4 + 0xAC) = (f32) (temp_f1_4 - *(f32 *)((u8 *)temp_s6 + 0x88F0));
    }
    if ((*(s16 *)((u8 *)arg0 + 0xCAC) == 0x27) && (temp_s1 != 0x27) && (*(s8 *)((u8 *)temp_s4 + 0xAA) == 0)) {
        *(s8 *)((u8 *)temp_s4 + 0xAA) = 1;
        *(s32 *)((u8 *)temp_s4 + 0xB0) = 0xBF800000;
    } else {
        *(s8 *)((u8 *)temp_s4 + 0xAA) = 0;
    }
    temp_a0_13 = *(s32 *)((u8 *)arg0 + 0xBA4);
    if (*(s16 *)((u8 *)temp_s4 + 0xBC) != temp_a0_13) {
        *(s16 *)((u8 *)temp_s4 + 0xBC) = (s16) temp_a0_13;
        temp_a1 = *(s32 *)((u8 *)arg0 + 0xBA4);
        temp_a3 = temp_a1 + 1;
        temp_s1_2 = *(s32 *)((u8 *)arg0 + 0x1CF8) + 0xD4;
        if (temp_a3 < 8) {
            temp_a2_2 = (unsigned char *)((temp_a1 * 0x14) + temp_s1_2);
            temp_a1_2 = *(s8 *)((u8 *)temp_a2_2 + 6);
            if ((temp_a1_2 != 6) && (temp_a1_2 != 7) && (temp_a1_2 != 4)) {
                temp_v1_10 = *(s8 *)((u8 *)temp_a2_2 + 0x1A);
                if ((temp_v1_10 != 0) && (temp_v1_10 != 4)) {
                    temp_s1_3 = (short *)(temp_s1_2 + (temp_a3 * 0x14));
                    if (func_001DFA90(arg0, *temp_s1_3, temp_a2_2, temp_a3) > 0) {
                        *(s16 *)((u8 *)temp_s4 + 0xBE) = (s16) (*(u8 *)((u8 *)(&D_004E0660 + (*temp_s1_3 * 0x28)) + 0xF) * 0x64);
                    }
                }
            }
        }
    }
    *(s8 *)((u8 *)temp_s4 + 0xB5) = (s8) *(s8 *)((u8 *)arg0 + 0x2010);
}
