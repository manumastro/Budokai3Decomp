/* Draft (not built): func_0030B2E0 at 0x0030B2E0, size 0xA4C, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 389 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA78, original 0xA4C
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030B2E0.s */

// src/unk/unk_30B130.c func_0030B2E0 size diff=389/670
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *, s64, s64, s8);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern s32 D_004590A0;
extern s64 D_004701D0;
extern void *gArenaRegCharList;
extern void func_00228410(void);
extern void func_0022CD00(void *);
extern void func_0022CF70();
void func_0030B2E0(Part30C *arg0) {
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    u8 sp[0x400];
    s32 saved_reg_s1;
    s64 *spB0;
    u8 **spC0;
    u8 *spD0;
    s32 spE0;
    s32 spF0;
    f32 sp100;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    s32 sp12C;
    u8 sp130;
    u8 sp131;
    u8 sp132;
    u8 sp133;
    f32 sp140;
    f32 sp144;
    f32 sp148;
    f32 sp160;
    f32 sp164;
    f32 sp168;
    f32 sp180;
    f32 sp184;
    f32 sp188;
    f32 sp18C;
    u8 *sp1A0;
    s32 sp1A4;
    s32 sp1A8;
    s32 sp1AC;
    u8 *sp1B0;
    s32 sp1B4;
    s32 sp1B8;
    s32 sp1BC;
    f32 sp1C0;
    f32 sp1C4;
    f32 sp1C8;
    f32 sp1CC;
    f32 sp1D0;
    f32 sp1D4;
    f32 sp1D8;
    s32 sp1F0;
    s32 sp218;
    s64 sp228;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f20;
    f32 var_f20_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a1;
    s16 temp_s5;
    s16 temp_v1_2;
    s16 var_s1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 var_s0;
    s32 var_s4;
    s32 var_s6;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    s32 var_v1_2;
    s64 temp_a1_2;
    s64 temp_a2;
    s64 temp_s1;
    s64 temp_s5_4;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 var_v0;
    s64 var_v0_2;
    s8 temp_a3;
    u8 **var_a0;
    u8 **var_a0_2;
    u8 **var_a0_3;
    u8 *temp_a0_3;
    u8 *temp_s0_3;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_v1;
    u8 *var_s7;
    u8 *var_t0;

    var_s1 = saved_reg_s1;
    temp_s2 = gArenaRegCharList;
    sp228 = D_004701D0;
    *(s64 *)((u8 *)(&sp218) + 0) = (s64) *(s64 *)((u8 *)(&D_004590A0) + 0);
    *(f32 *)((u8 *)(&sp218) + 8) = (f32) *(f32 *)((u8 *)(&D_004590A0) + 8);
    temp_a1 = *(s16 *)((u8 *)arg0 + 4);
    if (temp_a1 != *(s16 *)((u8 *)arg0 + 6)) {
        *(s16 *)((u8 *)arg0 + 6) = temp_a1;
        var_t2 = 0;
        var_t0 = (unsigned char *)(arg0);
        do {
            var_a0 = &sp1B0;
            var_v1 = 0x10;
            if (var_a0 != NULL) {
                do {
                    *var_a0 = 0;
                    var_v1 -= 1;
                    var_a0 += 1;
                } while (var_v1 != 0);
            }
            var_t1 = 0;
            var_a0_2 = &sp1B0;
            sp1B0 = *(u8 **)((u8 *)var_t0 + 0x6C);
            sp1B4 = *(s32 *)((u8 *)var_t0 + 0x70);
            sp1B8 = *(s32 *)((u8 *)var_t0 + 0x74);
            sp1BC = *(s32 *)((u8 *)var_t0 + 0x78);
loop_5:
            temp_v1 = *var_a0_2;
            if (temp_v1 != NULL) {
                *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) gFrameDelta;
            }
            var_t1 += 1;
            var_a0_2 += 4;
            if (var_t1 < 4) {
                goto loop_5;
            }
            var_t2 += 1;
            var_t0 += 0x34;
        } while (var_t2 < 8);
    }
    temp_a0 = *(s16 *)((u8 *)arg0 + 0x16);
    if ((temp_a0 >> 2) < 8) {
        *(s16 *)((u8 *)arg0 + 0x16) = (s16) (temp_a0 + 1);
    }
    spF0 = (s16) *(s16 *)((u8 *)arg0 + 0x16) >> 2;
    if (*(s16 *)((u8 *)arg0 + 4) == 3) {
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x18);
        if (!(temp_f1 <= 0.4f)) {
            *(f32 *)((u8 *)arg0 + 0x18) = (f32) (temp_f1 - 0.05f);
        } else {
            *(f32 *)((u8 *)arg0 + 0x18) = 0.4f;
        }
    } else {
        temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x18);
        if (temp_f1_2 < 1.0f) {
            *(f32 *)((u8 *)arg0 + 0x18) = (f32) (temp_f1_2 + 0.05f);
        } else {
            *(f32 *)((u8 *)arg0 + 0x18) = 1.0f;
        }
    }
    spE0 = 0;
    if (spF0 > 0) {
        spD0 = (unsigned char *)(arg0);
loop_21:
        var_a0_3 = &sp1A0;
        var_s7 = spD0 + 0x68;
        var_v1_2 = 0x10;
        if (var_a0_3 != NULL) {
            do {
                *var_a0_3 = 0;
                var_v1_2 -= 1;
                var_a0_3 += 1;
            } while (var_v1_2 != 0);
        }
        sp1A0 = *(u8 **)((u8 *)var_s7 + 4);
        sp1A4 = *(s32 *)((u8 *)var_s7 + 8);
        sp1A8 = *(s32 *)((u8 *)var_s7 + 0xC);
        sp1AC = *(s32 *)((u8 *)var_s7 + 0x10);
        if (*(s8 *)((u8 *)spD0 + 0x68) != -1) {
            if (*(s8 *)((u8 *)arg0 + 0xB) == 0) {
                var_v0 = spE0 + 0x36;
            } else {
                var_v0 = spE0 + 0xAA;
            }
            var_s6 = 0;
            temp_s0 = ((s64) (var_v0 << 0x30) >> 0x30) * 4;
            spC0 = &sp1A0;
            spB0 = &sp228;
loop_28:
            temp_s4 = *spC0;
            temp_s5 = *spB0;
            if (temp_s4 != NULL) {
                func_002284D0(&sp1C0, 0, 0, 0);
                func_00228430(0);
                temp_v0 = (s64) ((s64) temp_s5 << 0x30) >> 0x30;
                if (temp_v0 != -1) {
                    temp_s5_2 = temp_v0 * 4;
                    func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s5_2), &sp180, -1, 0.0f);
                    sp1C0 = sp180;
                    sp1C4 = sp184;
                    sp1C8 = sp188;
                    sp1CC = sp18C;
                    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s5_2), &sp1D0, -1, 0.0f);
                    func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s5_2), &sp1F0, -1, 0.0f);
                }
                func_00228240(&sp1C0);
                func_002284D0(&sp1C0, 0, 0, 0);
                func_00229800(*(s32 *)(temp_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)), &sp180, -1, 0.0f);
                sp1C0 = sp180;
                sp1C4 = sp184;
                sp1C8 = sp188;
                sp1CC = sp18C;
                func_00228AC0(*(s32 *)(temp_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)), &sp1D0, -1, 0.0f);
                func_002285A0(*(s32 *)(temp_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)), &sp1F0, -1, 0.0f);
                func_00228240(&sp1C0);
                temp_a0_2 = *(s16 *)((u8 *)arg0 + 4);
                var_f20 = 1.0f;
                if (temp_a0_2 != 4) {
                    if (temp_a0_2 != 3) {
                        if (temp_a0_2 != 2) {
                            if (temp_a0_2 != 1) {
                                if (temp_a0_2 != 0) {
                                    goto block_48;
                                }
                                return;
                            }
                            var_s1 = *(s16 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0xB) * 6) + sp) + 0x218);
                            goto block_48;
                        }
                        var_s1 = -1;
                        goto block_48;
                    }
                    if (spE0 == (*(s16 *)((u8 *)arg0 + 0x12) - *(s16 *)((u8 *)arg0 + 0x14))) {
                        var_s1 = *(s16 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0xB) * 6) + sp) + 0x21A);
                    } else {
                        var_f20 = *(f32 *)((u8 *)arg0 + 0x18);
                        var_s1 = -1;
                    }
                    goto block_48;
                }
                var_s1 = *(s16 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0xB) * 6) + sp) + 0x21C);
