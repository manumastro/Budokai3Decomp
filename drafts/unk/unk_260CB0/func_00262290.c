/* Draft (not built): func_00262290 at 0x00262290, size 0x1A5C, segment unk/unk_260CB0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'saved_reg_s1' mwccps2.exe Compiler: 223: var_s2 = saved_reg_s2; @ 222: var_s1 = saved_reg_s1;
 * Original: asm/nonmatchings/unk/unk_260CB0/func_00262290.s */

// src/unk/unk_260CB0.c func_00262290 cerr diff=-1/0
extern void func_00136E80(s32, FadeColor *, s32, s32, s32);
extern void amDraw_FlushPacket(void);
s32 FlushCache(s32);
u32 func_0012EAE0(s32, s64);
s32 func_00133B50(s32, s32);
s32 func_00145CE0(s32, s32, s32);
s32 func_001484A0(s32);
s32 memcpy(s32 *, s32 *, s32, s32 *);
s32 memset(s32 *, s32, s32, s32 *);
extern s32 D_003858E0;
extern s32 D_003858F4;
extern s32 D_003858F8;
extern s32 D_00452B70;
extern s32 D_00452BA0;
extern s128 D_00452BD0;
extern s32 D_00452BE0;
extern s32 D_00452C30;
extern s32 D_00452CD0;
extern s32 D_00452D10;
extern s128 D_00452DF0;
extern s32 D_00470238;
extern s32 D_004703DC;
extern s8 D_004703F4;
extern s32 D_004707BC;
extern s32 *D_004707C0;
extern s32 *D_004707C4;
extern s16 D_004707C8;
extern s16 D_004707CA;
extern f32 D_004707CC;
extern s32 D_0049302E;
extern s32 D_0058EF50;
extern s32 *D_0058EF5C;
extern s32 D_0058F590;
extern s32 *D_0058F59C;
extern s32 D_0058F5B0;
extern s32 D_0058F5BC;
extern s32 *gModelBlock;
extern void func_00137560(void *, void *);
extern char D_00492FCE[];
extern void amDraw3d_Sync(void);
extern void *gModelUser;
extern void amModel_SetCurrent();
void func_00262290(s32 arg0) {
    s32 spBC;
    u8 *spC0;
    f32 spD0;
    s32 spE0;
    f32 spF0;
    f32 spF4;
    f32 sp100;
    f32 sp104;
    f32 sp110;
    s32 sp120;
    f32 sp130;
    f32 sp134;
    f32 sp140;
    f32 sp144;
    f32 sp150;
    f32 sp154;
    s32 sp160;
    f32 sp164;
    f32 sp170;
    f32 sp174;
    f32 sp180;
    f32 sp184;
    s128 sp190;
    f32 sp19C;
    s32 sp1A0;
    f32 sp1E0;
    f32 sp2C0;
    s32 sp300;
    s32 sp360;
    s32 sp370;
    s32 sp3A0;
    s128 sp3F0;
    f32 sp3FC;
    s32 sp400;
    s32 sp430;
    s32 **temp_a0_2;
    s32 *temp_s3;
    s32 *temp_s7;
    s32 *temp_v0_4;
    s32 *var_a0_3;
    s32 *var_a1_2;
    s32 *var_a2_3;
    s32 *var_a2_4;
    s32 *var_s1;
    s32 *var_s2;
    s32 *var_s2_2;
    s32 *var_s2_3;
    s32 *var_s3;
    s32 *var_v1_2;
    s32 *var_v1_3;
    f32 *var_a1_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f1_6;
    f32 var_f1_7;
    f32 var_f1_8;
    f32 var_f20;
    s128 temp_v0_5;
    s128 temp_v0_6;
    s16 *temp_a0;
    s16 *temp_v1;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v1;
    s64 temp_a1;
    s64 var_v0;
    s8 var_s0_3;
    u32 temp_f0_3;
    u32 temp_hi;
    u32 temp_hi_2;
    u32 temp_hi_3;
    u32 temp_hi_4;
    u32 temp_hi_5;
    u32 temp_hi_6;
    u32 temp_hi_7;
    u32 temp_hi_8;
    u32 var_a0;
    u8 *temp_a1_2;
    u8 *temp_fp;
    u8 *temp_s4;
    u8 *temp_v0_2;

    var_s1 = saved_reg_s1;
    var_s2 = saved_reg_s2;
    *(s128 *)((u8 *)(&sp430) + 0) = (s128) *(s128 *)((u8 *)(&D_00452B70) + 0);
    *(s128 *)((u8 *)(&sp430) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452B70) + 0x10);
    *(s64 *)((u8 *)(&sp430) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00452B70) + 0x20);
    *(f32 *)((u8 *)(&sp430) + 0x28) = (f32) *(f32 *)((u8 *)(&D_00452B70) + 0x28);
    *(s128 *)((u8 *)(&sp400) + 0) = (s128) *(s128 *)((u8 *)(&D_00452BA0) + 0);
    *(s128 *)((u8 *)(&sp400) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452BA0) + 0x10);
    *(s64 *)((u8 *)(&sp400) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00452BA0) + 0x20);
    *(f32 *)((u8 *)(&sp400) + 0x28) = (f32) *(f32 *)((u8 *)(&D_00452BA0) + 0x28);
    if (D_004703F4 == 3) {
        var_f20 = 1.2f;
    } else {
        var_f20 = 1.0f;
    }
    if (arg0 == 0) {
        memset(&D_0058EF50, 0, 0x640, &D_00452BA0);
        D_004707CC = 0.5f;
        D_004707BC = 1;
        D_004707C0 = &D_0058EF50;
        D_004707CA = 0;
        D_0058EF5C = &D_0058F5B0;
        D_0058F59C = &D_0058EF50;
        D_004707C8 = 0;
        D_0058F5BC = 0;
        D_004707C4 = &D_0058EF50;
        *(s32 *)((u8 *)D_004707C0 + 0) = 0x43FA0000;
        *(s32 *)((u8 *)D_004707C0 + 4) = 0x43C80000;
        *(s8 *)((u8 *)D_004707C0 + 0x10) = 0;
        *(s32 *)((u8 *)D_004707C0 + 8) = 0;
        *(s8 *)((u8 *)D_004707C0 + 0x11) = 0x30;
    }
    sp3F0 = D_00452BD0;
    if (arg0 < 0x1E) {
        sp3FC = (f32) arg0 / 30.0f;
        func_00139620(0x900, (struct FadeColor *)(&sp3F0), -1, 0x44, 0);
        return;
    }
    if (arg0 < 0x3C) {
        func_00139620(0x900, (struct FadeColor *)(&sp3F0), -1, 0x44, 0);
        return;
    }
    func_00139620(0x900, (struct FadeColor *)(&sp3F0), -1, 0x44, 0);
    var_a3 = 0;
