/* Draft (not built): func_001BA070 at 0x001BA070, size 0x4F8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 181 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x490, original 0x4F8
 * Original: asm/nonmatchings/battle/btl_main/func_001BA070.s */

// src/battle/btl_main.c func_001BA070 size diff=181/292
s32 func_001E8FC0(void *);
s32 func_001E92D0(void *);
void func_001BA070(u8 *arg0) {
    s32 sp40;
    BattleWork *temp_s0;
    f32 temp_f20;
    s16 *temp_s0_2;
    s16 *temp_s0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u8 *temp_a1;

    temp_s0 = gBattle;
    temp_f20 = temp_s0->unk88F0 * *(f32 *)((u8 *)arg0 + 0xC9C);
    Fighter_ResetMotion(arg0, 0);
    func_001E4E20(arg0, 0);
    if ((*(s8 *)((u8 *)arg0 + 0x2013) <= 0) && (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0)) {
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            if ((*(s8 *)((u8 *)arg0 + 0x1FF8) >= 2) && (*(f32 *)((u8 *)arg0 + 0xCB8) <= 6.0f)) {
                temp_a0 = *(s32 *)((u8 *)arg0 + 0x13B0);
                temp_a1 = arg0 + 0x1360;
                if ((temp_a0 >= -6) && (temp_a0 < 7)) {
                    temp_s0_2 = (short *)(temp_a1 + (*(s32 *)((u8 *)temp_a1 + 0x5C) * 4) + 0xE4);
                    if (gBattle != NULL) {
                        var_v0 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x2000;
                    } else {
                        var_v0 = 0;
                    }
                    if (var_v0 == 0) {
                        if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 180.0f) != 0) {
                            temp_v1 = *temp_s0_2;
                            var_v0_2 = 0x25;
                            if (temp_v1 == -1) {

                            } else {
                                var_v0_2 = 0x24;
                                if (temp_v1 == 1) {

                                } else {
                                    goto block_22;
                                }
                            }
                        } else {
                            temp_v1_2 = *temp_s0_2;
                            var_v0_2 = 0x24;
                            if (temp_v1_2 == -1) {

                            } else {
                                var_v0_2 = 0x25;
                                if (temp_v1_2 == 1) {

                                } else {
                                    goto block_22;
                                }
                            }
                        }
                    } else {
block_22:
                        var_v0_2 = 0x23;
                    }
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    if (var_v0_2 != 0xF) {
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    }
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_00468460[var_v0_2](arg0);
                    func_002CBFF0(1, arg0);
                    return;
                }
                goto block_37;
            }
            if (*(s8 *)((u8 *)arg0 + 0x1FFA) > 0) {
                *(s8 *)((u8 *)arg0 + 0x1FFA) = -1;
            }
            goto block_37;
        }
        if ((*(s8 *)((u8 *)arg0 + 0x1FF8) >= 2) && (*(f32 *)((u8 *)arg0 + 0xCB8) <= (0.1f + temp_f20))) {
            temp_v0 = func_001E92D0(arg0);
            if (temp_v0 >= 0) {
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                if (temp_v0 != 0xF) {
                    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                }
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_00468460[temp_v0](arg0);
                func_002CBFF0(1, arg0);
                return;
            }
        }
        goto block_37;
    }
block_37:
    if (*(s8 *)((u8 *)arg0 + 0x1FFA) < 0) {
        *(s8 *)((u8 *)arg0 + 0x1FFA) = 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        func_00146F10(&sp40, arg0 + 0xD0, temp_f20);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F10(arg0 + 0xD0, arg0 + 0xD0, 1.0f - (0.04f * temp_f20));
    } else {
        *(f32 *)((u8 *)arg0 + 0x44) = (f32) *(f32 *)((u8 *)arg0 + 0x1844);
    }
    if (temp_s0->unk8944 == 0) {
        if (!(*(f32 *)((u8 *)arg0 + 0xCB8) < 30.0f)) {
            func_001DD680(arg0);
        }
        if ((*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) && (*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) && (*(s8 *)((u8 *)arg0 + 0x2013) == 1)) {
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_00468508(arg0);
            func_002CBFF0(1, arg0);
            return;
        }
        if ((*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) && (*(f32 *)((u8 *)arg0 + 0x18A4) <= 0.0f)) {
            var_v0_3 = 0x2A;
            if (*(s8 *)((u8 *)arg0 + 0x2013) == 1) {

            } else if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
                temp_s0_3 = (short *)(arg0 + 0x1360 + (*(s32 *)((u8 *)arg0 + 0x13BC) * 4) + 0xE4);
                if (gBattle != NULL) {
                    var_v0_4 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x2000;
                } else {
                    var_v0_4 = 0;
                }
                if (var_v0_4 == 0) {
                    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 180.0f) != 0) {
                        temp_v1_3 = *temp_s0_3;
                        var_v0_3 = 0x25;
                        if (temp_v1_3 == -1) {

                        } else {
                            var_v0_3 = 0x24;
                            if (temp_v1_3 == 1) {

                            } else {
                                goto block_70;
                            }
                        }
                    } else {
                        temp_v1_4 = *temp_s0_3;
                        var_v0_3 = 0x24;
                        if (temp_v1_4 == -1) {

                        } else {
                            var_v0_3 = 0x25;
                            if (temp_v1_4 == 1) {

                            } else {
                                goto block_70;
                            }
                        }
                    }
                } else {
block_70:
                    var_v0_3 = 0x13;
                }
            } else {
                var_v0_3 = func_001E8FC0(arg0);
            }
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            if (var_v0_3 != 0xF) {
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            }
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_00468460[var_v0_3](arg0);
            func_002CBFF0(1, arg0);
        }
    }
}
