/* Draft (not built): func_00254DB0 at 0x00254DB0, size 0x85C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'unsigned char *' to 'int' mwccps2.exe Compiler: @ 2549: func_0022C7D0(*(u8 **)((u8 *)var_s0 + 4), 1, 20.0f - temp_f1);
 * Original: asm/nonmatchings/battle/skill_cmd/func_00254DB0.s */

// src/battle/skill_cmd.c func_00254DB0 cerr diff=-1/0
extern s32 func_0022D860(s32, f32);
extern void func_002559B0();
s32 func_001E9B00(s32, s32, s32, s32, s32, s32);
extern void func_00255610(void);
void func_00254DB0(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f20;
    s16 temp_a0_12;
    s16 temp_a0_14;
    s16 temp_a0_9;
    s16 temp_a1;
    s16 temp_v1_2;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0_5;
    s32 var_v0_7;
    s32 var_v1;
    u16 temp_v0;
    u16 temp_v1;
    void (*var_v0)();
    void (*var_v0_2)();
    void (*var_v0_3)();
    void (*var_v0_4)();
    u8 *temp_a0;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_13;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s2_2;
    u8 *var_s3;
    u8 *var_v0_6;

    temp_s1 = arg0 + 0x30;
    temp_s3 = gBtlSys;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30) + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xE60);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 4);
        switch (temp_a0_2) {                        /* switch 1; irregular */
        case 4:                                     /* switch 1 */
            *(f32 *)((u8 *)temp_s1 + 8) = (f32) (*(f32 *)((u8 *)temp_s1 + 8) + D_00470710);
            temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x14) - *(f32 *)((u8 *)temp_s1 + 8);
            if (temp_f1 <= 20.0f) {
                func_0022C7D0(*(u8 **)((u8 *)var_s0 + 4), 1, 20.0f - temp_f1);
                func_002543B0(temp_s1);
                func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 4)));
            }
            if (!(*(f32 *)((u8 *)temp_s1 + 8) < *(f32 *)((u8 *)temp_s1 + 0x14))) {
                *(s32 *)((u8 *)temp_s1 + 4) = 1;
                var_v0 = func_002559B0;
                *(f32 *)((u8 *)temp_s1 + 8) = 0.0f;
                *(s16 *)((u8 *)temp_s1 + 0x32) = (s16) (*(s16 *)((u8 *)temp_s1 + 0x32) + 1);
                if (func_002559B0 == NULL) {
                    var_v0 = NULL;
                }
                *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
                var_v0_2 = Skill_DrawHeldSetB;
                if (Skill_DrawHeldSetB == NULL) {
                    var_v0_2 = NULL;
                }
                *(void (**)())((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
                temp_a0_3 = *(u8 **)((u8 *)var_s0 + 4);
                if (temp_a0_3 != NULL) {
                    func_0022D0E0((s32)(temp_a0_3), 1);
                }
                *(u8 **)((u8 *)var_s0 + 4) = NULL;
                temp_a0_4 = *(u8 **)((u8 *)var_s0 + 0x30);
                if (temp_a0_4 != NULL) {
                    func_0022D0E0((s32)(temp_a0_4), 1);
                }
                *(u8 **)((u8 *)var_s0 + 0x30) = NULL;
                temp_a0_5 = *(u8 **)((u8 *)var_s0 + 0x34);
                if (temp_a0_5 != NULL) {
                    func_0022D0E0((s32)(temp_a0_5), 1);
                }
                *(u8 **)((u8 *)var_s0 + 0x34) = NULL;
                temp_a0_6 = *(u8 **)((u8 *)temp_s3 + 0xE60);
                D_00470704 = (s32)(temp_a0_6);
                D_0047070C = 0x04000000;
                D_00470708 = 0;
                amModel_SetCurrent((s32)(temp_a0_6), 0x04000000);
                D_00470238 = 0;
                *(u8 **)((u8 *)var_s0 + 4) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x20)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x98))))))), 0);
                func_0022C7D0(*(u8 **)((u8 *)var_s0 + 4), 1, 0.0f);
                func_002543B0(temp_s1);
                func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 4)));
                temp_a0_7 = *(u8 **)((u8 *)var_s0 + 0x18);
                if (temp_a0_7 != NULL) {
                    func_0022D0E0((s32)(temp_a0_7), 1);
                }
                *(u8 **)((u8 *)var_s0 + 0x18) = NULL;
                *(u8 **)((u8 *)var_s0 + 0x18) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x20)) & 1) + 0x28) * 4)), 0);
                temp_a0_8 = *(u8 **)((u8 *)var_s0 + 0x1C);
                if (temp_a0_8 != NULL) {
                    func_0022D0E0((s32)(temp_a0_8), 1);
                }
                *(u8 **)((u8 *)var_s0 + 0x1C) = NULL;
                *(u8 **)((u8 *)var_s0 + 0x1C) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x22)) & 1) + 0x2A) * 4)), 0);
            }
            /* fallthrough */
        case 3:                                     /* switch 1 */
            var_s4 = 0;
            var_s3 = temp_s1;
            var_s2 = temp_s1;
            do {
                func_0021C360(*(s16 *)((u8 *)var_s3 + 0x20));
                temp_a1 = *(s16 *)((u8 *)temp_s1 + 0x32);
                temp_a0_9 = *(s16 *)((u8 *)(var_s2 + (temp_a1 * 2)) + 0x24);
                switch (temp_a0_9) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    var_f20 = 1.0f;
                    break;
                case 2:                             /* switch 2 */
                    var_f20 = 2.0f;
                    break;
                case 4:                             /* switch 2 */
                    var_f20 = 4.0f;
                    break;
                case 8:                             /* switch 2 */
                    var_f20 = 3.0f;
                    break;
                default:                            /* switch 2 */
                    var_f20 = 0.0f;
                    break;
                }
                if (temp_a1 < 2) {
                    temp_a0_10 = *(u8 **)((u8 *)(var_s0 + (temp_a1 * 4)) + 0x20);
                    if (temp_a0_10 != NULL) {
                        func_0022C7D0(temp_a0_10, 0, *(f32 *)((u8 *)temp_a0_10 + 0x10) + D_00470710);
                        func_0022C7D0(*(u8 **)((u8 *)(*(u8 **)((u8 *)(var_s0 + (*(s16 *)((u8 *)temp_s1 + 0x32) * 4)) + 0x20)) + 0x2C), 0, var_f20 - 1.0f);
                        func_0022ACF0((s32)(*(u8 **)((u8 *)(var_s0 + (*(s16 *)((u8 *)temp_s1 + 0x32) * 4)) + 0x20)));
                    }
                }
                var_s4 += 1;
                var_s3 += 2;
                var_s2 += 6;
                var_s0 += 8;
            } while (var_s4 < 2);
            return;
        case 5:                                     /* switch 1 */
            *(f32 *)((u8 *)temp_s1 + 8) = (f32) (*(f32 *)((u8 *)temp_s1 + 8) + D_00470710);
            func_0022C060((s32)(*(u8 **)((u8 *)var_s0 + 0x18)), 0x3F800000);
            func_0022C060((s32)(*(u8 **)((u8 *)var_s0 + 0x1C)), 0x3F800000);
            if (!(*(f32 *)((u8 *)temp_s1 + 8) < *(f32 *)((u8 *)temp_s1 + 0xC))) {
                *(s32 *)((u8 *)temp_s1 + 4) = 2;
                var_v0_3 = func_00255610;
                *(f32 *)((u8 *)temp_s1 + 8) = 0.0f;
                if (func_00255610 == NULL) {
                    var_v0_3 = NULL;
                }
                *(void (**)())((u8 *)arg0 + 0x1C) = var_v0_3;
                var_v0_4 = func_002547A0;
                if (func_002547A0 == NULL) {
                    var_v0_4 = NULL;
                }
                *(void (**)())((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_4;
                var_s4_2 = 0;
                var_s2_2 = var_s0;
                do {
                    func_0022D0E0((s32)(*(u8 **)((u8 *)var_s2_2 + 0x18)), 1);
                    var_s4_2 += 1;
                    *(u8 **)((u8 *)var_s2_2 + 0x18) = NULL;
                    var_s2_2 += 4;
                } while (var_s4_2 < 2);
                func_0022D0E0((s32)(*(u8 **)((u8 *)var_s0 + 4)), 1);
                *(u8 **)((u8 *)var_s0 + 4) = NULL;
                temp_s2 = func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x20));
                var_a1 = -2;
                if (D_0058D4F4 == NULL) {

                } else {
                    temp_a0_11 = (u8 *)(D_0058D4F4 + 0x30);
                    var_a1 = 1;
                    if (*(s32 *)((u8 *)D_0058D4F4 + 0x34) == 1) {
                        var_a1 = -1;
                    } else {
                        temp_v1 = *(u16 *)((u8 *)temp_a0_11 + 0x1E);
                        if (temp_v1 == 0) {

                        } else {
                            temp_v0 = *(u16 *)((u8 *)temp_a0_11 + 0x1C);
                            if (temp_v0 != temp_v1) {
                                if (temp_v0 == 0) {
                                    goto block_61;
                                }
                            } else {
block_61:
                                var_a1 = 0;
                            }
                        }
                    }
                }
                if (var_a1 == 1) {
                    func_001E9B00(1, 0x2F, 0, 0, 0, 0x3F800000);
                    *(u8 **)((u8 *)var_s0 + 4) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x20)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0xC8))))))), 0);
                    func_0022C7D0(*(u8 **)((u8 *)var_s0 + 4), 1, 0.0f);
                    func_002543B0(temp_s1);
                    func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 4)));
                    var_v0_5 = func_0021C460(*(s16 *)((u8 *)temp_s1 + 0x20));
                    if (var_v0_5 == -1) {
                        var_v0_5 = 2;
                    }
                    var_v0_6 = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + ((var_v0_5 + ((temp_s2 * 3) + 0x45)) * 4)), 0);
                } else {
                    func_001E9B00(1, 0x30, 0, 0, 0, 0x3F800000);
                    *(s16 *)((u8 *)temp_s1 + 0x34) = 1;
                    *(u8 **)((u8 *)var_s0 + 4) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x22)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0xD0))))))), 0);
                    func_0022C7D0(*(u8 **)((u8 *)var_s0 + 4), 1, 0.0f);
                    func_002543B0(temp_s1);
                    func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 4)));
                    var_v0_7 = func_0021C460(*(s16 *)((u8 *)temp_s1 + 0x22));
                    if (var_v0_7 == -1) {
                        var_v0_7 = 2;
                    }
                    var_v0_6 = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + ((var_v0_7 + ((temp_s2 * 3) + 0x4B)) * 4)), 0);
                }
                *(u8 **)((u8 *)var_s0 + 0x30) = var_v0_6;
                temp_a0_12 = *(s16 *)((u8 *)((*(s16 *)((u8 *)temp_s1 + 0x32) * 2) + temp_s1) + 0x24);
                switch (temp_a0_12) {               /* switch 3; irregular */
                case 1:                             /* switch 3 */
                    func_0022D0E0((s32)(*(u8 **)((u8 *)var_s0 + 0x10)), 1);
                    *(u8 **)((u8 *)var_s0 + 0x10) = NULL;
                    break;
                case 2:                             /* switch 3 */
                    func_0022D0E0((s32)(*(u8 **)((u8 *)var_s0 + 0xC)), 1);
                    *(u8 **)((u8 *)var_s0 + 0xC) = NULL;
                    break;
                case 4:                             /* switch 3 */
                    func_0022D0E0((s32)(*(u8 **)((u8 *)var_s0 + 0x14)), 1);
                    *(u8 **)((u8 *)var_s0 + 0x14) = NULL;
                    break;
                case 8:                             /* switch 3 */
                    func_0022D0E0((s32)(*(u8 **)((u8 *)var_s0 + 8)), 1);
                    *(u8 **)((u8 *)var_s0 + 8) = NULL;
                    break;
                }
                if (*(s16 *)((u8 *)temp_s1 + 0x32) < 2) {
                    temp_v1_2 = *(s16 *)((u8 *)temp_s1 + 0x32);
                    temp_s2_2 = func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x20));
                    if (*(s16 *)((u8 *)((temp_v1_2 * 2) + temp_s1) + 0x24) != 0) {
                        if (temp_v1_2 == 1) {
                            temp_a0_13 = *(u8 **)((u8 *)var_s0 + 0x20);
                            if (temp_a0_13 != NULL) {
                                temp_f20 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a0_13 + 0x2C)) + 0x10);
                                func_0022D0E0((s32)(temp_a0_13), 1);
                                *(u8 **)((u8 *)var_s0 + 0x20) = NULL;
                                *(u8 **)((u8 *)var_s0 + 0x20) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(((temp_s2_2 & 1) * 8) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x148))))))), 0);
                                func_0022C7D0(*(u8 **)((u8 *)var_s0 + 0x20), 0, 100.0f);
                                func_0022C7D0(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x20)) + 0x2C), 0, temp_f20);
                                func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 0x20)));
                            }
                        }
                        *(u8 **)((u8 *)((*(s16 *)((u8 *)temp_s1 + 0x32) * 4) + var_s0) + 0x20) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(((temp_s2_2 & 1) * 8) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x144))))))), 0);
                    }
                    temp_v0_2 = func_0021C360(*(s16 *)((u8 *)temp_s1 + 0x22));
                    temp_a0_14 = *(s16 *)((u8 *)temp_s1 + 0x32);
                    if (*(s16 *)((u8 *)((temp_a0_14 * 2) + temp_s1) + 0x2A) != 0) {
                        *(u8 **)((u8 *)((*(s16 *)((u8 *)temp_s1 + 0x32) * 4) + var_s0) + 0x28) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + ((temp_a0_14 + (((temp_v0_2 & 1) * 2) + 0x55)) * 4)), 0);
                    }
                }
            }
            break;
        }
    }
}