block_48:
                func_002284D0(&sp1C0, 0, 0, 0);
                temp_v0_2 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
                temp_s5_3 = temp_v0_2 * 4;
                if (temp_v0_2 != -1) {
                    func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s5_3), &sp180, -1, *(f32 *)((u8 *)temp_s4 + 0x10));
                    sp1C0 = sp180;
                    sp1C4 = sp184;
                    sp1C8 = sp188;
                    sp1CC = sp18C;
                    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s5_3), &sp1D0, -1, *(f32 *)((u8 *)temp_s4 + 0x10));
                    func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s5_3), &sp1F0, -1, *(f32 *)((u8 *)temp_s4 + 0x10));
                }
                func_00228240(&sp1C0);
                func_002284D0(&sp1C0, 0, 0, 0);
                sp1D8 = var_f20;
                sp1D4 = var_f20;
                sp1D0 = var_f20;
                func_00228240(&sp1C0);
                func_0022C060(temp_s4, 0x3F800000);
                func_0022CD00(temp_s4);
                func_00228410();
                goto block_51;
            }
block_51:
            var_s6 += 1;
            spC0 += 4;
            spB0 += 2;
            if (var_s6 >= 4) {
                temp_s4_2 = *(u8 **)((u8 *)var_s7 + 4);
                func_002284D0(&sp1C0, 0, 0, 0);
                func_00228430(0);
                if (*(s8 *)((u8 *)arg0 + 0xB) != 0) {
                    var_v0_2 = spE0 + 0xBD;
                } else {
                    var_v0_2 = spE0 + 0x89;
                }
                var_s1 = (s16) ((s64) (var_v0_2 << 0x30) >> 0x30);
                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + (var_s1 * 4)), &sp160, -1, 0.0f);
                temp_v1_2 = *(s16 *)((u8 *)arg0 + 4);
                var_f20_2 = 1.0f;
                if (temp_v1_2 != 4) {
                    if (temp_v1_2 != 3) {
                        if (temp_v1_2 != 2) {
                            if (temp_v1_2 != 1) {

                            } else {
                                var_s1 = *(s16 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0xB) * 6) + sp) + 0x218);
                            }
                        } else {
                            var_s1 = -1;
                        }
                    } else if (spE0 == (*(s16 *)((u8 *)arg0 + 0x12) - *(s16 *)((u8 *)arg0 + 0x14))) {
                        var_s1 = *(s16 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0xB) * 6) + sp) + 0x21A);
                    } else {
                        var_f20_2 = *(f32 *)((u8 *)arg0 + 0x18);
                        var_s1 = -1;
                    }
                } else {
                    var_s1 = *(s16 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0xB) * 6) + sp) + 0x21C);
                }
                temp_s5_4 = (s64) ((s64) var_s1 << 0x30) >> 0x30;
                if (temp_s5_4 != -1) {
                    temp_s0_2 = temp_s5_4 * 4;
                    func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s0_2), &sp140, -1, *(f32 *)((u8 *)temp_s4_2 + 0x10));
                    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s0_2), &sp120, -1, *(f32 *)((u8 *)temp_s4_2 + 0x10));
                }
                var_s4 = 0;
                var_s0 = 0;
                do {
                    temp_a0_3 = *(u8 **)((u8 *)var_s7 + 0x14);
                    if (temp_a0_3 != NULL) {
                        *(f32 *)((u8 *)temp_a0_3 + 0x20) = (f32) (sp160 + (f32) var_s0);
                        *(f32 *)((u8 *)temp_a0_3 + 0x24) = (f32) sp164;
                        *(f32 *)((u8 *)temp_a0_3 + 0x28) = (f32) sp168;
                        *(f32 *)((u8 *)temp_a0_3 + 0x50) = var_f20_2;
                        *(f32 *)((u8 *)temp_a0_3 + 0x54) = var_f20_2;
                        *(f32 *)((u8 *)temp_a0_3 + 0x58) = var_f20_2;
                        *(s32 *)((u8 *)temp_a0_3 + 0x5C) = 0x3F800000;
                        if (temp_s5_4 != -1) {
                            *(f32 *)((u8 *)temp_a0_3 + 0x20) = (f32) (*(f32 *)((u8 *)temp_a0_3 + 0x20) + sp140);
                            *(f32 *)((u8 *)temp_a0_3 + 0x24) = (f32) (*(f32 *)((u8 *)temp_a0_3 + 0x24) + sp144);
                            *(f32 *)((u8 *)temp_a0_3 + 0x28) = (f32) (*(f32 *)((u8 *)temp_a0_3 + 0x28) + sp148);
                            *(f32 *)((u8 *)temp_a0_3 + 0x50) = sp120;
                            *(f32 *)((u8 *)temp_a0_3 + 0x54) = (f32) sp124;
                            *(f32 *)((u8 *)temp_a0_3 + 0x58) = (f32) sp128;
                            *(s32 *)((u8 *)temp_a0_3 + 0x5C) = (s32) sp12C;
                            *(f32 *)((u8 *)temp_a0_3 + 0x50) = sp120;
                            *(f32 *)((u8 *)temp_a0_3 + 0x54) = (f32) sp124;
                            *(f32 *)((u8 *)temp_a0_3 + 0x58) = (f32) sp128;
                            *(s32 *)((u8 *)temp_a0_3 + 0x5C) = (s32) sp12C;
                            *(u8 *)((u8 *)temp_a0_3 + 0x1C) = (u8) sp130;
                            *(u8 *)((u8 *)temp_a0_3 + 0x1D) = (u8) sp131;
                            *(u8 *)((u8 *)temp_a0_3 + 0x1E) = (u8) sp132;
                            *(u8 *)((u8 *)temp_a0_3 + 0x1F) = (u8) sp133;
                        }
                        func_0022CF70(temp_a0_3, 0x3F800000);
                    }
                    var_s4 += 1;
                    var_s7 += 4;
                    var_s0 += 0x12;
                } while (var_s4 < 8);
                func_00228410();
                goto block_79;
            }
            goto loop_28;
        }
