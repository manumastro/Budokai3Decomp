/* Draft (not built): func_00302450 at 0x00302450, size 0x15DC, segment unk/unk_301530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); + gTourMap) + 0x2F0) == 4) { @ 203: *(u8 **)((u8 *)temp_v0 + 0x48) = (u8 *) (((u8 *)gTourMap) + ((u8 *)var_s0) + 0x2EC);
 * Original: asm/nonmatchings/unk/unk_301530/func_00302450.s */

// src/unk/unk_301530.c func_00302450 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, s16, void *, f32);
f32 func_00146E30(f32 *, f32 *, void *);
s32 func_0029E9B0(s16, s32, s8, s32);
s32 func_002F9930(s32);
s32 func_002FC800(s32);
s32 func_002FCAF0();
s32 func_002FCF60(s32);
s32 func_002FD560();
s32 func_002FD7E0(s32, u16, s8);
s32 memset(void *, s32, s32);
extern s32 D_00458C40;
extern s32 D_0046B560;
extern u16 D_00492FCC;
extern u16 D_00493084;
extern s8 D_004B4B58;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern s8 D_005CA030;
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
extern s32 TourMap_TaskSlide;
extern s32 TourMap_TaskWaitEntity;
extern s32 func_002FC660;
extern s32 func_00300400;
extern s32 func_003004B0;
extern s32 func_003009E0;
extern s32 func_00300B60;
extern f32 gFrameDelta;
extern void *gTourMap;
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern void func_003019A0(void);
void func_00302450(u8 *arg0, s8 arg2) {
    s32 sp50;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    s32 *var_a1_2;
    s32 *var_v1_10;
    s32 *var_v1_3;
    s32 *var_v1_8;
    s32 *var_v1_9;
    f32 *var_v1_4;
    f32 *var_v1_5;
    f32 *var_v1_6;
    f32 *var_v1_7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    s16 temp_a1;
    s16 temp_a1_5;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_9;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_6;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_5;
    s32 temp_t3_3;
    s32 temp_t4_2;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t6_4;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_10;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1_2;
    s8 *var_a2_2;
    s8 *var_s2_2;
    s8 temp_t2;
    s8 temp_t3;
    s8 temp_t3_2;
    s8 var_a2;
    s8 var_a2_3;
    s8 var_s3;
    u16 var_a1;
    u32 temp_v1;
    u32 var_v1;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a1_4;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_t4;
    u8 *temp_v0;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v1_3;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *var_a3_2;

    var_a2 = arg2;
    var_f1 = *(f32 *)((u8 *)gTourMap + 0x54);
    temp_s1 = arg0 + 0x30;
    if (D_005CA030 == 1) {
        var_a2 = D_004B4B63;
        var_a1 = *(&D_00492FCC + (var_a2 * 0xB8));
        if (var_a1 & 0x800) {
            var_f1 *= 4.0f;
        }
        if (var_a1 & 0x400) {
            goto block_9;
        }
    } else {
        var_a1 = D_00492FCC | D_00493084;
        if (var_a1 & 0x800) {
            var_f1 *= 4.0f;
        }
        if (var_a1 & 0x400) {
block_9:
            var_f1 *= 4.0f;
        }
    }
    *(f32 *)((u8 *)gTourMap + 0x50) = var_f1;
    temp_v1 = *(u32 *)((u8 *)arg0 + 0x30);
    switch (temp_v1) {
    case 0:
        temp_a0 = *(s32 *)((u8 *)temp_s1 + 8);
        *(s32 *)((u8 *)temp_s1 + 8) = (s32) (temp_a0 + 1);
        if (!((f32) temp_a0 <= (20.0f * gFrameDelta))) {
            *(s32 *)((u8 *)temp_s1 + 8) = 0;
            var_s2 = 0;
            if ((1 << D_005D0082) > 0) {
                var_s0 = 0;
                do {
                    if (*(s8 *)((u8 *)(((u8 *)gTourMap) + var_s0) + 0x2F0) == 3) {
                        temp_v0 = amTask_Create(&func_00300400, 0, 0x3000, 0x200);
                        *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
                        *(s32 *)((u8 *)temp_v0 + 0x34) = 0;
                        *(u8 **)((u8 *)temp_v0 + 0x48) = (u8 *) (((u8 *)gTourMap) + ((u8 *)var_s0) + 0x2EC);
                    }
                    var_s2 += 1;
                    var_s0 += 0x14;
                } while (var_s2 < (1 << D_005D0082));
            }
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 4, 0);
            }
            var_v1 = *(u32 *)((u8 *)arg0 + 0x30) + 1;
block_126:
            *(u32 *)((u8 *)arg0 + 0x30) = var_v1;
        }
    default:
        return;
    case 1:
        temp_a1 = *(s16 *)((u8 *)gTourMap + 0x66);
        if (*(s8 *)((u8 *)((temp_a1 * 0x14) + gTourMap) + 0x2F0) == 4) {
            amAdx_SetVolume(0, temp_a1, gTourMap, D_004E0618);
            amAdx_Pause(0, 0);
            amAdx_PlayAfs(0, 0x210A7, 0);
            func_002F9930(0xB);
            if (*(s16 *)((u8 *)gTourMap + 0x64) >= 0) {
                temp_s0 = amTask_Create(&TourMap_TaskSlide, 0, 0x3000, 0x200) + 0x30;
                memset(temp_s0, 0, 0x1C);
                *(u8 **)((u8 *)temp_s0 + 0x18) = (u8 *) (((u8 *)gTourMap) + (*(s16 *)((u8 *)gTourMap + 0x64) * 0x14) + 0x2EC);
                var_v1_2 = -1;
                if (*(s16 *)((u8 *)gTourMap + 0x66) < *(s16 *)((u8 *)gTourMap + 0x64)) {

                } else {
                    var_v1_2 = 1;
                }
                *(s32 *)((u8 *)temp_s0 + 0x14) = var_v1_2;
                temp_t2 = *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 7);
                var_f0 = (f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f;
                if ((temp_s0 + 0xC) != NULL) {
                    *(f32 *)((u8 *)temp_s0 + 0xC) = (f32) (((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (temp_t2 * 0x64));
                }
                var_t1 = 1;
                if (temp_t2 > 0) {
                    if (temp_t2 >= 9) {
                        do {
                            temp_a2 = (1 << (var_t1 + 1)) * 0x64;
                            temp_a1_2 = (1 << (var_t1 + 2)) * 0x64;
                            temp_a0_2 = (1 << (var_t1 + 3)) * 0x64;
                            temp_v1_2 = (1 << (var_t1 + 4)) * 0x64;
                            temp_f0 = var_f0 + (0.5f * (f32) ((1 << (var_t1 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_t1) * 0x64));
                            temp_t6 = (1 << (var_t1 + 5)) * 0x19;
                            temp_t5 = (1 << (var_t1 + 6)) * 5;
                            var_t1 += 8;
                            var_f0 = temp_f0 + (0.5f * (f32) temp_a2) + (0.5f * (f32) temp_a1_2) + (0.5f * (f32) temp_a0_2) + (0.5f * (f32) temp_v1_2) + (0.5f * (f32) (temp_t6 * 4)) + (0.5f * (f32) (temp_t5 * 0x14));
                        } while ((temp_t2 - 8) >= var_t1);
                    }
                    if (temp_t2 >= var_t1) {
                        do {
                            temp_a0_3 = 1 << (var_t1 - 1);
                            var_t1 += 1;
                            var_f0 += 0.5f * (f32) (temp_a0_3 * 0x64);
                        } while (temp_t2 >= var_t1);
                    }
                }
                if ((temp_s0 + 8) != NULL) {
                    *(f32 *)((u8 *)temp_s0 + 8) = (f32) (200.0f + var_f0 + (f32) ((1 << temp_t2) * 0x64 * ((s16) *(s16 *)((u8 *)gTourMap + 0x64) >> temp_t2)));
                }
                *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) (5.0f * gFrameDelta * (f32) *(s32 *)((u8 *)temp_s0 + 0x14));
                *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 4) = 2;
            }
            var_v1 = *(u32 *)((u8 *)arg0 + 0x30) + 1;
            goto block_126;
        }
        break;
    case 2:
        if (func_002FD7E0(1, var_a1, var_a2) == 3) {
            var_a3 = 0;
            var_a2_2 = &D_005CA030;
loop_43:
            if (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_a2_2 + 0x6050) * 0x14)) + 0x2F6) >= 0) {
                *(u8 **)((u8 *)gTourMap + 0x6C) = (u8 *) (((u8 *)gTourMap) + ((&D_005D0080)[var_a3] * 0x14) + 0x2EC);
            } else {
                var_a3 += 1;
                var_a2_2 += 1;
                if (var_a3 < 2) {
                    goto loop_43;
                }
            }
        }
        var_v1_3 = &func_00300B60;
        if (&func_00300B60 == NULL) {
            var_v1_3 = NULL;
        }
        *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x1C) = var_v1_3;
        temp_v1_3 = *(u8 **)((u8 *)gTourMap + 0x6C);
        if (temp_v1_3 != NULL) {
            temp_t3 = *(s8 *)((u8 *)temp_v1_3 + 7);
            var_t2 = 1;
            var_f0_2 = (f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f;
            spC8 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (temp_t3 * 0x64);
            if (temp_t3 > 0) {
                if (temp_t3 >= 9) {
                    do {
                        temp_a2_2 = (1 << (var_t2 + 1)) * 0x64;
                        temp_a1_3 = (1 << (var_t2 + 2)) * 0x64;
                        temp_a0_4 = (1 << (var_t2 + 3)) * 0x64;
                        temp_v1_4 = (1 << (var_t2 + 4)) * 0x64;
                        temp_f0_2 = var_f0_2 + (0.5f * (f32) ((1 << (var_t2 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_t2) * 0x64));
                        temp_t6_2 = (1 << (var_t2 + 5)) * 0x19;
                        temp_t5_2 = (1 << (var_t2 + 6)) * 5;
                        var_t2 += 8;
                        var_f0_2 = temp_f0_2 + (0.5f * (f32) temp_a2_2) + (0.5f * (f32) temp_a1_3) + (0.5f * (f32) temp_a0_4) + (0.5f * (f32) temp_v1_4) + (0.5f * (f32) (temp_t6_2 * 4)) + (0.5f * (f32) (temp_t5_2 * 0x14));
                    } while ((temp_t3 - 8) >= var_t2);
                }
                if (temp_t3 >= var_t2) {
                    do {
                        temp_a0_5 = 1 << (var_t2 - 1);
                        var_t2 += 1;
                        var_f0_2 += 0.5f * (f32) (temp_a0_5 * 0x64);
                    } while (temp_t3 >= var_t2);
                }
            }
            temp_f0_3 = 200.0f + var_f0_2 + (f32) ((1 << temp_t3) * 0x64 * ((s32) M2C_ERROR(/* Read from unset register $t7 */) >> temp_t3));
            spCC = temp_f0_3;
            temp_v1_5 = *(u8 **)((u8 *)gTourMap + 0x44);
            *(f32 *)((u8 *)temp_v1_5 + 0x3C) = temp_f0_3;
            *(f32 *)((u8 *)temp_v1_5 + 0x40) = (f32) (spC8 - 100.0f);
        } else {
            temp_a1_4 = *(u8 **)((u8 *)gTourMap + 0x70);
            if (temp_a1_4 != NULL) {
                temp_v1_6 = *(u8 **)((u8 *)gTourMap + 0x44);
                *(f32 *)((u8 *)temp_v1_6 + 0x3C) = (f32) *(f32 *)((u8 *)temp_a1_4 + 0xC);
                *(f32 *)((u8 *)temp_v1_6 + 0x40) = (f32) (*(f32 *)((u8 *)temp_a1_4 + 0x10) - 100.0f);
            } else {
                temp_v1_7 = *(u8 **)((u8 *)gTourMap + 0x44);
                *(f32 *)((u8 *)temp_v1_7 + 0x3C) = (f32) *(f32 *)((u8 *)temp_v1_7 + 0x30);
                *(f32 *)((u8 *)temp_v1_7 + 0x40) = (f32) *(f32 *)((u8 *)temp_v1_7 + 0x34);
            }
        }
        *(s32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x44) = 0;
        var_v1 = *(u32 *)((u8 *)arg0 + 0x30) + 1;
        goto block_126;
    case 3:
        var_v1_4 = &spA0;
        var_v0 = 0x10;
        temp_a0_6 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_3 = temp_a0_6 + 0x30;
        if (var_v1_4 != NULL) {
            do {
                *var_v1_4 = 0;
                var_v0 -= 1;
                var_v1_4 += 1;
            } while (var_v0 != 0);
        }
        var_v1_5 = &sp90;
        var_v0_2 = 0x10;
        spA0 = *(f32 *)((u8 *)temp_a0_6 + 0x30);
        spA4 = *(f32 *)((u8 *)temp_a2_3 + 4);
        spA8 = *(f32 *)((u8 *)temp_a2_3 + 8);
        if (var_v1_5 != NULL) {
            do {
                *var_v1_5 = 0;
                var_v0_2 -= 1;
                var_v1_5 += 1;
            } while (var_v0_2 != 0);
        }
        sp90 = *(f32 *)((u8 *)temp_a2_3 + 0xC);
        sp94 = *(f32 *)((u8 *)temp_a2_3 + 0x10);
        sp98 = *(f32 *)((u8 *)temp_a2_3 + 0x14);
        var_a0 = 1;
        if (!(func_00146E30(&sp90, &spA0, temp_a2_3) <= 0.1f)) {
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            var_v1 = *(u32 *)((u8 *)arg0 + 0x30) + 1;
            goto block_126;
        }
        break;
    case 4:
        var_v1_6 = &sp80;
        var_v0_3 = 0x10;
        temp_a0_7 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_4 = temp_a0_7 + 0x30;
        if (var_v1_6 != NULL) {
            do {
                *var_v1_6 = 0;
                var_v0_3 -= 1;
                var_v1_6 += 1;
            } while (var_v0_3 != 0);
        }
        var_v1_7 = &sp70;
        var_v0_4 = 0x10;
        sp80 = *(f32 *)((u8 *)temp_a0_7 + 0x30);
        sp84 = *(f32 *)((u8 *)temp_a2_4 + 4);
        sp88 = *(f32 *)((u8 *)temp_a2_4 + 8);
        if (var_v1_7 != NULL) {
            do {
                *var_v1_7 = 0;
                var_v0_4 -= 1;
                var_v1_7 += 1;
            } while (var_v0_4 != 0);
        }
        sp70 = *(f32 *)((u8 *)temp_a2_4 + 0xC);
        sp74 = *(f32 *)((u8 *)temp_a2_4 + 0x10);
        sp78 = *(f32 *)((u8 *)temp_a2_4 + 0x14);
        var_a0_2 = 1;
        if (!(func_00146E30(&sp70, &sp80, temp_a2_4) <= 0.1f)) {
            var_a0_2 = 0;
        }
        if (var_a0_2 != 0) {
            *(u32 *)((u8 *)arg0 + 0x30) = 0U;
            temp_v0_2 = func_002FCF60(var_a0_2);
            if (temp_v0_2 == 3) {
                var_s3 = 0;
                var_s2_2 = &D_005CA030;
                var_s1 = 0;
                *(s32 *)((u8 *)gTourMap + 0x48) = 2;
                do {
                    var_a2_3 = var_s3;
                    if (*(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (D_005D0080 * 0x14)) + 0x2F4) * 2)) == *(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (D_005D0081 * 0x14)) + 0x2F4) * 2))) {

                    } else {
                        temp_a1_5 = *(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s2_2 + 0x6050) * 0x14)) + 0x2F6);
                        if (temp_a1_5 >= 0) {
                            var_a2_3 = *(s8 *)((u8 *)(&D_005CA030 + (temp_a1_5 * 0xB80)) + 0xB71);
                        } else {
                            var_a2_3 = 0;
                        }
                    }
                    temp_v0_3 = func_0029E9B0(*(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s2_2 + 0x6050) * 0x14)) + 0x2F4) * 2)), 0, var_a2_3, ((u8 *)var_s3) + 1);
                    var_s3 += 1;
                    var_s2_2 += 1;
                    *(s32 *)((u8 *)(((u8 *)gTourMap) + var_s1) + 0x74) = temp_v0_3;
                    var_s1 += 4;
                } while (var_s3 < 2);
                var_a1_2 = &sp50;
                var_a2_4 = 0;
                *(s128 *)((u8 *)var_a1_2 + 0) = (s128) *(s128 *)((u8 *)(&D_00458C40) + 0);
                *(s128 *)((u8 *)var_a1_2 + 0x10) = (s128) *(s128 *)((u8 *)(&D_00458C40) + 0x10);
                var_a3_2 = ((u8 *)gTourMap) + 0x19C;
                do {
                    if (*(s32 *)((u8 *)var_a3_2 + 0) != *(s32 *)((u8 *)var_a1_2 + 4)) {
                        *(s32 *)((u8 *)var_a3_2 + 8) = 0;
                        *(s32 *)((u8 *)var_a3_2 + 0) = (s32) *(s32 *)((u8 *)var_a1_2 + 4);
                    }
                    var_a2_4 += 1;
                    var_a1_2 += 8;
                    var_a3_2 += 0x30;
                } while (var_a2_4 < 4);
                var_v1_8 = &func_003009E0;
                if (&func_003009E0 == NULL) {
                    var_v1_8 = NULL;
                }
                *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x1C) = var_v1_8;
                var_v1_9 = (s32 *)(&func_003019A0);
                if (&func_003019A0 == NULL) {
                    var_v1_9 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_9;
                return;
            }
            if (temp_v0_2 == 4) {
                temp_s0_2 = amTask_Create(&func_003004B0, 0, 0x3000, 0x200) + 0x30;
                memset(temp_s0_2, 0, 0x1C);
                var_t2_2 = 1;
                temp_a0_8 = *(u8 **)((u8 *)gTourMap + 0x70);
                *(s8 *)((u8 *)temp_a0_8 + 7) = (s8) (*(s8 *)((u8 *)temp_a0_8 + 7) + 1);
                temp_t4 = *(u8 **)((u8 *)gTourMap + 0x70);
                temp_t3_2 = *(s8 *)((u8 *)temp_t4 + 7);
                var_f0_3 = (f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f;
                spC0 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (temp_t3_2 * 0x64);
                if (temp_t3_2 > 0) {
                    if (temp_t3_2 >= 9) {
                        do {
                            temp_a2_5 = (1 << (var_t2_2 + 1)) * 0x64;
                            temp_a1_6 = (1 << (var_t2_2 + 2)) * 0x64;
                            temp_a0_9 = (1 << (var_t2_2 + 3)) * 0x64;
                            temp_v1_8 = (1 << (var_t2_2 + 4)) * 0x64;
                            temp_f0_4 = var_f0_3 + (0.5f * (f32) ((1 << (var_t2_2 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_t2_2) * 0x64));
                            temp_t7 = (1 << (var_t2_2 + 5)) * 0x19;
                            temp_t6_3 = (1 << (var_t2_2 + 6)) * 5;
                            var_t2_2 += 8;
                            var_f0_3 = temp_f0_4 + (0.5f * (f32) temp_a2_5) + (0.5f * (f32) temp_a1_6) + (0.5f * (f32) temp_a0_9) + (0.5f * (f32) temp_v1_8) + (0.5f * (f32) (temp_t7 * 4)) + (0.5f * (f32) (temp_t6_3 * 0x14));
                        } while ((temp_t3_2 - 8) >= var_t2_2);
                    }
                    if (temp_t3_2 >= var_t2_2) {
                        do {
                            temp_a0_10 = 1 << (var_t2_2 - 1);
                            var_t2_2 += 1;
                            var_f0_3 += 0.5f * (f32) (temp_a0_10 * 0x64);
                        } while (temp_t3_2 >= var_t2_2);
                    }
                }
                var_v1 = 5;
                temp_f0_5 = 200.0f + ((u8 *)var_f0_3) + (f32) ((1 << temp_t3_2) * 0x64 * ((s32) ((temp_t4 - (((u8 *)gTourMap) + 0x2EC)) / 20) >> temp_t3_2));
                spC4 = temp_f0_5;
                *(s8 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x70)) + 4) = 2;
                *(u8 **)((u8 *)temp_s0_2 + 0x18) = (u8 *) *(u8 **)((u8 *)gTourMap + 0x70);
                *(f32 *)((u8 *)temp_s0_2 + 8) = temp_f0_5;
                *(f32 *)((u8 *)temp_s0_2 + 0xC) = spC0;
                *(f32 *)((u8 *)temp_s0_2 + 0x10) = (f32) (5.0f * gFrameDelta);
                goto block_126;
            }
            func_002FC800(temp_v0_2);
            func_002F9930(temp_v0_2 + 0xE);
            var_v1_10 = &func_002FC660;
            if (&func_002FC660 == NULL) {
                var_v1_10 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_10;
            if (temp_v0_2 != 0) {
                var_a3_3 = 1;
                var_f0_4 = (f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f;
                spB8 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (D_005D0082 * 0x64);
                if (D_005D0082 > 0) {
                    if (D_005D0082 >= 9) {
                        do {
                            temp_a0_11 = (1 << (var_a3_3 + 1)) * 0x64;
                            temp_v1_9 = (1 << (var_a3_3 + 2)) * 0x64;
                            temp_v0_4 = (1 << (var_a3_3 + 3)) * 0x64;
                            temp_t6_4 = (1 << (var_a3_3 + 4)) * 0x64;
                            temp_t4_2 = (1 << (var_a3_3 + 5)) * 0x19;
                            temp_f0_6 = var_f0_4 + (0.5f * (f32) ((1 << (var_a3_3 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_a3_3) * 0x64));
                            temp_t3_3 = (1 << (var_a3_3 + 6)) * 5;
                            var_a3_3 += 8;
                            var_f0_4 = temp_f0_6 + (0.5f * (f32) temp_a0_11) + (0.5f * (f32) temp_v1_9) + (0.5f * (f32) temp_v0_4) + (0.5f * (f32) temp_t6_4) + (0.5f * (f32) (temp_t4_2 * 4)) + (0.5f * (f32) (temp_t3_3 * 0x14));
                        } while ((D_005D0082 - 8) >= var_a3_3);
                    }
                    if (D_005D0082 >= var_a3_3) {
                        do {
                            temp_v1_10 = 1 << (var_a3_3 - 1);
                            var_a3_3 += 1;
                            var_f0_4 += 0.5f * (f32) (temp_v1_10 * 0x64);
                        } while (D_005D0082 >= var_a3_3);
                    }
                }
                temp_f0_7 = 200.0f + var_f0_4 + 0.0f;
                spBC = temp_f0_7;
                temp_v0_5 = *(u8 **)((u8 *)gTourMap + 0x44);
                *(f32 *)((u8 *)temp_v0_5 + 0x3C) = temp_f0_7;
                *(f32 *)((u8 *)temp_v0_5 + 0x40) = spB8;
                *(s32 *)((u8 *)temp_v0_5 + 0x44) = 0;
                temp_v0_6 = amTask_Create(&TourMap_TaskWaitEntity, 0, 0x3000, 0x200);
                *(s32 *)((u8 *)temp_v0_6 + 0x30) = 0;
                *(s32 *)((u8 *)temp_v0_6 + 0x34) = 0;
                *(u8 **)((u8 *)temp_v0_6 + 0x48) = (u8 *) (((u8 *)gTourMap) + (*(s16 *)((u8 *)gTourMap + 0x64) * 0x14) + 0x2EC);
                *(f32 *)((u8 *)temp_v0_6 + 0x40) = (f32) ((-5.0f * gFrameDelta) / 2.0f);
                return;
            }
        }
        break;
    case 5:
        if (*(s8 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x70)) + 4) == 1) {
            if (func_002FD7E0(0, var_a1, var_a2) == 5) {
                func_002FD560();
                D_004B4B58 += 1;
                func_002FCAF0();
                *(u8 **)((u8 *)gTourMap + 0x70) = NULL;
                *(u32 *)((u8 *)arg0 + 0x30) = 2U;
                *(s32 *)((u8 *)gTourMap + 0x68) = 1;
                return;
            }
            var_v1 = 2;
            *(u8 **)((u8 *)gTourMap + 0x70) = NULL;
            goto block_126;
        }
        break;
    }
}
