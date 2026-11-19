/* Draft (not built): func_001BA7F0 at 0x001BA7F0, size 0x320, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); exe Compiler: 4132: *(((u8 *)&D_00468460) + (temp_v0 * 4))(arg0); @ 4114: *(((u8 *)&D_00468460) + (var_v0_3 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001BA7F0.s */

// src/battle/btl_main.c func_001BA7F0 cerr diff=-1/0
s32 func_001E0200(void *, s32, s32);
s32 func_001E92D0(void *);
void func_001BA7F0(u8 *arg0) {
    s32 sp40;
    f32 temp_f20;
    s16 *temp_s1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 *temp_a0;

    temp_f20 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    Fighter_ResetMotion(0, 0);
    if (gBattle != NULL) {
        var_v0 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x1000;
    } else {
        var_v0 = 0;
    }
    if ((var_v0 == 0) && (*(s8 *)((u8 *)arg0 + 0x1FFA) == 1) && (*(s8 *)((u8 *)arg0 + 0x2013) <= 0)) {
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            if ((*(s8 *)((u8 *)arg0 + 0x1FF8) >= 2) && (*(f32 *)((u8 *)arg0 + 0xCB8) <= 6.0f)) {
                temp_v1 = *(s32 *)((u8 *)arg0 + 0x13B0);
                temp_a0 = arg0 + 0x1360;
                if ((temp_v1 >= -6) && (temp_v1 < 7)) {
                    temp_s1 = (short *)(temp_a0 + (*(s32 *)((u8 *)temp_a0 + 0x5C) * 4) + 0xE4);
                    if (gBattle != NULL) {
                        var_v0_2 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x2000;
                    } else {
                        var_v0_2 = 0;
                    }
                    if (var_v0_2 == 0) {
                        if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
                            temp_v1_2 = *temp_s1;
                            var_v0_3 = 0x25;
                            if (temp_v1_2 == -1) {

                            } else {
                                var_v0_3 = 0x24;
                                if (temp_v1_2 == 1) {

                                } else {
                                    goto block_27;
                                }
                            }
                        } else {
                            temp_v1_3 = *temp_s1;
                            var_v0_3 = 0x24;
                            if (temp_v1_3 == -1) {

                            } else {
                                var_v0_3 = 0x25;
                                if (temp_v1_3 == 1) {

                                } else {
                                    goto block_27;
                                }
                            }
                        }
                    } else {
block_27:
                        var_v0_3 = 0x23;
                    }
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    if (var_v0_3 != 0xF) {
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    }
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    *(((u8 *)&D_00468460) + (var_v0_3 * 4))(arg0);
                    func_002CBFF0(1, arg0);
                    return;
                }
                goto block_41;
            }
            *(s8 *)((u8 *)arg0 + 0x1FFA) = -1;
            goto block_41;
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
                *(((u8 *)&D_00468460) + (temp_v0 * 4))(arg0);
                func_002CBFF0(1, arg0);
                return;
            }
        }
        goto block_41;
    }
block_41:
    if (*(s8 *)((u8 *)arg0 + 0x1FFA) < 0) {
        func_001E0200(arg0, 0x80, 0xA0);
        *(s8 *)((u8 *)arg0 + 0x1FFA) = 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684A8[0](arg0);
        func_002CBFF0(1, arg0);
        return;
    }
    func_00146F10(&sp40, arg0 + 0xD0, temp_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
}
