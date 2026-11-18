/* Draft (not built): func_003019A0 at 0x003019A0, size 0xAB0, segment unk/unk_301530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s2.exe Compiler: 225: *(s16 *)((u8 *)var_s0 + 0x5C16) = (s16) spE8; @ 223: *(s16 *)((u8 *)var_s0 + 0x5C14) = (s16) spE4;
 * Original: asm/nonmatchings/unk/unk_301530/func_003019A0.s */

// src/unk/unk_301530.c func_003019A0 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, s8, f32);
f32 func_00146E30(f32 *, f32 *, void *, void *);
s32 func_0026E000(s32 *, s32, s8, s32 *);
s32 func_002F9930(s32);
s32 memset(void *, s32, s32);
extern s32 D_00447440;
extern s32 D_00458C40;
extern s32 D_0046B560;
extern u16 D_00492FCC;
extern u16 D_00493084;
extern s8 D_004B4B57;
extern s8 D_004B4B59;
extern s8 D_004B4B5A;
extern s8 D_004B4B5B;
extern s8 D_004B4B5C;
extern s8 D_004B4B5D;
extern s8 D_004B4B5E;
extern s8 D_004B4B5F;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern s8 D_005CA030;
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0083;
extern s32 TourMap_TaskSlideF10;
extern s32 func_00300B60;
extern f32 gFrameDelta;
extern void *gTourMap;
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern char D_004B4B40[];
extern char D_005C4140[];
extern void Scene_Request();
extern void func_00301820(void);
void func_003019A0(u8 *arg0) {
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 spC0;
    s32 spE0;
    s32 *var_v1_4;
    s32 *var_v1_7;
    f32 *var_v1_5;
    f32 *var_v1_6;
    f32 var_f1;
    s16 *var_a1;
    s16 temp_a0_2;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_t3;
    s16 temp_v0;
    s32 *var_a2;
    s32 *var_v1_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_s6;
    s32 var_t2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_3;
    s8 *var_a0;
    s8 *var_a0_2;
    s8 *var_s0;
    s8 *var_s0_2;
    s8 *var_s1;
    s8 *var_s2;
    s8 *var_s3;
    s8 *var_t1;
    s8 *var_v0;
    s8 temp_a2_4;
    s8 temp_a2_6;
    s8 var_s4;
    s8 var_s7;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_a2_5;
    u8 *temp_a3;
    u8 *temp_s1;
    u8 *temp_t1;
    u8 *var_a1_3;
    u8 *var_a1_4;

    var_s6 = 0;
    var_s4 = -1;
    var_f1 = *(f32 *)((u8 *)gTourMap + 0x54);
    var_s7 = -1;
    if (D_005CA030 == 1) {
        var_s4 = D_004B4B63;
        var_s6 = 1;
        var_s7 = var_s4;
    } else if (D_005CA030 == 2) {
        temp_a2 = ((u8 *)gTourMap) + 0x2F6;
        temp_t3 = *(temp_a2 + (D_005D0080 * 0x14));
        if (temp_t3 == 0) {
            if (*(temp_a2 + (D_005D0081 * 0x14)) == 1) {
                var_s6 = 3;
                var_s4 = D_004B4B63;
                var_s7 = 1 - var_s4;
            } else {
                var_s4 = D_004B4B63;
                var_s6 = 2;
            }
        } else {
            temp_a2_2 = *(temp_a2 + (D_005D0081 * 0x14));
            if (temp_a2_2 == 0) {
                if (temp_t3 == 1) {
                    var_s6 = 3;
                    var_s7 = D_004B4B63;
                    var_s4 = 1 - var_s7;
                } else {
                    var_s7 = D_004B4B63;
                    var_s6 = 2;
                }
            } else if (temp_t3 == 1) {
                if (temp_a2_2 == 0) {
                    var_s6 = 3;
                    var_s7 = D_004B4B63;
                    var_s4 = 1 - var_s7;
                } else {
                    var_s6 = 2;
                    var_s4 = 1 - D_004B4B63;
                }
            } else if (temp_a2_2 == 1) {
                if (temp_t3 == 0) {
                    var_s6 = 3;
                    var_s4 = D_004B4B63;
                    var_s7 = 1 - var_s4;
                } else {
                    var_s6 = 2;
                    var_s7 = 1 - D_004B4B63;
                }
            }
        }
    } else {
        var_s4 = 0;
        var_s7 = 1;
        var_t2 = 0;
        var_t1 = &D_005CA030;
        do {
            if (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_t1 + 0x6050) * 0x14)) + 0x2F6) >= 0) {
                var_s6 |= 1 << var_t2;
            }
            var_t2 += 1;
            var_t1 += 1;
        } while (var_t2 < 2);
    }
    temp_a1 = D_00492FCC | D_00493084;
    if (temp_a1 & 0x800) {
        var_f1 *= 4.0f;
    }
    if (temp_a1 & 0x400) {
        var_f1 *= 4.0f;
    }
    *(f32 *)((u8 *)gTourMap + 0x50) = var_f1;
    temp_a1_2 = *(s32 *)((u8 *)arg0 + 0x30);
    switch (temp_a1_2) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (M2C_ERROR(/* Read from unset register $t0 */) & 0x4000) {
            D_005D0083 = D_004B4B63;
            if (var_s4 >= 0) {
                *(s32 *)((u8 *)gTourMap + 0x60) = (s32) (*(s32 *)((u8 *)gTourMap + 0x60) | (1 << var_s4));
            }
            if (var_s7 >= 0) {
                *(s32 *)((u8 *)gTourMap + 0x60) = (s32) (*(s32 *)((u8 *)gTourMap + 0x60) | (1 << var_s7));
            }
            var_s1 = (s8 *)(D_005C4140[0]);
            var_s5 = 0;
            var_s3 = &D_005CA030;
            var_s2 = (s8 *)(D_004B4B40[0]);
            var_s0 = (s8 *)(D_005C4140[0]);
            do {
                temp_a0 = ((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s3 + 0x6050) * 0x14);
                temp_a2_3 = *(s16 *)((u8 *)temp_a0 + 0x2F6);
                if (temp_a2_3 >= 0) {
                    temp_t1 = (u8 *)(D_005C4140 + (temp_a2_3 * 0xB80));
                    var_a0 = var_s0 + 0x5C14;
                    var_v1 = 7;
                    var_a1 = (s16 *)(temp_t1 + 0xB82);
                    *(s8 *)((u8 *)var_s2 + 0x1C) = (s8) *(&D_0046B560 + (*(s16 *)((u8 *)temp_a0 + 0x2F4) * 2));
                    temp_a2_4 = *(s8 *)((u8 *)temp_t1 + 0xB71);
                    *(s8 *)((u8 *)var_s2 + 0x1E) = temp_a2_4;
                    *(s8 *)((u8 *)var_s1 + 0x5C10) = 3;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) *(s16 *)((u8 *)temp_t1 + 0xB80);
                    do {
                        var_v1 -= 1;
                        *var_a0 = (s16) *var_a1;
                        var_a1 += 2;
                        var_a0 += 2;
                    } while (var_v1 > 0);
                    var_a1_2 = 0;
                    spE0 = 7;
                    var_a0_2 = var_s0;
                    var_v1_2 = &spE0;
                    do {
                        temp_v0 = *(s16 *)((u8 *)var_a0_2 + 0x5C14);
                        if (temp_v0 > 0) {
                            *(s32 *)((u8 *)var_v1_2 + 4) = (s32) temp_v0;
                        }
                        var_a1_2 += 1;
                        var_a0_2 += 2;
                        var_v1_2 += 4;
                    } while (var_a1_2 < 7);
                    if (D_004B4B57 != 3) {
                        func_0026E000(&spE0, 0x10, temp_a2_4, &D_0046B560);
                    }
                    *(s16 *)((u8 *)var_s0 + 0x5C14) = (s16) spE4;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                    *(s16 *)((u8 *)var_s0 + 0x5C16) = (s16) spE8;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                    *(s16 *)((u8 *)var_s0 + 0x5C18) = (s16) spEC;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                    *(s16 *)((u8 *)var_s0 + 0x5C1A) = (s16) spF0;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                    *(s16 *)((u8 *)var_s0 + 0x5C1C) = (s16) spF4;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                    *(s16 *)((u8 *)var_s0 + 0x5C1E) = (s16) spF8;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                    *(s16 *)((u8 *)var_s0 + 0x5C20) = (s16) spFC;
                    *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) spE0;
                } else {
                    if (D_004B4B57 != 3) {
                        var_v1_3 = 0;
                        var_v0 = var_s0;
                        var_a1_3 = (u8 *)(&D_00447440 + (*(&D_0046B560 + (*(s16 *)((u8 *)temp_a0 + 0x2F4) * 2)) * 0x60));
                        *(s16 *)((u8 *)var_s0 + 0x5C12) = (s16) *(s16 *)((u8 *)var_a1_3 + 0x50);
                        do {
                            temp_a0_2 = *(s16 *)((u8 *)var_a1_3 + 0x52);
                            if (temp_a0_2 > 0) {
                                *(s16 *)((u8 *)var_v0 + 0x5C14) = temp_a0_2;
                            }
                            var_v1_3 += 1;
                            var_a1_3 += 2;
                            var_v0 += 2;
                        } while (var_v1_3 < 7);
                    } else {
                        *(s16 *)((u8 *)var_s0 + 0x5C12) = 1;
                        *(s16 *)((u8 *)var_s0 + 0x5C14) = (s16) (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s3 + 0x6050) * 0x14)) + 0x2F4) + 0xCF);
                    }
                    *(s8 *)((u8 *)var_s2 + 0x1C) = (s8) *(&((u8 *)D_0046B560) + (*(s16 *)((u8 *)(((u8 *)gTourMap) + (*(s8 *)((u8 *)var_s3 + 0x6050) * 0x14)) + 0x2F4) * 2));
                    *(s8 *)((u8 *)var_s2 + 0x1E) = 0;
                    *(s8 *)((u8 *)var_s1 + 0x5C10) = 3;
                }
                var_s5 += 1;
                var_s3 += 1;
                var_s2 += 1;
                var_s1 += 1;
                var_s0 += 0x10;
            } while (var_s5 < 2);
            if ((D_004B4B5C == D_004B4B5D) && (D_004B4B5E == D_004B4B5F)) {
                D_004B4B5E = 0;
                D_004B4B5F = 1;
            }
            if (*(s16 *)((u8 *)((D_005D0080 * 0x14) + gTourMap) + 0x2F6) >= 0) {
                D_004B4B5A = 0;
                if (D_005CA030 >= 4) {
                    D_004B4B63 = var_s4;
                } else if (D_005CA030 != 1) {
                    D_004B4B63 = var_s4;
                }
            } else {
                D_004B4B63 = var_s7;
                D_004B4B5A = 1;
            }
            if (D_004B4B57 != 3) {
                D_004B4B5B = 0;
            } else {
                D_004B4B5B = 8;
            }
            switch (var_s6) {                       /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                D_004B4B59 = 1;
                break;
            case 2:                                 /* switch 2 */
                D_004B4B59 = 2;
                break;
            case 3:                                 /* switch 2 */
                D_004B4B59 = 0;
                break;
            }
            Scene_Request(0x12, 0);
            var_a2 = &spC0;
            var_a3 = 0;
            *(s32 *)((u8 *)gTourMap + 0x48) = 4;
            *(s128 *)((u8 *)var_a2 + 0) = (s128) *(s128 *)((u8 *)(&D_00458C40) + 0);
            *(s128 *)((u8 *)var_a2 + 0x10) = (s128) *(s128 *)((u8 *)(&D_00458C40) + 0x10);
            var_a1_4 = ((u8 *)gTourMap) + 0x19C;
            do {
                if (*(s32 *)((u8 *)var_a1_4 + 0) != *var_a2) {
                    *(s32 *)((u8 *)var_a1_4 + 8) = 0;
                    *(s32 *)((u8 *)var_a1_4 + 0) = (s32) *var_a2;
                }
                var_a3 += 1;
                var_a2 += 8;
                var_a1_4 += 0x30;
            } while (var_a3 < 4);
            var_v1_4 = &func_00300B60;
            if (&func_00300B60 == NULL) {
                var_v1_4 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44)) + 0x1C) = var_v1_4;
            *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        return;
    case 1:                                         /* switch 1 */
        var_v1_5 = &spB0;
        var_v0_2 = 0x10;
        temp_a0_3 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a2_5 = temp_a0_3 + 0x30;
        if (var_v1_5 != NULL) {
            do {
                *var_v1_5 = 0;
                var_v0_2 -= 1;
                var_v1_5 += 1;
            } while (var_v0_2 != 0);
        }
        var_v1_6 = &spA0;
        var_v0_3 = 0x10;
        spB0 = *(f32 *)((u8 *)temp_a0_3 + 0x30);
        spB4 = *(f32 *)((u8 *)temp_a2_5 + 4);
        spB8 = *(f32 *)((u8 *)temp_a2_5 + 8);
        if (var_v1_6 != NULL) {
            do {
                *var_v1_6 = 0;
                var_v0_3 -= 1;
                var_v1_6 += 1;
            } while (var_v0_3 != 0);
        }
        spA0 = *(f32 *)((u8 *)temp_a2_5 + 0xC);
        spA4 = *(f32 *)((u8 *)temp_a2_5 + 0x10);
        spA8 = *(f32 *)((u8 *)temp_a2_5 + 0x14);
        var_a0_3 = 1;
        if (!(func_00146E30(&spA0, &spB0, temp_a2_5, gTourMap) <= 0.1f)) {
            var_a0_3 = 0;
        }
        if (var_a0_3 != 0) {
            var_s2_2 = 0;
            var_s0_2 = &D_005CA030;
            do {
                temp_s1 = amTask_Create(&TourMap_TaskSlideF10, 0, 0x3000, 0x200) + 0x30;
                memset(temp_s1, 0, 0x1C);
                temp_a2_6 = *(s8 *)((u8 *)var_s0_2 + 0x6050);
                var_s2_2 += 1;
                temp_a1_3 = temp_a2_6 * 5;
                var_s0_2 += 1;
                *(u8 **)((u8 *)temp_s1 + 0x18) = (u8 *) (((u8 *)gTourMap) + (temp_a1_3 * 4) + 0x2EC);
                *(f32 *)((u8 *)temp_s1 + 0xC) = (f32) (*(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x18)) + 0x10) - 100.0f);
                *(f32 *)((u8 *)temp_s1 + 0x10) = (f32) (-5.0f * gFrameDelta);
                *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x18)) + 4) = 2;
            } while (var_s2_2 < 2);
            SoundRpc_SetVolume(1, 0, temp_a2_6, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 3, 0);
            }
            func_002F9930(1);
            *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_a3 = ((u8 *)gTourMap) + 0x2F0;
        if ((*(temp_a3 + (D_005D0080 * 0x14)) == 1) && (*(temp_a3 + (D_005D0081 * 0x14)) == 1)) {
            var_v1_7 = (s32 *)(&func_00301820);
            if (&func_00301820 == NULL) {
                var_v1_7 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_7;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
        }
        break;
    }
}