loop_18:
    var_s4 = 0;
    if (var_a3 < 2) {
        var_a2 = 0;
        temp_v0 = var_a3 * 0xB8;
        var_a0 = *(D_00492FCE + temp_v0) | *(&D_0049302E + temp_v0);
loop_16:
        if (var_a0 != 0) {
            if (var_a0 & 1) {
                var_a2 += 1;
                D_004707CC += 0.04f * var_f20;
            }
            var_a0 = var_a0 >> 1;
            goto loop_16;
        }
        temp_v0_2 = (var_a3 * 4) + sp;
        var_a3 += 1;
        *(s32 *)((u8 *)temp_v0_2 + 0x468) = var_a2;
        goto loop_18;
    }
loop_80:
    if (var_s4 < 2) {
        if (*(s32 *)((u8 *)((var_s4 * 4) + sp) + 0x468) != 0) {
            temp_v0_3 = *(s32 *)((u8 *)(((1 - var_s4) * 4) + sp) + 0x468);
            var_a1 = temp_v0_3 >> 1;
            if (temp_v0_3 < 0) {
                var_a1 = (s32) (temp_v0_3 + 1) >> 1;
            }
            temp_v1 = &(&D_004707C8)[var_s4];
            *temp_v1 += (s64) ((*(s32 *)((u8 *)((var_s4 * 4) + sp) + 0x468) + var_a1) << 0x30) >> 0x30;
        }
        var_v1 = 1;
        if (D_004707BC != 0) {

        } else {
            var_v1 = 0xA;
        }
        temp_a0 = &(&D_004707C8)[var_s4];
        temp_a1 = var_v1 * 0x32;
        temp_v1_2 = *temp_a0;
        if (temp_v1_2 >= temp_a1) {
            *temp_a0 = temp_v1_2 - ((s64) (temp_a1 << 0x30) >> 0x30);
            var_s3 = NULL;
            if (D_004707BC >= 0x50) {
                var_a0_2 = 0;
loop_41:
                if (var_s3 == NULL) {
                    var_s2 = D_0058F59C;
                    var_s1 = &D_0058F590;
loop_39:
                    if (var_s2 != &D_0058F5B0) {
                        if (*(s8 *)((u8 *)var_s2 + 0x11) == var_a0_2) {
                            var_s3 = var_s2;
                        } else {
                            var_s1 = var_s2;
                            var_s2 = *(s32 **)((u8 *)var_s2 + 0xC);
                            goto loop_39;
                        }
                    }
                    var_a0_2 += 1;
                    goto loop_41;
                }
                temp_v0_4 = *(s32 **)((u8 *)var_s3 + 0xC);
                if (temp_v0_4 != &D_0058F5B0) {
                    *(s32 **)((u8 *)var_s1 + 0xC) = temp_v0_4;
loop_46:
                    if (*(s32 **)((u8 *)var_s2 + 0xC) != &D_0058F5B0) {
                        var_s2 = *(s32 **)((u8 *)var_s2 + 0xC);
                        goto loop_46;
                    }
                    *(s32 **)((u8 *)var_s2 + 0xC) = var_s3;
                    *(s32 **)((u8 *)var_s3 + 0xC) = &D_0058F5B0;
                }
                *(s8 *)((u8 *)var_s3 + 0x13) = (s8) *(s8 *)((u8 *)var_s3 + 0x10);
                *(s8 *)((u8 *)var_s3 + 0x10) = 0xB;
                *(s8 *)((u8 *)var_s3 + 0x12) = 0;
                if (((s32) D_004707BC % 80) == 0) {
                    *(s8 *)((u8 *)var_s3 + 0x11) = (s8) (*(s8 *)((u8 *)var_s3 + 0x11) | 8);
                }
                D_004707BC += 1;
            } else {
                temp_v1_3 = D_004707BC * 0x14;
                D_004707BC += 1;
                var_a0_3 = &D_0058F590;
                temp_s3 = &D_0058EF50 + temp_v1_3;
loop_54:
                if (*(s32 **)((u8 *)var_a0_3 + 0xC) != &D_0058F5B0) {
                    var_a0_3 = *(s32 **)((u8 *)var_a0_3 + 0xC);
                    goto loop_54;
                }
                *(s32 **)((u8 *)var_a0_3 + 0xC) = temp_s3;
                *(s32 **)((u8 *)temp_s3 + 0xC) = &D_0058F5B0;
                temp_hi = func_0012EAE0(0x20, temp_a1) % 500U;
                if ((s32) temp_hi >= 0) {
                    var_f1 = (f32) temp_hi;
                } else {
                    var_f1 = 2.0f * (f32) ((temp_hi >> 1) | (temp_hi & 1));
                }
                *(f32 *)((u8 *)temp_s3 + 0) = (f32) (50.0f + var_f1);
                temp_hi_2 = func_0012EAE0(0x20, 0) % 350U;
                if ((s32) temp_hi_2 >= 0) {
                    var_f1_2 = (f32) temp_hi_2;
                } else {
                    var_f1_2 = 2.0f * (f32) ((temp_hi_2 >> 1) | (temp_hi_2 & 1));
                }
                *(f32 *)((u8 *)temp_s3 + 4) = (f32) (100.0f + var_f1_2);
                *(s8 *)((u8 *)temp_s3 + 0x10) = 0;
                *(s32 *)((u8 *)temp_s3 + 8) = 0;
                var_s0 = 5;
                *(s8 *)((u8 *)temp_s3 + 0x11) = (s8) (((func_0012EAE0(0x20, 0) % 3U) + 1) * 0x10);
                *(s8 *)((u8 *)temp_s3 + 0x12) = 0;
                *(s8 *)((u8 *)temp_s3 + 0x13) = 0;
loop_77:
                var_s0 -= 1;
                if (var_s0 < 0) {

                } else {
                    var_v1_2 = D_0058F59C;
                    var_s5 = 0;
loop_75:
                    if (var_v1_2 != &D_0058F5B0) {
                        if ((temp_s3 != var_v1_2) && (fabsf(*(f32 *)((u8 *)temp_s3 + 0) - *(f32 *)((u8 *)var_v1_2 + 0)) < 32.0f) && (fabsf(*(f32 *)((u8 *)temp_s3 + 4) - *(f32 *)((u8 *)var_v1_2 + 4)) < 32.0f)) {
                            var_s5 = 1;
                            temp_hi_3 = func_0012EAE0(0x20, 0) % 500U;
                            if ((s32) temp_hi_3 >= 0) {
                                var_f1_3 = (f32) temp_hi_3;
                            } else {
                                var_f1_3 = 2.0f * (f32) ((temp_hi_3 >> 1) | (temp_hi_3 & 1));
                            }
                            *(f32 *)((u8 *)temp_s3 + 0) = (f32) (50.0f + var_f1_3);
                            temp_hi_4 = func_0012EAE0(0x20, 0) % 350U;
                            if ((s32) temp_hi_4 >= 0) {
                                var_f1_4 = (f32) temp_hi_4;
                            } else {
                                var_f1_4 = 2.0f * (f32) ((temp_hi_4 >> 1) | (temp_hi_4 & 1));
                            }
                            *(f32 *)((u8 *)temp_s3 + 4) = (f32) (100.0f + var_f1_4);
                        } else {
                            var_v1_2 = *(s32 **)((u8 *)var_v1_2 + 0xC);
                            goto loop_75;
                        }
                    }
                    if (var_s5 != 0) {
                        goto loop_77;
                    }
                }
            }
        }
        var_s4 += 1;
        goto loop_80;
    }
    temp_f2 = 0.5f * var_f20;
    temp_f1 = temp_f2 + (0.975f * (D_004707CC - temp_f2));
    D_004707CC = temp_f1;
    if (temp_f1 < temp_f2) {
        D_004707CC = temp_f2;
    } else {
        temp_f0 = 4.0f * var_f20;
        if (!(temp_f1 <= temp_f0)) {
            D_004707CC = temp_f0;
        }
    }
    var_s2_2 = D_0058F59C;
