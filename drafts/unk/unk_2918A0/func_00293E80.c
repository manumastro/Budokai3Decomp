/* Draft (not built): func_00293E80 at 0x00293E80, size 0xA40, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF; @ 428: D_005AA664 = (D_005AA664 - M2C_BITWISE(s32, temp_f0)) & 0xFFFF;
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00293E80.s */

// src/unk/unk_2918A0.c func_00293E80 cerr diff=-1/0
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32, s32, f32);
s32 StrBg_SetFlags(void *, s32, s32 *);
s32 StrMap_StartPos(s32, s32, s32);
s32 StrStatus_Dispatch(s32 *);
s32 func_00144050(s32, s32, s32, s32, f32, s32, s32);
s32 func_00144370(s32, s32, s32, s32);
f32 func_00146E30(s32 *, void *);
s32 func_002A94B0(s32, s32, s32, s32);
s32 func_002BF000(void **);
s32 memset(s32 *, s32, s32);
extern s128 D_00453DD0;
extern s32 D_00492FD8;
extern s32 D_00492FD9;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s32 D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern s32 D_005AA618;
extern s32 D_005AA61C;
extern s32 D_005AA628;
extern s32 D_005AA62C;
extern s32 *D_005AA638;
extern s32 D_005AA668;
extern void *D_005AA734;
extern s32 D_005AB350;
extern s32 D_005AB360;
extern s32 D_005AB364;
extern void Fade_SetRequest();
extern void func_00146F30(void *);
extern void SoundRpc_Send3();
extern void func_0011F680(void);
extern char D_00492FCE[];
extern void func_0029AC30(void);
extern void func_00293D70(void);
extern void func_002918A0(void);
extern void func_00292FF0(void);
extern void func_00293950(void);
void func_00293E80(u8 *arg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    s32 sp60;
    s32 sp70;
    s32 sp74;
    s128 sp90;
    s16 sp94;
    s32 *var_a0_3;
    s32 *var_v0_3;
    s32 *var_v1;
    f32 temp_f0;
    s32 *temp_s1;
    s32 *temp_s1_2;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_t1;
    s64 temp_t3;
    s8 temp_v0;
    s8 temp_v0_2;
    u16 temp_s0;

    temp_a0 = D_004B4B63 * 0xB8;
    temp_v0 = *(&D_00492FD8 + temp_a0);
    temp_s0 = *(D_00492FCE + temp_a0);
    if (temp_v0 >= 0x21) {
        var_a0 = temp_v0 - 0x20;
    } else {
        var_a0 = temp_v0 + 0x20;
        if (temp_v0 < -0x20) {

        } else {
            var_a0 = 0;
        }
    }
    temp_v0_2 = *(&D_00492FD9 + (D_004B4B63 * 0xB8));
    if (temp_v0_2 >= 0x21) {
        var_a0_2 = temp_v0_2 - 0x20;
    } else {
        var_a0_2 = temp_v0_2 + 0x20;
        if (temp_v0_2 < -0x20) {

        } else {
            var_a0_2 = 0;
        }
    }
    temp_f0 = 192.0f * ((f32) var_a0 / 96.0f) * gFrameDelta;
    *(s32 *)((u8 *)D_005AA604 + 0x11D0) = (s32) ((*(s32 *)((u8 *)D_005AA604 + 0x11D0) - M2C_BITWISE(s32, temp_f0)) & 0xFFFF);
    D_005AA664 = (D_005AA664 - M2C_BITWISE(s32, temp_f0)) & 0xFFFF;
    D_005AA664 = ((s64) ((s64) ((s32) ((s16) D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF;
    D_005AA668 += M2C_BITWISE(s32, (96.0f * ((f32) var_a0_2 / 96.0f) * gFrameDelta));
    D_005AA668 = (s32) (u16) D_005AA668;
    if ((s16) D_005AA668 < -0x1400) {
        var_v0 = 0xEC00;
        goto block_17;
    }
    if ((s16) D_005AA668 >= 0xC01) {
        var_v0 = 0xC00;
block_17:
        D_005AA668 = var_v0;
    }
    func_002922C0(D_005AA604, D_004B4B63);
    func_002BF000((void **)(D_005AA550));
    if (D_005AA734 == NULL) {
        if (D_005AB340 != NULL) {
            if (D_005AA5F4 != 0) {
                func_0022D0E0((s32)(D_005AA5F4), 1);
                D_005AA5F4 = 0;
            }
            if (D_005AA5BC != NULL) {
                amTask_Kill((s32)((void *)(D_005AA5BC)));
                D_005AA5BC = NULL;
            }
            D_005AB340 = NULL;
            func_00144370(1, 0x11122234, 0, D_005AB364);
        }
        if (D_005AA62C != -1) {
            func_0029AC30();
            var_v0_2 = -1;
            goto block_54;
        }
    } else if (*(s32 **)((u8 *)D_005AA734 + 0x20) != D_005AB340) {
        if (D_005AA734 != NULL) {
            sp90 = D_00453DD0;
            if (*(s8 *)((u8 *)D_005AA604 + 0x11E6) != 0) {
                if (!(D_004E0614 <= 0.0f)) {
                    func_00144370(1, 0x11122234, 0, D_005AB364);
                    func_00144050(1, 0x11122234, 0, 6, D_004E0614, 0, 0);
                    D_005AB364 = 6;
                }
                SoundRpc_SetVolume(1, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 0x10, 0);
                }
                SoundRpc_SetVolume(1, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 7, 0);
                }
            } else {
                SoundRpc_SetVolume(1, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 5, 0);
                }
                SoundRpc_SetVolume(1, 0, D_004E0614, 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 7, 0);
                }
            }
            if (*(s8 *)((u8 *)D_005AA604 + 0x11E6) != 0) {
                sp94 = -0x8000;
            }
            func_0028EE90(D_005AA5A0, &D_005AA5CC, &D_005AA5D8, &D_005AA5E4);
            StrBg_SetFlags(D_005AA5BC, 0, &D_005AB350);
            D_005AB340 = *(s32 **)((u8 *)D_005AA734 + 0x20);
            temp_s1 = *(s32 **)((u8 *)D_005AA734 + 0x20);
            temp_a2 = *(s32 *)((u8 *)temp_s1 + 8);
            if (temp_a2 == -1) {
                func_0029AC30();
                var_v0_2 = -1;
                goto block_54;
            }
            if (D_005AA62C != temp_a2) {
                StrMap_StartPos(0x9300, 0x20000, temp_a2);
                var_v0_2 = *(s32 *)((u8 *)temp_s1 + 8);
                goto block_54;
            }
        } else {
            if (D_005AA5F4 != 0) {
                func_0022D0E0((s32)(D_005AA5F4), 1);
                D_005AA5F4 = 0;
            }
            if (D_005AA5BC != NULL) {
                amTask_Kill((s32)((void *)(D_005AA5BC)));
                D_005AA5BC = NULL;
            }
            D_005AB340 = NULL;
            if (D_005AA62C != -1) {
                func_0029AC30();
                var_v0_2 = -1;
block_54:
                D_005AA62C = var_v0_2;
            }
        }
    }
    if (D_005AA734 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_00291BF0();
    if (temp_s0 & 1) {
        Help_Open(0x7000 | (0x40040 << 0x20), (1 << D_004B4B63) & 0xFF);
        return;
    }
    if (temp_s0 & 0x1800) {
        var_s0 = 0;
loop_64:
        if (var_s0 < 8) {
            func_00144370(1, var_s0 + 0x11122233, 0, *(&D_005AB360 + (var_s0 * 4)));
            var_s0 += 1;
            goto loop_64;
        }
        func_002919B0();
        var_v1 = (s32 *)(&func_00293D70);
        if (&func_00293D70 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s0 & 0x4000) {
        temp_s1_2 = D_005AB340;
        var_s0_2 = 0;
        if (temp_s1_2 != NULL) {
loop_73:
            if (var_s0_2 < 8) {
                func_00144370(1, var_s0_2 + 0x11122233, 0, *(&D_005AB360 + (var_s0_2 * 4)));
                var_s0_2 += 1;
                goto loop_73;
            }
            func_002919B0();
            D_005AA638 = temp_s1_2;
            if (func_00146E30(temp_s1_2 + 0x10, D_005AA604 + 0x11C0) < 1500.0f) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                sp54 = 0.0f;
                sp50 = -sp50;
                sp58 = -sp58;
                func_00146F30(&sp50);
                func_0011F680();
                temp_t3 = (s64) (M2C_BITWISE(s64, ((32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.1415927f)) << 0x30) >> 0x30;
                D_005AA664 += temp_t3 - *(s32 *)((u8 *)D_005AA604 + 0x11D0);
                *(s32 *)((u8 *)D_005AA604 + 0x11D0) = (s32) temp_t3;
                D_005AA610 = 0x10007;
                D_005AA618 = 0;
                temp_a2_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + D_005AA60C) + 0x46C)) + 0x14);
                D_005AA61C = 0x40A00000;
                D_005AA614 = (f32) *(s32 *)((u8 *)(temp_a2_2 + 0x70) + 8);
                SoundRpc_SetVolume(1, 0, M2C_BITWISE(f32, temp_a2_2), D_005AA60C, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(1, 0, 9, 0);
                }
                func_002A94B0(*temp_s1_2, 0, 0, 0);
                Fade_SetRequest(0xA, &func_002918A0, 0);
                var_a0_3 = (s32 *)(&func_00292FF0);
                D_005AA628 = 7;
                if (&func_00292FF0 == NULL) {
                    var_a0_3 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_a0_3;
            } else {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                sp44 = 0.0f;
                sp40 = -sp40;
                sp48 = -sp48;
                func_00146F30(&sp40);
                func_0011F680();
                temp_t1 = (s64) (M2C_BITWISE(s64, ((32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.1415927f)) << 0x30) >> 0x30;
                temp_a3 = temp_t1 - *(s32 *)((u8 *)D_005AA604 + 0x11D0);
                temp_a2_3 = (s32)(D_005AA664 + temp_a3);
                D_005AA664 = temp_a2_3;
                *(s32 *)((u8 *)D_005AA604 + 0x11D0) = (s32) temp_t1;
                D_005AA610 = 0x10005;
                D_005AA618 = 0;
                D_005AA61C = 0x40A00000;
                D_005AA614 = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((0 * 4) + D_005AA60C) + 0x46C)) + 0x14) + 0x50) + 8);
                func_002A94B0(*temp_s1_2, D_005AA60C, temp_a2_3, temp_a3);
                var_v0_3 = (s32 *)(&func_00293950);
                if (&func_00293950 == NULL) {
                    var_v0_3 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
                memset(&sp60, 0, 0x30);
                sp70 = 5;
                sp74 = 0;
                StrStatus_Dispatch(&sp60);
            }
        }
    }
}
