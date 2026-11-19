/* Draft (not built): func_002316D0 at 0x002316D0, size 0x7A0, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 308 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x850, original 0x7A0
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_002316D0.s */

// src/unk/unk_22E0B0.c func_002316D0 size diff=308/532
s32 func_0012EAE0(s32);
s32 func_001E3D60(s32, s32 *, s32);
f32 func_001E52B0(s32);
extern s32 D_0044FB30;
extern f32 D_0046FE30;
extern s32 D_0058BBB0;
s32 func_002316D0(u8 *arg0) {
    s32 saved_reg_f20;
    s8 *spBC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f21;
    f32 var_f3;
    s32 temp_s0;
    s32 temp_s5;
    s32 var_s1;
    s32 var_t0;
    s32 var_t1;
    s32 var_t4;
    s32 var_t8;
    s8 *var_s2;
    s8 temp_t5;
    s8 temp_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    u8 *temp_s3;
    u8 *temp_s6;
    u8 *temp_s7;

    var_f20 = saved_reg_f20;
    temp_s6 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_s3 = (unsigned char *)(&D_0058BBB0 + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0));
    temp_s7 = *(u8 **)((u8 *)(&D_0058BBB0 + (*(s32 *)((u8 *)temp_s6 + 0x1350) * 0xC0)) + 0xC);
    var_s1 = -3;
    if (*(f32 *)((u8 *)temp_s6 + 0x17C0) <= 0.0f) {
        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
        return 0;
    }
    var_s2 = *(s8 **)((u8 *)temp_s3 + 0x44);
    temp_s0 = func_001E3D60(*(s32 *)((u8 *)temp_s6 + 0x17AC), &D_0058BBB0, 0x43340000);
    temp_s5 = func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), (s32 *)0x43340000, 0);
    do {
        temp_v1 = *(s8 *)((u8 *)var_s2 + 0);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0x41:                                  /* switch 1 */
            var_s1 = 0;
            break;
        case 0x48:                                  /* switch 1 */
            if (*(s16 *)((u8 *)temp_s6 + 0xCAC) != 0x10) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                temp_f0 = func_0022E7A0(var_s2 + 1, &spBC);
                if (temp_f0 < 0.0f) {
                    var_s2 = spBC;
                } else {
                    if (temp_s0 != 0) {
                        var_f1 = (f32) *(s8 *)((u8 *)temp_s7 + 0xA) / 16.0f;
                    } else {
                        var_f1 = (f32) *(s8 *)((u8 *)temp_s7 + 9) / 16.0f;
                    }
                    if (!((*(f32 *)((u8 *)temp_s6 + 0x654) - *(f32 *)((u8 *)arg0 + 0x654)) <= ((temp_f0 + var_f1) - (*(f32 *)((u8 *)temp_s6 + 0xD4) * D_0046FE30)))) {
                        var_s1 = 2;
                    } else {
                        var_s2 = spBC;
                    }
                }
            }
            break;
        case 0x44:                                  /* switch 1 */
            temp_f0_2 = func_0022E7A0(var_s2 + 1, &spBC);
            if (temp_f0_2 < 0.0f) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                temp_f0_3 = temp_f0_2 + (f32) *(s8 *)((u8 *)temp_s7 + 8);
                if (*spBC == 0x2D) {
                    var_f20 = temp_f0_3;
                    var_f21 = func_0022E7A0(spBC + 1, &spBC);
                    if (var_f21 < 0.0f) {
                        var_s1 = 0;
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                    } else {
                        goto block_36;
                    }
                } else {
                    var_f21 = temp_f0_3;
block_36:
                    temp_f0_4 = func_001E52B0(0);
                    if (!(temp_f0_4 <= (1.5f * var_f21))) {
                        var_s1 = 0;
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                    } else if (!(temp_f0_4 <= var_f21)) {
                        var_s1 = 2;
                    } else if (temp_f0_4 < var_f20) {
                        var_s1 = 0;
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                    } else {
                        var_s2 = spBC;
                    }
                }
            }
            break;
        case 0x4D:                                  /* switch 1 */
            temp_f0_5 = func_0022E7A0(var_s2 + 1, &spBC);
            if (M2C_BITWISE(s32, temp_f0_5) < 0) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else if (M2C_BITWISE(s32, temp_f0_5) != *(s32 *)((u8 *)arg0 + 0xBA4)) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                var_s2 = spBC;
            }
            break;
        case 0x46:                                  /* switch 1 */
            temp_f0_6 = func_0022E7A0(var_s2 + 1, &spBC);
            var_f1_2 = 0.0f;
            if (temp_f0_6 < 0.0f) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            } else {
                temp_f2 = *(f32 *)((u8 *)arg0 + 0x1A40);
                if (!(temp_f2 <= 0.0f)) {
                    var_f3 = *(f32 *)((u8 *)arg0 + 0x17D4);
                } else {
                    var_f3 = *(f32 *)((u8 *)arg0 + 0x17D0);
                }
                if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
                    if (!(temp_f2 <= 0.0f)) {
                        var_f1_2 = *(f32 *)((u8 *)arg0 + 0x17D4);
                    } else {
                        var_f1_2 = *(f32 *)((u8 *)arg0 + 0x17E0);
                    }
                    if (!(var_f3 <= var_f1_2)) {

                    } else {
                        var_f1_2 = 0.0f;
                        if (!(temp_f2 <= 0.0f)) {

                        }
                    }
                }
                if (!((1000.0f * temp_f0_6) <= (f32) var_f1_2)) {
                    var_s1 = 0;
                    *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                } else {
                    var_s2 = spBC;
                }
            }
            break;
        case 0x53:                                  /* switch 1 */
            temp_v1_2 = *(s8 *)((u8 *)var_s2 + 1);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 0x4C:                              /* switch 2 */
                var_s1 = 7;
                var_s2 += 2;
                break;
            case 0x52:                              /* switch 2 */
                var_s1 = 8;
                var_s2 += 2;
                break;
            default:                                /* switch 2 */
                var_s1 = 7;
                if ((func_0012EAE0(0x20) / 10) & 1) {

                } else {
                    var_s1 = 8;
                }
                var_s2 += 1;
                break;
            }
            *(s8 **)((u8 *)temp_s3 + 0x44) = var_s2;
            break;
        case 0x23:                                  /* switch 1 */
            var_s2 += 1;
            var_t1 = -1;
            var_t0 = 1;
            do {
                temp_v0 = *var_s2;
                switch (temp_v0) {                  /* switch 3; irregular */
                case 0x47:                          /* switch 3 */
                    var_s2 += 1;
                    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x41:                          /* switch 3 */
                    var_s2 += 1;
                    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x46:                          /* switch 3 */
                    var_s2 += 1;
                    if (temp_s5 != 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x42:                          /* switch 3 */
                    var_s2 += 1;
                    if (temp_s5 == 0) {
                        var_t1 = 0;
                    }
                    break;
                case 0x2A:                          /* switch 3 */
                case 0x5F:                          /* switch 3 */
                    var_t0 = 0;
                    break;
                default:                            /* switch 3 */
                    var_s2 += 1;
                    break;
                }
            } while (var_t0 != 0);
            if (var_t1 == 0) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            }
            break;
        case 0x2A:                                  /* switch 1 */
            var_s2 += 1;
            var_t8 = -1;
            var_t4 = 1;
            do {
                temp_t5 = *var_s2;
                switch (temp_t5) {                  /* switch 4; irregular */
                case 0x57:                          /* switch 4 */
                case 0x44:                          /* switch 4 */
                case 0x41:                          /* switch 4 */
                case 0x47:                          /* switch 4 */
                case 0x53:                          /* switch 4 */
                case 0x4E:                          /* switch 4 */
                    if (var_t8 != 1) {
                        var_t8 = 1;
                        if (*(&D_0044FB30 + *(s16 *)((u8 *)temp_s6 + 0xCAC)) == temp_t5) {

                        } else {
                            var_t8 = 0;
                        }
                    }
                    var_s2 += 1;
                    break;
                case 0x46:                          /* switch 4 */
                    var_s2 += 1;
                    if (temp_s0 != 0) {
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                        var_s1 = 0;
                    }
                    break;
                case 0x42:                          /* switch 4 */
                    var_s2 += 1;
                    if (temp_s0 == 0) {
                        *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
                        var_s1 = 0;
                    }
                    break;
                case 0x23:                          /* switch 4 */
                case 0x5F:                          /* switch 4 */
                    var_t4 = 0;
                    break;
                default:                            /* switch 4 */
                    var_s2 += 1;
                    break;
                }
            } while (var_t4 != 0);
            if (var_t8 == 0) {
                var_s1 = 0;
                *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            }
            break;
        case 0x5F:                                  /* switch 1 */
            var_s2 += 1;
            break;
        case 0x0:                                   /* switch 1 */
            *(s8 *)((u8 *)temp_s3 + 0x42) = -1;
            var_s1 = 0;
            break;
        default:                                    /* switch 1 */
            temp_f0_7 = func_0022E7A0(var_s2, &spBC);
            if (M2C_BITWISE(s32, temp_f0_7) < 0) {
                var_s2 += 1;
            } else if (!((f32) temp_f0_7 <= *(f32 *)((u8 *)temp_s3 + 0x4C))) {
                var_s1 = 2;
            } else {
                var_s2 = spBC;
            }
            break;
        }
    } while (var_s1 == -3);
    return var_s1;
}
