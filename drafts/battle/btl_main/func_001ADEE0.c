/* Draft (not built): func_001ADEE0 at 0x001ADEE0, size 0x6E0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 1102: if (*(&D_00468340 + (*(s16 *)((u8 *)temp_s1 + 0x7E2) * 4))() != 0) {
 * Original: asm/nonmatchings/battle/btl_main/func_001ADEE0.s */

// src/battle/btl_main.c func_001ADEE0 cerr diff=-1/0
extern s32 func_001DFE60(Fighter *c, s32 a, f32 v);
extern s32 D_00495B60[];
s32 func_001D92B0(void *);
f32 *func_0021C600();
extern s32 D_00468340;
extern f32 D_004707A8;
void func_001ADEE0(void) {
    s32 *spA0;
    s32 spB0;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    f32 *temp_v0_2;
    f32 temp_f0;
    s16 temp_a1;
    s16 temp_a2_2;
    s32 *temp_v1_3;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_fp;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s32 var_t0;
    s32 var_t0_2;
    s8 temp_v0_5;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0_4;
    u8 *temp_v1_2;
    u8 *var_a3;
    u8 *var_a3_2;
    u8 *var_s0;

    temp_s1 = (u8 *)(gBattle);
    var_s0 = temp_s1 + 0x830;
    if (*(s32 *)((u8 *)temp_s1 + 0x88EC) == 0) {
        if (*(s8 *)((u8 *)temp_s1 + 0x8AAD) == 0) {
            *(f32 *)((u8 *)temp_s1 + 0x8908) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x8908) + *(f32 *)((u8 *)temp_s1 + 0x88F0));
            temp_v0 = *(s32 *)((u8 *)temp_s1 + 0x7EC);
            if (temp_v0 > 0) {
                temp_f0 = (f32) temp_v0;
                if (!(*(f32 *)((u8 *)temp_s1 + 0x8908) <= temp_f0)) {
                    *(f32 *)((u8 *)temp_s1 + 0x8908) = temp_f0;
                }
            }
        }
        if (*(s8 *)((u8 *)temp_s1 + 0x8AB2) != 0) {
            *(f32 *)((u8 *)temp_s1 + 0x891C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x891C) + *(f32 *)((u8 *)temp_s1 + 0x88F0));
        }
    }
    temp_s2 = (u8 *)(gBattle);
    temp_v0_2 = func_0021C600();
    temp_v1 = *(s32 *)((u8 *)temp_s2 + 0x7EC);
    if (temp_v1 >= 0) {
        *temp_v0_2 = (f32) temp_v1 - *(f32 *)((u8 *)temp_s2 + 0x8908);
    }
    if (*(s8 *)((u8 *)temp_s2 + 0x8ABB) == 0) {
        *(s8 *)((u8 *)temp_s2 + 0x8ABB) = 1;
    }
    if (*(&D_00468340 + (*(s16 *)((u8 *)temp_s1 + 0x7E2) * 4))() != 0) {
        var_a0 = *(s32 *)((u8 *)temp_s1 + 0x8900);
        if (var_a0 >= 0) {
            temp_v1_2 = (var_a0 * 0x2020) + var_s0;
            if (*(s8 *)((u8 *)temp_v1_2 + 0x2015) != 0) {
                var_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_2 + 0x1358)) + 0x1350);
            }
            temp_v1_3 = &D_00495B60 + (var_a0 * 4);
            *temp_v1_3 += 1;
        }
        var_s2 = 0;
        if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
            do {
                func_001D92B0(var_s0);
                var_s2 += 1;
                var_s0 += 0x2020;
            } while (var_s2 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
        }
        D_004682F4();
        return;
    }
    *(f32 *)((u8 *)gBattle + 0x8910) = (f32) *(f32 *)((u8 *)gBattle + 0x890C);
    *(f32 *)((u8 *)gBattle + 0x890C) = (f32) (*(f32 *)((u8 *)gBattle + 0x890C) + *(f32 *)((u8 *)gBattle + 0x88F0));
    if (!(*(f32 *)((u8 *)gBattle + 0x890C) <= 1e8f)) {
        *(f32 *)((u8 *)gBattle + 0x8910) = 0.0f;
        *(f32 *)((u8 *)gBattle + 0x890C) = (f32) *(f32 *)((u8 *)gBattle + 0x88F0);
    }
    if (D_004707A8 <= 0.0f) {
        temp_v0_3 = func_002CC4A0();
        switch (temp_v0_3) {                        /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            Btl_ResetScene();
            return;
        case 2:                                     /* switch 1 */
            var_a1 = 0;
            if (*(s32 *)((u8 *)temp_s1 + 0x88D8) > 0) {
                do {
                    if (*(s8 *)((u8 *)var_s0 + 0x1FF8) == 2) {
                        *(s8 *)((u8 *)var_s0 + 0x1FF8) = 0;
                    }
                    var_a1 += 1;
                    var_s0 += 0x2020;
                } while (var_a1 < *(s32 *)((u8 *)temp_s1 + 0x88D8));
            }
            /* fallthrough */
        case 0:                                     /* switch 1 */
            return;
        default:                                    /* switch 1 */
            temp_a1 = *(s16 *)((u8 *)temp_s1 + 0x7E2);
            if (temp_a1 != 6) {
                if (*(s32 *)((u8 *)temp_s1 + 0x88EC) == 0) {
                    var_s2_2 = 0;
                    var_s4 = 0;
                    temp_a2 = *(s32 *)((u8 *)temp_s1 + 0x88D8);
                    var_t0 = 0;
                    if (temp_a2 > 0) {
                        var_a3 = var_s0;
                        do {
                            if (*(s16 *)((u8 *)var_a3 + 0x13A4) != -1) {
                                var_s4 += 1;
                            }
                            var_t0 += 1;
                            var_a3 += 0x2020;
                        } while (var_t0 < temp_a2);
                    }
                    if ((var_s4 > 0) && (temp_a1 != 3) && ((*(s16 *)((u8 *)temp_s1 + 0x2300) != 0) || (*(s16 *)((u8 *)temp_s1 + 0x4320) != 0))) {
                        return;
                    }
                    var_fp = 0;
loop_47:
                    spA0 = (s32 *)(temp_s1 + 0x88D8);
                    var_s7 = 0;
                    spB0 = (var_fp & 3) * 2;
loop_48:
                    var_s5 = -1;
                    temp_s3 = (var_s7 & 1) | spB0;
                    temp_a1_2 = *spA0;
                    var_t0_2 = 0;
                    if (temp_a1_2 > 0) {
                        var_a3_2 = var_s0;
loop_50:
                        temp_a2_2 = *(s16 *)((u8 *)var_a3_2 + 0x13A4);
                        if ((temp_a2_2 == -2) && (temp_s3 == *(s16 *)((u8 *)(*(u8 **)((u8 *)var_a3_2 + 0x1CF4)) + 0x1A))) {
                            var_s5 = var_t0_2;
                        } else if (temp_s3 == temp_a2_2) {
                            var_s5 = var_t0_2;
                        } else {
                            var_t0_2 += 1;
                            var_a3_2 += 0x2020;
                            if (var_t0_2 < temp_a1_2) {
                                goto loop_50;
                            }
                        }
                    }
                    if ((var_s5 >= 0) || (var_s4 <= 0)) {
                        if ((var_s5 >= 0) && (*(s16 *)((u8 *)temp_s1 + 0x7E2) == 3) && (*(u16 *)((u8 *)(&D_00492FC0 + (temp_s3 * 0xB8)) + 0xE) & 1)) {
                            temp_v0_4 = temp_s1 + (var_s5 * 0x2020);
                            func_001DFE60(temp_v0_4 + 0x830, 0x10, -*(f32 *)((u8 *)temp_v0_4 + 0x2004));
                        }
                        temp_a0 = &D_00492FC0 + (temp_s3 * 0xB8);
                        if ((*(u16 *)((u8 *)temp_a0 + 0xE) & 8) || (*(s8 *)((u8 *)temp_s1 + 0x8AB4) != 0) || ((var_s5 >= 0) && (*(s32 *)((u8 *)temp_a0 + 0) == 0))) {
                            temp_v0_5 = *(s8 *)((u8 *)temp_s1 + 0x8AB4);
                            var_s2_2 = 1;
                            if (temp_v0_5 == 0) {
                                *(s32 *)((u8 *)temp_s1 + 0x88EC) = (s32) (temp_s3 + 1);
                                spC0 = var_s5;
                                spC4 = temp_s3;
                                spC8 = 0;
                                A2d_CallHandler(0, &spC0);
                            } else {
                                *(s32 *)((u8 *)temp_s1 + 0x88EC) = (s32) ((s64) ((s64) temp_v0_5 << 0x38) >> 0x38);
                            }
                            func_001AC7C0();
                            *(s8 *)((u8 *)temp_s1 + 0x8AB4) = 0;
                        } else {
                            goto block_72;
                        }
                    } else {
block_72:
                        var_s7 += 1;
                        if (var_s7 < 2) {
                            goto loop_48;
                        }
                    }
                    if (var_s2_2 == 0) {
                        var_fp += 1;
                        if (var_fp >= 4) {
                            return;
                        }
                        goto loop_47;
                    }
                } else {
                    *(s8 *)((u8 *)temp_s1 + 0x8AB4) = 0;
                    temp_v0_6 = func_00225380();
                    if (temp_v0_6 != -1) {
                        func_001AC670(temp_v0_6 == 0);
                        switch (temp_v0_6) {        /* switch 2; irregular */
                        case 0:                     /* switch 2 */
                            *(s32 *)((u8 *)temp_s1 + 0x88EC) = 0;
                            return;
                        case 1:                     /* switch 2 */
                            Btl_ResetScene();
                            return;
                        case 2:                     /* switch 2 */
                            D_00470574 = 4;
                            D_00468300[0]();
                            return;
                        case 3:                     /* switch 2 */
                            D_00470574 = 2;
                            D_00468300[0]();
                            break;
                        }
                    }
                }
            }
            break;
        }
    }
}
