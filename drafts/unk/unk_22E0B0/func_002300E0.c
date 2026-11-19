/* Draft (not built): func_002300E0 at 0x002300E0, size 0x15F0, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 769 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C20, original 0x15F0
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_002300E0.s */

// src/unk/unk_22E0B0.c func_002300E0 size diff=769/1800
s32 func_0012EAE0(s32, void *, s16);
s32 func_001D7BC0(void *);
f32 func_001D7DF0(void *);
s32 func_001DBFC0(void *);
s32 func_001DF8F0(s32, s32);
s32 func_001DFA90(void *, s32);
s32 func_001E3D60(s32, s32, s32 *, s32);
f32 func_001E52B0(s32);
s32 func_002CC450();
extern s32 D_0044FAB0;
extern s32 D_0044FB10;
extern f32 D_0046FE30;
extern s32 D_004E0660;
extern s32 D_0058BBB0;
extern void *gBattle;
s16 func_002300E0(u8 *arg0) {
    u8 sp[0x400];
    s32 saved_reg_s0;
    u16 *spB0;
    s32 spC0;
    s32 spD0;
    s32 spEC;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    s32 sp130;
    s32 sp140;
    s32 sp150;
    s32 sp160;
    s32 sp170;
    s32 sp18C;
    u8 *sp190;
    u8 *sp1A0;
    u8 *sp1B0;
    u8 *sp1C0;
    u8 *sp1D0;
    u16 sp1E0;
    s32 sp22C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f20;
    f32 var_f21;
    f32 var_f21_2;
    f32 var_f21_3;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    f32 var_f3_2;
    s16 *var_a1_2;
    s16 *var_a1_4;
    s16 temp_a0_2;
    s16 temp_a0_6;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_4;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 var_a2_2;
    s16 var_s0;
    s16 var_s0_2;
    s16 var_v1_2;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_v0_13;
    s32 temp_v0_8;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a1_3;
    s32 var_a2_3;
    s32 var_a2_4;
    s64 var_s1;
    s8 var_v0;
    u16 var_s6;
    u32 temp_hi;
    u32 var_v1;
    u8 temp_a0_3;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_14;
    u8 temp_v1_2;
    u8 var_a2;
    u8 **var_a0;
    u8 *temp_a0_5;
    u8 *temp_a1_2;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_5;
    u8 *temp_v0_7;
    u8 *temp_v0_9;
    u8 *temp_v1_5;
    u8 *temp_v1_8;
    u8 *var_a3;
    u8 *var_fp;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;
    u8 *var_s7;
    s16 phi_s0;

    var_s0_2 = saved_reg_s0;
    var_s4 = arg0;
    sp1D0 = gBattle;
    temp_v0_2 = ((u8 *)gBattle) + (*(s8 *)((u8 *)arg0 + 6) * 0x2020);
    var_s5 = *(u8 **)((u8 *)temp_v0_2 + 0x1B84);
    var_s3 = temp_v0_2 + 0x830;
    temp_a1 = *(s32 *)((u8 *)var_s5 + 0x1350);
    var_fp = (unsigned char *)(&D_0058BBB0 + (*(s32 *)((u8 *)temp_v0_2 + 0x1B80) * 0xC0));
    var_s7 = *(u8 **)((u8 *)var_fp + 8);
    sp1B0 = *(u8 **)((u8 *)var_fp + 0xC);
    temp_v0_3 = (unsigned char *)(&D_0058BBB0 + (temp_a1 * 0xC0));
    sp1C0 = temp_v0_3;
    sp1A0 = *(u8 **)((u8 *)temp_v0_3 + 0xC);
    sp18C = func_001E3D60(*(s32 *)((u8 *)var_s5 + 0x17AC), temp_a1, &D_0058BBB0, 0x43340000);
    phi_s0 = saved_reg_s0;
    if ((*(s16 *)((u8 *)var_fp + 0x1C) == 5) && ((temp_f3 = *(f32 *)((u8 *)var_fp + 0x2C), !(temp_f3 <= 0.0f)) || !(*(f32 *)((u8 *)var_fp + 0x30) <= 0.0f))) {
        if (!(temp_f3 <= 0.0f)) {
            temp_f0 = *(f32 *)((u8 *)var_fp + 0x2C) - *(f32 *)((u8 *)sp1D0 + 0x88F0);
            *(f32 *)((u8 *)var_fp + 0x2C) = temp_f0;
            if (!(temp_f0 <= 0.0f)) {
                return -1;
            }
            var_s0 = *(s16 *)((u8 *)var_fp + 0x20);
            *(f32 *)((u8 *)var_fp + 0x2C) = 0.0f;
            phi_s0 = var_s0;
            goto block_7;
        }
block_7:
        temp_f2 = *(f32 *)((u8 *)var_fp + 0x30);
        if (!(temp_f2 <= 0.0f)) {
            if (sp18C != 0) {
                var_f2 = temp_f2 + ((f32) *(s8 *)((u8 *)sp1A0 + 0xA) / 16.0f);
            } else {
                var_f2 = temp_f2 + ((f32) *(s8 *)((u8 *)sp1A0 + 9) / 16.0f);
            }
            if (!((*(f32 *)((u8 *)var_s5 + 0x654) - *(f32 *)((u8 *)var_s3 + 0x654)) <= (var_f2 - (*(f32 *)((u8 *)var_s5 + 0xD4) * D_0046FE30)))) {
                return -1;
            }
            var_s0 = *(s16 *)((u8 *)var_fp + 0x20);
            *(f32 *)((u8 *)var_fp + 0x30) = 0.0f;
            phi_s0 = var_s0;
            goto block_16;
        }
block_16:
        var_s0 = *(*(s16 **)((u8 *)var_s4 + 0x10) + (phi_s0 * 2));
        if ((var_s0 < 0) || (var_s0 >= *(s16 *)((u8 *)var_s4 + 2))) {
            var_s0 = -2;
        }
        return var_s0;
    }
    temp_v0_4 = *(s16 *)((u8 *)var_s5 + 0xCAC);
    var_f20 = func_001E52B0(0);
    sp170 = (s32) temp_v0_4;
    sp160 = (s32) *(&D_0044FAB0 + temp_v0_4);
    if (*(u8 *)((u8 *)var_s4 + 7) == 0) {
        temp_v1 = *(s16 *)((u8 *)var_s3 + 0xCAC);
        if (temp_v1 != 0x1A) {
            if (temp_v1 == 0x19) {
                goto block_24;
            }
            goto block_38;
        }
block_24:
        if ((var_f20 < (f32) *(s16 *)((u8 *)sp1B0 + 0)) && (*(s16 *)((u8 *)var_fp + 0x1C) != 7)) {
            temp_v0_5 = *(u8 **)((u8 *)var_s5 + 0x17A0);
            if (temp_v0_5 != NULL) {
                var_a2 = *(u8 *)((u8 *)temp_v0_5 + 0x2C);
                if (var_a2 == 0) {
                    var_a2 = 0x32;
                    if (*(s16 *)((u8 *)temp_v0_5 + 0xE) != 0) {

                    } else {
                        var_a2 = 0x64;
                    }
                }
                temp_v1_2 = *(u8 *)((u8 *)var_s7 + 0xD8);
                var_s0 = ((var_a2 * temp_v1_2) / 100) + ((u32) (var_a2 * temp_v1_2) >> 0x1F);
                if (func_0022E9D0(var_s5, &sp22C, var_a2) != 0) {
                    if ((u32) ((u32) (func_0012EAE0(0x20, 0, 0) / 10) % 100U) < (u32) var_s0) {
                        *(s16 *)((u8 *)var_fp + 0x1C) = 5;
                    } else {
                        *(s16 *)((u8 *)var_fp + 0x1C) = 7;
                    }
                    goto block_38;
                }
                return -1;
            }
        }
block_38:
        temp_v1_3 = *(s16 *)((u8 *)var_fp + 0x1C);
        if ((temp_v1_3 != 5) && (temp_v1_3 != 6)) {
            return -2;
        }
        goto block_58;
    }
    temp_v1_4 = *(s16 *)((u8 *)var_s4 + 0);
    var_a2_2 = 0;
    var_a1 = 0;
    if (temp_v1_4 > 0) {
        var_a0 = *(u8 ***)((u8 *)var_s4 + 8);
        do {
            temp_v0_6 = *(s16 *)((u8 *)(*var_a0) + 4);
            if (var_a2_2 < temp_v0_6) {
                var_a2_2 = temp_v0_6;
            }
            var_a1 += 1;
            var_a0 += 4;
        } while (var_a1 < temp_v1_4);
    }
    if (*(s32 *)((u8 *)var_s3 + 0xC58) < var_a2_2) {
        return -1;
    }
    switch (sp160) {                                /* irregular */
    case 5:
        var_s0 = (s16) *(u8 *)((u8 *)var_s7 + 0xED);
        break;
    case 6:
        var_s0 = (s16) *(u8 *)((u8 *)var_s7 + 0xEE);
        break;
    default:
        var_s0 = (s16) *(u8 *)((u8 *)var_s7 + 0xEC);
        break;
    }
    if ((u32) ((u32) (func_0012EAE0(0x20, (u8 *) var_a1, var_a2_2) / 10) % 100U) >= (u32) var_s0) {
        return -2;
    }
block_58:
    if (*(u8 *)((u8 *)var_s4 + 7) == 0) {
        temp_v0 = func_0022EB70(var_s4);
        if (temp_v0 != -2) {
            return temp_v0;
        }
    }
    if (*(s16 *)((u8 *)var_s3 + 0xCAC) == 9) {
        var_f20 -= 20.0f;
    }
    if (sp170 == 9) {
        var_f20 -= 20.0f;
    }
    if (var_f20 < 0.0f) {
        var_f20 = 0.0f;
    }
    sp150 = 0;
    if (sp170 != 0x10) {
        if (sp18C != 0) {
            goto block_70;
        }
    } else {
block_70:
        sp150 = 1;
    }
    if ((sp170 == 0xF) && (temp_v0_7 = *(u8 **)((u8 *)var_s5 + 0x17A0), var_s0 = (s16) (temp_v0_7 + 0x20), (temp_v0_7 != NULL))) {

    } else {
        var_s0 = 0;
    }
    sp140 = 0;
    if ((func_0022E9D0(var_s5, NULL) == 0) && (var_s0 != 0) && ((*(s32 *)var_s0 & 0x14) == 0x14)) {
        sp140 = 1;
    }
    *(s8 *)((u8 *)var_fp + 0xB4) = 0;
    *(s8 *)((u8 *)var_fp + 0xB8) = 0;
    sp130 = 0;
    sp120 = 0;
    sp100 = 0;
    sp110 = (s32) *(u16 *)((u8 *)var_s7 + 0x136) >> 5;
    if (*(s16 *)((u8 *)var_s4 + 2) > 0) {
        spC0 = 0;
        spB0 = &sp1E0;
        do {
            temp_v0_9 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)var_s4 + 0xC) + spC0));
            sp190 = temp_v0_9;
            var_s0 = (s16) *(s32 *)((u8 *)temp_v0_9 + 0x20);
            var_s2 = temp_v0_9 + 0x20;
            var_s6 = *(u16 *)((u8 *)temp_v0_9 + 0x24);
            var_s1 = 0x100;
            if (*(s32 *)((u8 *)temp_v0_9 + 8) & 0x800) {
                *(s8 *)((u8 *)var_fp + 0xB4) = 1;
            }
            if (*(s32 *)((u8 *)temp_v0_9 + 0x20) & 0x1000) {
                *(s8 *)((u8 *)var_fp + 0xB8) = 1;
            }
            spF0 = 0;
            spEC = 0;
            spD0 = 0;
            if (*(s32 *)((u8 *)sp190 + 8) & 2) {
                temp_v0_10 = *(s16 *)((u8 *)sp190 + 0x10);
                spF0 = (s32) temp_v0_10;
                spEC = func_001DFA90(var_s3, spF0);
                temp_v1_5 = (unsigned char *)(&D_004E0660 + (temp_v0_10 * 0x28));
                if (*(u8 *)((u8 *)temp_v1_5 + 0xB) & 2) {
                    spD0 = *(u8 *)((u8 *)temp_v1_5 + 0xF) * 0x64;
                }
            }
            var_a0_2 = *(s16 *)((u8 *)var_s2 + 0xA) + sp110;
            if (sp170 == 0x10) {
                var_a0_2 += *(s8 *)((u8 *)sp1A0 + 8);
            } else if (sp18C != 0) {
                var_a0_2 = M2C_BITWISE(s32, ((f32) var_a0_2 + 15.0f));
            }
            if (!(var_f20 < (f32) *(s16 *)((u8 *)var_s2 + 8))) {
                if (!(var_f20 <= (f32) var_a0_2)) {
                    goto block_97;
                }
                goto block_101;
            }
