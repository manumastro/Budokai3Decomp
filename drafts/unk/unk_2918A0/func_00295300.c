/* Draft (not built): func_00295300 at 0x00295300, size 0x2958, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 1998 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2360, original 0x2958
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00295300.s */

// src/unk/unk_2918A0.c func_00295300 size diff=1998/2264
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, s32, f32, f32);
s32 StrMap_Start(s32, s32, s32);
s32 StrMap_StartPos(s32, s32, s32);
s32 StrStatus_Dispatch(s32 *, s32, s32, void *);
s32 amMath_SinCosI(s32, f32 *, f32 *);
s32 amMotion_Update(s32, s32, void *, s32);
s32 func_00100230(s32, s32);
s32 func_001214F8(f32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133D10(s32);
s32 func_0013B110(s32);
s32 func_0013B750(s32);
s32 func_0013C1E0(s32, s32, f32);
s32 func_00144050(s32, s32, s32, s32, f32, s32, s32);
s32 func_00144370(s32, void *, s32, s32);
s32 func_001CA780(void *, s32);
s32 func_0028EBB0(s32, s32, s32, s32);
s32 func_0028EC10(s32, s32, s32, s32);
s32 func_00290BB0();
s32 func_0029AAC0(s32, s32, s32);
s32 func_0029D660(s128 *);
s32 func_002A94B0(s32, s32, s32, s32);
s32 func_002BF970(s32 *);
extern s128 D_00453DB0;
extern s32 D_00453E00;
extern f32 D_00470060;
extern f32 D_00470064;
extern f32 D_00470068;
extern f32 D_0047006C;
extern void *D_004708A4;
extern s8 D_004708A8;
extern s32 D_00492FCC;
extern s32 D_00492FD8;
extern s32 D_00492FD9;
extern s32 D_00492FDB;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s32 D_005AA5B4;
extern s32 D_005AA5B8;
extern s32 D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern f32 D_005AA618;
extern f32 D_005AA61C;
extern s32 D_005AA620;
extern f32 D_005AA624;
extern u32 D_005AA628;
extern s32 D_005AA62C;
extern s32 D_005AA630;
extern s32 D_005AA634;
extern void *D_005AA638;
extern s32 D_005AA63C;
extern s32 D_005AA644;
extern s32 D_005AA668;
extern s32 D_005AA66C;
extern f32 D_005AA670;
extern s32 D_005AA690;
extern s32 D_005AA6B0;
extern s32 D_005AA6F0;
extern s32 D_005AB360;
extern s32 D_005AB364;
extern void Fade_SetRequest();
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_002641D0(void);
extern void func_0013B0B0(void *);
extern void amMotion_BuildMatrices(char *);
extern void func_00146F30(void *);
extern void SoundRpc_Send3();
extern void func_0011F680(void);
extern char D_00492FCE[];
extern void func_0029AC30(void);
extern void func_0029A9F0(void);
extern void StrMap_KillTask(void);
extern void Ball_Start(void);
extern void func_002BF520(void);
extern void func_002BFC50(void);
extern char D_003F0800[];
extern void func_0013B620(void *);
extern void *D_005AA608[];
extern void func_002BF610(void);
extern void func_00290D00(void);
extern void func_002918A0(void);
extern void func_00292FF0(void);
extern void func_00292A40(void);
void func_00295300(u8 *arg0) {
    s32 sp60;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    s32 spD0;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    s128 sp120;
    f32 sp128;
    s32 sp130;
    s32 sp140;
    s32 sp144;
    f32 sp168;
    f32 sp16C;
    f32 *var_at;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f13;
    f32 var_f1;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f20_3;
    f32 var_f21;
    f32 var_f3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a3;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0_2;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 temp_a2_6;
    s64 temp_t1;
    s64 temp_t3;
    s64 temp_t3_2;
    s64 temp_v0_3;
    s64 temp_v0_4;
    s8 temp_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    u16 var_s3;
    void (*var_v0)();
    void (*var_v0_3)();
    void (*var_v0_4)();
    void (*var_v1_4)();
    void (*var_v1_5)();
    void (*var_v1_6)();
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a2_7;
    u8 *temp_a3_2;
    u8 *temp_v0_2;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = arg0;
    temp_v1 = *(&D_00492FDB + (D_004B4B63 * 0xB8));
    if (temp_v1 >= 0x21) {
        var_v1 = temp_v1 - 0x20;
    } else if (temp_v1 < -0x20) {
        var_v1 = temp_v1 + 0x20;
    } else {
        var_v1 = 0;
    }
    var_f21 = -(f32) var_v1 / 96.0f;
    temp_v1_2 = *(&D_00492FD8 + (D_004B4B63 * 0xB8));
    if (temp_v1_2 >= 0x21) {
        var_v1_2 = temp_v1_2 - 0x20;
    } else if (temp_v1_2 < -0x20) {
        var_v1_2 = temp_v1_2 + 0x20;
    } else {
        var_v1_2 = 0;
    }
    temp_f22 = (f32) var_v1_2 / 96.0f;
    temp_v0 = *(&D_00492FD9 + (D_004B4B63 * 0xB8));
    if (temp_v0 >= 0x21) {
        var_v1_3 = temp_v0 - 0x20;
    } else {
        var_v1_3 = temp_v0 + 0x20;
        if (temp_v0 < -0x20) {

        } else {
            var_v1_3 = 0;
        }
    }
    temp_f20 = (f32) var_v1_3 / 96.0f;
    temp_v0_2 = (unsigned char *)(func_002925A0(*D_005AA604));
    var_s2 = temp_v0_2;
    if (temp_v0_2 != NULL) {
        temp_a2 = *(s32 *)((u8 *)var_s2 + 8);
        if (temp_a2 == -1) {
            func_0029AC30();
            D_005AA62C = -1;
        } else if (D_005AA62C != temp_a2) {
            StrMap_StartPos(0x9300, 0x20000, temp_a2);
            D_005AA62C = *(s32 *)((u8 *)var_s2 + 8);
        }
        var_s0 = 0;
        if (*(s32 *)((u8 *)var_s2 + 4) & 4) {
loop_28:
            if (var_s0 < 8) {
                func_00144370(1, (void *)(var_s0 + 0x11122233), 0, (s32)((&D_005AB360)[var_s0]));
                var_s0 += 1;
                goto loop_28;
            }
            if (*(s32 *)((u8 *)var_s2 + 4) & 8) {
                D_005AA638 = var_s2;
                D_005AA624 = 0.0f;
                var_s0 = D_005AA60C;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                sp114 = 0.0f;
                sp110 = -sp110;
                sp118 = -sp118;
                func_00146F30(&sp110);
                func_0011F680();
                temp_t3 = (s64) (M2C_BITWISE(s64, ((32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.1415927f)) << 0x30) >> 0x30;
                *D_005AA664 += temp_t3 - *(s32 *)((u8 *)(*D_005AA604) + 0x11D0);
                *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) temp_t3;
                D_005AA610 = 0x10007;
                D_005AA618 = 0.0f;
                temp_a2_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14);
                D_005AA61C = 5.0f;
                D_005AA614 = (f32) *(s32 *)((u8 *)(temp_a2_2 + 0x70) + 8);
                SoundRpc_SetVolume(1, 0, temp_a2_2, 9.1845e-41f, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 9, 0);
                }
                func_002A94B0(*(s32 *)((u8 *)var_s2 + 0), 0, 0, 0);
                Fade_SetRequest(0xA, func_002918A0, 0);
                var_v1_4 = func_00292FF0;
                D_005AA628 = 7;
                if (func_00292FF0 == NULL) {
                    var_v1_4 = NULL;
                }
                *(void (**)())((u8 *)var_s1 + 0x1C) = var_v1_4;
            } else {
                var_s0 = 0;
loop_38:
                if (var_s0 < 8) {
                    func_00144370(1, (void *)(var_s0 + 0x11122233), 0, (s32)((&D_005AB360)[var_s0]));
                    var_s0 += 1;
                    goto loop_38;
                }
                D_005AA638 = var_s2;
                var_s0 = D_005AA60C;
                D_005AA624 = 0.0f;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                sp104 = 0.0f;
                sp100 = -sp100;
                sp108 = -sp108;
                func_00146F30(&sp100);
                func_0011F680();
                temp_t1 = (s64) (M2C_BITWISE(s64, ((32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.1415927f)) << 0x30) >> 0x30;
                temp_a3 = temp_t1 - *(s32 *)((u8 *)(*D_005AA604) + 0x11D0);
                temp_a2_3 = *D_005AA664 + temp_a3;
                *D_005AA664 = temp_a2_3;
                *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) temp_t1;
                D_005AA610 = 0x10007;
                D_005AA618 = 0.0f;
                D_005AA61C = 5.0f;
                D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x70) + 8);
                func_002A94B0(*(s32 *)((u8 *)var_s2 + 0), 0x10007, temp_a2_3, temp_a3);
                func_002641D0();
                var_v1_5 = func_00292FF0;
                D_005AA628 = 7;
                if (func_00292FF0 == NULL) {
                    var_v1_5 = NULL;
                }
                *(void (**)())((u8 *)var_s1 + 0x1C) = var_v1_5;
                D_005AA620 = 0;
                *D_005AA664 = 0;
                D_005AA66C = 0;
                *D_005AA640 = 0;
                D_005AA63C = 0;
                *(s32 *)((u8 *)(*D_005AA604) + 0x11D4) = -1;
                *(s32 *)((u8 *)(*D_005AA604) + 0x11D8) = -1;
                D_005AA644 = 0;
                if (D_005AA638 != NULL) {
                    *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x10);
                    *(f32 *)((u8 *)(*D_005AA604) + 0x11C8) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x18);
                }
                func_002BFC50();
                Ball_Start();
                var_v0 = func_00292A40;
                if (func_00292A40 == NULL) {
                    var_v0 = NULL;
                }
                (*D_005AA5A0)->f1C = var_v0;
            }
            StrMap_KillTask();
            if (D_005AA630 != 0) {
                func_0029A9F0();
            }
            return;
        }
        goto block_52;
    }
    if (D_005AA62C != -1) {
        func_0029AC30();
        D_005AA62C = -1;
    }
