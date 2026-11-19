/* Draft (not built): func_002ECFD0 at 0x002ECFD0, size 0xC78, segment unk/unk_2ECB90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 677 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB4C, original 0xC78
 * Original: asm/nonmatchings/unk/unk_2ECB90/func_002ECFD0.s */

// src/unk/unk_2ECB90.c func_002ECFD0 size diff=677/723
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, s32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern s32 D_00458020;
extern s64 D_004701A0;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void func_0022CD00(void *);
extern void func_0022CF70();
void func_002ECFD0(u8 *arg0, s8 arg1) {
    s32 spFC;
    s32 spF8;
    s32 spF4;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 saved_reg_s1;
    s64 *spA0;
    u8 **spB0;
    u8 *spC0;
    s32 spD0;
    s8 spEF;
    f32 spF0;
    f32 sp110;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    f32 sp150;
    f32 sp154;
    f32 sp158;
    f32 sp170;
    f32 sp174;
    f32 sp178;
    f32 sp190;
    f32 sp194;
    f32 sp198;
    f32 sp19C;
    f32 sp1B0;
    f32 sp1B4;
    f32 sp1B8;
    f32 sp1BC;
    u8 *sp1D0;
    s32 sp1D4;
    s32 sp1D8;
    s32 sp1DC;
    u8 *sp1E0;
    s32 sp1E4;
    s32 sp1E8;
    s32 sp1EC;
    s32 sp1F0;
    s32 sp200;
    f32 sp230;
    f32 sp234;
    f32 sp238;
    f32 sp23C;
    s32 sp240;
    s32 sp244;
    s32 sp248;
    s32 sp260;
    s64 sp288;
    s32 *var_s0;
    s32 var_f0;
    s32 var_f0_2;
    s16 temp_a0;
    s16 temp_a0_3;
    s16 temp_a1;
    s16 temp_s4;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 var_s1;
    s16 var_v0;
    s16 var_v1_3;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_5;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_s6;
    s32 temp_v1_3;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s7;
    s32 var_t2;
    s32 var_t3;
    s32 var_v1;
    s32 var_v1_2;
    s64 temp_s4_4;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 temp_v0_3;
    u8 **var_a0;
    u8 **var_a0_2;
    u8 **var_a0_3;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s3;
    u8 *temp_s3_4;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_s5;
    u8 *var_t1;

    var_s1 = saved_reg_s1;
    spEF = arg1;
    sp288 = D_004701A0;
    *(s128 *)((u8 *)(&sp200) + 0) = (s128) *(s128 *)((u8 *)(&D_00458020) + 0);
    *(s128 *)((u8 *)(&sp200) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00458020) + 0x10);
    *(s64 *)((u8 *)(&sp200) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00458020) + 0x20);
    temp_a1 = *(s16 *)((u8 *)arg0 + 4);
    if (temp_a1 != *(s16 *)((u8 *)arg0 + 6)) {
        *(s16 *)((u8 *)arg0 + 6) = temp_a1;
        var_t3 = 0;
        var_t1 = arg0;
        do {
            var_a0 = &sp1E0;
            var_v1 = 0x14;
            if (var_a0 != NULL) {
                do {
                    *var_a0 = 0;
                    var_v1 -= 1;
                    var_a0 += 1;
                } while (var_v1 != 0);
            }
            var_t2 = 0;
            var_a0_2 = &sp1E0;
            sp1E0 = *(u8 **)((u8 *)var_t1 + 0x80);
            sp1E4 = *(s32 *)((u8 *)var_t1 + 0x90);
            sp1E8 = *(s32 *)((u8 *)var_t1 + 0x84);
            sp1EC = *(s32 *)((u8 *)var_t1 + 0x88);
            sp1F0 = *(s32 *)((u8 *)var_t1 + 0x8C);
loop_5:
            temp_v1 = *var_a0_2;
            if (temp_v1 != NULL) {
                *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) gFrameDelta;
            }
            var_t2 += 1;
            var_a0_2 += 4;
            if (var_t2 < 5) {
                goto loop_5;
            }
            var_t3 += 1;
            var_t1 += 0x38;
        } while (var_t3 < 8);
        temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x78);
        if (temp_v1_2 != NULL) {
            *(f32 *)((u8 *)temp_v1_2 + 0x10) = (f32) gFrameDelta;
        }
    }
    temp_a0 = *(s16 *)((u8 *)arg0 + 0x18);
    if ((temp_a0 >> 2) < 8) {
        *(s16 *)((u8 *)arg0 + 0x18) = (s16) (temp_a0 + 1);
    }
    temp_v1_3 = (s16) *(s16 *)((u8 *)arg0 + 0x18) >> 2;
    spD0 = temp_v1_3;
    var_s7 = 0;
    if (temp_v1_3 > 0) {
        spC0 = arg0;
loop_15:
        var_a0_3 = &sp1D0;
        var_s5 = spC0 + 0x7C;
        var_v1_2 = 0x10;
        if (var_a0_3 != NULL) {
            do {
                *var_a0_3 = 0;
                var_v1_2 -= 1;
                var_a0_3 += 1;
            } while (var_v1_2 != 0);
        }
        sp1D0 = *(u8 **)((u8 *)var_s5 + 4);
        sp1D4 = *(s32 *)((u8 *)var_s5 + 8);
        sp1D8 = *(s32 *)((u8 *)var_s5 + 0xC);
        sp1DC = *(s32 *)((u8 *)var_s5 + 0x10);
        if (*(s8 *)((u8 *)spC0 + 0x7C) != -1) {
            var_fp = 0;
            var_s0 = &sp200;
            spB0 = &sp1D0;
            temp_s6 = ((s64) ((var_s7 + 0x36) << 0x30) >> 0x30) * 4;
            spA0 = &sp288;
loop_19:
            temp_s3 = *spB0;
            temp_s4 = *spA0;
            if (temp_s3 != NULL) {
                func_002284D0(&sp230);
                func_00228430(0);
                temp_v0 = (s64) ((s64) temp_s4 << 0x30) >> 0x30;
                if (temp_v0 != -1) {
                    temp_s4_2 = temp_v0 * 4;
                    func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s4_2), &sp1B0, -1, 0.0f);
                    sp230 = sp1B0;
                    sp234 = sp1B4;
                    sp238 = sp1B8;
                    sp23C = sp1BC;
                    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s4_2), &sp240, -1, 0.0f);
                    func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s4_2), &sp260, -1, 0.0f);
                }
                func_00228240(&sp230);
                func_002284D0(&sp230);
                func_00229800(*(s32 *)(temp_s6 + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)), &sp1B0, -1, 0.0f);
                sp230 = sp1B0;
                sp234 = sp1B4;
                sp238 = sp1B8;
                sp23C = sp1BC;
                func_00228AC0(*(s32 *)(temp_s6 + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)), &sp240, -1, 0.0f);
                func_002285A0(*(s32 *)(temp_s6 + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)), &sp260, -1, 0.0f);
                func_00228240(&sp230);
                temp_v1_4 = *(s16 *)((u8 *)arg0 + 4);
                switch (temp_v1_4) {                /* switch 1 */
                    return;
                case 1:                             /* switch 1 */
                    var_s1 = *(s16 *)((u8 *)var_s0 + 0);
                default:                            /* switch 1 */
block_36:
                    func_002284D0(&sp230);
                    temp_v0_2 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
                    temp_s4_3 = temp_v0_2 * 4;
                    if (temp_v0_2 != -1) {
                        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s4_3), &sp1B0, -1, *(f32 *)((u8 *)temp_s3 + 0x10));
                        sp230 = sp1B0;
                        sp234 = sp1B4;
                        sp238 = sp1B8;
                        sp23C = sp1BC;
                        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s4_3), &sp240, -1, *(f32 *)((u8 *)temp_s3 + 0x10));
                        func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s4_3), &sp260, -1, *(f32 *)((u8 *)temp_s3 + 0x10));
                    }
                    if (*(s8 *)((u8 *)spC0 + 0x7C) == 0) {
                        var_f0 = 0x3F800000;
                    } else {
                        var_f0 = 0x3ECCCCCD;
                    }
                    sp248 = var_f0;
                    sp244 = var_f0;
                    sp240 = var_f0;
                    func_00228240(&sp230);
                    func_0022C060(temp_s3, 0x3F800000);
                    func_0022CD00(temp_s3);
                    func_00228410();
                    goto block_42;
                case 2:                             /* switch 1 */
                case 3:                             /* switch 1 */
                    var_s1 = -1;
                    goto block_36;
                case 4:                             /* switch 1 */
                    if (*(s16 *)((u8 *)arg0 + 8) == 0) {
                        if (var_s7 == (*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0x12))) {
                            var_s1 = *(s16 *)((u8 *)var_s0 + 2);
                        } else {
                            var_s1 = *(s16 *)((u8 *)var_s0 + 4);
                        }
                    } else if (var_s7 == (*(s16 *)((u8 *)arg0 + 0x14) - *(s16 *)((u8 *)arg0 + 0x16))) {
                        var_s1 = *(s16 *)((u8 *)var_s0 + 2);
                    } else {
                        var_s1 = *(s16 *)((u8 *)var_s0 + 4);
                    }
                    goto block_36;
                case 5:                             /* switch 1 */
                    var_s1 = 0xCB;
                    goto block_36;
                }
            } else {
block_42:
                var_fp += 1;
                spB0 += 4;
                spA0 += 2;
                var_s0 += 0xA;
                if (var_fp >= 4) {
                    temp_s0 = *(u8 **)((u8 *)var_s5 + 0x14);
                    if (temp_s0 != NULL) {
                        func_002284D0(&sp230);
                        func_00228430(0);
                        temp_v1_5 = *(s16 *)((u8 *)arg0 + 4);
                        switch (temp_v1_5) {        /* switch 2 */
                            return;
                        case 1:                     /* switch 2 */
                            var_s1 = 0x48;
                        default:                    /* switch 2 */
block_55:
                            func_002284D0(&sp230);
                            temp_v0_3 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
                            temp_s3_2 = temp_v0_3 * 4;
                            if (temp_v0_3 != -1) {
                                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_2), &sp190, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
                                sp230 = sp190;
                                sp234 = sp194;
                                sp238 = sp198;
                                sp23C = sp19C;
                                func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_2), &sp240, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
                                func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_2), &sp260, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
                            }
                            if (*(s8 *)((u8 *)spC0 + 0x7C) == 0) {
                                var_f0_2 = 0x3F800000;
                            } else {
                                var_f0_2 = 0x3ECCCCCD;
                            }
                            sp248 = var_f0_2;
                            sp244 = var_f0_2;
                            sp240 = var_f0_2;
                            func_00228240(&sp230);
                            func_002284D0(&sp230);
                            temp_s3_3 = ((s64) (((s64) ((var_s7 + 0x40) << 0x30) >> 0x30) << 0x30) >> 0x30) * 4;
                            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_3), &sp190, -1, 0.0f);
                            sp230 = sp190;
                            sp234 = sp194;
                            sp238 = sp198;
                            sp23C = sp19C;
                            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_3), &sp240, -1, 0.0f);
                            func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_3), &sp260, -1, 0.0f);
                            func_00228240(&sp230);
                            func_0022C060(temp_s0, 0x3F800000);
                            func_0022CD00(temp_s0);
                            func_00228410();
                            goto block_61;
                        case 2:                     /* switch 2 */
                        case 3:                     /* switch 2 */
                            var_s1 = -1;
                            goto block_55;
                        case 4:                     /* switch 2 */
                            var_s1 = 0x4A;
                            if (var_s7 == (*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0x12))) {

                            } else {
                                var_s1 = 0x49;
                            }
                            goto block_55;
                        case 5:                     /* switch 2 */
                            var_s1 = 0xCB;
                            goto block_55;
                        }
                    } else {
block_61:
                        if (spEF != 0) {
                            temp_s3_4 = *(u8 **)((u8 *)var_s5 + 4);
                            func_002284D0(&sp230);
                            func_00228430(0);
                            var_s1 = (s16) ((s64) ((var_s7 + 0x89) << 0x30) >> 0x30);
                            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + (var_s1 * 4)), &sp170, -1, 0.0f);
                            temp_v1_6 = *(s16 *)((u8 *)arg0 + 4);
                            switch (temp_v1_6) {    /* switch 3; irregular */
                            case 1:                 /* switch 3 */
                                var_s1 = 0x48;
                                break;
                            case 3:                 /* switch 3 */
                            case 2:                 /* switch 3 */
                                var_s1 = -1;
                                break;
                            case 4:                 /* switch 3 */
                                var_s1 = 0x4A;
                                if (var_s7 == (*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0x12))) {

                                } else {
                                    var_s1 = 0x49;
                                }
                                break;
                            case 5:                 /* switch 3 */
                                var_s1 = 0xCB;
                                break;
                            }
                            temp_s4_4 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
                            if (temp_s4_4 != -1) {
                                temp_s0_2 = temp_s4_4 * 4;
                                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s0_2), &sp150, -1, *(f32 *)((u8 *)temp_s3_4 + 0x10));
                                func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s0_2), &sp130, -1, *(f32 *)((u8 *)temp_s3_4 + 0x10));
                            }
                            var_s3 = 0;
                            var_s0_2 = 0;
                            do {
                                temp_a0_2 = *(u8 **)((u8 *)var_s5 + 0x18);
                                if (temp_a0_2 != NULL) {
                                    *(f32 *)((u8 *)temp_a0_2 + 0x20) = (f32) (sp170 + (f32) var_s0_2);
                                    *(f32 *)((u8 *)temp_a0_2 + 0x24) = (f32) sp174;
                                    *(f32 *)((u8 *)temp_a0_2 + 0x28) = (f32) sp178;
                                    *(s32 *)((u8 *)temp_a0_2 + 0x50) = 0x3F800000;
                                    *(s32 *)((u8 *)temp_a0_2 + 0x54) = 0x3F800000;
                                    *(s32 *)((u8 *)temp_a0_2 + 0x58) = 0x3F800000;
                                    *(s32 *)((u8 *)temp_a0_2 + 0x5C) = 0x3F800000;
                                    if (temp_s4_4 != -1) {
                                        *(f32 *)((u8 *)temp_a0_2 + 0x20) = (f32) (*(f32 *)((u8 *)temp_a0_2 + 0x20) + sp150);
                                        *(f32 *)((u8 *)temp_a0_2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_a0_2 + 0x24) + sp154);
                                        *(f32 *)((u8 *)temp_a0_2 + 0x28) = (f32) (*(f32 *)((u8 *)temp_a0_2 + 0x28) + sp158);
                                        *(s32 *)((u8 *)temp_a0_2 + 0x50) = sp130;
                                        *(s32 *)((u8 *)temp_a0_2 + 0x54) = (s32) sp134;
                                        *(s32 *)((u8 *)temp_a0_2 + 0x58) = (s32) sp138;
                                        *(s32 *)((u8 *)temp_a0_2 + 0x5C) = (s32) sp13C;
                                    }
                                    func_0022CF70(temp_a0_2, 0x3F800000);
                                }
                                var_s3 += 1;
                                var_s5 += 4;
                                var_s0_2 += 0x12;
                            } while (var_s3 < 8);
                            func_00228410();
                        }
                        goto block_84;
                    }
                } else {
                    goto loop_19;
                }
            }
        } else {
block_84:
            var_s7 += 1;
            spC0 += 0x38;
            if (var_s7 >= spD0) {
                goto block_85;
            }
            goto loop_15;
        }
    } else {
block_85:
        if (spD0 >= 8) {
            temp_s0_3 = *(u8 **)((u8 *)arg0 + 0x74);
            if (temp_s0_3 != NULL) {
                if (*(s16 *)((u8 *)arg0 + 8) == 0) {
                    var_v1_3 = *(s16 *)((u8 *)arg0 + 0x10);
                    var_v0 = *(s16 *)((u8 *)arg0 + 0x12);
                } else {
                    var_v1_3 = *(s16 *)((u8 *)arg0 + 0x14);
                    var_v0 = *(s16 *)((u8 *)arg0 + 0x16);
                }
                var_s1 = (s16) ((s64) ((((s64) ((var_v1_3 - var_v0) << 0x30) >> 0x30) + 0x40) << 0x30) >> 0x30);
                func_002284D0(&sp230);
                func_00228430(0);
                temp_s3_5 = ((s64) ((s64) var_s1 << 0x30) >> 0x30) * 4;
                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_5), &sp110, -1, 0.0f);
                sp230 = sp110;
                sp234 = sp114;
                sp238 = sp118;
                sp23C = sp11C;
                func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_5), &sp240, -1, 0.0f);
                func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s3_5), &sp260, -1, 0.0f);
                func_00228240(&sp230);
                func_0022C060(temp_s0_3, 0x3F800000);
                func_0022CD00(temp_s0_3);
                func_00228410();
            }
            temp_s0_4 = *(u8 **)((u8 *)arg0 + 0x78);
            if (temp_s0_4 != NULL) {
                temp_a0_3 = *(s16 *)((u8 *)arg0 + 4);
                switch (temp_a0_3) {                /* switch 4; irregular */
                    return;
                case 3:                             /* switch 4 */
                case 2:                             /* switch 4 */
                    var_s1 = 0x88;
                default:                            /* switch 4 */
block_103:
                    func_002284D0(&sp230);
                    func_00228430(0);
                    temp_s1 = ((s64) ((s64) var_s1 << 0x30) >> 0x30) * 4;
                    func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s1), &spF0, -1, *(f32 *)((u8 *)temp_s0_4 + 0x10));
                    sp230 = spF0;
                    sp234 = spF4;
                    sp238 = spF8;
                    sp23C = spFC;
                    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s1), &sp240, -1, *(f32 *)((u8 *)temp_s0_4 + 0x10));
                    func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + temp_s1), &sp260, -1, *(f32 *)((u8 *)temp_s0_4 + 0x10));
                    func_00228240(&sp230);
                    func_0022C060(temp_s0_4, 0x3F800000);
                    func_0022CD00(temp_s0_4);
                    func_00228410();
                    break;
                case 4:                             /* switch 4 */
                    var_s1 = 0x92;
                    goto block_103;
                case 5:                             /* switch 4 */
                    var_s1 = 0x91;
                    goto block_103;
                }
            }
        }
    }
}
