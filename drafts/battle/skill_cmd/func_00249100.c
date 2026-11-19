/* Draft (not built): func_00249100 at 0x00249100, size 0x898, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 419 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x858, original 0x898
 * Original: asm/nonmatchings/battle/skill_cmd/func_00249100.s */

// src/battle/skill_cmd.c func_00249100 size diff=419/534
extern u32 func_0012EAE0(s32);
s32 func_001214F8(f32);
f32 func_001220B0(s32);
s32 func_001414D0(s32, s16, f32, f32, s32);
f32 func_00146E90(s32 *);
s32 func_001E3C70(void *, s32 *);
extern s128 D_004502D0;
extern void func_0011F620(void);
void func_00249100(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 fparg0) {
    s128 sp60;
    s32 sp70;
    f32 sp74;
    s32 sp80;
    f32 sp84;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_f0;
    f32 var_f20;
    f32 var_f3;
    s16 temp_a1;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    u8 *temp_a0;

    sp60 = D_004502D0;
    var_f20 = fparg0;
    if (gBattle != NULL) {
        var_v0 = *(s16 *)((u8 *)gBattle + 0x8944);
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        func_00248E00(arg0, arg1, arg2, arg3);
        return;
    }
    if (*(s16 *)((u8 *)arg3 + 0xE0) == 1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_001E3C70(*(u8 **)((u8 *)arg2 + 0x1354), &sp70);
        temp_v0 = func_0012EAE0(8) & 0xFF;
        if (temp_v0 >= 0) {
            var_f3 = (f32) temp_v0;
        } else {
            var_f3 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        sp74 += 5.0f * (0.5f - (var_f3 / 255.0f));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_001E3C70(*(u8 **)((u8 *)arg2 + 0x1354), &sp70);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    temp_f21 = sp84;
    sp84 = 0.0f;
    temp_f22 = func_00146E90(&sp80);
    temp_s2 = func_001214F8(temp_f21);
    func_001214F8(temp_f22);
    func_0011F620();
    var_f0 = func_001220B0(M2C_ERROR(/* Read from unset register $v0 */) ^ M2C_ERROR(/* unknown instruction: pcpyld $v1, $zero, $v1 */));
    temp_a1 = *(s16 *)((u8 *)arg2 + 0x17A4);
    temp_a0 = *(u8 **)((u8 *)arg2 + 0x1354);
    if ((*(s8 *)((u8 *)temp_a0 + 0x1FF9) == 0) && (*(s8 *)((u8 *)arg2 + 0x1FF9) == 0)) {
        temp_v1 = *(s16 *)((u8 *)arg3 + 0x10);
        if (temp_v1 != 1) {
            if (temp_v1 != 6) {
                if ((temp_v1 != 9) && (temp_v1 != 0xA)) {
                    if ((temp_v1 != 3) && (temp_v1 != 4)) {
                        if (temp_v1 != 0) {
                            var_f0 = 0.0f;
                        } else {
                            temp_v1_2 = *(s32 *)((u8 *)arg2 + 0x1CFC);
                            if ((temp_v1_2 == 0x1B) || (temp_v1_2 == 0x26) || (temp_v1_3 = *(s32 *)((u8 *)arg2 + 0xB9C), (temp_v1_3 == 0xC)) || (temp_v1_3 == 0x4E)) {
                                if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= 15.0f)) {
                                    if (var_f0 < 0.0f) {
                                        var_f0 = (3.1415927f * (2.0f * -15.0f)) / 360.0f;
                                    } else {
                                        var_f0 = (3.1415927f * (2.0f * 15.0f)) / 360.0f;
                                    }
                                }
                            } else {
                                var_f0 = 0.0f;
                            }
                        }
                    } else if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= var_f20)) {
                        if (var_f0 < 0.0f) {
                            var_f0 = (3.1415927f * (2.0f * -var_f20)) / 360.0f;
                        } else {
                            var_f0 = (3.1415927f * (2.0f * var_f20)) / 360.0f;
                        }
                    }
                } else if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= 5.0f)) {
                    if (var_f0 < 0.0f) {
                        var_f0 = (3.1415927f * (2.0f * -5.0f)) / 360.0f;
                    } else {
                        var_f0 = (3.1415927f * (2.0f * 5.0f)) / 360.0f;
                    }
                }
            } else if (*(s32 *)((u8 *)arg2 + 0xB9C) == 0x12) {
                if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= 5.0f)) {
                    if (var_f0 < 0.0f) {
                        var_f0 = (3.1415927f * (2.0f * -5.0f)) / 360.0f;
                    } else {
                        var_f0 = (3.1415927f * (2.0f * 5.0f)) / 360.0f;
                    }
                }
            }
        } else if (!(*(f32 *)((u8 *)temp_a0 + 0x18A4) <= 0.0f)) {
            if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= var_f20)) {
                if (var_f0 < 0.0f) {
                    var_f0 = (3.1415927f * (2.0f * -var_f20)) / 360.0f;
                } else {
                    var_f0 = (3.1415927f * (2.0f * var_f20)) / 360.0f;
                }
            }
        } else {
            temp_v1_4 = *(s32 *)((u8 *)arg2 + 0xB9C);
            if ((temp_v1_4 != 0x48) && (temp_v1_4 != 0x27) && (temp_v1_4 != 0x1D) && (temp_v1_4 != 0x1E) && (temp_v1_4 != 0x25) && (temp_v1_4 != 0x29) && (temp_v1_4 != 0x4C)) {
                if (temp_v1_4 == 0x54) {
                    goto block_70;
                }
                if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= 5.0f)) {
                    if (var_f0 < 0.0f) {
                        var_f0 = (3.1415927f * (2.0f * -5.0f)) / 360.0f;
                    } else {
                        var_f0 = (3.1415927f * (2.0f * 5.0f)) / 360.0f;
                    }
                }
            } else {
block_70:
                if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= 10.0f)) {
                    if (var_f0 < 0.0f) {
                        var_f0 = (3.1415927f * (2.0f * -10.0f)) / 360.0f;
                    } else {
                        var_f0 = (3.1415927f * (2.0f * 10.0f)) / 360.0f;
                    }
                }
            }
        }
    } else {
        temp_v1_5 = *(s32 *)((u8 *)arg2 + 0xB9C);
        if ((temp_v1_5 == 0x5E) || (temp_v1_5 == 0x5F)) {
            var_f20 = 40.0f;
        }
        if (!(fabsf((360.0f * var_f0) / 6.2831855f) <= var_f20)) {
            if (var_f0 < 0.0f) {
                var_f0 = (3.1415927f * (2.0f * -var_f20)) / 360.0f;
            } else {
                var_f0 = (3.1415927f * (2.0f * var_f20)) / 360.0f;
            }
        }
    }
    func_001414D0((s32)(arg0), (s16)(temp_a1), var_f0, (3.1415927f * (f32) temp_a1) / 32768.0f, 0);
}