block_52:
    var_s3 = *(D_00492FCE + (D_004B4B63 * 0xB8));
    if (var_s3 & 0x1000) {
        D_005AA630 += 1;
        if (*(s8 *)((u8 *)(*D_005AA604) + 0x11E5) != 0) {
            D_005AA630 = (s32) D_005AA630 % 3;
        } else {
            D_005AA630 &= 1;
        }
        switch (D_005AA630) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x16, 0);
            }
            StrMap_KillTask();
            func_0029A9F0();
            break;
        case 1:                                     /* switch 1 */
            SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xB, 0);
            }
            StrMap_Start(0x9100, 0x20000, 0);
            func_0029AAC0(0x9110, 0x20000, -1);
            break;
        case 2:                                     /* switch 1 */
            SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xB, 0);
            }
            StrMap_Start(0x9100, 0x20000, 1);
            break;
        }
        var_s3 = 0;
    }
    amMath_SinCosI(*(s32 *)((u8 *)(*D_005AA604) + 0x11D0), &sp16C, &sp168);
    sp16C = -sp16C;
    sp168 = -sp168;
    switch (D_005AA628) {                           /* switch 2 */
    case 0:                                         /* switch 2 */
    case 1:                                         /* switch 2 */
        if (var_f21 < 0.0f) {
            var_f21 *= 0.8f;
        }
        temp_f0 = 192.0f * temp_f22 * gFrameDelta;
        *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) ((*(s32 *)((u8 *)(*D_005AA604) + 0x11D0) - M2C_BITWISE(s32, temp_f0)) & 0xFFFF);
        *D_005AA664 = (*D_005AA664 - M2C_BITWISE(s32, temp_f0)) & 0xFFFF;
        *D_005AA664 = ((s64) ((s64) ((s32) ((s16) *D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF;
        D_005AA668 += M2C_BITWISE(s32, (96.0f * temp_f20 * gFrameDelta));
        D_005AA668 = (s32) (u16) D_005AA668;
        if ((s16) D_005AA668 < -0x1400) {
            var_v0_2 = 0xEC00;
            goto block_80;
        }
        if ((s16) D_005AA668 >= 0xC01) {
            var_v0_2 = 0xC00;
block_80:
            D_005AA668 = var_v0_2;
        }
        D_005AA620 = 0;
        temp_f20_2 = var_f21 * (16.0f * gFrameDelta * fabsf(var_f21));
        D_005AA66C = (s32) (D_005AA66C * 7) >> 3;
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C0) + (sp16C * temp_f20_2));
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C8) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C8) + (sp168 * temp_f20_2));
        D_005AA624 = temp_f20_2;
        if (*(f32 *)((u8 *)(&D_005AA690) + 8) <= -9.9f) {
            D_005AA670 = 0.0f;
        }
        var_s0 = D_005AA60C;
        if (*(s32 *)((u8 *)var_s0 + 0x41C) != 0x1000D) {
            if (!(var_f21 <= 0.5f)) {
                D_005AA618 = 0.0f;
                D_005AA610 = 0x10001;
                D_005AA61C = 10.0f;
                D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x10) + 8);
                if (!(D_004E0614 <= 0.0f)) {
                    func_00144370(1, (u8 *)0x11122233, 0, D_005AB360);
                    func_00144050(1, 0x11122233, 0, 0xD, D_004E0614, 0, 0);
                    D_005AB360 = 0xD;
                }
                if (!(D_004E0614 <= 0.0f)) {
                    func_00144370(1, (u8 *)0x11122234, 0, D_005AB364);
                    func_00144050(1, 0x11122234, 0, 1, D_004E0614, 0, 0);
                    D_005AB364 = 1;
                }
                D_005AA628 = 2;
            } else if (temp_f22 == 0.0f) {
                if (var_f21 < -0.75f) {
                    if (*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x400) {
                        D_005AA610 = 0x1000D;
                        D_005AA618 = 0.0f;
                        temp_a2_4 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14);
                        D_005AA61C = 10.0f;
                        D_005AA614 = (f32) *(s32 *)((u8 *)(temp_a2_4 + 0xD0) + 8);
                        SoundRpc_SetVolume(1, 0, temp_a2_4, D_004E0614, 0);
                        if (!(D_004E0614 <= 0.0f)) {
                            SoundRpc_Send3(1, 0, 0xE, 0);
                        }
                        D_005AA628 = 6;
                    } else {
                        goto block_96;
                    }
                } else {
                    goto block_96;
                }
            } else {
block_96:
                if (var_f21 < 0.0f) {
                    if (D_005AA610 != 0x10004) {
                        D_005AA610 = 0x10004;
                        D_005AA618 = 0.0f;
                        D_005AA61C = 18.0f;
                        D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x40) + 8);
                    } else {
                        goto block_99;
                    }
                } else {
block_99:
                    if (var_f21 == 0.0f) {
                        if (temp_f22 == 0.0f) {
                            if (D_005AA610 != 0x10000) {
                                D_005AA610 = 0x10000;
                                D_005AA618 = 0.0f;
                                D_005AA61C = 10.0f;
                                D_005AA614 = (f32) *(s32 *)((u8 *)((0 * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14)) + 8);
                            } else {
                                goto block_103;
                            }
                        } else {
                            goto block_103;
                        }
                    } else {
block_103:
                        if (var_f21 == 0.0f) {
                            if (!(temp_f22 <= 0.0f)) {
                                if (D_005AA610 != 0x10009) {
                                    D_005AA610 = 0x10009;
                                    D_005AA618 = 0.0f;
                                    D_005AA61C = 15.0f;
                                    D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x90) + 8);
                                } else {
                                    goto block_108;
                                }
                            } else {
                                goto block_108;
                            }
                        } else {
block_108:
                            if (var_f21 == 0.0f) {
                                if (temp_f22 < 0.0f) {
                                    if (D_005AA610 != 0x1000A) {
                                        D_005AA610 = 0x1000A;
                                        D_005AA618 = 0.0f;
                                        D_005AA61C = 15.0f;
                                        D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0xA0) + 8);
                                    } else {
                                        goto block_113;
                                    }
                                } else {
                                    goto block_113;
                                }
                            } else {
block_113:
                                if (!(var_f21 <= 0.0f)) {
                                    if (D_005AA610 != 0x10008) {
                                        D_005AA610 = 0x10008;
                                        D_005AA618 = 0.0f;
                                        D_005AA61C = 20.0f;
                                        D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x80) + 8);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (var_f21 == 0.0f) {
                if (temp_f22 == 0.0f) {
                    if (var_s3 & 8) {
                        D_005AA634 = 0;
                        *(s128 *)((u8 *)(&spD0) + 0) = (s128) *(s128 *)((u8 *)(&D_00453E00) + 0);
                        *(s128 *)((u8 *)(&spD0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453E00) + 0x10);
                        *(s64 *)((u8 *)(&spD0) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00453E00) + 0x20);
                        func_0028EE90(D_005AA5A0, D_005AA5CC, D_005AA5D8, D_005AA5E4, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */));
                        func_0028EC10(D_005AA5B4, *D_005AA5CC, 0x25, 0);
                        func_0028EBB0(D_005AA5B4, 0, *D_005AA5CC, 0x25);
                        func_0028EC10(D_005AA5B8, *D_005AA5CC, 0x26, 0);
                        func_0028EBB0(D_005AA5B8, 0, *D_005AA5CC, 0x26);
                        var_v0_3 = func_00295260;
                        if (func_00295260 == NULL) {
                            var_v0_3 = NULL;
                        }
                        *(void (**)())((u8 *)var_s1 + 0x1C) = var_v0_3;
                    } else if (var_s2 != NULL) {
                        if (var_s3 & 0x4000) {
                            D_005AA638 = var_s2;
                            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                            spC4 = 0.0f;
                            spC0 = -spC0;
                            spC8 = -spC8;
                            func_00146F30(&spC0);
                            func_0011F680();
                            temp_t3_2 = (s64) (M2C_BITWISE(s64, ((32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.1415927f)) << 0x30) >> 0x30;
                            *D_005AA664 += temp_t3_2 - *(s32 *)((u8 *)(*D_005AA604) + 0x11D0);
                            *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) temp_t3_2;
                            D_005AA610 = 0x10007;
                            D_005AA618 = 0.0f;
                            temp_a2_5 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14);
                            D_005AA61C = 10.0f;
                            D_005AA614 = (f32) *(s32 *)((u8 *)(temp_a2_5 + 0x70) + 8);
                            SoundRpc_SetVolume(1, 0, temp_a2_5, 9.1845e-41f, D_004E0614);
                            if (!(D_004E0614 <= 0.0f)) {
                                SoundRpc_Send3(1, 0, 9, 0);
                            }
                            func_002A94B0(*(s32 *)((u8 *)var_s2 + 0), 0, 0, 0);
                            Fade_SetRequest(0xA, func_002918A0, 0);
                            var_v1_6 = func_00292FF0;
                            D_005AA628 = 7;
                            if (func_00292FF0 == NULL) {
                                var_v1_6 = NULL;
                            }
                            *(void (**)())((u8 *)var_s1 + 0x1C) = var_v1_6;
                            StrMap_KillTask();
                            if (D_005AA630 != 0) {
                                SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                                if (!(D_004E0614 <= 0.0f)) {
                                    SoundRpc_Send3(0, 0, 0x16, 0);
                                }
                                func_0029A9F0();
                            }
                        } else {
                            goto block_133;
                        }
                    } else {
block_133:
                        if (var_s3 & 0x800) {
                            func_00291AD0();
                            var_v0_4 = func_002948C0;
                            if (func_002948C0 == NULL) {
                                var_v0_4 = NULL;
                            }
                            *(void (**)())((u8 *)var_s1 + 0x1C) = var_v0_4;
                            StrMap_KillTask();
                            if (D_005AA630 != 0) {
                                SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                                if (!(D_004E0614 <= 0.0f)) {
                                    SoundRpc_Send3(0, 0, 0x16, 0);
                                }
                                func_0029A9F0();
                            }
                            if (!(D_004E0614 <= 0.0f)) {
                                func_00144370(1, (u8 *)0x11122233, 0, D_005AB360);
                                func_00144050(1, 0x11122233, 0, 0x11, D_004E0614, 0, 0);
                                D_005AB360 = 0x11;
                            }
                        } else if (var_s3 & 1) {
                            var_a0 = 0x3F021 | (0x1000 << 0x20);
                            if (var_s2 != NULL) {
                                var_a0 |= 0x10000 << 0x20;
                            }
                            Help_Open(var_a0, (1 << D_004B4B63) & 0xFF);
                        }
                    }
                }
            }
        }
        break;
    case 6:                                         /* switch 2 */
        if ((0.5f * D_005AA614) <= D_005AA618) {
            if (D_004708A8 == 0) {
                SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 0xF, 0);
                }
                D_004708A8 = 1;
            }
            *D_005AA664 += M2C_BITWISE(s32, (gFrameDelta / (D_005AA614 - D_005AA618)));
        } else {
            D_004708A8 = 0;
        }
        break;
    case 2:                                         /* switch 2 */
        if (var_f21 < 0.0f) {
            var_f21 = 0.0f;
        }
        temp_f0_2 = 128.0f * temp_f22 * gFrameDelta;
        *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) ((*(s32 *)((u8 *)(*D_005AA604) + 0x11D0) - M2C_BITWISE(s32, temp_f0_2)) & 0xFFFF);
        *D_005AA664 = (*D_005AA664 - M2C_BITWISE(s32, temp_f0_2)) & 0xFFFF;
        *D_005AA664 = ((s64) ((s64) ((s32) ((s16) *D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF;
        D_005AA668 += M2C_BITWISE(s32, (96.0f * temp_f20 * gFrameDelta));
        D_005AA668 = (s32) (u16) D_005AA668;
        if ((s16) D_005AA668 < -0x1400) {
            var_v0_5 = 0xEC00;
            goto block_161;
        }
        if ((s16) D_005AA668 >= 0xC01) {
            var_v0_5 = 0xC00;
block_161:
            D_005AA668 = var_v0_5;
        }
        temp_a2_6 = (s64) (M2C_BITWISE(s64, (4096.0f * temp_f22)) << 0x30) >> 0x30;
        D_005AA620 += (s32) (temp_a2_6 - D_005AA620) >> 1;
        var_f20 = var_f21 * (16.0f * gFrameDelta * var_f21);
        D_005AA66C += (s32) (((s64) ((s64) (temp_a2_6 >> 1) << 0x30) >> 0x30) - D_005AA66C) >> 3;
        if (!(D_005AA624 <= var_f20)) {
            temp_f0_3 = D_005AA624 * 0.9f;
            if (!(temp_f0_3 <= var_f20)) {
                D_005AA624 = temp_f0_3;
                var_f20 = temp_f0_3;
            } else {
                goto block_166;
            }
        } else {
block_166:
            D_005AA624 = var_f20;
        }
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C0) + (sp16C * var_f20));
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C8) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C8) + (sp168 * var_f20));
        D_005AA624 = var_f20;
        break;
    case 4:                                         /* switch 2 */
        temp_f0_4 = 128.0f * temp_f22 * gFrameDelta;
        *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) ((*(s32 *)((u8 *)(*D_005AA604) + 0x11D0) - M2C_BITWISE(s32, temp_f0_4)) & 0xFFFF);
        *D_005AA664 = (*D_005AA664 - M2C_BITWISE(s32, temp_f0_4)) & 0xFFFF;
        *D_005AA664 = ((s64) ((s64) ((s32) ((s16) *D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF;
        D_005AA668 += M2C_BITWISE(s32, (96.0f * temp_f20 * gFrameDelta));
        D_005AA668 = (s32) (u16) D_005AA668;
        if ((s16) D_005AA668 < -0x1400) {
            var_v0_6 = 0xEC00;
            goto block_173;
        }
        if ((s16) D_005AA668 >= 0xC01) {
            var_v0_6 = 0xC00;
block_173:
            D_005AA668 = var_v0_6;
        }
        temp_f20_3 = 0.95f * D_005AA624;
        D_005AA620 = (s32) D_005AA620 >> 1;
        D_005AA66C = (s32) (D_005AA66C * 7) >> 3;
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C0) + (sp16C * temp_f20_3));
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C8) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C8) + (sp168 * temp_f20_3));
        D_005AA624 = temp_f20_3;
        if (*(f32 *)((u8 *)(&D_005AA690) + 8) <= -9.9f) {
            D_005AA670 = 0.0f;
        }
        if (func_00100230(func_001214F8(var_f21), 0) != 0) {
            if (!(temp_f20_3 < (85.0f * gFrameDelta))) {
                if (D_005AA610 != 0x1000E) {
                    SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(1, 0, 4, 0);
                    }
                    var_s0 = 0;
loop_183:
                    if (var_s0 < 8) {
                        func_00144370(1, (void *)(var_s0 + 0x11122233), 0, (s32)((&D_005AB360)[var_s0]));
                        var_s0 += 1;
                        goto loop_183;
                    }
                    D_005AA618 = 0.0f;
                    var_s0 = D_005AA60C;
                    D_005AA610 = 0x1000E;
                    D_005AA61C = 5.0f;
                    D_005AA624 = 10.0f * gFrameDelta;
                    D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0xE0) + 8);
                    if (*(f32 *)((u8 *)(&D_005AA690) + 8) < 5.0f) {
                        D_005AA670 = -10.0f;
                    }
                }
            }
        }
        break;
    case 3:                                         /* switch 2 */
        temp_f0_5 = 96.0f * temp_f22 * gFrameDelta;
        *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) ((*(s32 *)((u8 *)(*D_005AA604) + 0x11D0) - M2C_BITWISE(s32, temp_f0_5)) & 0xFFFF);
        *D_005AA664 = (*D_005AA664 - M2C_BITWISE(s32, temp_f0_5)) & 0xFFFF;
        *D_005AA664 = ((s64) ((s64) ((s32) ((s16) *D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF;
        D_005AA668 += M2C_BITWISE(s32, (96.0f * temp_f20 * gFrameDelta));
        D_005AA668 = (s32) (u16) D_005AA668;
        if ((s16) D_005AA668 < -0x1400) {
            var_v0_7 = 0xEC00;
            goto block_191;
        }
        if ((s16) D_005AA668 >= 0xC01) {
            var_v0_7 = 0xC00;
block_191:
            D_005AA668 = var_v0_7;
        }
        var_f20_2 = 0.0f;
        temp_v0_3 = (s64) (M2C_BITWISE(s64, (4096.0f * temp_f22)) << 0x30) >> 0x30;
        D_005AA620 += (s32) (temp_v0_3 - D_005AA620) >> 1;
        D_005AA66C += (s32) (((s64) ((s64) (temp_v0_3 >> 1) << 0x30) >> 0x30) - D_005AA66C) >> 3;
        if (!(var_f21 <= 0.0f)) {
            var_f20_2 = var_f21 * (16.0f * gFrameDelta * var_f21);
        }
        if (!(D_005AA624 <= var_f20_2)) {
            temp_f0_6 = D_005AA624 * 0.98f;
            if (!(temp_f0_6 <= var_f20_2)) {
                D_005AA624 = temp_f0_6;
                var_f20_2 = temp_f0_6;
            } else {
                goto block_198;
            }
        } else {
block_198:
            D_005AA624 = var_f20_2;
        }
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C0) + (sp16C * var_f20_2));
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C8) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C8) + (sp168 * var_f20_2));
        var_s0 = D_005AA60C;
        if (func_00100230(func_001214F8(var_f21), 0) != 0) {
            if (!(var_f20_2 < (85.0f * gFrameDelta))) {
                SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 4, 0);
                }
                var_s1 = NULL;
