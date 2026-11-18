/* Draft (not built): func_0022EB70 at 0x0022EB70, size 0x9A4, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 364 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x9F4, original 0x9A4
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022EB70.s */

// src/unk/unk_22E0B0.c func_0022EB70 size diff=364/637
s32 BtlChara_Reset(s32, f32);
s32 *amPkt_Alloc(s32);
s32 func_0012EAE0(s32);
s32 func_001E3D60(s32, s32, s32);
f32 func_001E52B0(s32);
extern s32 D_0044FAB0;
extern s32 D_0044FB30;
extern f32 D_0046FE30;
extern s32 D_0058BBB0;
extern void *gBattle;
s32 func_0022EB70(u8 *arg0) {
    u32 spB0;
    u8 *spC0;
    s32 spD0;
    s32 spE0;
    s32 *spF0;
    s32 *sp100;
    s32 sp110;
    u8 *sp120;
    u8 *sp130;
    u8 *sp148;
    s8 *sp14C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    f32 var_f21;
    f32 var_f21_2;
    f32 var_f22;
    f32 var_f22_2;
    s32 *temp_v0_3;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a3;
    s32 var_s5;
    s32 var_t6;
    s32 var_v0;
    s32 var_v1;
    s8 *var_a1;
    s8 *var_a1_3;
    s8 *var_s0;
    s8 temp_t7;
    s8 temp_v0_5;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 var_a0_2;
    s8 var_a2;
    u32 var_v1_2;
    u8 *temp_v0_4;
    u8 *var_a1_2;
    u8 *var_s1;
    u8 temp_v1;
    u8 var_s1_2;
    u8 var_s6;
    u8 *temp_fp;
    u8 *temp_s0;
    u8 *temp_s4;
    u8 *temp_s7;
    u8 *temp_v0;
    u8 *temp_v0_2;

    sp148 = arg0;
    temp_v0 = ((u8 *)gBattle) + (*(s8 *)((u8 *)arg0 + 6) * 0x2020);
    temp_s7 = *(u8 **)((u8 *)temp_v0 + 0x1B84);
    temp_s4 = temp_v0 + 0x830;
    temp_a1 = *(s32 *)((u8 *)temp_v0 + 0x1B80);
    temp_v0_2 = (u8 *)(&D_0058BBB0 + (temp_a1 * 0xC0));
    sp130 = temp_v0_2;
    temp_s0 = *(u8 **)((u8 *)temp_v0_2 + 8);
    temp_fp = *(u8 **)((u8 *)temp_v0_2 + 0xC);
    var_s1 = *(u8 **)((u8 *)temp_v0_2 + 0x10);
    sp120 = *(u8 **)((u8 *)(&D_0058BBB0 + (*(s32 *)((u8 *)temp_s7 + 0x1350) * 0xC0)) + 0xC);
    if (var_s1 != NULL) {
        if (*var_s1 == 0) {
            goto block_3;
        }
        sp110 = (s32) *(s16 *)((u8 *)temp_s7 + 0xCAC);
        var_s6 = *(u8 *)((u8 *)temp_s0 + 0x104);
        temp_s3 = func_001E3D60(*(s32 *)((u8 *)temp_s7 + 0x17AC), temp_a1, 0x43340000);
        temp_f1 = *(f32 *)((u8 *)temp_s4 + 0x1A40);
        temp_s2 = func_001E3D60(*(s32 *)((u8 *)temp_s4 + 0x17AC), 0x43340000, 0);
        var_s5 = 0;
        if (!(temp_f1 <= 0.0f)) {
            var_f20 = *(f32 *)((u8 *)temp_s4 + 0x17D4);
        } else {
            var_f20 = *(f32 *)((u8 *)temp_s4 + 0x17D0);
        }
        if (*(s8 *)((u8 *)temp_s4 + 0x2010) != 0) {
            if (!(temp_f1 <= 0.0f)) {
                var_f0 = *(f32 *)((u8 *)temp_s4 + 0x17D4);
            } else {
                var_f0 = *(f32 *)((u8 *)temp_s4 + 0x17E0);
            }
            if (!(var_f20 <= var_f0)) {

            } else if (!(temp_f1 <= 0.0f)) {
                var_f20 = *(f32 *)((u8 *)temp_s4 + 0x17D4);
            } else {
                var_f20 = *(f32 *)((u8 *)temp_s4 + 0x17E0);
            }
        }
        if (sp110 == 0x10) {
            var_s6 = *(u8 *)((u8 *)temp_s0 + 0x106);
        } else if (temp_s3 != 0) {
            var_s6 = *(u8 *)((u8 *)temp_s0 + 0x105);
            var_s5 = 1;
        } else if ((*(&D_0044FAB0 + sp110) == 7) && (func_0022E9D0(temp_s7, 0) != 0)) {
            var_s6 = *(u8 *)((u8 *)temp_s0 + 0x107);
            var_s5 = 2;
        }
        if ((u32) ((u32) (func_0012EAE0(0x20) / 10) % 100U) >= var_s6) {
            return -2;
        }
        var_v1 = 0;
        if (*var_s1 != 0) {
            do {
                var_s1 += 8;
                var_v1 += 1;
            } while (*var_s1 != 0);
        }
        temp_v0_3 = amPkt_Alloc(var_v1 * 4);
        sp100 = temp_v0_3;
        temp_v0_4 = *(u8 **)((u8 *)sp130 + 0x10);
        spC0 = temp_v0_4;
        spF0 = temp_v0_3;
        spE0 = (s32) *(u8 *)((u8 *)temp_s0 + 0x102);
        spD0 = (s32) *(u8 *)((u8 *)temp_s0 + 0x103);
        spB0 = 0;
        if (*temp_v0_4 != 0) {
            do {
                *spF0 = 0;
                temp_v1 = *(u8 *)((u8 *)spC0 + 0);
                if (((s32) temp_v1 >= spE0) && (spD0 >= (s32) temp_v1)) {
                    var_s1_2 = *(u8 *)((u8 *)(&spC0[var_s5]) + 1);
                    var_s0 = *(s8 **)((u8 *)spC0 + 4);
loop_136:
                    temp_v1_2 = *var_s0;
                    if ((temp_v1_2 != 0x41) && (var_s1_2 != 0)) {
                        switch (temp_v1_2) {        /* switch 1; irregular */
                        case 0x23:                  /* switch 1 */
                            var_s0 += 1;
                            var_a3 = 1;
                            do {
                                temp_v0_5 = *var_s0;
                                switch (temp_v0_5) { /* switch 2; irregular */
                                case 0x47:          /* switch 2 */
                                    var_s0 += 1;
                                    if (*(s8 *)((u8 *)temp_s4 + 0x1FF9) != 0) {
                                        var_s1_2 = 0;
                                    }
                                    break;
                                case 0x41:          /* switch 2 */
                                    var_s0 += 1;
                                    if (*(s8 *)((u8 *)temp_s4 + 0x1FF9) == 0) {
                                        var_s1_2 = 0;
                                    }
                                    break;
                                case 0x46:          /* switch 2 */
                                    var_s0 += 1;
                                    if (temp_s2 != 0) {
                                        var_s1_2 = 0;
                                    }
                                    break;
                                case 0x42:          /* switch 2 */
                                    var_s0 += 1;
                                    if (temp_s2 == 0) {
                                        var_s1_2 = 0;
                                    }
                                    break;
                                case 0x2A:          /* switch 2 */
                                case 0x5F:          /* switch 2 */
                                    var_a3 = 0;
                                    break;
                                default:            /* switch 2 */
                                    var_s0 += 1;
                                    break;
                                }
                            } while (var_a3 != 0);
                            break;
                        case 0x2A:                  /* switch 1 */
                            var_s0 += 1;
                            var_v0 = -1;
                            var_t6 = 1;
                            do {
                                temp_t7 = *var_s0;
                                switch (temp_t7) {  /* switch 3; irregular */
                                case 0x4E:          /* switch 3 */
                                    if (var_s5 == 2) {
                                        var_s0 += 1;
                                        var_v0 = 1;
                                    } else {
                                    case 0x57:      /* switch 3 */
                                    case 0x44:      /* switch 3 */
                                    case 0x41:      /* switch 3 */
                                    case 0x47:      /* switch 3 */
                                    case 0x53:      /* switch 3 */
                                        if (var_v0 != 1) {
                                            var_v0 = 1;
                                            if (*(&D_0044FB30 + sp110) == temp_t7) {

                                            } else {
                                                var_v0 = 0;
                                            }
                                        }
                                        var_s0 += 1;
                                    }
                                    break;
                                case 0x46:          /* switch 3 */
                                    var_s0 += 1;
                                    if (temp_s3 != 0) {
                                        var_s1_2 = 0;
                                    }
                                    break;
                                case 0x42:          /* switch 3 */
                                    var_s0 += 1;
                                    if (temp_s3 == 0) {
                                        var_s1_2 = 0;
                                    }
                                    break;
                                case 0x23:          /* switch 3 */
                                case 0x5F:          /* switch 3 */
                                    var_t6 = 0;
                                    break;
                                default:            /* switch 3 */
                                    var_s0 += 1;
                                    break;
                                }
                            } while (var_t6 != 0);
                            if (var_v0 == 0) {
                                var_s1_2 = 0;
                            }
                            break;
                        case 0x4D:                  /* switch 1 */
                            var_s0 += 1;
                            var_a0 = 0;
loop_105:
                            temp_v1_3 = *var_s0;
                            if ((temp_v1_3 >= 0x30) && (temp_v1_3 < 0x3A)) {
                                var_s0 += 1;
                                if (*(s32 *)((u8 *)temp_s4 + 0xBA4) == (temp_v1_3 - 0x30)) {
                                    var_a0 = 1;
                                }
                                goto loop_105;
                            }
                            if (var_a0 == 0) {
                                var_s1_2 = 0;
                            }
                            break;
                        case 0x46:                  /* switch 1 */
                            var_s0 += 1;
                            var_f21 = 7000.0f;
                            var_f22 = 0.0f;
                            if (*var_s0 != 0x2D) {
                                temp_f0 = func_0022E7A0(var_s0, &sp14C);
                                var_s0 = sp14C;
                                var_f22 = 1000.0f * temp_f0;
                            }
                            if (*var_s0 != 0x2D) {
                                temp_f0_2 = 1000.0f * func_0022E7A0(var_s0 + 1, &sp14C);
                                if (!(temp_f0_2 < 0.0f)) {
                                    var_f21 = temp_f0_2;
                                }
                                var_s0 = sp14C;
                            }
                            if (!(var_f22 <= var_f20) || (var_f21 < var_f20)) {
                                var_s1_2 = 0;
                            }
                            break;
                        case 0x44:                  /* switch 1 */
                            var_f22_2 = 0.0f;
                            var_f21_2 = (f32) *(s8 *)((u8 *)sp120 + 8) + func_0022E7A0(var_s0 + 1, &sp14C);
                            if (*sp14C == 0x2D) {
                                var_f22_2 = var_f21_2;
                                var_f21_2 = (f32) *(s8 *)((u8 *)sp120 + 8) + func_0022E7A0(sp14C + 1, &sp14C);
                            }
                            temp_f0_3 = func_001E52B0(0);
                            if ((temp_f0_3 < var_f22_2) || !(temp_f0_3 <= var_f21_2)) {
                                var_s1_2 = 0;
                            }
                            var_s0 = sp14C;
                            break;
                        case 0x48:                  /* switch 1 */
                            if (sp110 != 0x10) {
                                var_s1_2 = 0;
                            } else {
                                temp_f0_4 = func_0022E7A0(var_s0 + 1, &sp14C);
                                var_s0 = sp14C;
                                if (temp_s3 != 0) {
                                    var_f1 = (f32) *(s8 *)((u8 *)temp_fp + 0xA) / 16.0f;
                                } else {
                                    var_f1 = (f32) *(s8 *)((u8 *)temp_fp + 9) / 16.0f;
                                }
                                if ((*(f32 *)((u8 *)temp_s7 + 0x654) - *(f32 *)((u8 *)temp_s4 + 0x654)) < ((temp_f0_4 + var_f1) - (*(f32 *)((u8 *)temp_s7 + 0xD4) * D_0046FE30))) {
                                    var_s1_2 = 0;
                                }
                            }
                            break;
                        case 0x53:                  /* switch 1 */
                            temp_f0_5 = func_0022E7A0(var_s0 + 1, &sp14C);
                            var_s0 = sp14C;
                            if (BtlChara_Reset(*(s32 *)((u8 *)temp_s4 + 0x1350), temp_f0_5) == 0) {
                                var_s1_2 = 0;
                            }
                            break;
                        default:                    /* switch 1 */
                            var_s0 += 1;
                            break;
                        }
                        goto loop_136;
                    }
                    *spF0 = (s32) var_s1_2;
                    spB0 += var_s1_2;
                }
                spC0 += 8;
                spF0 += 4;
            } while (*(u8 *)((u8 *)spC0 + 8) != 0);
        }
        if (spB0 == 0) {
            return -2;
        }
        var_a1_2 = *(u8 **)((u8 *)sp130 + 0x10);
        var_a0_2 = 0;
        var_v1_2 = (u32) (func_0012EAE0(0x20) / 10) % spB0;
loop_144:
        var_v1_2 -= *sp100;
        if ((s32) var_v1_2 >= 0) {
            var_a1_2 += 8;
            var_a0_2 += 1;
            sp100 += 4;
            goto loop_144;
        }
        var_a1 = *(s8 **)((u8 *)var_a1_2 + 4);
        var_a2 = *var_a1;
        if (var_a2 == 0x23) {
            var_a1 += 1;
loop_151:
            var_a2 = *var_a1;
            if (var_a2 != 0x2A) {
                if (var_a2 == 0x5F) {

                } else {
                    var_a1 += 1;
                    goto loop_151;
                }
            }
        }
        if (var_a2 == 0x2A) {
            var_a1_3 = var_a1 + 1;
            if (*(s8 *)((u8 *)var_a1 + 1) != 0x5F) {
                do {
                    var_a1_3 += 1;
                } while (*var_a1_3 != 0x5F);
            }
            var_a1 = var_a1_3 + 1;
        }
loop_160:
        if (*var_a1 != 0x44) {
            var_a1 += 1;
            goto loop_160;
        }
        *(s8 *)((u8 *)sp130 + 0x42) = var_a0_2;
        *(s8 **)((u8 *)sp130 + 0x44) = var_a1;
        *(s32 *)((u8 *)sp130 + 0x4C) = 0;
        *(s32 *)((u8 *)sp130 + 0x48) = 0;
        return func_0022F900(sp148, var_a1, var_a2);
    }
block_3:
    return -2;
}
