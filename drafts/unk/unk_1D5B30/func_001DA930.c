/* Draft (not built): func_001DA930 at 0x001DA930, size 0x9E4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); version from 'int' to 'void *' @ 1888: , (void *)((void *)((void *)((void *)((void *)(var_s0))))), 0, 0, 0, 0x3F800000);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DA930.s */

// src/unk/unk_1D5B30.c func_001DA930 cerr diff=-1/0
s32 func_001DA930(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_f12;
    s32 var_s0;
    f32 temp_f1;
    f32 var_f1;
    f32 var_f20;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_6;
    s32 var_a1;
    s32 var_f0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0_6;
    s32 var_v0_7;
    s8 temp_v1_5;
    u8 var_v0_2;
    u8 var_v0_4;
    u8 *var_v0;
    u8 *var_v0_3;
    u8 *var_v0_5;

    var_a1 = arg1;
    var_s3 = -1;
    var_s2 = 0;
    var_s1 = 0;
    var_s0 = 0x1B;
    if (var_a1 < 2) {
        temp_v1 = *(s16 *)((u8 *)arg0 + 0x1FF0);
        var_s4 = 1;
        if (temp_v1 == 0) {
            var_v0 = NULL;
        } else {
            var_v0 = &D_004E0660 + (temp_v1 * 0x28);
        }
        if (var_v0 != NULL) {
            var_v0_2 = *(u8 *)((u8 *)var_v0 + 0x15);
        } else {
            var_v0_2 = 0;
        }
        if ((var_v0_2 & 0xFF) == 0x6E) {
            return -1;
        }
        goto block_11;
    }
    var_s4 = 2;
    var_s1 = 0x8000 | 0x4000;
block_11:
    temp_v1_2 = *(s16 *)((u8 *)arg0 + 0x1FF0);
    var_f0 = arg2;
    var_f20 = (f32) var_f0;
    if (temp_v1_2 == 0) {
        var_v0_3 = NULL;
    } else {
        var_v0_3 = &D_004E0660 + (temp_v1_2 * 0x28);
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = *(u8 *)((u8 *)var_v0_3 + 0x15);
    } else {
        var_v0_4 = 0;
    }
    if ((var_v0_4 & 0xFF) == 0x6D) {
        temp_v1_3 = *(s16 *)((u8 *)arg0 + 0x1FF0);
        if (temp_v1_3 == 0) {
            var_v0_5 = NULL;
        } else {
            var_v0_5 = &D_004E0660 + (temp_v1_3 * 0x28);
        }
        var_f1 = (100.0f - (((f32) *(s16 *)((u8 *)var_v0_5 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)) / 100.0f;
        var_f0 = 0x3F800000;
        if (!(var_f1 <= 1.0f)) {
            var_f1 = 1.0f;
        } else {
            var_f0 = 0;
            if (var_f1 < 0.0f) {
                var_f1 = 0.0f;
            }
        }
        var_f20 *= var_f1;
    }
    temp_v1_4 = *(s16 *)((u8 *)arg0 + 0xCAC);
    switch (temp_v1_4) {                            /* switch 1; irregular */
    case 0x1A:                                      /* switch 1 */
    case 0x1:                                       /* switch 1 */
        if (var_a1 < 2) {
            var_a1 = 0;
        } else {
            var_a1 = 1;
        }
        var_s2 = 1;
block_101:
        switch (var_a1) {                           /* switch 2; irregular */
        case -1:                                    /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            if (var_s2 != 0) {
                func_001E0200(arg0, M2C_BITWISE(f32, var_f0), 0x3174);
                *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                *(s16 *)((u8 *)arg0 + 0x17FA) = 0xC;
                var_s0 = 0xF;
                *(s32 *)((u8 *)arg0 + 0x1800) = 0x40233334;
                var_s3 = 0x1A;
                *(s32 *)((u8 *)arg0 + 0x1804) = 0x41C80000;
                *(s32 *)((u8 *)arg0 + 0x180C) = 0x41C80000;
            } else {
                func_001E0200(arg0, M2C_BITWISE(f32, var_f0), 0x2170);
                var_s0 = 0x1B;
                if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
                    *(s16 *)((u8 *)arg0 + 0x181E) = 0;
                    var_s3 = 0x10;
                    *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E828F5D;
                    *(s32 *)((u8 *)arg0 + 0x1810) = 0x3FC00000;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                } else {
                    temp_f1 = 360.0f * ((f32) *(s32 *)((u8 *)arg0 + 0x17AC) / 65536.0f);
                    if (!(temp_f1 <= 90.0f) && (temp_f1 < 270.0f)) {
                        var_v0_6 = 1;
                    } else {
                        var_v0_6 = 0;
                    }
                    if (var_v0_6 != 0) {
                        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                        *(s16 *)((u8 *)arg0 + 0x17FA) = 0xE;
                    } else {
                        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                        *(s16 *)((u8 *)arg0 + 0x17FA) = 8;
                    }
                    var_s3 = 0x19;
                    *(s32 *)((u8 *)arg0 + 0x1800) = 0x3F59999A;
                    *(s32 *)((u8 *)arg0 + 0x1804) = 0x461C4000;
                    *(s32 *)((u8 *)arg0 + 0x180C) = 0x40A00000;
                }
            }
            break;
        case 2:                                     /* switch 2 */
            *(s16 *)((u8 *)arg0 + 0x181E) = 0;
            *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E828F5D;
            *(s32 *)((u8 *)arg0 + 0x1810) = 0x3FCCCCCD;
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            if (var_s1 & 1) {
                *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E028F5D;
                *(s32 *)((u8 *)arg0 + 0x1810) = 0x3FE66666;
            }
            var_s3 = 0x10;
            func_001E0200(arg0, M2C_BITWISE(f32, var_f0), var_s1 | 0x2170);
            var_s0 = 0x1B;
            break;
        case 3:                                     /* switch 2 */
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            var_s3 = 0x14;
            func_001E0200(arg0, M2C_BITWISE(f32, var_f0), var_s1 | 0x2170);
            var_s0 = 0x1B;
            break;
        default:                                    /* switch 2 */
        case 0:                                     /* switch 2 */
            *(s16 *)((u8 *)arg0 + 0x17FA) = 0;
            *(s32 *)((u8 *)arg0 + 0x1800) = 0x3F59999A;
            *(s32 *)((u8 *)arg0 + 0x1804) = 0x41A00000;
            *(s32 *)((u8 *)arg0 + 0x180C) = 0x40A00000;
            func_001E0200(arg0, 0.5f * var_f20, 0xA0);
            var_s3 = 0x1A;
            var_s0 = 0x1C;
            break;
        }
        if (arg3 != 0) {
            func_001E9B00(1, (void *)((void *)((void *)((void *)((void *)((void *)(var_s0)))))), 0, 0, 0, 0x3F800000);
        }
        temp_v1_5 = *(s8 *)((u8 *)arg0 + 0x1FF8);
        if (temp_v1_5 < 2) {
            return var_s3;
        }
        switch (var_s4) {                           /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            if (temp_v1_5 == -1) {
                var_v0_7 = 0;
            } else if ((*(s8 *)((u8 *)arg0 + 0x2010) == 0) && (*(s8 *)((u8 *)arg0 + 0xACD) <= 0)) {
                var_v0_7 = 0;
            } else {
                temp_v1_6 = *(s16 *)((u8 *)arg0 + 0xCAC);
                if ((temp_v1_6 != 0x2B) && (temp_v1_6 != 0x2A) && (temp_v1_6 != 0x29) && (temp_v1_6 != 0x22) && (temp_v1_6 != 0x21) && (temp_v1_6 != 0x1A) && (temp_v1_6 != 0x19) && (temp_v1_6 != 0x18) && (temp_v1_6 != 0x17) && (temp_v1_6 != 0x16) && (temp_v1_6 != 0x15) && (temp_v1_6 != 0x14) && (temp_v1_6 != 0x12) && (temp_v1_6 != 0x11) && (temp_v1_6 != 0x10)) {
                    var_v0_7 = 1;
                } else {
                    var_v0_7 = 0;
                }
            }
            if (var_v0_7 != 0) {
                func_001DD680(arg0);
                var_s3 = -1;
            }
            break;
        case 2:                                     /* switch 3 */
            var_f12 = 0;
            switch (var_s3) {                       /* switch 4; irregular */
            case 20:                                /* switch 4 */
                var_f12 = 0x42C80000;
                /* fallthrough */
            case 16:                                /* switch 4 */
                func_001DFC80(arg0, 1, var_f12);
                break;
            case 26:                                /* switch 4 */
                func_001DFE60((struct Fighter *)(arg0), 0, 0xC3FA0000);
                break;
            }
            break;
        }
        return var_s3;
    case 0x12:                                      /* switch 1 */
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            var_s3 = 0x11;
        } else {
            var_s3 = 0x10;
            *(s16 *)((u8 *)arg0 + 0x181E) = (s16) *(s16 *)((u8 *)arg0 + 0xCB4);
            *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E828F5D;
            *(s32 *)((u8 *)arg0 + 0x1810) = 0x3F800000;
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        var_s0 = 0x1B;
        var_f0 = M2C_BITWISE(s32, func_001E0200(arg0, 0.5f * var_f20, 0x2170));
        var_a1 = -1;
        goto block_101;
    case 0x33:                                      /* switch 1 */
    case 0x32:                                      /* switch 1 */
    case 0x28:                                      /* switch 1 */
    case 0x15:                                      /* switch 1 */
    case 0x25:                                      /* switch 1 */
    case 0x24:                                      /* switch 1 */
    case 0x23:                                      /* switch 1 */
    case 0x29:                                      /* switch 1 */
    case 0x2A:                                      /* switch 1 */
    case 0x13:                                      /* switch 1 */
        return -1;
    case 0x16:                                      /* switch 1 */
    case 0x1B:                                      /* switch 1 */
        return -1;
    case 0x10:                                      /* switch 1 */
        if (var_a1 >= 3) {
            var_s3 = 0x14;
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        } else {
            var_s3 = 0x10;
            *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E828F5D;
            *(s32 *)((u8 *)arg0 + 0x1810) = 0x3F800000;
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        var_s0 = 0x1B;
        var_f0 = M2C_BITWISE(s32, func_001E0200(arg0, M2C_BITWISE(f32, var_f0), var_s1 | 0x2170));
        var_a1 = -1;
        goto block_101;
    case 0x14:                                      /* switch 1 */
        if (temp_v1_4 != 0x28) {
            if (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x2019) != 0) {
                goto block_75;
            }
        case 0x18:                                  /* switch 1 */
        case 0x17:                                  /* switch 1 */
        case 0x11:                                  /* switch 1 */
            var_s3 = 0x10;
            var_s0 = 0x1B;
            *(s16 *)((u8 *)arg0 + 0x181E) = (s16) *(s16 *)((u8 *)arg0 + 0xCB4);
            *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E828F5D;
            *(s32 *)((u8 *)arg0 + 0x1810) = 0x3F800000;
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            var_f0 = M2C_BITWISE(s32, func_001E0200(arg0, M2C_BITWISE(f32, var_f0), var_s1 | 0x2170));
            var_a1 = -1;
            goto block_101;
        }
block_75:
        return -1;
    case 0x31:                                      /* switch 1 */
    case 0xF:                                       /* switch 1 */
        if ((*(s16 *)((u8 *)arg0 + 0xAE4) & 0x40) && (var_a1 < 2)) {
            var_a1 += 1;
        }
        if (*(s8 *)((u8 *)arg0 + 0x2006) != 0) {
            if (var_a1 < 3) {
                var_a1 += 1;
            }
            var_s1 |= 1;
        }
        goto block_101;
    case 0x4:                                       /* switch 1 */
        if (var_a1 < 3) {
            var_a1 += 1;
        }
        var_s1 |= 1;
        goto block_101;
    case 0x19:                                      /* switch 1 */
        if ((*(s16 *)((u8 *)arg0 + 0xAE4) & 0x40) && (var_a1 < 2)) {
            var_a1 += 1;
        }
        goto block_101;
    default:                                        /* switch 1 */
        if ((*(s16 *)((u8 *)arg0 + 0xAE4) & 0x40) && (var_a1 < 2)) {
            var_a1 += 1;
        }
        if ((*(s16 *)((u8 *)arg0 + 0x13A4) < 0) && (*(s8 *)((u8 *)gBattle + 0x8977) != 3) && (*(s8 *)((u8 *)gBattle + 0x897A) != 0)) {
            if (var_a1 < 3) {
                var_a1 += 1;
            }
            var_s1 |= 1;
        }
        goto block_101;
    }
}
