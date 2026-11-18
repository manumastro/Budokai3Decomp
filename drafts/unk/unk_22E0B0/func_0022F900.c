/* Draft (not built): func_0022F900 at 0x0022F900, size 0x7E0, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 199: var_s0 = *(*(s32 *)((u8 *)spB8 + 0x10) + (M2C_BITWISE(s32, temp_f0) * 2));
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022F900.s */

// src/unk/unk_22E0B0.c func_0022F900 cerr diff=-1/0
s32 func_001E3D60(s32, s32, s32);
f32 func_001E52B0(s32);
extern s32 D_0044FB30;
extern f32 D_0046FE30;
extern s32 D_0058BBB0;
extern void *gBattle;
s16 func_0022F900(u8 *arg0) {
    u8 *spB8;
    s8 *spBC;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f21;
    f32 var_f3;
    s16 var_s0;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s5;
    s32 var_t0;
    s32 var_t1;
    s32 var_t6;
    s32 var_t7;
    s8 *var_s2;
    s8 temp_t8;
    s8 temp_v0_2;
    s8 temp_v1;
    u8 *temp_fp;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *temp_v0;

    spB8 = arg0;
    temp_v0 = ((u8 *)gBattle) + (*(s8 *)((u8 *)arg0 + 6) * 0x2020);
    temp_s6 = *(u8 **)((u8 *)temp_v0 + 0x1B84);
    temp_s4 = temp_v0 + 0x830;
    temp_a1 = *(s32 *)((u8 *)temp_v0 + 0x1B80);
    temp_s3 = (u8 *)(&D_0058BBB0 + (temp_a1 * 0xC0));
    var_s2 = *(s8 **)((u8 *)temp_s3 + 0x44);
    temp_fp = *(u8 **)((u8 *)(&D_0058BBB0 + (*(s32 *)((u8 *)temp_s6 + 0x1350) * 0xC0)) + 0xC);
    var_s0 = -3;
    if (*(f32 *)((u8 *)temp_s6 + 0x17C0) <= 0.0f) {
        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
        return -2;
    }
    if (!(*(f32 *)((u8 *)temp_s3 + 0x48) <= 0.0f)) {
        return -1;
    }
    temp_s1 = func_001E3D60(*(s32 *)((u8 *)temp_s6 + 0x17AC), temp_a1, 0x43340000);
    temp_s5 = func_001E3D60(*(s32 *)((u8 *)temp_s4 + 0x17AC), 0x43340000, 0);
    do {
        temp_v1 = *var_s2;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0x41:                                  /* switch 1 */
            temp_f0 = func_0022E7A0(var_s2 + 1, &spBC);
            var_s0 = -1;
            if (M2C_BITWISE(s32, temp_f0) < 0) {
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                var_s0 = -1;
                if (M2C_BITWISE(s32, temp_f0) >= *(s16 *)((u8 *)spB8 + 0)) {
                    *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                } else {
                    var_s0 = *(*(s32 *)((u8 *)spB8 + 0x10) + (M2C_BITWISE(s32, temp_f0) * 2));
                    if (var_s0 >= *(s16 *)((u8 *)spB8 + 2)) {
                        var_s0 = -2;
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                    } else if (var_s0 == -1) {
                        var_s0 = -1;
                    } else {
                        var_s2 = spBC;
                        if (*var_s2 == 0x43) {
                            temp_f0_2 = func_0022E7A0(var_s2 + 1, &spBC);
                            *(f32 *)((u8 *)temp_s3 + 0x48) = temp_f0_2;
                            if (temp_f0_2 < 0.0f) {
                                *(f32 *)((u8 *)temp_s3 + 0x48) = 30.0f;
                            }
                            var_s2 = spBC;
                        } else {
                            *(f32 *)((u8 *)temp_s3 + 0x48) = 0.0f;
                        }
                        *(s8 **)((u8 *)temp_s3 + 0x44) = var_s2;
                    }
                }
            }
            break;
        case 0x48:                                  /* switch 1 */
            if (*(s16 *)((u8 *)temp_s6 + 0xCAC) != 0x10) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                temp_f0_3 = func_0022E7A0(var_s2 + 1, &spBC);
                if (temp_f0_3 < 0.0f) {
                    var_s2 = spBC;
                } else {
                    if (temp_s1 != 0) {
                        var_f1 = (f32) *(s8 *)((u8 *)temp_fp + 0xA) / 16.0f;
                    } else {
                        var_f1 = (f32) *(s8 *)((u8 *)temp_fp + 9) / 16.0f;
                    }
                    if (!((*(f32 *)((u8 *)temp_s6 + 0x654) - *(f32 *)((u8 *)temp_s4 + 0x654)) <= ((temp_f0_3 + var_f1) - (*(f32 *)((u8 *)temp_s6 + 0xD4) * D_0046FE30)))) {
                        var_s0 = -1;
                    } else {
                        var_s2 = spBC;
                    }
                }
            }
            break;
        case 0x44:                                  /* switch 1 */
            var_f21 = 0.0f;
            temp_f0_4 = func_0022E7A0(var_s2 + 1, &spBC);
            if (temp_f0_4 < 0.0f) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                temp_f0_5 = temp_f0_4 + (f32) *(s8 *)((u8 *)temp_fp + 8);
                if (*spBC == 0x2D) {
                    var_f21 = temp_f0_5;
                    temp_f0_6 = func_0022E7A0(spBC + 1, &spBC);
                    if (temp_f0_6 < 0.0f) {
                        var_s0 = -1;
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                    } else {
                        var_f20 = temp_f0_6 + (f32) *(s8 *)((u8 *)temp_fp + 8);
                        goto block_53;
                    }
                } else {
                    var_f20 = temp_f0_5;
block_53:
                    temp_f0_7 = func_001E52B0(0);
                    if (!(temp_f0_7 <= var_f20)) {
                        var_s0 = -1;
                    } else if (temp_f0_7 < var_f21) {
                        var_s0 = -1;
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                    } else {
                        var_s2 = spBC;
                    }
                }
            }
            break;
        case 0x4D:                                  /* switch 1 */
            temp_f0_8 = func_0022E7A0(var_s2 + 1, &spBC);
            if (M2C_BITWISE(s32, temp_f0_8) < 0) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            }
            if (M2C_BITWISE(s32, temp_f0_8) != *(s32 *)((u8 *)temp_s4 + 0xBA4)) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                var_s2 = spBC;
            }
            break;
        case 0x46:                                  /* switch 1 */
            temp_f0_9 = func_0022E7A0(var_s2 + 1, &spBC);
            if (temp_f0_9 < 0.0f) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                temp_f2 = *(f32 *)((u8 *)temp_s4 + 0x1A40);
                if (!(temp_f2 <= 0.0f)) {
                    var_f3 = *(f32 *)((u8 *)temp_s4 + 0x17D4);
                } else {
                    var_f3 = *(f32 *)((u8 *)temp_s4 + 0x17D0);
                }
                if (*(s8 *)((u8 *)temp_s4 + 0x2010) != 0) {
                    if (!(temp_f2 <= 0.0f)) {
                        var_f1_2 = *(f32 *)((u8 *)temp_s4 + 0x17D4);
                    } else {
                        var_f1_2 = *(f32 *)((u8 *)temp_s4 + 0x17E0);
                    }
                    if (!(var_f3 <= var_f1_2)) {

                    } else if (!(temp_f2 <= 0.0f)) {
                        var_f3 = *(f32 *)((u8 *)temp_s4 + 0x17D4);
                    } else {
                        var_f3 = *(f32 *)((u8 *)temp_s4 + 0x17E0);
                    }
                }
                if (!((1000.0f * temp_f0_9) <= var_f3)) {
                    var_s0 = -1;
                    *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                } else {
                    var_s2 = spBC;
                }
            }
            break;
        case 0x23:                                  /* switch 1 */
            var_s2 += 1;
            var_t1 = -1;
            var_t0 = 1;
            do {
                temp_v0_2 = *var_s2;
                switch (temp_v0_2) {                /* switch 2; irregular */
                case 0x47:                          /* switch 2 */
                    var_s2 += 1;
                    if (*(s8 *)((u8 *)temp_s4 + 0x1FF9) != 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x41:                          /* switch 2 */
                    var_s2 += 1;
                    if (*(s8 *)((u8 *)temp_s4 + 0x1FF9) == 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x46:                          /* switch 2 */
                    var_s2 += 1;
                    if (temp_s5 != 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x42:                          /* switch 2 */
                    var_s2 += 1;
                    if (temp_s5 == 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x2A:                          /* switch 2 */
                case 0x5F:                          /* switch 2 */
                    var_t0 = 0;
                    break;
                default:                            /* switch 2 */
                    var_s2 += 1;
                    break;
                }
            } while (var_t0 != 0);
            if (var_t1 == 0) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            }
            break;
        case 0x2A:                                  /* switch 1 */
            var_s2 += 1;
            var_t7 = -1;
            var_t6 = 1;
            do {
                temp_t8 = *var_s2;
                switch (temp_t8) {                  /* switch 3; irregular */
                case 0x57:                          /* switch 3 */
                case 0x44:                          /* switch 3 */
                case 0x41:                          /* switch 3 */
                case 0x47:                          /* switch 3 */
                case 0x53:                          /* switch 3 */
                case 0x4E:                          /* switch 3 */
                    if (var_t7 != 1) {
                        var_t7 = 1;
                        if (*(&D_0044FB30 + *(s16 *)((u8 *)temp_s6 + 0xCAC)) == temp_t8) {

                        } else {
                            var_t7 = 0;
                        }
                    }
                    var_s2 += 1;
                    break;
                case 0x46:                          /* switch 3 */
                    var_s2 += 1;
                    if (temp_s1 != 0) {
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                        var_s0 = -1;
                    }
                    break;
                case 0x42:                          /* switch 3 */
                    var_s2 += 1;
                    if (temp_s1 == 0) {
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                        var_s0 = -1;
                    }
                    /* fallthrough */
                case 0x23:                          /* switch 3 */
                case 0x5F:                          /* switch 3 */
                    var_t6 = 0;
                    break;
                default:                            /* switch 3 */
                    var_s2 += 1;
                    break;
                }
            } while (var_t6 != 0);
            if (var_t7 == 0) {
                var_s0 = -1;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            }
            break;
        case 0x5F:                                  /* switch 1 */
            var_s2 += 1;
            break;
        case 0x0:                                   /* switch 1 */
            var_s0 = -1;
            *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            break;
        default:                                    /* switch 1 */
            temp_f0_10 = func_0022E7A0(var_s2, &spBC);
            if (M2C_BITWISE(s32, temp_f0_10) < 0) {
                var_s2 += 1;
            } else if (!((f32) temp_f0_10 <= *(f32 *)((u8 *)temp_s3 + 0x4C))) {
                var_s0 = -1;
            } else {
                var_s2 = spBC;
            }
            break;
        }
    } while (var_s0 == -3);
    return var_s0;
}
