/* Draft (not built): func_00281E40 at 0x00281E40, size 0x7E0, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 338 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x714, original 0x7E0
 * Original: asm/nonmatchings/unk/unk_280730/func_00281E40.s */

// src/unk/unk_280730.c func_00281E40 size diff=338/453
s32 Help_Open(s32, s32, s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0026E000(s32 *, s32);
s32 func_002B4E40(s32, s32 *, s32, s32);
s32 func_002B5030(s32, s32, s8);
extern s32 D_00447440;
extern s32 D_0046B560;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern s8 D_004B4B41;
extern s32 D_004B4B5C;
extern s32 D_004B4B60;
extern f32 D_004E0614;
extern s32 D_005C9D50;
extern s32 D_005C9D52;
extern s32 D_005C9D54;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern char D_005C4140[];
extern void func_00281D20(void);
void func_00281E40(u8 *arg0, s32 arg3) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 var_a1_2;
    s32 var_a1_3;
    s16 *temp_a2_2;
    s16 *temp_a3_2;
    s16 *var_a0_3;
    s16 temp_a1_2;
    s32 temp_a0;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_t0;
    s32 var_t2;
    s32 var_v1;
    s8 temp_a3;
    s8 temp_t0;
    s8 temp_v0_5;
    s8 temp_v0_6;
    s8 var_s4;
    s8 var_v0_4;
    u8 temp_a1;
    u8 temp_t1;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1_2;
    u8 temp_v1_5;
    u8 *temp_v0;
    u8 *temp_v1_3;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_t1;

    var_a3 = arg3;
    var_a1 = 0;
    var_v1 = 0;
    var_s3 = arg0;
    var_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s1 = *(u8 **)((u8 *)var_s2 + 0x10);
    var_a0 = 0;
    if (!(*(u8 *)((u8 *)var_s1 + 6) & 8)) {
        temp_t1 = *(u8 *)((u8 *)var_s2 + 5);
        if (temp_t1 & 1) {
            var_v1 = 1 & 0xFFFF;
            var_a3 = (D_00492FD2 | D_00493032) & 0xFFFF;
            var_a1 = (0 | var_a3) & 0xFFFF;
            var_a0 = (0 | *D_00492FCE) & 0xFFFF;
        }
        if (temp_t1 & 2) {
            var_v1 = (var_v1 | 2) & 0xFFFF;
            var_a3 = (D_0049308A | D_004930EA) & 0xFFFF;
            var_a1 = (var_a1 | var_a3) & 0xFFFF;
            var_a0 = (var_a0 | D_00493086) & 0xFFFF;
        }
    }
    temp_a2 = var_a0 & 0xFFFF & 1;
    if (temp_a2 != 0) {
        temp_a1 = *(u8 *)((u8 *)var_s2 + 1);
        switch (temp_a1) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
            var_a0_2 = 0x04040000 | (0x800040 << 0x20);
block_14:
            Help_Open(var_a0_2, var_v1 & 0xFF, temp_a2, var_a3);
            var_a1 = 0;
            var_a0 = 0;
            goto block_15;
        case 3:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
            var_a0_2 = 0x40000 | (0x800040 << 0x20);
            goto block_14;
        }
    } else {
block_15:
        temp_v1 = var_a0 & 0xFFFF;
        if (temp_v1 & 0x4000) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            temp_v1_2 = *(u8 *)((u8 *)var_s2 + 0);
            var_a1_2 = 2;
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
            case 0:                                 /* switch 2 */
                func_00281870(var_s2, 2);
                temp_a3 = *(s8 *)((u8 *)var_s1 + 4);
                temp_t0 = *(s8 *)((u8 *)var_s2 + 4);
                temp_a1_2 = *(&D_0046B560 + (temp_a3 * 2));
                *(&D_004B4B5C + temp_t0) = (s8) temp_a1_2;
                *(&D_004B4B60 + temp_t0) = *(u8 *)((u8 *)var_s2 + 0);
                *(&D_005C9D50 + temp_t0) = *(s8 *)((u8 *)var_s2 + 6);
                if (*(u8 *)((u8 *)var_s2 + 0) == 0) {
                    temp_a1_3 = temp_t0 * 0x10;
                    temp_v1_3 = (u8 *)(&D_00447440 + (((s64) ((s64) temp_a1_2 << 0x30) >> 0x30) * 0x60));
                    temp_v0 = (u8 *)(&D_005C9D54 + temp_a1_3);
                    *(&D_005C9D52 + temp_a1_3) = *(s16 *)((u8 *)temp_v1_3 + 0x50);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB70) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x50);
                    *(s16 *)((u8 *)temp_v0 + 0) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x52);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB72) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x52);
                    *(s16 *)((u8 *)temp_v0 + 2) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x54);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB74) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x54);
                    *(s16 *)((u8 *)temp_v0 + 4) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x56);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB76) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x56);
                    *(s16 *)((u8 *)temp_v0 + 6) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x58);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB78) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x58);
                    *(s16 *)((u8 *)temp_v0 + 8) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x5A);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB7A) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x5A);
                    *(s16 *)((u8 *)temp_v0 + 0xA) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x5C);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB7C) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x5C);
                    *(s16 *)((u8 *)temp_v0 + 0xC) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x5E);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB7E) = (s16) *(s16 *)((u8 *)temp_v1_3 + 0x5E);
                } else {
                    temp_v1_4 = temp_t0 * 0x10;
                    temp_a2_2 = (s16 *)(&D_005C9D52 + temp_v1_4);
                    var_t2 = 0;
                    var_t0 = 0;
                    var_t1 = (u8 *)(D_005C4140 + temp_v1_4);
                    temp_a3_2 = (s16 *)(var_t1 + 0x5C12);
                    *temp_a2_2 = 0;
                    var_a0_3 = (s16 *)(*(u8 **)((u8 *)var_s1 + 0x78) + (temp_a3 * 0xE) + 0x44);
                    do {
                        *(s16 *)((u8 *)var_t1 + 0x5C14) = (s16) *var_a0_3;
                        *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78) + var_t0) + 0xB72) = (s16) *var_a0_3;
                        if (*var_a0_3 != 0) {
                            *temp_a3_2 += 1;
                        }
                        var_t2 += 1;
                        var_a0_3 += 2;
                        var_t1 += 2;
                        var_t0 += 2;
                    } while (var_t2 < 7);
                    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x78)) + 0xB70) = (s16) *temp_a2_2;
                }
                *(s32 *)((u8 *)var_s2 + 0xC) = 0x41F00000;
                *(s8 *)((u8 *)var_s2 + 2) = 4;
                *(s8 *)((u8 *)var_s2 + 8) = 3;
                var_v0 = (s32 *)(&func_00281CC0);
                if (&func_00281CC0 == NULL) {
                    var_v0 = NULL;
                }
                *(s32 **)((u8 *)var_s3 + 0x1C) = var_v0;
                break;
            case 2:                                 /* switch 2 */
                temp_v1_5 = *(u8 *)((u8 *)var_s2 + 5);
                var_s0 = 2;
                var_s4 = *(s8 *)((u8 *)var_s1 + 4);
                var_s0 = (*(s8 *)((u8 *)var_s2 + 4) == 0) ? 1 : 2;
                switch (temp_v1_5) {                /* switch 3; irregular */
                case 3:                             /* switch 3 */
                    break;
                case 2:                             /* switch 3 */
                    var_a1_2 = 1;
                    break;
                case 1:                             /* switch 3 */
                    var_a1_2 = 0;
                    break;
                }
                func_002B5030(var_s0, var_a1_2, var_s4);
                temp_v0_2 = var_s4 * 0xE;
                sp64 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x44);
                sp68 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x46);
                sp6C = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x48);
                sp70 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x4A);
                sp74 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x4C);
                sp78 = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x4E);
                sp7C = (s32) *(s16 *)((u8 *)(temp_v0_2 + *(u8 **)((u8 *)var_s1 + 0x78)) + 0x50);
                sp60 = 7;
                switch (D_004B4B41) {               /* switch 4 */
                case 1:                             /* switch 4 */
                    var_a1_3 = 0x40;
                    break;
                case 2:                             /* switch 4 */
                    var_a1_3 = 0x80;
                    break;
                case 3:                             /* switch 4 */
                    var_a1_3 = 0xF0;
                    break;
                default:                            /* switch 4 */
                case 0:                             /* switch 4 */
                case 4:                             /* switch 4 */
                case 5:                             /* switch 4 */
                case 6:                             /* switch 4 */
                    var_a1_3 = 0xF0;
                    break;
                }
                func_0026E000(&sp60, var_a1_3);
                func_002B4E40(var_s0, &sp60, 0, 0);
                var_v0_2 = (s32 *)(&func_00281D20);
                *(s8 *)((u8 *)var_s2 + 2) = 3;
                if (&func_00281D20 == NULL) {
                    var_v0_2 = NULL;
                }
                *(s32 **)((u8 *)var_s3 + 0x1C) = var_v0_2;
                break;
            }
        } else if (temp_v1 & 0x1000) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            func_00281870(var_s2);
            *(s32 *)((u8 *)var_s2 + 0xC) = 0x41F00000;
            *(s8 *)((u8 *)var_s2 + 2) = 4;
            var_v0_3 = (s32 *)(&CsSubStat_CloseStep);
            *(s8 *)((u8 *)var_s2 + 8) = 4;
            if (&CsSubStat_CloseStep == NULL) {
                var_v0_3 = NULL;
            }
            *(s32 **)((u8 *)var_s3 + 0x1C) = var_v0_3;
        } else {
            temp_a0 = var_a1 & 0xFFFF;
            if (temp_a0 & 0x40) {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 2, 0);
                }
                temp_v0_3 = *(u8 *)((u8 *)var_s2 + 0);
                if ((s32) temp_v0_3 < 2) {
                    *(u8 *)((u8 *)var_s2 + 0) = (u8) (temp_v0_3 + 1);
                } else {
                    *(u8 *)((u8 *)var_s2 + 0) = 0U;
                }
            } else if (temp_a0 & 0x10) {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 2, 0);
                }
                temp_v0_4 = *(u8 *)((u8 *)var_s2 + 0);
                if ((s32) temp_v0_4 > 0) {
                    *(u8 *)((u8 *)var_s2 + 0) = (u8) (temp_v0_4 - 1);
                } else {
                    *(u8 *)((u8 *)var_s2 + 0) = 2U;
                }
            } else if (*(u8 *)((u8 *)var_s2 + 1) == 2) {
                if (temp_a0 & 0x80) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    temp_v0_5 = *(s8 *)((u8 *)var_s2 + 6);
                    if (temp_v0_5 >= 2) {
                        var_v0_4 = temp_v0_5 - 1;
                        goto block_85;
                    }
                } else if (temp_a0 & 0x20) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 2, 0);
                    }
                    temp_v0_6 = *(s8 *)((u8 *)var_s2 + 6);
                    if (temp_v0_6 < 7) {
                        var_v0_4 = temp_v0_6 + 1;
block_85:
                        *(s8 *)((u8 *)var_s2 + 6) = var_v0_4;
                    }
                }
            }
        }
        *(u8 *)((u8 *)var_s1 + 0xC) = (u8) *(u8 *)((u8 *)var_s2 + 0);
        if (*(s8 *)((u8 *)var_s2 + 6) != *(s8 *)((u8 *)var_s2 + 7)) {
            func_00280F20(var_s2);
        }
        func_002811D0(var_s2);
    }
}