loop_205:
                if ((s32) var_s1 < 8) {
                    func_00144370(1, var_s1 + 0x11122233, 0, (&D_005AB360)[(s32) var_s1]);
                    var_s1 += 1;
                    goto loop_205;
                }
                D_005AA618 = 0.0f;
                D_005AA610 = 0x1000E;
                D_005AA61C = 5.0f;
                D_005AA624 = 10.0f * gFrameDelta;
                D_005AA628 = 4;
                D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0xE0) + 8);
                if (*(f32 *)((u8 *)(&D_005AA690) + 8) < 5.0f) {
                    D_005AA670 = -10.0f;
                }
            } else {
                goto block_209;
            }
        } else {
block_209:
            var_s1 = NULL;
            if (var_f21 < 0.25f) {
loop_212:
                if ((s32) var_s1 < 8) {
                    func_00144370(1, var_s1 + 0x11122233, 0, (&D_005AB360)[(s32) var_s1]);
                    var_s1 += 1;
                    goto loop_212;
                }
                D_005AA618 = 0.0f;
                D_005AA610 = 0x10003;
                var_f0 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x30) + 8);
                D_005AA61C = 5.0f;
                D_005AA628 = 4;
block_260:
                D_005AA614 = var_f0;
            } else if (!(var_f21 < 0.9f)) {
                if (*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x400) {
                    SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(1, 0, 2, 0);
                    }
                    if (!(D_004E0614 <= 0.0f)) {
                        func_00144370(1, (u8 *)0x11122234, 0, D_005AB364);
                        func_00144050(1, 0x11122234, 0, 3, D_004E0614, 0, 0);
                        D_005AB364 = 3;
                    }
                    D_005AA618 = 0.0f;
                    D_005AA610 = 0x1000C;
                    temp_a3_2 = (unsigned char *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0xC0);
                    D_005AA61C = 5.0f;
                    sp144 = 1;
                    D_005AA628 = 5;
                    sp140 = 0;
                    D_005AA670 = 28.0f;
                    D_005AA614 = (f32) *(s32 *)((u8 *)temp_a3_2 + 8);
                    StrStatus_Dispatch(&sp130, 5, 0x40A00000, temp_a3_2);
                }
            }
        }
        break;
    case 5:                                         /* switch 2 */
        temp_f0_7 = 96.0f * temp_f22 * gFrameDelta;
        *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) ((*(s32 *)((u8 *)(*D_005AA604) + 0x11D0) - M2C_BITWISE(s32, temp_f0_7)) & 0xFFFF);
        *D_005AA664 = (*D_005AA664 - M2C_BITWISE(s32, temp_f0_7)) & 0xFFFF;
        *D_005AA664 = ((s64) ((s64) ((s32) ((s16) *D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF;
        D_005AA668 += M2C_BITWISE(s32, (96.0f * temp_f20 * gFrameDelta));
        D_005AA668 = (s32) (u16) D_005AA668;
        if ((s16) D_005AA668 < -0x1400) {
            var_v0_8 = 0xEC00;
            goto block_227;
        }
        if ((s16) D_005AA668 >= 0xC01) {
            var_v0_8 = 0xC00;
block_227:
            D_005AA668 = var_v0_8;
        }
        var_f20_3 = 0.0f;
        temp_v0_4 = (s64) (M2C_BITWISE(s64, (4096.0f * temp_f22)) << 0x30) >> 0x30;
        D_005AA620 += (s32) (temp_v0_4 - D_005AA620) >> 1;
        D_005AA66C += (s32) (((s64) ((s64) (temp_v0_4 >> 1) << 0x30) >> 0x30) - D_005AA66C) >> 3;
        if (!(var_f21 <= 0.0f)) {
            var_f20_3 = var_f21 * (96.0f * gFrameDelta * var_f21);
        }
        if (!(D_005AA624 <= var_f20_3)) {
            temp_f0_8 = D_005AA624 * 0.98f;
            if (!(temp_f0_8 <= var_f20_3)) {
                D_005AA624 = temp_f0_8;
                var_f20_3 = temp_f0_8;
            } else {
                goto block_234;
            }
        } else {
block_234:
            D_005AA624 = var_f20_3;
        }
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C0) + (sp16C * var_f20_3));
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C8) = (f32) (*(f32 *)((u8 *)(*D_005AA604) + 0x11C8) + (sp168 * var_f20_3));
        if (!(*(f32 *)((u8 *)(&D_005AA690) + 8) < 27.9f)) {
            D_005AA670 = 0.0f;
        }
        var_s0 = D_005AA60C;
        if (var_f21 < 0.0f) {
            if (!(var_f20_3 < (85.0f * gFrameDelta))) {
                SoundRpc_SetVolume(1, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 4, 0);
                }
                var_s1 = NULL;
loop_243:
                if ((s32) var_s1 < 8) {
                    func_00144370(1, var_s1 + 0x11122233, 0, (&D_005AB360)[(s32) var_s1]);
                    var_s1 += 1;
                    goto loop_243;
                }
                D_005AA618 = 0.0f;
                D_005AA610 = 0x1000E;
                D_005AA61C = 5.0f;
                D_005AA624 = 10.0f * gFrameDelta;
                D_005AA628 = 4;
                D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0xE0) + 8);
                if (*(f32 *)((u8 *)(&D_005AA690) + 8) < 5.0f) {
                    D_005AA670 = -10.0f;
                }
            } else {
                goto block_247;
            }
        } else {
block_247:
            var_s1 = NULL;
            if (var_f21 < 0.25f) {
loop_250:
                if ((s32) var_s1 < 8) {
                    func_00144370(1, var_s1 + 0x11122233, 0, (&D_005AB360)[(s32) var_s1]);
                    var_s1 += 1;
                    goto loop_250;
                }
                D_005AA618 = 0.0f;
                D_005AA610 = 0x10003;
                var_f0 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x30) + 8);
                D_005AA61C = 5.0f;
                D_005AA628 = 4;
                goto block_260;
            }
            if (!(var_f21 < 0.9f)) {
                if (!(*(&D_00492FCC + (D_004B4B63 * 0xB8)) & 0x400)) {
                    if (*(f32 *)((u8 *)(&D_005AA690) + 8) <= 0.0f) {
                        goto block_257;
                    }
                }
            } else {
block_257:
                if (!(D_004E0614 <= 0.0f)) {
                    func_00144370(1, (u8 *)0x11122234, 0, D_005AB364);
                    func_00144050(1, 0x11122234, 0, 1, D_004E0614, 0, 0);
                    D_005AB364 = 1;
                }
                D_005AA618 = 0.0f;
                D_005AA610 = 0x10002;
                var_f0 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + var_s0) + 0x46C)) + 0x14) + 0x20) + 8);
                D_005AA61C = 5.0f;
                D_005AA628 = 3;
                goto block_260;
            }
        }
        break;
    }
    if (D_005AA628 != 5) {
        if (!(D_005AA670 <= 0.0f)) {
            D_005AA670 = 0.0f;
        }
    }
    if (!(*(f32 *)((u8 *)(&D_005AA690) + 8) < 0.0f)) {
        if (!(D_005AA670 < 0.0f)) {
            var_f0_2 = D_00470060;
            var_f1 = D_00470064;
        } else {
            goto block_268;
        }
    } else {
block_268:
        var_f1 = D_00470068;
        var_f0_2 = D_0047006C;
    }
    if (*(f32 *)((u8 *)(&D_005AA690) + 8) < D_005AA670) {
        var_f3 = *(f32 *)((u8 *)(&D_005AA690) + 8) + var_f1;
        if (!(var_f3 <= D_005AA670)) {
            var_f3 = D_005AA670;
        }
        var_at = (float *)(&D_005AA690 + 8);
        goto block_278;
    }
    if (!(*(f32 *)((u8 *)(&D_005AA690) + 8) <= D_005AA670)) {
        var_f3 = *(f32 *)((u8 *)(&D_005AA690) + 8) - var_f0_2;
        if (var_f3 < D_005AA670) {
            var_f3 = D_005AA670;
        }
        var_at = (float *)(&D_005AA690 + 8);
block_278:
        *var_at = var_f3;
    }
    temp_f1 = *(f32 *)((u8 *)(*D_005AA604) + 0x11C0);
    temp_f4 = (f32) *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    temp_f3 = 4000.0f * temp_f4;
    temp_f2 = 2000.0f * temp_f4;
    temp_a1 = (unsigned char *)(*D_005AA604 + 0x11C0);
    if (temp_f1 < -temp_f2) {
        var_f0_3 = temp_f1 + temp_f3;
        goto block_283;
    }
    var_f0_3 = temp_f1 - temp_f3;
    if (!(temp_f1 <= temp_f2)) {
block_283:
        *(f32 *)((u8 *)(*D_005AA604) + 0x11C0) = var_f0_3;
    }
    temp_f1_2 = *(f32 *)((u8 *)temp_a1 + 8);
    var_f0_4 = temp_f1_2 + temp_f3;
    if (temp_f1_2 < -temp_f2) {
        goto block_288;
    }
    var_f0_4 = temp_f1_2 - temp_f3;
    if (!(temp_f1_2 <= temp_f2)) {
block_288:
        *(f32 *)((u8 *)temp_a1 + 8) = var_f0_4;
    }
    func_00291E30();
    temp_a2_7 = (unsigned char *)(D_005AA60C + 0x41C);
    if (*(s32 *)((u8 *)D_005AA60C + 0x41C) != D_005AA610) {
        var_a1 = 0;
loop_292:
        if (var_a1 < *(s32 *)((u8 *)D_005AA60C + 0x418)) {
            temp_v1_3 = var_a1 << 6;
            var_a1 += 1;
            *(s32 *)((u8 *)(temp_v1_3 + *(s32 *)((u8 *)temp_a2_7 + 0x10)) + 0x30) = -1;
            *(s32 *)((u8 *)(temp_v1_3 + *(s32 *)((u8 *)temp_a2_7 + 0x10)) + 0x34) = -1;
            *(s32 *)((u8 *)(temp_v1_3 + *(s32 *)((u8 *)temp_a2_7 + 0x10)) + 0x38) = -1;
            goto loop_292;
        }
        *(s32 *)((u8 *)temp_a2_7 + 0xC) = 0xBF800000;
    }
    *(s32 *)((u8 *)D_005AA60C + 0x41C) = (s32) D_005AA610;
    *(f32 *)((u8 *)D_005AA60C + 0x424) = (f32) D_005AA618;
    amMotion_Update(D_005AA60C, 0, temp_a2_7, D_005AA610);
    if (!(D_005AA61C <= gFrameDelta)) {
        var_f13 = gFrameDelta / D_005AA61C;
        D_005AA61C -= gFrameDelta;
    } else {
        var_f13 = 1.0f;
        D_005AA61C = 0.0f;
    }
    func_0013C1E0(D_005AA60C, 0, var_f13);
    amMotion_BuildMatrices((char *)((s8 *) D_005AA60C));
    var_s0 = D_005AA60C;
    temp_a0 = (unsigned char *)((0 * 4) + var_s0);
    D_005AA618 += gFrameDelta;
