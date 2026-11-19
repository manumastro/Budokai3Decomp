/* Draft (not built): func_002C0860 at 0x002C0860, size 0x758, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 302 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x628, original 0x758
 * Original: asm/nonmatchings/story/str_status/func_002C0860.s */

// src/story/str_status.c func_002C0860 size diff=302/394
extern f32 gFrameDelta;
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, s32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022A840(s32, f32 *, s32, f32);
s32 func_0022BF80(s32);
s32 func_0022D860(s32, s32);
extern void func_00228410(void);
void func_002C0860(s32 *arg0) {
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 saved_reg_s2;
    u8 *spA0;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 sp110;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    s32 sp13C;
    s32 sp140;
    s32 sp144;
    s32 sp148;
    s32 sp14C;
    s32 sp150;
    s32 sp154;
    f32 sp160;
    f32 sp164;
    f32 sp168;
    f32 sp16C;
    s32 sp170;
    s32 sp190;
    f32 sp198;
    f32 sp19C;
    f32 sp1A0;
    f32 sp1A8;
    f32 sp1AC;
    s16 sp1B8;
    s16 sp1BA;
    s16 sp1BC;
    s16 *var_s2_2;
    s16 temp_v0_2;
    s16 var_a0_2;
    s32 *var_s0;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s6;
    s32 var_v0;
    s64 temp_v0;
    s64 var_s2;
    u8 temp_a0_3;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 *temp_s0;
    u8 *temp_s0_3;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_s5;

    var_s2 = saved_reg_s2;
    var_v0 = 0x28;
    var_v1 = &sp130;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp130 = *(s32 *)((u8 *)arg0 + 0xC);
    sp134 = *(s32 *)((u8 *)arg0 + 0x10);
    sp138 = *(s32 *)((u8 *)arg0 + 0x14);
    sp13C = *(s32 *)((u8 *)arg0 + 0x18);
    sp140 = *(s32 *)((u8 *)arg0 + 0x1C);
    sp144 = *(s32 *)((u8 *)arg0 + 0x20);
    sp148 = *(s32 *)((u8 *)arg0 + 0x2C);
    sp14C = *(s32 *)((u8 *)arg0 + 0x34);
    sp150 = *(s32 *)((u8 *)arg0 + 0x38);
    sp154 = *(s32 *)((u8 *)arg0 + 0x30);
    temp_a0 = *(s32 *)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp130;
    do {
        var_s3 = *var_s0;
        if (var_s3 != 0) {
            if (var_s3 != *(s32 *)((u8 *)arg0 + 0x34)) {
                if (var_s3 == *(s32 *)((u8 *)arg0 + 0x38)) {
                    goto block_7;
                }
            } else {
block_7:
                if (func_0022BF80(var_s3) == 0xFF) {
                    func_0022D0E0(var_s3, 1);
                    if (var_s3 == *(s32 *)((u8 *)arg0 + 0x34)) {
                        *(s32 *)((u8 *)arg0 + 0x34) = 0;
                    } else {
                        *(s32 *)((u8 *)arg0 + 0x38) = 0;
                    }
                    var_s3 = 0;
                }
            }
            if ((var_s3 == *(s32 *)((u8 *)arg0 + 0x20)) && (func_0022BF80(var_s3) == 0xFF) && !(*(u8 *)((u8 *)arg0 + 0xAA) & 1)) {
                func_0022D0E0(var_s3, 1);
                *(u8 *)((u8 *)arg0 + 0xAA) = (u8) (*(u8 *)((u8 *)arg0 + 0xAA) | 1);
                temp_a0_2 = *(s32 *)((u8 *)arg0 + 4);
                D_00470704 = temp_a0_2;
                D_0047070C = 0x2000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_2, 0x2000);
                D_00470238 = 0;
                var_s3 = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14), 0);
                *(s32 *)((u8 *)arg0 + 0x20) = var_s3;
            }
            if (var_s3 != 0) {
                func_0022C060(var_s3, 1.0f);
                func_0022CD00(var_s3);
            }
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xA);
    temp_a0_3 = *(u8 *)((u8 *)arg0 + 0xAF);
    if (temp_a0_3 != *(u8 *)((u8 *)arg0 + 0xB0)) {
        *(u8 *)((u8 *)arg0 + 0xB0) = temp_a0_3;
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x24);
        if (temp_v1 != NULL) {
            *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) gFrameDelta;
        }
        var_a3 = 0;
        var_a1 = (unsigned char *)(arg0);
        do {
            var_a2 = 0;
            var_a0 = var_a1;
loop_24:
            temp_v1_2 = *(u8 **)((u8 *)var_a0 + 0x3C);
            if (temp_v1_2 != NULL) {
                *(f32 *)((u8 *)temp_v1_2 + 0x10) = (f32) gFrameDelta;
            }
            var_a2 += 1;
            var_a0 += 4;
            if (var_a2 < 3) {
                goto loop_24;
            }
            var_a3 += 1;
            var_a1 += 0xC;
        } while (var_a3 < 8);
    }
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x24);
    if (temp_s0 != NULL) {
        temp_v1_3 = *(u8 *)((u8 *)arg0 + 0xAF);
        switch (temp_v1_3) {                        /* switch 1 */
            return;
        case 0:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
            var_s2 = 0x27;
        default:                                    /* switch 1 */
block_39:
            func_002284D0(&sp160);
            func_00228430(0);
            temp_v0 = (s64) (var_s2 << 0x30) >> 0x30;
            temp_s1 = temp_v0 * 4;
            if (temp_v0 != -1) {
                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &sp110, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
                sp160 = sp110;
                sp164 = sp114;
                sp168 = sp118;
                sp16C = sp11C;
                func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &sp170, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
                func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &sp190, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
            }
            func_00228240(&sp160);
            func_0022C060((s32) temp_s0, 1.0f);
            func_0022CD00((s32) temp_s0);
            func_00228410();
            goto block_42;
        case 1:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
        case 10:                                    /* switch 1 */
            var_s2 = -1;
            goto block_39;
        case 2:                                     /* switch 1 */
            var_s2 = 0x28;
            goto block_39;
        case 3:                                     /* switch 1 */
            var_s2 = 0x29;
            goto block_39;
        case 5:                                     /* switch 1 */
            var_s2 = 0xF;
            goto block_39;
        case 7:                                     /* switch 1 */
        case 9:                                     /* switch 1 */
            var_s2 = 0x11;
            goto block_39;
        case 8:                                     /* switch 1 */
            var_s2 = 0x10;
            goto block_39;
        }
    } else {
block_42:
        temp_s0_2 = *(s32 *)((u8 *)arg0 + 0x28);
        if (temp_s0_2 != 0) {
            func_0022C060(temp_s0_2, 1.0f);
            func_0022CD00(temp_s0_2);
        }
        var_s6 = 0;
        if ((s32) *(u8 *)((u8 *)arg0 + 0xAC) > 0) {
            spA0 = (unsigned char *)(arg0);
loop_46:
            temp_v1_4 = *(u8 *)((u8 *)arg0 + 0xAF);
            switch (temp_v1_4) {                    /* switch 2 */
                return;
            case 10:                                /* switch 2 */
                sp1B8 = 0x48;
                sp1BA = 0x3E;
                var_a0_2 = -1;
block_61:
                sp1BC = var_a0_2;
block_62:
                var_s5 = spA0;
                var_s3_2 = 0;
                var_s2_2 = &sp1B8;
                do {
                    temp_s0_3 = *(u8 **)((u8 *)var_s5 + 0x3C);
                    if (temp_s0_3 != NULL) {
                        func_002284D0(&sp160);
                        func_00228430(0);
                        temp_v0_2 = *var_s2_2;
                        if (temp_v0_2 != -1) {
                            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (temp_v0_2 * 4)), &spF0, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                            sp160 = spF0;
                            sp164 = spF4;
                            sp168 = spF8;
                            sp16C = spFC;
                            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (*var_s2_2 * 4)), &sp170, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                            func_0022A840(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (*var_s2_2 * 4)), &spD0, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                            sp198 = spD0;
                            sp19C = spD4;
                            sp1A0 = spD8;
                            sp1A8 = spDC;
                            sp1AC = spE0;
                        }
                        func_00228240(&sp160);
                        func_002284D0(&sp160);
                        if (var_s3_2 == 2) {
                            temp_s1_2 = ((s64) ((var_s6 + 0x4A) << 0x30) >> 0x30) * 4;
                            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1_2), &spB0, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                            sp160 = spB0;
                            sp164 = spB4;
                            sp168 = spB8;
                            sp16C = spBC;
                            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1_2), &sp170, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                            func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1_2), &sp190, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
                        }
                        func_00228240(&sp160);
                        func_0022C060((s32) temp_s0_3, 1.0f);
                        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 0x30)) + 8) = 1;
                        func_0022CD00((s32) temp_s0_3);
                        func_00228410();
                    }
                    var_s3_2 += 1;
                    var_s5 += 4;
                    var_s2_2 += 2;
                } while (var_s3_2 < 3);
                var_s6 += 1;
                spA0 += 0xC;
                if (var_s6 >= (s32) *(u8 *)((u8 *)arg0 + 0xAC)) {

                } else {
                    goto loop_46;
                }
                break;
            case 11:                                /* switch 2 */
            case 12:                                /* switch 2 */
                var_a0_2 = -1;
                sp1B8 = -1;
                sp1BA = -1;
                goto block_61;
            case 14:                                /* switch 2 */
            case 15:                                /* switch 2 */
                sp1B8 = 0x49;
                sp1BA = 0x3F;
                sp1BC = 0x49;
                goto block_62;
            case 13:                                /* switch 2 */
                var_a0_2 = -1;
                sp1B8 = -1;
                sp1BA = -1;
                if (var_s6 < (*(u8 *)((u8 *)arg0 + 0xB2) - 1)) {

                } else {
                    var_a0_2 = 0x55;
                }
                goto block_61;
            default:                                /* switch 2 */
                var_a0_2 = -1;
                sp1B8 = -1;
                sp1BA = -1;
                goto block_61;
            }
        }
    }
}