loop_121:
    var_a2_2 = 0;
    if (var_s2_2 != &D_0058F5B0) {
        if (*(s8 *)((u8 *)var_s2_2 + 0x10) != 0xB) {
            *(f32 *)((u8 *)var_s2_2 + 8) = (f32) (*(f32 *)((u8 *)var_s2_2 + 8) + D_004707CC);
            temp_f0_2 = *(f32 *)((u8 *)var_s2_2 + 8);
            temp_f1_2 = (f32) *(s32 *)((u8 *)((*(s8 *)((u8 *)var_s2_2 + 0x10) * 4) + sp) + 0x430);
            if (!(temp_f0_2 < temp_f1_2)) {
                *(f32 *)((u8 *)var_s2_2 + 8) = (f32) (temp_f0_2 - temp_f1_2);
                *(s8 *)((u8 *)var_s2_2 + 0x10) = (s8) *(s32 *)((u8 *)((*(s8 *)((u8 *)var_s2_2 + 0x10) * 4) + sp) + 0x400);
            }
        } else {
            *(s8 *)((u8 *)var_s2_2 + 0x12) = M2C_BITWISE(s8, ((f32) *(s8 *)((u8 *)var_s2_2 + 0x12) + (1.0f + D_004707CC)));
            if (*(s8 *)((u8 *)var_s2_2 + 0x12) >= 0x3D) {
                temp_hi_5 = func_0012EAE0(0x20, 0) % 500U;
                if ((s32) temp_hi_5 >= 0) {
                    var_f1_5 = (f32) temp_hi_5;
                } else {
                    var_f1_5 = 2.0f * (f32) ((temp_hi_5 >> 1) | (temp_hi_5 & 1));
                }
                *(f32 *)((u8 *)var_s2_2 + 0) = (f32) (50.0f + var_f1_5);
                temp_hi_6 = func_0012EAE0(0x20, 0) % 350U;
                if ((s32) temp_hi_6 >= 0) {
                    var_f1_6 = (f32) temp_hi_6;
                } else {
                    var_f1_6 = 2.0f * (f32) ((temp_hi_6 >> 1) | (temp_hi_6 & 1));
                }
                *(f32 *)((u8 *)var_s2_2 + 4) = (f32) (100.0f + var_f1_6);
                *(s8 *)((u8 *)var_s2_2 + 0x10) = 0;
                *(f32 *)((u8 *)var_s2_2 + 8) = 0.0f;
                var_v0 = 1;
                if (*(s8 *)((u8 *)var_s2_2 + 0x11) & 8) {

                } else {
                    var_v0 = 0;
                }
                *(s8 *)((u8 *)var_s2_2 + 0x11) = (s8) (*(s8 *)((u8 *)var_s2_2 + 0x11) | ((s64) (var_v0 << 0x38) >> 0x38));
                *(s8 *)((u8 *)var_s2_2 + 0x11) = (s8) (*(s8 *)((u8 *)var_s2_2 + 0x11) & 0xF);
                var_s1_2 = 5;
                *(s8 *)((u8 *)var_s2_2 + 0x11) = (s8) (*(s8 *)((u8 *)var_s2_2 + 0x11) | ((s64) ((((func_0012EAE0(0x20, 0) % 3U) + 1) * 0x10) << 0x38) >> 0x38));
                *(s8 *)((u8 *)var_s2_2 + 0x12) = 0;
                *(s8 *)((u8 *)var_s2_2 + 0x13) = 0;
loop_118:
                var_s1_2 -= 1;
                if (var_s1_2 < 0) {

                } else {
                    var_v1_3 = D_0058F59C;
                    var_s0_2 = 0;
loop_116:
                    if (var_v1_3 != &D_0058F5B0) {
                        if ((var_s2_2 != var_v1_3) && (fabsf(*(f32 *)((u8 *)var_s2_2 + 0) - *(f32 *)((u8 *)var_v1_3 + 0)) < 32.0f) && (fabsf(*(f32 *)((u8 *)var_s2_2 + 4) - *(f32 *)((u8 *)var_v1_3 + 4)) < 32.0f)) {
                            var_s0_2 = 1;
                            temp_hi_7 = func_0012EAE0(0x20, 0) % 500U;
                            if ((s32) temp_hi_7 >= 0) {
                                var_f1_7 = (f32) temp_hi_7;
                            } else {
                                var_f1_7 = 2.0f * (f32) ((temp_hi_7 >> 1) | (temp_hi_7 & 1));
                            }
                            *(f32 *)((u8 *)var_s2_2 + 0) = (f32) (50.0f + var_f1_7);
                            temp_hi_8 = func_0012EAE0(0x20, 0) % 350U;
                            if ((s32) temp_hi_8 >= 0) {
                                var_f1_8 = (f32) temp_hi_8;
                            } else {
                                var_f1_8 = 2.0f * (f32) ((temp_hi_8 >> 1) | (temp_hi_8 & 1));
                            }
                            *(f32 *)((u8 *)var_s2_2 + 4) = (f32) (100.0f + var_f1_8);
                        } else {
                            var_v1_3 = *(s32 **)((u8 *)var_v1_3 + 0xC);
                            goto loop_116;
                        }
                    }
                    if (var_s0_2 != 0) {
                        goto loop_118;
                    }
                }
            }
        }
        var_s2_2 = *(s32 **)((u8 *)var_s2_2 + 0xC);
        goto loop_121;
    }