loop_309:
    if (!(D_005AA618 < D_005AA614)) {
        switch (D_005AA628) {                       /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            D_005AA610 = 0x10002;
            D_005AA618 = 0.0f;
            D_005AA61C = 0.0f;
            D_005AA628 = 3;
            D_005AA614 = (f32) *(s32 *)((u8 *)((2 * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x46C)) + 0x14)) + 8);
            break;
        case 6:                                     /* switch 3 */
            *(s32 *)((u8 *)(*D_005AA604) + 0x11D0) = (s32) ((*(s32 *)((u8 *)(*D_005AA604) + 0x11D0) + 0x7FFF + 1) & 0xFFFF);
            *D_005AA664 = (*D_005AA664 + 0x7FFF + 1) & 0xFFFF;
            /* fallthrough */
        case 8:                                     /* switch 3 */
        case 4:                                     /* switch 3 */
            D_005AA610 = 0x10000;
            D_005AA618 = 0.0f;
            D_005AA61C = 0.0f;
            D_005AA628 = 0;
            D_005AA614 = (f32) *(s32 *)((u8 *)((0 * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x46C)) + 0x14)) + 8);
            break;
        default:                                    /* switch 3 */
            D_005AA618 -= D_005AA614;
            break;
        }
        goto loop_309;
    }
    func_00131B90(&sp60);
    func_00131F00(&sp60, 0, 0);
    func_00132DF0(D_003F0800);
    func_002BF970(D_005AA550);
    func_00290D00();
    func_0013B0B0(&D_005AA6F0);
    func_00290BB0();
    func_002BF520();
    func_0013B110(1);
    func_0013B0B0(&D_005AA6B0);
    func_0013B620((u8 *)0x8000);
    func_0013B750(D_005AA620);
    func_00133D10(0);
    sp120 = D_00453DB0;
    sp128 = 0.25f * D_005AA624;
    func_0029D660(&sp120);
    func_001CA780(*D_005AA608, 1);
    func_0029D660(NULL);
    func_002BF610();
    func_0013B110(1);
}
