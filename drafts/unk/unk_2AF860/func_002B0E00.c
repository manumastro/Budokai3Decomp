/* Draft (not built): func_002B0E00 at 0x002B0E00, size 0x360, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 110 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34C, original 0x360
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B0E00.s */

// src/unk/unk_2AF860.c func_002B0E00 size diff=110/211
s32 func_002B0E00(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_t0;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t2_2;
    s32 var_t3;
    s32 var_v0;
    u8 *temp_s1;
    u8 *var_a0_3;
    u8 *var_a0_4;
    u8 *var_a2;
    u8 *var_t2;
    u8 *var_t3_2;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 *var_v1_3;

    var_t3 = 0;
    temp_a2 = *(s32 *)((u8 *)arg0 + 0xB8);
    if (temp_a2 > 0) {
loop_2:
        var_t2 = arg0 + 0xB8;
        var_t1 = 0;
        var_t0 = 0;
        if (temp_a2 > 0) {
loop_4:
            if (var_t3 >= var_t0) {
                temp_a1 = *(s32 *)((u8 *)var_t2 + 4);
                var_t0 += 1;
                temp_v1 = temp_a1 * 4;
                var_t2 += 4;
                var_t1 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_v1 + temp_a1) * 8)) + 8) & 7;
                if (var_t0 >= temp_a2) {

                } else {
                    goto loop_4;
                }
            }
        }
        if (*(s32 *)((u8 *)arg0 + 0x20) == var_t1) {
            var_a1 = *(s32 *)((u8 *)((var_t3 * 4) + (arg0 + 0xB8)) + 4);
        } else {
            var_t3 += 1;
            if (var_t3 >= temp_a2) {
                goto block_11;
            }
            goto loop_2;
        }
    } else {
block_11:
        var_a1 = -1;
    }
    if (var_a1 <= 0) {
        return 0;
    }
    temp_s1 = arg0 + 0xB8;
    var_a0 = 0;
    var_v1 = arg0;
loop_15:
    temp_v0 = *(s32 *)((u8 *)var_v1 + 0x2C);
    if (temp_v0 > 0) {
        if (temp_v0 == var_a1) {
            var_v0 = 0;
        } else {
            var_a0 += 1;
            var_v1 += 4;
            if (var_a0 >= 7) {
                goto block_20;
            }
            goto loop_15;
        }
    } else {
block_20:
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        *(s32 *)((u8 *)gSklEdit + 0x30) = 4;
        return 0;
    }
    temp_a2_2 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_s0 = 0;
    if (temp_a2_2 > 0) {
        temp_a3 = *(s32 *)((u8 *)arg0 + 0xB8);
loop_26:
        var_t3_2 = arg0 + 0xB8;
        var_t2_2 = 0;
        var_t1_2 = 0;
        if (temp_a3 > 0) {
loop_28:
            if (var_s0 >= var_t1_2) {
                temp_a1_2 = *(s32 *)((u8 *)var_t3_2 + 4);
                var_t1_2 += 1;
                temp_v1_2 = temp_a1_2 * 4;
                var_t3_2 += 4;
                var_t2_2 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_v1_2 + temp_a1_2) * 8)) + 8) & 7;
                if (var_t1_2 >= temp_a3) {

                } else {
                    goto loop_28;
                }
            }
        }
        if (*(s32 *)((u8 *)arg0 + 0x20) == var_t2_2) {
            if (func_002B0CA0(arg0, var_s0, temp_a2_2, temp_a3) != 0) {
                *(s32 *)((u8 *)arg0 + 0x20) = 0;
                var_a3 = 0;
                if (var_s0 >= 0) {
                    var_a2 = temp_s1;
                    do {
                        temp_a1_3 = *(s32 *)((u8 *)var_a2 + 4);
                        if (temp_a1_3 > 0) {
                            *(s32 *)((u8 *)arg0 + 0x20) = (s32) (*(s32 *)((u8 *)arg0 + 0x20) + (*(u8 *)((u8 *)(&D_004E0660 + (temp_a1_3 * 0x28)) + 8) & 7));
                        }
                        var_a3 += 1;
                        var_a2 += 4;
                    } while (var_s0 >= var_a3);
                }
                var_a0_2 = var_s0 + 1;
                *(s32 *)((u8 *)arg0 + 0x20) = (s32) (*(s32 *)((u8 *)arg0 + 0x20) + 1);
                if (var_a0_2 < 7) {
                    var_v1_2 = temp_s1 + (var_a0_2 * 4);
loop_40:
                    if (*(s32 *)((u8 *)var_v1_2 + 4) > 0) {
                        *(s32 *)((u8 *)arg0 + 0x20) = (s32) (*(s32 *)((u8 *)arg0 + 0x20) - 1);
                        *(s32 *)((u8 *)arg0 + 0x20) = (s32) (*(s32 *)((u8 *)arg0 + 0x20) + (*(&D_004E0668 + (*(s32 *)((u8 *)((var_a0_2 * 4) + temp_s1) + 4) * 0x28)) & 7));
                    } else {
                        var_a0_2 += 1;
                        var_v1_2 += 4;
                        if (var_a0_2 < 7) {
                            goto loop_40;
                        }
                    }
                }
                var_a2_2 = 0;
                var_a1_2 = 0;
                var_a0_3 = temp_s1;
                var_v1_3 = temp_s1;
loop_44:
                temp_v0_2 = *(s32 *)((u8 *)var_a0_3 + 4);
                if ((temp_v0_2 > 0) && (*(s32 *)((u8 *)var_v1_3 + 4) = temp_v0_2, var_a2_2 += 1, var_v1_3 += 4, (var_a2_2 == *(s32 *)((u8 *)arg0 + 0xB8)))) {
                    if (var_a2_2 < 7) {
                        var_a0_4 = temp_s1 + (var_a2_2 * 4);
                        do {
                            var_a2_2 += 1;
                            *(s32 *)((u8 *)var_a0_4 + 4) = -1;
                            var_a0_4 += 4;
                        } while (var_a2_2 < 7);
                    }
                } else {
                    var_a1_2 += 1;
                    var_a0_3 += 4;
                    if (var_a1_2 < 7) {
                        goto loop_44;
                    }
                }
                return 1;
            }
            goto block_54;
        }
        var_s0 += 1;
        if (var_s0 >= temp_a2_2) {
            goto block_54;
        }
        goto loop_26;
    }
block_54:
    return 0;
}