block_79:
        spD0 += 0x34;
        spE0 += 1;
        if (spE0 >= spF0) {
            goto block_81;
        }
        goto loop_21;
    }
block_81:
    if (spF0 >= 8) {
        temp_s0_3 = *(u8 **)((u8 *)arg0 + 0x64);
        if (temp_s0_3 != NULL) {
            temp_a3 = *(s8 *)((u8 *)arg0 + 0xB);
            temp_a2 = (temp_a3 != 0) ? 0xB2 : 0x40;
            temp_a1_2 = (s64) (temp_a2 << 0x30) >> 0x30;
            temp_s1 = (s64) ((temp_a1_2 + ((s64) ((*(s16 *)((u8 *)arg0 + 0x12) - *(s16 *)((u8 *)arg0 + 0x14)) << 0x30) >> 0x30)) << 0x30) >> 0x30;
            func_002284D0(&sp1C0, temp_a1_2, temp_a2, temp_a3);
            func_00228430(0);
            temp_s1_2 = ((s64) (temp_s1 << 0x30) >> 0x30) * 4;
            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s1_2), &sp100, -1, 0.0f);
            sp1C0 = sp100;
            sp1C4 = sp104;
            sp1C8 = sp108;
            sp1CC = sp10C;
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s1_2), &sp1D0, -1, 0.0f);
            func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + temp_s1_2), &sp1F0, -1, 0.0f);
            func_00228240(&sp1C0);
            func_0022C060(temp_s0_3, 0x3F800000);
            func_0022CD00(temp_s0_3);
            func_00228410();
        }
    }
}