block_97:
            if (var_s0 & 4) {
                if (*(f32 *)((u8 *)var_s5 + 0x1848) <= 0.0f) {
                    goto block_100;
                }
block_101:
                if (sp160 == 7) {
                    if (!(var_s0 & 4) || (*(f32 *)((u8 *)var_s5 + 0x1848) <= 0.0f)) {
                        var_s1 = ((s32) ((*(u16 *)((u8 *)var_s2 + 6) - 0x100) * *(u16 *)((u8 *)var_s7 + 0x100)) >> 8) + 0x100;
                    }
                    var_v0 = *(s8 *)((u8 *)var_fp + 0x17);
                    if (var_v0 >= 0x10) {
                        var_v0 = 0xF;
                    }
                    temp_a0 = var_s1 * var_s6;
                    if (temp_a0 >= (s32) *(&D_0044FB10 + (var_v0 * 2))) {
                        var_s6 = (u16) (temp_a0 >> 8);
                        if (!(*(s32 *)((u8 *)temp_v0_9 + 0x20) & 0xA0)) {
                            var_s6 *= 4;
                        } else {
                            var_s6 = (u16) ((s32) var_s6 >> 2);
                        }
                    }
                }
                var_s1 = 0x100;
                if (!(*(f32 *)((u8 *)var_s3 + 0x1A40) <= 0.0f)) {
                    var_f3 = *(f32 *)((u8 *)var_s3 + 0x17D4);
                } else {
                    var_f3 = *(f32 *)((u8 *)var_s3 + 0x17D0);
                }
                temp_v0_11 = *(u8 *)((u8 *)var_s2 + 0xD);
                if ((s32) temp_v0_11 >= 0) {
                    var_f2_2 = (f32) temp_v0_11;
                } else {
                    var_f2_2 = 2.0f * (f32) ((temp_v0_11 >> 1) | (temp_v0_11 & 1));
                }
                if (var_f3 < ((1000.0f * var_f2_2) / 16.0f)) {
                    var_s1 = (s64) *(u16 *)((u8 *)var_s2 + 0xE) << 0x28;
                    goto block_128;
                }
                if (var_s0 & 0x08000000) {
                    temp_a0_2 = *(s16 *)((u8 *)var_s4 + 0);
                    var_a2_3 = 0;
                    if (temp_a0_2 > 0) {
                        var_a1_2 = *(s16 **)((u8 *)var_s4 + 0x10);
loop_124:
                        if (sp100 != *var_a1_2) {
                            var_a2_3 += 1;
                            var_a1_2 += 2;
                            if (var_a2_3 < temp_a0_2) {
                                goto loop_124;
                            }
                        }
                    }
                    if (!(*(s16 *)(*(s32 *)((u8 *)var_s4 + 0x14) + (var_a2_3 * 2)) & 2)) {
                        var_s1 = (s64) *(u16 *)((u8 *)var_s2 + 0xE) << 0x28;
block_128:
                        var_s1 = var_s1 >> 0x28;
                    }
                }
                if (sp160 == 5) {
                    var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s2 + 0x10)) >> 8);
                }
                if ((sp160 == 2) || (sp160 == 4)) {
                    var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s2 + 0x12)) >> 8);
                }
                if (sp150 != 0) {
                    var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s2 + 0x14)) >> 8);
                }
                if ((*(s8 *)((u8 *)var_s5 + 0x1FF9) == 0) && (sp170 != 0x10)) {
                    temp_v1_6 = *(s32 *)((u8 *)var_s5 + 0xB9C);
                    if ((temp_v1_6 != 0x59) && (temp_v1_6 != 0x55) && (temp_v1_6 != 0x40) && (temp_v1_6 != 0x2B) && (temp_v1_6 != 0x2A) && (temp_v1_6 != 0xA) && (temp_v1_6 != 9) && (temp_v1_6 != 6) && (temp_v1_6 != 2) && (temp_v1_6 != 1)) {

                    } else {
                        var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s2 + 0x16)) >> 8);
                    }
                }
                if ((var_s0 & 0x40) && (*(s16 *)((u8 *)sp1D0 + 0x7E2) == 2)) {
                    var_s1 = (s64) ((s32) (var_s1 * 3) >> 1);
                }
                if ((var_s0 & 0x80000000) && !(*(f32 *)((u8 *)var_s3 + 0x17C0) <= *(f32 *)((u8 *)var_s5 + 0x17C0))) {
                    var_s1 = 0;
                }
                if ((var_s0 & 4) && (sp140 != 0)) {
                    var_s1 = 0;
                }
            } else {
block_100:
                var_s6 = 0;
            }
            if (sp170 == 0x10) {
                temp_a0_3 = *(u8 *)((u8 *)var_s2 + 0x1A);
                if ((s32) temp_a0_3 >= 0) {
                    var_f0 = (f32) temp_a0_3;
                } else {
                    var_f0 = 2.0f * (f32) ((temp_a0_3 >> 1) | (temp_a0_3 & 1));
                }
                if (var_f0 != 0.0f) {
                    if ((s32) temp_a0_3 >= 0) {
                        var_f0_2 = (f32) temp_a0_3;
                    } else {
                        var_f0_2 = 2.0f * (f32) ((temp_a0_3 >> 1) | (temp_a0_3 & 1));
                    }
                    temp_f3_2 = 0.1f * var_f0_2;
                    if (sp18C != 0) {
                        var_f3_2 = temp_f3_2 + ((f32) *(s8 *)((u8 *)sp1A0 + 0xA) / 16.0f);
                    } else {
                        var_f3_2 = temp_f3_2 + ((f32) *(s8 *)((u8 *)sp1A0 + 9) / 16.0f);
                    }
                    if ((*(f32 *)((u8 *)var_s5 + 0x654) - *(f32 *)((u8 *)var_s3 + 0x654)) < (var_f3_2 - (*(f32 *)((u8 *)var_s5 + 0xD4) * D_0046FE30))) {
                        var_s1 = 0;
                    }
                }
            }
            if ((var_s0 & 2) && (*(u8 *)((u8 *)var_s4 + 7) == 0)) {
                if (var_f20 < (f32) *(s16 *)((u8 *)sp1B0 + 0)) {
                    var_s6 = 0;
                } else if (var_f20 < (f32) *(s16 *)((u8 *)sp1B0 + 2)) {
                    var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xF0)) >> 8);
                } else if (!((*(f32 *)((u8 *)var_s3 + 0x17C0) - *(f32 *)((u8 *)var_s5 + 0x17C0)) <= (0.5f * *(f32 *)((u8 *)var_s3 + 0x17C4)))) {
                    var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xF4)) >> 8);
                } else {
                    var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xF2)) >> 8);
                }
            }
            if (var_s0 & 1) {
                if (func_001DBFC0(var_s5) == 0) {
                    var_s6 = 0;
                } else if (func_002CC450() & 0x100) {
                    var_s6 = 0;
                } else {
                    if (!(var_f20 < (f32) *(s16 *)((u8 *)var_s2 + 8))) {
                        if (!(var_f20 <= (f32) (*(s16 *)((u8 *)var_s2 + 0xA) - 5))) {
                            goto block_194;
                        }
                    } else {
block_194:
                        var_s6 = 0;
                    }
                    if (!(*(f32 *)((u8 *)var_s5 + 0x1848) <= 0.0f)) {
                        var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xF6)) >> 8);
                    }
                    if (sp170 == 1) {
                        var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xF8)) >> 8);
                    }
                    if (*(s16 *)((u8 *)var_fp + 0x1C) == 6) {
                        var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xFA)) >> 8);
                    }
                    if (!(*(f32 *)((u8 *)sp1C0 + 0x50) < 60.0f)) {
                        var_s1 = (s64) ((s32) (var_s1 * *(u16 *)((u8 *)var_s7 + 0xFC)) >> 8);
                    }
                    if ((*(s8 *)((u8 *)var_fp + 0xA4) <= 0) && (*(s8 *)((u8 *)sp1C0 + 0xA4) > 0)) {
                        var_s1 = (s64) ((s32) (var_s1 * 3) >> 1);
                    }
                }
            }
            if (var_s0 & 0x800) {
                if (!(*(f32 *)((u8 *)var_s3 + 0x1A40) <= 0.0f)) {
                    var_f21 = *(f32 *)((u8 *)var_s3 + 0x17D4);
                } else {
                    var_f21 = *(f32 *)((u8 *)var_s3 + 0x17D0);
                }
                if ((**(s16 **)((u8 *)var_s3 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f1 = 0.0f;
                } else {
                    var_f1 = (f32) (*(s8 *)((u8 *)(*(s32 *)((u8 *)var_s3 + 0x1CF8) + (*(s32 *)((u8 *)var_s3 + 0xBA4) * 0x14)) + 0xDD) * 0x3E8);
                }
                if (var_f21 <= (0.5f * var_f1)) {
                    var_s6 = 0;
                }
                if (!(*(f32 *)((u8 *)var_s3 + 0x1A40) <= 0.0f)) {
                    var_f21_2 = *(f32 *)((u8 *)var_s3 + 0x17D4);
                } else {
                    var_f21_2 = *(f32 *)((u8 *)var_s3 + 0x17D0);
                }
                if ((**(s16 **)((u8 *)var_s3 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f1_2 = 0.0f;
                } else {
                    var_f1_2 = (f32) (*(s8 *)((u8 *)(*(s32 *)((u8 *)var_s3 + 0x1CF8) + (*(s32 *)((u8 *)var_s3 + 0xBA4) * 0x14)) + 0xDD) * 0x3E8);
                }
                if (!(var_f21_2 < (1000.0f + var_f1_2))) {
                    var_s1 *= 4;
                }
            }
            if (var_s0 & 8) {
                var_s1 *= 0x10;
            }
            if (var_s0 & 0x20) {
                temp_v0_12 = *(u8 *)((u8 *)var_s7 + 0xEF);
                temp_v1_7 = temp_v0_12 + 0xA;
                if (temp_v0_12 != 0) {
                    var_s1 = ((var_s1 * temp_v1_7) / 10) + ((u32) (var_s1 * temp_v1_7) >> 0x1F);
                }
            }
            if (func_001D7BC0(var_s5) != 0) {
                if (var_s0 & 0x140) {
                    var_s1 *= 0x10;
                } else {
                    var_s1 = (s64) (var_s1 >> 2);
                }
            }
            if (var_s0 & 0x700) {
                var_s1 = (s64) ((s32) (var_s1 * 3) >> 1);
            }
            if (var_s0 & 0x60001000) {
                var_s1 *= 0x10;
            } else if (spF0 != 0) {
                if (*(s32 *)((u8 *)sp190 + 8) & 0x4000) {
                    var_s1 *= 2;
                } else {
                    if (!(*(f32 *)((u8 *)var_s3 + 0x1A40) <= 0.0f)) {
                        var_f21_3 = *(f32 *)((u8 *)var_s3 + 0x17D4);
                    } else {
                        var_f21_3 = *(f32 *)((u8 *)var_s3 + 0x17D0);
                    }
                    if ((var_f21_3 - ((f32) spD0 + func_001D7DF0(var_s3))) < 0.0f) {
                        var_s1 = (s64) (var_s1 >> 2);
                    }
                }
            }
            if (var_s0 & 0x10000000) {
                var_a3 = *(u8 **)((u8 *)var_s3 + 0x1AE0);
                if (var_a3 != NULL) {
                    var_a2_4 = 0;
                    var_a1_3 = 0;
                    var_f1_3 = 10000.0f;
loop_252:
                    temp_a0_4 = *(s32 *)((u8 *)var_a3 + 0x14);
                    if (temp_a0_4 & 2) {
                        var_a2_4 = 0;
                        var_a1_3 = 0;
                    } else {
                        if (!(temp_a0_4 & 1)) {
                            if (*(s32 *)((u8 *)var_a3 + 0x1C) == 1) {
                                var_a2_4 += 1;
                            } else {
                                var_a1_3 += 1;
                            }
                            temp_f0_2 = *(f32 *)((u8 *)var_a3 + 0x10);
                            if (!(var_f1_3 <= temp_f0_2)) {
                                var_f1_3 = temp_f0_2;
                            }
                        }
                        var_a3 = *(u8 **)((u8 *)var_a3 + 0x18);
                        if (var_a3 == NULL) {

                        } else {
                            goto loop_252;
                        }
                    }
                    if ((var_a1_3 + var_a2_4) > 0) {
                        if (var_a1_3 > 0) {
                            if (spEC >= 2) {
                                goto block_267;
                            }
                            goto block_269;
                        }
block_267:
                        if (var_f1_3 < 15.0f) {
                            var_s1 *= 0x10;
                        } else {
                            goto block_269;
                        }
                    } else {
block_269:
                        var_s1 = (s64) (var_s1 >> 2);
                    }
                }
            }
            temp_v0_13 = func_002CC450();
            if (temp_v0_13 & 0x1000) {
                var_s1 = 0x100;
                if (*(s32 *)((u8 *)temp_v0_9 + 0x20) & 4) {
                    var_s6 = (u16) 0x100;
                } else {
                    var_s1 = 0;
                    var_s6 = 0;
                }
            }
            if (temp_v0_13 & 0x4000) {
                if (((*(s32 *)((u8 *)temp_v0_9 + 0x20) & 0x14) == 0x14) && (var_s1 = 0x100, ((*(s32 *)((u8 *)sp190 + 8) & 0x4000) == 0))) {
                    var_s6 = (u16) 0x100;
                } else {
                    var_s1 = 0;
                    var_s6 = 0;
                }
            }
            if ((temp_v0_13 & 0x100) && (*(s32 *)((u8 *)temp_v0_9 + 0x20) & 1)) {
                var_s6 = 0;
            }
            var_a0_3 = (s32) (var_s6 * var_s1) >> 8;
            if (var_s6 != 0) {
                var_a0_3 = ((s32) ((var_a0_3 - 0x100) * *(u16 *)((u8 *)var_s7 + 0xFE)) >> 8) + 0x100;
            }
            *spB0 = (u16) ((s32) (var_a0_3 * 0x64) >> 8);
            sp130 += *spB0;
            if (sp120 >= 0) {
                if (var_a0_3 >= 0x100) {
                    sp120 = -1;
                } else if (var_a0_3 != 0) {
                    sp120 += 1;
                }
            }
            spC0 += 4;
            spB0 += 2;
            temp_v0_8 = sp100 + 1;
            sp100 = temp_v0_8;
        } while (temp_v0_8 < *(s16 *)((u8 *)var_s4 + 2));
    }
    if (sp130 != 0) {
        if ((sp120 > 0) && ((sp130 / sp120) < 0x64)) {
            temp_v1_8 = (sp100 * 2) + sp;
            *(u16 *)((u8 *)temp_v1_8 + 0x1E0) = (u16) (sp120 * 0xA);
            sp130 += *(u16 *)((u8 *)temp_v1_8 + 0x1E0);
        }
        var_s1 = -1;
        var_v1 = (u32) (func_0012EAE0(0x20, 0, 0) / 10) % (u32) sp130;
        do {
            var_s1 += 1;
            var_v1 -= *(u16 *)((u8 *)((var_s1 * 2) + sp) + 0x1E0);
        } while ((s32) var_v1 >= 0);
        *(f32 *)((u8 *)var_fp + 0x2C) = 0.0f;
        *(f32 *)((u8 *)var_fp + 0x30) = 0.0f;
        if (var_s1 == sp100) {
            var_s1 = -2;
        } else {
            temp_a0_5 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)var_s4 + 0xC) + (var_s1 * 4)));
            temp_a1_2 = temp_a0_5 + 0x20;
            if (sp170 == 0x10) {
                temp_v0_14 = *(u8 *)((u8 *)temp_a1_2 + 0x1A);
                if ((s32) temp_v0_14 >= 0) {
                    var_f1_4 = (f32) temp_v0_14;
                } else {
                    var_f1_4 = 2.0f * (f32) ((temp_v0_14 >> 1) | (temp_v0_14 & 1));
                }
                *(f32 *)((u8 *)var_fp + 0x30) = (f32) (0.1f * var_f1_4);
                *(s16 *)((u8 *)var_fp + 0x1E) = 2;
            } else if ((sp170 < 0x10) || (sp170 == 0x13) || (sp170 == 0x1A) || ((s32) *(u16 *)((u8 *)temp_a1_2 + 4) < 0x80)) {
                var_s0 = *(s16 *)((u8 *)temp_a0_5 + 6) - *(s32 *)((u8 *)var_s3 + 0xC58);
                if (var_s0 > 0) {
                    temp_hi = (u32) (func_0012EAE0(0x20, temp_a1_2, 0) / 10) % (u32) var_s0;
                    if ((s32) temp_hi >= 0) {
                        var_f1_5 = (f32) temp_hi;
                    } else {
                        var_f1_5 = 2.0f * (f32) ((temp_hi >> 1) | (temp_hi & 1));
                    }
                    *(f32 *)((u8 *)var_fp + 0x2C) = var_f1_5;
                    if (var_f1_5 < 15.0f) {
                        *(f32 *)((u8 *)var_fp + 0x2C) = 0.0f;
                    }
                } else {
                    *(f32 *)((u8 *)var_fp + 0x2C) = 0.0f;
                }
            }
        }
    } else {
        *(f32 *)((u8 *)var_fp + 0x2C) = 0.0f;
        *(f32 *)((u8 *)var_fp + 0x30) = 0.0f;
        var_s1 = -2;
    }
    if ((var_s1 != -2) && (var_s1 != -1)) {
        *(s16 *)((u8 *)var_fp + 0x1C) = 5;
        temp_a0_6 = *(s16 *)((u8 *)var_s4 + 0);
        var_v1_2 = 0;
        if (temp_a0_6 > 0) {
            var_a1_4 = *(s16 **)((u8 *)var_s4 + 0x10);
loop_323:
            if (var_s1 == *var_a1_4) {
                *(s16 *)((u8 *)var_fp + 0x20) = var_v1_2;
            } else {
                var_v1_2 += 1;
                var_a1_4 += 2;
                if (var_v1_2 < temp_a0_6) {
                    goto loop_323;
                }
            }
        }
        if (!(*(f32 *)((u8 *)var_fp + 0x2C) <= 0.0f) || !(*(f32 *)((u8 *)var_fp + 0x30) <= 0.0f)) {
            *(f32 *)((u8 *)var_fp + 0x2C) = 0.0f;
            var_s1 = -1;
        }
    }
    return (s16) var_s1;
}