loop_128:
    if (var_a2_2 < 2) {
        temp_a0_2 = &(&D_004707C0)[var_a2_2];
        if (*temp_a0_2 != NULL) {
            (&D_004707C8)[var_a2_2] = 0;
            if (*(s8 *)((u8 *)(*temp_a0_2) + 0x10) >= 7) {
                *temp_a0_2 = NULL;
            }
        }
        var_a2_2 += 1;
        goto loop_128;
    }
    var_a2_3 = &D_00452C30;
    var_a1_2 = &sp300;
    var_a0_4 = 5;
    *(s128 *)((u8 *)(&sp3A0) + 0) = (s128) *(s128 *)((u8 *)(&D_00452BE0) + 0);
    *(s128 *)((u8 *)(&sp3A0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452BE0) + 0x10);
    *(s128 *)((u8 *)(&sp3A0) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00452BE0) + 0x20);
    *(s128 *)((u8 *)(&sp3A0) + 0x30) = (s128) *(s128 *)((u8 *)(&D_00452BE0) + 0x30);
    *(s128 *)((u8 *)(&sp3A0) + 0x40) = (s128) *(s128 *)((u8 *)(&D_00452BE0) + 0x40);
    do {
        var_a0_4 -= 1;
        temp_v0_5 = *(s128 *)((u8 *)var_a2_3 + 0x10);
        *(s128 *)((u8 *)var_a1_2 + 0) = (s128) *(s128 *)((u8 *)var_a2_3 + 0);
        var_a2_3 += 0x20;
        *(s128 *)((u8 *)var_a1_2 + 0x10) = temp_v0_5;
        var_a1_2 += 0x20;
    } while (var_a0_4 > 0);
    var_a2_4 = &D_00452D10;
    var_a1_3 = &sp1E0;
    var_a0_5 = 7;
    *(s128 *)((u8 *)(&sp2C0) + 0) = (s128) *(s128 *)((u8 *)(&D_00452CD0) + 0);
    *(s128 *)((u8 *)(&sp2C0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452CD0) + 0x10);
    *(s128 *)((u8 *)(&sp2C0) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00452CD0) + 0x20);
    *(s128 *)((u8 *)(&sp2C0) + 0x30) = (s128) *(s128 *)((u8 *)(&D_00452CD0) + 0x30);
    do {
        var_a0_5 -= 1;
        temp_v0_6 = *(s128 *)((u8 *)var_a2_4 + 0x10);
        *(s128 *)((u8 *)var_a1_3 + 0) = (s128) *(s128 *)((u8 *)var_a2_4 + 0);
        var_a2_4 += 0x20;
        *(s128 *)((u8 *)var_a1_3 + 0x10) = temp_v0_6;
        var_a1_3 += 0x20;
    } while (var_a0_5 > 0);
    temp_s7 = gModelBlock;
    temp_fp = gModelUser;
    temp_a1_2 = (u8 *)(D_003858F4 + &D_003858E0);
    temp_s4 = (u8 *)(&D_003858E0 + *(s32 *)((u8 *)(&D_003858E0 + *(temp_a1_2 + (D_003858F8 * -4))) + 0x24));
    spC0 = (u8 *)(&D_003858E0 + *(s32 *)((u8 *)(&D_003858E0 + *(temp_a1_2 + ((2 - D_003858F8) * 4))) + 0x24));
    memcpy(&sp1A0, temp_s4 + 0x20, 0x40, &D_003858E0);
    D_00470238 = 1;
    amModel_SetCurrent(&D_003858E0, (u8 *)0xFFEE0000);
    func_00133B50(0, 0);
    spBC = amGs_SetReg32(0, 0x5000D);
    var_s6 = 0;
    var_s3_2 = 0;
