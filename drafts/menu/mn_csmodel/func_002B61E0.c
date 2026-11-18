/* Draft (not built): func_002B61E0 at 0x002B61E0, size 0xA48, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 373 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA74, original 0xA48
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B61E0.s */

// src/menu/mn_csmodel.c func_002B61E0 size diff=373/669
s32 amCamera_SetScreen(void *, void *, s32);
s32 amDbg_Printf(s32, s32, s32 *, void *);
void *func_001214F8(f32);
s32 func_00131D00(void *, s32, s32, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_0013B110(s32);
s32 func_0013B500(void *);
s32 func_0013B750(void *);
s32 func_0013BC00(f32, f32, f32);
s32 func_0013BC30(f32, f32, f32);
s32 func_0029D390(s32 *);
f32 func_0029D550(f32 *, s32 *, s32);
s32 func_0029D740(s32 *);
s32 func_0029DB00(s32, s32);
s32 func_0029DD30(s32, s32);
extern s32 D_004580B0;
extern s32 D_004580B4;
extern s32 D_004580B8;
extern s32 D_004580BC;
extern s32 D_004580C0;
extern s32 D_004580C4;
extern s32 D_004580C8;
extern s32 D_00458A50;
extern s32 D_00458A54;
extern s32 D_00458A58;
extern s32 D_00458A5C;
extern s32 D_00458A60;
extern s32 D_00458A64;
extern s32 D_00458A68;
extern s32 D_0046EC28;
extern s32 D_0046EC40;
extern s32 D_0046EC60;
extern s32 D_0046EC80;
extern s32 D_0046ECA0;
extern s32 D_0046ECC0;
extern s32 D_0046ECE0;
extern s32 D_0046ED00;
extern f32 D_0046FD80;
extern void *D_004702A4;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern char D_003F0800[];
extern void func_0029D8B0(int, int);
extern void func_0013B620(void *);
extern void func_0013AFA0(void *);
extern void func_0029D8E0(void);
void func_002B61E0(u8 *arg0) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    f32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    f32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    s32 spEC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 var_f12;
    f32 var_f1;
    f32 var_f2;
    s16 temp_a1;
    s32 temp_t0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    u8 var_v0_10;
    u8 var_v0_11;
    u8 var_v0_12;
    u8 var_v0_13;
    u8 var_v0_14;
    u8 var_v0_15;
    u8 var_v0_17;
    u8 var_v0_3;
    u8 var_v0_4;
    u8 var_v0_5;
    u8 var_v0_6;
    u8 var_v0_7;
    u8 var_v0_8;
    u8 var_v0_9;
    u8 *var_s1;
    u8 *var_v0_16;

    var_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f3 = *(f32 *)((u8 *)var_s1 + 0xC0);
    var_s0 = *(u16 *)((u8 *)var_s1 + 0xB2) & 1;
    if (temp_f3 != 0.0f) {
        temp_f0 = temp_f3 - (0.125f * gFrameDelta);
        *(f32 *)((u8 *)var_s1 + 0xC0) = temp_f0;
        if (temp_f0 < 0.0f) {
            *(f32 *)((u8 *)var_s1 + 0xC0) = 0.0f;
        }
    }
    temp_v1 = *(u16 *)((u8 *)var_s1 + 0xB0);
    switch (temp_v1) {                              /* irregular */
    case 3:
        *(f32 *)((u8 *)var_s1 + 0xBC) = 0.0f;
        break;
    case 2:
        temp_f3_2 = *(f32 *)((u8 *)var_s1 + 0xBC);
        var_f2 = 0.0f;
        if (!(temp_f3_2 <= 0.0f)) {
            temp_f0_2 = temp_f3_2 - (2.0f * gFrameDelta);
            *(f32 *)((u8 *)var_s1 + 0xBC) = temp_f0_2;
            if (temp_f0_2 < 0.0f) {
block_12:
                *(f32 *)((u8 *)var_s1 + 0xBC) = var_f2;
            }
        }
        break;
    case 4:
        temp_f3_3 = *(f32 *)((u8 *)var_s1 + 0xBC);
        var_f2 = 20.0f;
        if (temp_f3_3 < 20.0f) {
            temp_f0_3 = temp_f3_3 + (2.0f * gFrameDelta);
            *(f32 *)((u8 *)var_s1 + 0xBC) = temp_f0_3;
            if (!(temp_f0_3 <= 20.0f)) {
                goto block_12;
            }
        }
        break;
    }
    var_a0 = 0;
    if (D_004702A4 == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = *(u8 *)((u8 *)D_004702A4 + 0x101) & 0x10;
    }
    if (var_v0 != 0) {
        if (var_s0 & 0xFFFF) {
            goto block_24;
        }
    } else {
        var_v0_2 = 0;
        if (D_004702A4 == NULL) {

        } else {
            var_v0_2 = *(u8 *)((u8 *)D_004702A4 + 0x101) & 1;
        }
        if ((var_v0_2 != 0) && !(var_s0 & 0xFFFF)) {
block_24:
            var_a0 = 1;
        }
    }
    if (var_a0 != 0) {
        var_v0_3 = 0;
        if (D_004702A4 == NULL) {

        } else {
            var_v0_3 = *(u8 *)((u8 *)D_004702A4 + 0x4F);
        }
        if (var_v0_3 != 0) {
            *(f32 *)((u8 *)var_s1 + 0xC4) = (f32) (*(f32 *)((u8 *)var_s1 + 0xC4) + 0.2f);
        } else {
            var_v0_4 = 0;
            if (D_004702A4 == NULL) {

            } else {
                var_v0_4 = *(u8 *)((u8 *)D_004702A4 + 0x50);
            }
            if (var_v0_4 != 0) {
                *(f32 *)((u8 *)var_s1 + 0xC4) = (f32) (*(f32 *)((u8 *)var_s1 + 0xC4) - 0.2f);
            } else {
                var_v0_5 = 0;
                if (D_004702A4 == NULL) {

                } else {
                    var_v0_5 = *(u8 *)((u8 *)D_004702A4 + 0x52);
                }
                if (var_v0_5 != 0) {
                    *(f32 *)((u8 *)var_s1 + 0xC8) = (f32) (*(f32 *)((u8 *)var_s1 + 0xC8) + 0.2f);
                } else {
                    var_v0_6 = 0;
                    if (D_004702A4 == NULL) {

                    } else {
                        var_v0_6 = *(u8 *)((u8 *)D_004702A4 + 0x51);
                    }
                    if (var_v0_6 != 0) {
                        *(f32 *)((u8 *)var_s1 + 0xC8) = (f32) (*(f32 *)((u8 *)var_s1 + 0xC8) - 0.2f);
                    } else {
                        var_v0_7 = 0;
                        if (D_004702A4 == NULL) {

                        } else {
                            var_v0_7 = *(u8 *)((u8 *)D_004702A4 + 0x49);
                        }
                        if (var_v0_7 != 0) {
                            *(f32 *)((u8 *)var_s1 + 0xCC) = (f32) (*(f32 *)((u8 *)var_s1 + 0xCC) + 1.0f);
                        } else {
                            var_v0_8 = 0;
                            if (D_004702A4 == NULL) {

                            } else {
                                var_v0_8 = *(u8 *)((u8 *)D_004702A4 + 0x4C);
                            }
                            if (var_v0_8 != 0) {
                                *(f32 *)((u8 *)var_s1 + 0xCC) = (f32) (*(f32 *)((u8 *)var_s1 + 0xCC) - 1.0f);
                            } else {
                                var_v0_9 = 0;
                                if (D_004702A4 == NULL) {

                                } else {
                                    var_v0_9 = *(u8 *)((u8 *)D_004702A4 + 0x4B);
                                }
                                if (var_v0_9 != 0) {
                                    *(f32 *)((u8 *)var_s1 + 0xD0) = (f32) (*(f32 *)((u8 *)var_s1 + 0xD0) + 0.01f);
                                } else {
                                    var_v0_10 = 0;
                                    if (D_004702A4 == NULL) {

                                    } else {
                                        var_v0_10 = *(u8 *)((u8 *)D_004702A4 + 0x4E);
                                    }
                                    if (var_v0_10 != 0) {
                                        *(f32 *)((u8 *)var_s1 + 0xD0) = (f32) (*(f32 *)((u8 *)var_s1 + 0xD0) - 0.01f);
                                    } else {
                                        var_v0_11 = 0;
                                        if (D_004702A4 == NULL) {

                                        } else {
                                            var_v0_11 = *(u8 *)((u8 *)D_004702A4 + 0x5A);
                                        }
                                        if (var_v0_11 != 0) {
                                            *(u8 **)((u8 *)var_s1 + 0xD4) = (u8 *) (*(u8 **)((u8 *)var_s1 + 0xD4) + 0x10F);
                                        } else {
                                            var_v0_12 = 0;
                                            if (D_004702A4 == NULL) {

                                            } else {
                                                var_v0_12 = *(u8 *)((u8 *)D_004702A4 + 0x60);
                                            }
                                            if (var_v0_12 != 0) {
                                                *(u8 **)((u8 *)var_s1 + 0xD4) = (u8 *) (*(u8 **)((u8 *)var_s1 + 0xD4) - 0x10F);
                                            } else {
                                                var_v0_13 = 0;
                                                if (D_004702A4 == NULL) {

                                                } else {
                                                    var_v0_13 = *(u8 *)((u8 *)D_004702A4 + 0x5C);
                                                }
                                                if (var_v0_13 != 0) {
                                                    *(u8 **)((u8 *)var_s1 + 0xD8) = (u8 *) (*(u8 **)((u8 *)var_s1 + 0xD8) + 0x10F);
                                                } else {
                                                    var_v0_14 = 0;
                                                    if (D_004702A4 == NULL) {

                                                    } else {
                                                        var_v0_14 = *(u8 *)((u8 *)D_004702A4 + 0x5E);
                                                    }
                                                    if (var_v0_14 != 0) {
                                                        *(u8 **)((u8 *)var_s1 + 0xD8) = (u8 *) (*(u8 **)((u8 *)var_s1 + 0xD8) - 0x10F);
                                                    } else {
                                                        var_v0_15 = 0;
                                                        if (D_004702A4 == NULL) {

                                                        } else {
                                                            var_v0_15 = *(u8 *)((u8 *)D_004702A4 + 0x5F);
                                                        }
                                                        if (var_v0_15 != 0) {
                                                            var_v0_16 = *(u8 **)((u8 *)var_s1 + 0xDC) + 0x10F;
                                                            goto block_107;
                                                        }
                                                        var_v0_17 = 0;
                                                        if (D_004702A4 == NULL) {

                                                        } else {
                                                            var_v0_17 = *(u8 *)((u8 *)D_004702A4 + 0x61);
                                                        }
                                                        if (var_v0_17 != 0) {
                                                            var_v0_16 = *(u8 **)((u8 *)var_s1 + 0xDC) - 0x10F;
block_107:
                                                            *(u8 **)((u8 *)var_s1 + 0xDC) = var_v0_16;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        *(u8 **)((u8 *)var_s1 + 0xD4) = (u8 *) (u16) *(u8 **)((u8 *)var_s1 + 0xD4);
        *(u8 **)((u8 *)var_s1 + 0xD8) = (u8 *) (u16) *(u8 **)((u8 *)var_s1 + 0xD8);
        var_s2 = M2C_BITWISE(s32, (f32) (((var_s0 & 0xFFFF) << 5) + 3));
        *(u8 **)((u8 *)var_s1 + 0xDC) = (u8 *) (u16) *(u8 **)((u8 *)var_s1 + 0xDC);
        amDbg_Printf(var_s2, 5, &D_0046EC28, 0);
        amDbg_Printf(var_s2, 6, &D_0046EC40, func_001214F8(*(f32 *)((u8 *)var_s1 + 0xC4)));
        amDbg_Printf(var_s2, 7, &D_0046EC60, func_001214F8(*(f32 *)((u8 *)var_s1 + 0xC8)));
        amDbg_Printf(var_s2, 8, &D_0046EC80, func_001214F8(*(f32 *)((u8 *)var_s1 + 0xCC)));
        amDbg_Printf(var_s2, 9, &D_0046ECA0, func_001214F8(*(f32 *)((u8 *)var_s1 + 0xD0)));
        amDbg_Printf(var_s2, 0xA, &D_0046ECC0, *(u8 **)((u8 *)var_s1 + 0xD4));
        amDbg_Printf(var_s2, 0xB, &D_0046ECE0, *(u8 **)((u8 *)var_s1 + 0xD8));
        amDbg_Printf(var_s2, 0xC, &D_0046ED00, *(u8 **)((u8 *)var_s1 + 0xDC));
        temp_a1 = *(s16 *)((u8 *)var_s1 + 0xB4);
        if (temp_a1 >= 0) {
            temp_v0 = (var_s0 & 0xFFFF) * 0x1C;
            *(temp_v0 + (&D_004580B0 + (temp_a1 * 0x38))) = *(f32 *)((u8 *)var_s1 + 0xC4);
            *(temp_v0 + (&D_004580B4 + (*(s16 *)((u8 *)var_s1 + 0xB4) * 0x38))) = *(f32 *)((u8 *)var_s1 + 0xC8);
            *(temp_v0 + (&D_004580B8 + (*(s16 *)((u8 *)var_s1 + 0xB4) * 0x38))) = *(f32 *)((u8 *)var_s1 + 0xCC);
            *(temp_v0 + (&D_004580BC + (*(s16 *)((u8 *)var_s1 + 0xB4) * 0x38))) = *(f32 *)((u8 *)var_s1 + 0xD0);
            *(temp_v0 + (&D_004580C0 + (*(s16 *)((u8 *)var_s1 + 0xB4) * 0x38))) = (s32) (u16) *(u8 **)((u8 *)var_s1 + 0xD4);
            *(temp_v0 + (&D_004580C4 + (*(s16 *)((u8 *)var_s1 + 0xB4) * 0x38))) = (s32) (u16) *(u8 **)((u8 *)var_s1 + 0xD8);
            *(temp_v0 + (&D_004580C8 + (*(s16 *)((u8 *)var_s1 + 0xB4) * 0x38))) = (s32) (u16) *(u8 **)((u8 *)var_s1 + 0xDC);
        } else {
            temp_t0 = (var_s0 & 0xFFFF) * 0x1C;
            *(&D_00458A50 + temp_t0) = *(f32 *)((u8 *)var_s1 + 0xC4);
            *(&D_00458A54 + temp_t0) = *(f32 *)((u8 *)var_s1 + 0xC8);
            *(&D_00458A58 + temp_t0) = *(f32 *)((u8 *)var_s1 + 0xCC);
            *(&D_00458A5C + temp_t0) = *(f32 *)((u8 *)var_s1 + 0xD0);
            *(&D_00458A60 + temp_t0) = (s32) (u16) *(u8 **)((u8 *)var_s1 + 0xD4);
            *(&D_00458A64 + temp_t0) = (s32) (u16) *(u8 **)((u8 *)var_s1 + 0xD8);
            *(&D_00458A68 + temp_t0) = (s32) (u16) *(u8 **)((u8 *)var_s1 + 0xDC);
        }
    }
    func_0013B0B0(NULL);
    func_0013AFA0(NULL);
    func_00131D00(var_s1 + 0x50, 0, 0, 0);
    amCamera_SetScreen(var_s1 + 0x50, var_s1 + 0x10, 0x43F00000);
    func_00132DF0(NULL);
    func_0013BC00(*(f32 *)((u8 *)var_s1 + 0xC4), *(f32 *)((u8 *)var_s1 + 0xC8), *(f32 *)((u8 *)var_s1 + 0xCC));
    if (var_s0 != 0) {
        var_f12 = *(f32 *)((u8 *)var_s1 + 0xBC);
    } else {
        var_f12 = -*(f32 *)((u8 *)var_s1 + 0xBC);
    }
    func_0013BC00(var_f12, 0.0f, 0.0f);
    temp_f12 = *(f32 *)((u8 *)var_s1 + 0xD0);
    func_0013BC30(temp_f12, temp_f12, temp_f12);
    func_0013B500(*(u8 **)((u8 *)var_s1 + 0xD4));
    func_0013B750(*(u8 **)((u8 *)var_s1 + 0xDC));
    func_0013B620(*(u8 **)((u8 *)var_s1 + 0xD8));
    func_0029D8E0();
    sp68 = 0x3F800000;
    sp6C = 0x3F800000;
    sp60 = 0;
    sp64 = 0;
    func_0029D740(&sp60);
    spE0 = *(f32 *)((u8 *)var_s1 + 0xC4);
    spE4 = *(f32 *)((u8 *)var_s1 + 0xC8);
    spE8 = *(f32 *)((u8 *)var_s1 + 0xCC);
    spEC = 0x3F800000;
    spDC = 0x3F800000;
    spD0 = 0;
    spD4 = 0;
    spD8 = 0;
    D_0046FD80 = func_0029D550(&spE0, &spD0, 0x3F490FDB);
    func_0029D8B0(-1, 4);
    func_0029DD30(*(s32 *)((u8 *)var_s1 + 0), 0x3F800000);
    var_f1 = *(f32 *)((u8 *)var_s1 + 0xC0);
    if (var_f1 != 0.0f) {
        if (var_f1 <= 1.0f) {

        } else {
            var_f1 = 2.0f - var_f1;
        }
        sp50 = 0x3F800000;
        sp54 = 0x3F800000;
        sp58 = 0x3F800000;
        sp5C = var_f1;
        if (!(var_f1 <= 0.0f)) {
            func_0029D390(&sp50);
            func_0029D8B0(-1, 2);
        }
    } else {
        temp_f3_4 = *(f32 *)((u8 *)var_s1 + 0xE8);
        if (temp_f3_4 != 0.0f) {
            *(f32 *)((u8 *)var_s1 + 0xE0) = (f32) (*(f32 *)((u8 *)var_s1 + 0xE0) + (temp_f3_4 * gFrameDelta));
            if (!(*(f32 *)((u8 *)var_s1 + 0xE8) <= 0.0f)) {
                temp_f1 = *(f32 *)((u8 *)var_s1 + 0xE4);
                if (!(*(f32 *)((u8 *)var_s1 + 0xE0) <= temp_f1)) {
                    *(f32 *)((u8 *)var_s1 + 0xE0) = temp_f1;
                    *(f32 *)((u8 *)var_s1 + 0xE8) = 0.0f;
                }
            } else {
                temp_f1_2 = *(f32 *)((u8 *)var_s1 + 0xE4);
                if (*(f32 *)((u8 *)var_s1 + 0xE0) < temp_f1_2) {
                    *(f32 *)((u8 *)var_s1 + 0xE0) = temp_f1_2;
                    *(f32 *)((u8 *)var_s1 + 0xE8) = 0.0f;
                }
            }
        }
        temp_f1_3 = 1.0f - *(f32 *)((u8 *)var_s1 + 0xE0);
        sp40 = 0;
        sp44 = 0;
        sp48 = 0;
        sp4C = temp_f1_3;
        if (!(temp_f1_3 <= 0.0f)) {
            func_0029D390(&sp40);
            func_0029D8B0(-1, 2);
        }
    }
    func_0029DB00(*(s32 *)((u8 *)var_s1 + 0), 0x3F800000);
    func_0029D390(NULL);
    func_0029D8B0(-3, 0);
    func_0029D8E0();
    func_00131B90(&sp70);
    func_00131F00(&sp70, 0, 0);
    func_00132DF0(D_003F0800);
    func_0013B110(1);
}
