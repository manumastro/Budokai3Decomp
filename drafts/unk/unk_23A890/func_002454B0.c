/* Draft (not built): func_002454B0 at 0x002454B0, size 0x5CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 212 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x574, original 0x5CC
 * Original: asm/nonmatchings/unk/unk_23A890/func_002454B0.s */

// src/unk/unk_23A890.c func_002454B0 size diff=212/349
s32 func_00208E50(s32, s32);
void func_002454B0(void) {
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_8;
    s64 var_s3;
    s8 var_v1_12;
    s8 var_v1_4;
    s8 var_v1_7;
    s8 var_v1_9;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s2;

    var_s3 = 0;
    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_a0 = D_0046FE4C + var_s1;
        temp_s2 = temp_a0 + 0x10;
        temp_a0_2 = *(s32 *)((u8 *)temp_a0 + 0x24);
        if ((temp_a0_2 != -1) && (temp_a0_2 != *(s32 *)((u8 *)(gBattle + var_s0) + 0x13A0))) {
            func_00215230((s64) (var_s3 << 0x30) >> 0x30, 2);
            *(s32 *)((u8 *)temp_s2 + 0x14) = -1;
            *(s32 *)((u8 *)temp_s2 + 0x1C) = -1;
            *(s32 *)((u8 *)temp_s2 + 0x38) = -1;
            *(s16 *)((u8 *)temp_s2 + 0x2A) = 0;
            *(s16 *)((u8 *)temp_s2 + 0x36) = 0;
            temp_a0_3 = *(u8 **)((u8 *)temp_s2 + 0x30);
            if (temp_a0_3 != NULL) {
                Obj_ResetF38((s32)(temp_a0_3));
                *(u8 **)((u8 *)temp_s2 + 0x30) = NULL;
            }
        }
        if ((*(s16 *)((u8 *)temp_s2 + 0x2C) != 0) && (*(s32 *)((u8 *)(gBattle + var_s0) + 0x13CC) == 0x29)) {
            func_00244A60(var_s3);
        }
        if (gBattle != NULL) {
            var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            temp_a0_4 = *(u8 **)((u8 *)temp_s2 + 0x30);
            if (temp_a0_4 != NULL) {
                func_00208F70((s32)(temp_a0_4));
                if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x30)) + 0x38) < 0) {
                    *(u8 **)((u8 *)temp_s2 + 0x30) = NULL;
                }
            }
        }
        var_s3 += 1;
        var_s1 += 0x480;
        var_s0 += 0x2020;
    } while (var_s3 < 2);
    var_v1_2 = 0;
    if (gBattle != NULL) {
        var_v1_2 = *(s32 *)((u8 *)gBattle + 0x88EC);
    }
    if (var_v1_2 == 0) {
        var_v1_3 = 0;
        if (gBattle != NULL) {
            var_v1_3 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
            if (var_v1_3 != 0) {
                var_v1_3 = 1;
                if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                    var_v1_3 = 0;
                }
            }
        }
        if (var_v1_3 != 0) {
            var_v1_4 = -1;
            if (gBattle != NULL) {
                var_v1_4 = -1;
                if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                        var_v1_4 = -1;
                    } else {
                        var_v1_4 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    }
                }
            }
            if (var_v1_4 == 0) {
                var_v1_5 = 1;
            } else {
                goto block_38;
            }
        } else {
block_38:
            var_v1_5 = 0;
        }
        if ((var_v1_5 == 0) && (*(s32 *)((u8 *)gWave + 0x7C) != 0)) {
            func_00208E50(0x04000004, 1);
        }
        var_v1_6 = 0;
        if (gBattle != NULL) {
            var_v1_6 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
            if (var_v1_6 != 0) {
                var_v1_6 = 1;
                if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                    var_v1_6 = 0;
                }
            }
        }
        if (var_v1_6 != 0) {
            var_v1_7 = -1;
            if (gBattle != NULL) {
                var_v1_7 = -1;
                if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                        var_v1_7 = -1;
                    } else {
                        var_v1_7 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    }
                }
            }
            var_a0 = 1;
            if (var_v1_7 == 1) {

            } else {
                goto block_61;
            }
        } else {
block_61:
            var_a0 = 0;
        }
        if ((var_a0 == 0) && (*(s32 *)((u8 *)gWave + 0x7C) != 0)) {
            func_00208E50(0x04000008, 1);
        }
        if (*(s32 *)((u8 *)gWave + 0x98) != 0) {
            func_00208E50(0x04000040, 1);
        }
        var_v1_8 = 0;
        if (gBattle != NULL) {
            var_v1_8 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
            if (var_v1_8 != 0) {
                var_v1_8 = 1;
                if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                    var_v1_8 = 0;
                }
            }
        }
        if (var_v1_8 != 0) {
            var_v1_9 = -1;
            if (gBattle != NULL) {
                var_v1_9 = -1;
                if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                        var_v1_9 = -1;
                    } else {
                        var_v1_9 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    }
                }
            }
            if (var_v1_9 == 0) {
                var_v1_10 = 1;
            } else {
                goto block_85;
            }
        } else {
block_85:
            var_v1_10 = 0;
        }
        if ((var_v1_10 == 0) && (*(s32 *)((u8 *)gWave + 0x9C) != 0)) {
            func_00208E50(0x04000080, 1);
        }
        var_v1_11 = 0;
        if (gBattle != NULL) {
            var_v1_11 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
            if (var_v1_11 != 0) {
                var_v1_11 = 1;
                if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                    var_v1_11 = 0;
                }
            }
        }
        if (var_v1_11 != 0) {
            var_v1_12 = -1;
            if (gBattle != NULL) {
                var_v1_12 = -1;
                if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                        var_v1_12 = -1;
                    } else {
                        var_v1_12 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                    }
                }
            }
            var_a0_2 = 1;
            if (var_v1_12 == 1) {

            } else {
                goto block_108;
            }
        } else {
block_108:
            var_a0_2 = 0;
        }
        if ((var_a0_2 == 0) && (*(s32 *)((u8 *)gWave + 0x9C) != 0)) {
            func_00208E50(0x04000100, 1);
        }
    }
    if (*(s32 *)((u8 *)gWave + 0x80) != 0) {
        func_00215500(0x40);
    }
    if (*(s32 *)((u8 *)gWave + 0x84) != 0) {
        func_00215500(1);
    }
}
