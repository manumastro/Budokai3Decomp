/* Draft (not built): func_00303A30 at 0x00303A30, size 0xF3C, segment unk/unk_301530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ) * 2)) == *(&((u8 *)D_0046B560) + @ 263: memset(amTask_Create(&func_00300800, 0, 0x3000, 0x200) + 0x30, 0, D_0047035C);
 * Original: asm/nonmatchings/unk/unk_301530/func_00303A30.s */

// src/unk/unk_301530.c func_00303A30 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, s32, s32, void *, f32);
f32 func_00146E30(f32 *, f32 *, void *);
s32 func_0022BC30(s32, f32, s8, f32);
s32 func_0029E9B0(s16, s32, s8, s32);
s32 func_002F9930(s32);
s32 func_002FD7E0(s32, s32, s32, s32);
s32 memset(s32, s32, s32);
extern s32 D_00458C40;
extern s32 D_0046B560;
extern s32 D_0047035C;
extern u16 D_00492FCC;
extern u16 D_00493084;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern f32 D_004E0618;
extern s8 D_005CA030;
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
extern s32 func_00300330;
extern s32 func_00300670;
extern s32 func_00300800;
extern s32 func_003009E0;
extern s32 func_00300B60;
extern s32 func_00300CA0;
extern s32 func_00300D20;
extern f32 gFrameDelta;
extern void *gTourMap;
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern void amAdx_Pause();
extern void func_003019A0(void);
void func_00303A30(u8 *arg0, s8 arg2) {
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
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spF8;
    f32 spFC;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    f32 sp10C;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    f32 sp11C;
    s32 *var_a1_2;
    s32 *var_v0;
    s32 *var_v1_10;
    s32 *var_v1_11;
    s32 *var_v1_12;
    f32 *var_v1;
    f32 *var_v1_2;
    f32 *var_v1_3;
    f32 *var_v1_4;
    f32 *var_v1_5;
    f32 *var_v1_6;
    f32 *var_v1_8;
    f32 *var_v1_9;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 var_f1;
    s16 temp_a1_3;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_5;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s3_5;
    s32 temp_s3_6;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a2_5;
    s32 var_s1;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1_7;
    s8 *var_s2;
    s8 var_a2;
    s8 var_a2_4;
    s8 var_s3;
    u16 var_a1;
    u32 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_6;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_6;
    u8 *temp_a3;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *var_a2_2;
    u8 *var_a2_3;
    u8 *var_a3;
    u8 *var_t0;

    var_a2 = arg2;
    temp_s2 = *(u8 **)((u8 *)gTourMap + 0x30);
    var_f1 = *(f32 *)((u8 *)gTourMap + 0x54);
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
        temp_s3 = -1 & func_0022BC30(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0x7C) * 4)), M2C_BITWISE(f32, var_a1), var_a2, (f32) *(s32 *)((u8 *)gTourMap + 0x84) * gFrameDelta);
        temp_s1 = ((u8 *)gTourMap) + 0xDC;
        temp_s3_2 = temp_s3 & func_0022BC30(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0xDC) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0xE4) * gFrameDelta, 0, 0);
        temp_s3_3 = temp_s3_2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x24), (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta, 0, 0);
        temp_s3_4 = temp_s3_3 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x3C), (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta, 0, 0);
        temp_s3_5 = temp_s3_4 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x40), (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta, 0, 0);
        temp_s3_6 = temp_s3_5 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x54), (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta, 0, 0);
        if ((temp_s3_6 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x58), (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta, 0, 0)) == 0xFF) {
            var_v0 = &func_00300B60;
            if (&func_00300B60 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x1C) = var_v0;
            temp_a3 = *(u8 **)((u8 *)gTourMap + 0x44);
            temp_a2 = (1 << D_005D0082) - 1;
            temp_a1 = D_005D0082 * 5;
            temp_f1 = 200.0f + ((f32) ((temp_a2 * 0x64) + 0x190 + temp_a1) / -2.0f) + 0.0f;
            sp118 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
            sp11C = temp_f1;
            *(f32 *)((u8 *)temp_a3 + 0x3C) = temp_f1;
            *(f32 *)((u8 *)temp_a3 + 0x40) = (f32) (sp118 - 100.0f);
            amAdx_SetVolume(0, temp_a1, temp_a2 * 0x19, temp_a3, D_004E0618);
            amAdx_Pause(0, 0);
            amAdx_PlayAfs(0, 0x210A7, 0);
            *(u32 *)((u8 *)arg0 + 0x30) = (u32) (*(u32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
    default:
        return;
    case 1:
        var_v1 = &spE0;
        var_v0_2 = 0x10;
        temp_a0 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_2 = temp_a0 + 0x30;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0_2 -= 1;
                var_v1 += 1;
            } while (var_v0_2 != 0);
        }
        var_v1_2 = &spD0;
        var_v0_3 = 0x10;
        spE0 = *(f32 *)((u8 *)temp_a0 + 0x30);
        spE4 = *(f32 *)((u8 *)temp_a2_2 + 4);
        spE8 = *(f32 *)((u8 *)temp_a2_2 + 8);
        if (var_v1_2 != NULL) {
            do {
                *var_v1_2 = 0;
                var_v0_3 -= 1;
                var_v1_2 += 1;
            } while (var_v0_3 != 0);
        }
        spD0 = *(f32 *)((u8 *)temp_a2_2 + 0xC);
        spD4 = *(f32 *)((u8 *)temp_a2_2 + 0x10);
        spD8 = *(f32 *)((u8 *)temp_a2_2 + 0x14);
        var_a0 = 1;
        if (!(func_00146E30(&spD0, &spE0, temp_a2_2) <= 0.1f)) {
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            temp_v0 = amTask_Create(&func_00300CA0, 0, 0x3000, 0x200);
            *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x34) = 0x14;
            func_002F9930(0);
            *(u32 *)((u8 *)arg0 + 0x30) = (u32) (*(u32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        break;
    case 2:
        if (*(f32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x34) == 1.0f) {
            temp_v0_2 = *(u8 **)((u8 *)gTourMap + 0x44);
            temp_t2 = ((1 << D_005D0082) - 1) * 0x64;
            temp_f1_2 = 200.0f + ((f32) (temp_t2 + 0x190 + (D_005D0082 * 5)) / -2.0f) + (f32) temp_t2;
            sp114 = temp_f1_2;
            sp110 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
            *(f32 *)((u8 *)temp_v0_2 + 0x3C) = temp_f1_2;
            *(f32 *)((u8 *)temp_v0_2 + 0x40) = (f32) (sp110 - 100.0f);
            memset(amTask_Create(&func_00300800, 0, 0x3000, 0x200) + 0x30, 0, D_0047035C);
            *(u32 *)((u8 *)arg0 + 0x30) = (u32) (*(u32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        break;
    case 3:
        var_v1_3 = &spC0;
        var_v0_4 = 0x10;
        temp_a0_2 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_3 = temp_a0_2 + 0x30;
        if (var_v1_3 != NULL) {
            do {
                *var_v1_3 = 0;
                var_v0_4 -= 1;
                var_v1_3 += 1;
            } while (var_v0_4 != 0);
        }
        var_v1_4 = &spB0;
        var_v0_5 = 0x10;
        spC0 = *(f32 *)((u8 *)temp_a0_2 + 0x30);
        spC4 = *(f32 *)((u8 *)temp_a2_3 + 4);
        spC8 = *(f32 *)((u8 *)temp_a2_3 + 8);
        if (var_v1_4 != NULL) {
            do {
                *var_v1_4 = 0;
                var_v0_5 -= 1;
                var_v1_4 += 1;
            } while (var_v0_5 != 0);
        }
        spB0 = *(f32 *)((u8 *)temp_a2_3 + 0xC);
        spB4 = *(f32 *)((u8 *)temp_a2_3 + 0x10);
        spB8 = *(f32 *)((u8 *)temp_a2_3 + 0x14);
        var_a0_2 = 1;
        if (!(func_00146E30(&spB0, &spC0, temp_a2_3) <= 0.1f)) {
            var_a0_2 = 0;
        }
        if (var_a0_2 != 0) {
            temp_a1_2 = 1 << D_005D0082;
            var_a0_3 = 0;
            if (temp_a1_2 > 0) {
                var_a2_2 = gTourMap;
loop_38:
                if (*(s16 *)((u8 *)var_a2_2 + 0x2F6) == 0) {

                } else {
                    var_a0_3 += 1;
                    var_a2_2 += 0x14;
                    if (var_a0_3 >= temp_a1_2) {
                        goto block_42;
                    }
                    goto loop_38;
                }
            } else {
block_42:
                var_a0_3 = 0;
            }
            temp_v1_2 = *(u8 **)((u8 *)gTourMap + 0x44);
            temp_f1_3 = 200.0f + ((f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f) + (f32) (var_a0_3 * 0x64);
            sp10C = temp_f1_3;
            sp108 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
            *(f32 *)((u8 *)temp_v1_2 + 0x3C) = temp_f1_3;
            *(f32 *)((u8 *)temp_v1_2 + 0x40) = (f32) (sp108 - 100.0f);
            *(u8 **)((u8 *)gTourMap + 0x6C) = (u8 *) (((u8 *)gTourMap) + (var_a0_3 * 0x14) + 0x2EC);
            *(u32 *)((u8 *)arg0 + 0x30) = (u32) (*(u32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        break;
    case 4:
        var_v1_5 = &spA0;
        var_v0_6 = 0x10;
        temp_a0_3 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_4 = temp_a0_3 + 0x30;
        if (var_v1_5 != NULL) {
            do {
                *var_v1_5 = 0;
                var_v0_6 -= 1;
                var_v1_5 += 1;
            } while (var_v0_6 != 0);
        }
        var_v1_6 = &sp90;
        var_v0_7 = 0x10;
        spA0 = *(f32 *)((u8 *)temp_a0_3 + 0x30);
        spA4 = *(f32 *)((u8 *)temp_a2_4 + 4);
        spA8 = *(f32 *)((u8 *)temp_a2_4 + 8);
        if (var_v1_6 != NULL) {
            do {
                *var_v1_6 = 0;
                var_v0_7 -= 1;
                var_v1_6 += 1;
            } while (var_v0_7 != 0);
        }
        sp90 = *(f32 *)((u8 *)temp_a2_4 + 0xC);
        sp94 = *(f32 *)((u8 *)temp_a2_4 + 0x10);
        sp98 = *(f32 *)((u8 *)temp_a2_4 + 0x14);
        var_a0_4 = 1;
        if (!(func_00146E30(&sp90, &spA0, temp_a2_4) <= 0.1f)) {
            var_a0_4 = 0;
        }
        if (var_a0_4 != 0) {
            temp_v0_3 = amTask_Create(&func_00300670, 0, 0x3000, 0x200);
            *(s32 *)((u8 *)temp_v0_3 + 0x30) = 0;
            *(s32 *)((u8 *)temp_v0_3 + 0x34) = 0;
            *(u8 **)((u8 *)temp_v0_3 + 0x48) = (u8 *) *(u8 **)((u8 *)gTourMap + 0x6C);
            *(s8 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x6C)) + 5) = 1;
            *(s8 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x6C)) + 6) = 1;
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 2, 0);
            }
            *(u32 *)((u8 *)arg0 + 0x30) = (u32) (*(u32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        break;
    case 5:
        temp_a0_4 = *(u8 **)((u8 *)gTourMap + 0x6C);
        if (*(s8 *)((u8 *)temp_a0_4 + 4) == 1) {
            temp_t1 = *(s16 *)((u8 *)temp_a0_4 + 0xA) + 1;
            if (temp_t1 == D_005CA030) {
                *(u8 **)((u8 *)gTourMap + 0x6C) = NULL;
                temp_a0_5 = 1 << D_005D0082;
                var_v1_7 = 0;
                if (temp_a0_5 > 0) {
                    var_a2_3 = gTourMap;
loop_58:
                    if (*(s16 *)((u8 *)var_a2_3 + 0x2F6) == 0) {

                    } else {
                        var_v1_7 += 1;
                        var_a2_3 += 0x14;
                        if (var_v1_7 >= temp_a0_5) {
                            goto block_62;
                        }
                        goto loop_58;
                    }
                } else {
block_62:
                    var_v1_7 = 0;
                }
                temp_v0_4 = *(u8 **)((u8 *)gTourMap + 0x44);
                temp_f1_4 = 200.0f + ((f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f) + (f32) (var_v1_7 * 0x64);
                sp104 = temp_f1_4;
                sp100 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
                *(f32 *)((u8 *)temp_v0_4 + 0x3C) = temp_f1_4;
                *(f32 *)((u8 *)temp_v0_4 + 0x40) = (f32) (sp100 - 100.0f);
                func_002FD7E0(1, 0x42C80000, var_v1_7 * 5, 0x43480000);
                var_s3 = 0;
                var_s2 = &D_005CA030;
                var_s1 = 0;
                do {
                    var_a2_4 = var_s3;
                    if (*(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (D_005D0080 * 0x14)) + 0x2F4) * 2)) == *(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (D_005D0081 * 0x14)) + 0x2F4) * 2))) {

                    } else {
                        temp_a1_3 = *(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s2 + 0x6050) * 0x14)) + 0x2F6);
                        if (temp_a1_3 >= 0) {
                            var_a2_4 = *(s8 *)((u8 *)(&D_005CA030 + (temp_a1_3 * 0xB80)) + 0xB71);
                        } else {
                            var_a2_4 = 0;
                        }
                    }
                    temp_v0_5 = func_0029E9B0(*(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s2 + 0x6050) * 0x14)) + 0x2F4) * 2)), 0, var_a2_4, ((u8 *)var_s3) + 1);
                    var_s3 += 1;
                    var_s2 += 1;
                    *(s32 *)((u8 *)(((u8 *)gTourMap) + var_s1) + 0x74) = temp_v0_5;
                    var_s1 += 4;
                } while (var_s3 < 2);
                *(u32 *)((u8 *)arg0 + 0x30) = (u32) (*(u32 *)((u8 *)arg0 + 0x30) + 1);
                return;
            }
            temp_a2_5 = 1 << D_005D0082;
            var_a0_5 = 0;
            if (temp_a2_5 > 0) {
                var_t0 = gTourMap;
loop_76:
                if (*(s16 *)((u8 *)var_t0 + 0x2F6) == temp_t1) {

                } else {
                    var_a0_5 += 1;
                    var_t0 += 0x14;
                    if (var_a0_5 >= temp_a2_5) {
                        goto block_80;
                    }
                    goto loop_76;
                }
            } else {
block_80:
                var_a0_5 = 0;
            }
            temp_v1_3 = *(u8 **)((u8 *)gTourMap + 0x44);
            temp_f1_5 = 200.0f + ((f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f) + (f32) (var_a0_5 * 0x64);
            spFC = temp_f1_5;
            spF8 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
            *(f32 *)((u8 *)temp_v1_3 + 0x3C) = temp_f1_5;
            *(f32 *)((u8 *)temp_v1_3 + 0x40) = (f32) (spF8 - 100.0f);
            *(u8 **)((u8 *)gTourMap + 0x6C) = (u8 *) (((u8 *)gTourMap) + (var_a0_5 * 0x14) + 0x2EC);
            *(u32 *)((u8 *)arg0 + 0x30) = 4U;
            return;
        }
        break;
    case 6:
        var_v1_8 = &sp80;
        var_v0_8 = 0x10;
        temp_a0_6 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_6 = temp_a0_6 + 0x30;
        if (var_v1_8 != NULL) {
            do {
                *var_v1_8 = 0;
                var_v0_8 -= 1;
                var_v1_8 += 1;
            } while (var_v0_8 != 0);
        }
        var_v1_9 = &sp70;
        var_v0_9 = 0x10;
        sp80 = *(f32 *)((u8 *)temp_a0_6 + 0x30);
        sp84 = *(f32 *)((u8 *)temp_a2_6 + 4);
        sp88 = *(f32 *)((u8 *)temp_a2_6 + 8);
        if (var_v1_9 != NULL) {
            do {
                *var_v1_9 = 0;
                var_v0_9 -= 1;
                var_v1_9 += 1;
            } while (var_v0_9 != 0);
        }
        sp70 = *(f32 *)((u8 *)temp_a2_6 + 0xC);
        sp74 = *(f32 *)((u8 *)temp_a2_6 + 0x10);
        sp78 = *(f32 *)((u8 *)temp_a2_6 + 0x14);
        var_a0_6 = 1;
        if (!(func_00146E30(&sp70, &sp80, temp_a2_6) <= 0.1f)) {
            var_a0_6 = 0;
        }
        if (var_a0_6 != 0) {
            *(s32 *)((u8 *)gTourMap + 0x48) = 2;
            *(u8 **)((u8 *)gTourMap + 0x6C) = NULL;
            amTask_Create(&func_00300330, 0, 0x3000, 0x200);
            *(u32 *)((u8 *)arg0 + 0x30) = 0U;
            var_a1_2 = &sp50;
            var_a2_5 = 0;
            *(s128 *)((u8 *)var_a1_2 + 0) = (s128) *(s128 *)((u8 *)(&D_00458C40) + 0);
            *(s128 *)((u8 *)var_a1_2 + 0x10) = (s128) *(s128 *)((u8 *)(&D_00458C40) + 0x10);
            var_a3 = ((u8 *)gTourMap) + 0x19C;
            do {
                if (*(s32 *)((u8 *)var_a3 + 0) != *(s32 *)((u8 *)var_a1_2 + 4)) {
                    *(s32 *)((u8 *)var_a3 + 8) = 0;
                    *(s32 *)((u8 *)var_a3 + 0) = (s32) *(s32 *)((u8 *)var_a1_2 + 4);
                }
                var_a2_5 += 1;
                var_a1_2 += 8;
                var_a3 += 0x30;
            } while (var_a2_5 < 4);
            var_v1_10 = &func_003009E0;
            if (&func_003009E0 == NULL) {
                var_v1_10 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x1C) = var_v1_10;
            var_v1_11 = &func_00300D20;
            if (&func_00300D20 == NULL) {
                var_v1_11 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x1C) = var_v1_11;
            var_v1_12 = (s32 *)(&func_003019A0);
            if (&func_003019A0 == NULL) {
                var_v1_12 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_12;
        }
        break;
    }
}