loop_174:
    if (var_s3_2 < 2) {
        var_s2_3 = D_0058F59C;
loop_167:
        if (var_s2_3 != &D_0058F5B0) {
            if ((*(s8 *)((u8 *)var_s2_3 + 0x11) & 1) == var_s3_2) {
                sp190 = D_00452DF0;
                if (var_s6 != 0) {
                    if (*(s8 *)((u8 *)var_s2_3 + 0x10) == 0xB) {
                        sp19C = 1.0f - ((f32) *(s8 *)((u8 *)var_s2_3 + 0x12) / 60.0f);
                        var_s0_3 = *(s8 *)((u8 *)var_s2_3 + 0x13);
                        goto block_141;
                    }
                } else {
                    var_s0_3 = *(s8 *)((u8 *)var_s2_3 + 0x10);
block_141:
                    var_s1_3 = D_004703DC;
                    if (var_s1_3 & 1) {
                        var_s1_3 = func_001484A0(((s8) *(s8 *)((u8 *)var_s2_3 + 0x11) >> 3) | 1);
                    }
                    switch (var_s0_3) {             /* switch 1 */
                    case 0:                         /* switch 1 */
                        temp_f0_3 = *(u32 *)((u8 *)var_s2_3 + 8);
                        temp_s0 = (*(u32 *)((u8 *)var_s2_3 + 8) / 40) + (temp_f0_3 >> 0x1F);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        sp170 = sp2C0;
                        sp180 = sp2C8;
                        temp_f0_4 = M2C_BITWISE(f32, *(u32 *)((u8 *)var_s2_3 + 8)) / (f32) sp430;
                        temp_f4 = (-2.0f * (f32) ((((s32) temp_f0_3 % 10) / 5) + ((u32) ((s32) temp_f0_3 % 10) >> 0x1F))) - 8.0f;
                        sp174 = temp_f4 + (sp2C4 * temp_f0_4);
                        sp184 = sp2CC + temp_f4;
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($a1) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($a1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        sp150 = sp1E0;
                        sp160 = sp1F0;
                        sp154 = sp1E4;
                        sp164 = sp1E4 + (temp_f0_4 * (sp1F4 - sp1E4));
                        func_00136E80(0x40001920, (struct FadeColor *)(&sp190), 0, 0x44);
                        func_00137560(&sp170, &sp150);
                        func_00137560(&sp180, &sp160);
                        amDraw_FlushPacket();
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        sp170 = *(f32 *)((u8 *)((temp_s0 * 0x10) + sp) + 0x3A0);
                        sp174 = *(f32 *)((u8 *)((temp_s0 * 0x10) + sp) + 0x3A4);
                        sp180 = *(f32 *)((u8 *)((temp_s0 * 0x10) + sp) + 0x3A8);
                        sp184 = *(f32 *)((u8 *)((temp_s0 * 0x10) + sp) + 0x3AC);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        if (((((s32) temp_f0_3 % 10) / 5) + ((u32) ((s32) temp_f0_3 % 10) >> 0x1F)) != 0) {
                            var_f0 = 1.05f;
                        } else {
                            var_f0 = 1.0f;
                        }
                        switch (temp_s0) {          /* switch 2; irregular */
                        case 4:                     /* switch 2 */
                            break;
                        case 3:                     /* switch 2 */
                        case 2:                     /* switch 2 */
                        case 1:                     /* switch 2 */
                        case 0:                     /* switch 2 */
                            sp170 *= var_f0;
                            sp180 *= var_f0;
                            break;
                        }
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        func_00136E80(0x40001920, (struct FadeColor *)(&sp190), 1, 0x44);
                        func_00137560(&sp170, &sp150);
                        func_00137560(&sp180, &sp160);
                        amDraw_FlushPacket();
                        break;
                    case 1:                         /* switch 1 */
                    case 2:                         /* switch 1 */
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                        sp130 = *(f32 *)((u8 *)((var_s0_3 * 0x10) + sp) + 0x2C0);
                        sp134 = *(f32 *)((u8 *)((var_s0_3 * 0x10) + sp) + 0x2C4);
                        sp140 = *(f32 *)((u8 *)((var_s0_3 * 0x10) + sp) + 0x2C8);
                        sp144 = *(f32 *)((u8 *)((var_s0_3 * 0x10) + sp) + 0x2CC);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($a2) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($a2) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_00136E80(0x40001920, (struct FadeColor *)(&sp190), 0, 0x44);
                        func_00137560(&sp130, &sp110);
                        func_00137560(&sp140, &sp120);
                        amDraw_FlushPacket();
                        sp130 = sp3D0;
                        sp134 = sp3D4;
                        sp140 = sp3D8;
                        sp144 = sp3DC;
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_00136E80(0x40001920, (struct FadeColor *)(&sp190), 1, 0x44);
                        func_00137560(&sp130, &sp110);
                        func_00137560(&sp140, &sp120);
                        amDraw_FlushPacket();
                        break;
                    case 3:                         /* switch 1 */
                    case 4:                         /* switch 1 */
                    case 5:                         /* switch 1 */
                    case 6:                         /* switch 1 */
                    case 7:                         /* switch 1 */
                    case 8:                         /* switch 1 */
                    case 9:                         /* switch 1 */
                    case 10:                        /* switch 1 */
                        temp_v1_4 = var_s0_3 - 3;
                        if (temp_v1_4 < 0) {
                            if (temp_v1_4 & 3) {

                            }
                        }
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
                        spF0 = sp2F0;
                        spF4 = sp2F4;
                        sp100 = sp2F8;
                        sp104 = sp2FC;
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v1) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v1) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_00136E80(0x40001920, (struct FadeColor *)(&sp190), 0, 0x44);
                        func_00137560(&spF0, &spD0);
                        func_00137560(&sp100, &spE0);
                        amDraw_FlushPacket();
                        spF0 = sp3D0;
                        spF4 = sp3D4;
                        sp100 = sp3D8;
                        sp104 = sp3DC;
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
                        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
                        M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
                        M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_00136E80(0x40001920, (struct FadeColor *)(&sp190), 1, 0x44);
                        func_00137560(&spF0, &spD0);
                        func_00137560(&sp100, &spE0);
                        amDraw_FlushPacket();
                        break;
                    }
                    func_001484A0(var_s1_3);
                }
            }
            var_s2_3 = *(s32 **)((u8 *)var_s2_3 + 0xC);
            goto loop_167;
        }
        amDraw3d_Sync();
        if (var_s3_2 == 0) {
            memcpy(temp_s4 + 0x20, spC0 + 0x20, 0x40);
            FlushCache(0);
            func_00145CE0(1, 0, 0x2000);
        } else {
            memcpy(temp_s4 + 0x20, &sp1A0, 0x40);
            FlushCache(0);
            func_00145CE0(1, 0, 0x2000);
            if (var_s6 == 0) {
                var_s6 = 1;
                var_s3_2 = -1;
                func_00133780(0, 1);
            }
        }
        var_s3_2 += 1;
        goto loop_174;
    }
    func_00133780(0, 0);
    memcpy(temp_s4 + 0x20, &sp1A0, 0x40);
    FlushCache(0);
    func_00145CE0(1, 0, 0x2000);
    amGs_SetReg32(0, spBC);
    amModel_SetCurrent(temp_s7, temp_fp);
}
