/* Draft (not built): func_00270390 at 0x00270390, size 0x2CC, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' does not match 'func_002702A0(unsigned char *, int)' @ 237: func_002702A0(D_004707FC + 0x75C, var_a1, var_a2, var_a3);
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00270390.s */

// src/unk/unk_26FF30.c func_00270390 cerr diff=-1/0
void func_00270390(u8 *arg2) {
    s16 var_a1;
    s16 var_t4;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t3;
    s32 var_v1;
    u8 *temp_a1_2;
    u8 *temp_a2;
    u8 *var_a0;
    u8 *var_a2;
    u8 *var_a2_2;
    u8 *var_a2_3;
    u8 *var_t0;

    var_a2 = arg2;
    temp_a1 = *(s32 *)((u8 *)D_004707FC + 0x4C);
    var_t4 = -1;
    if (temp_a1 < 0) {

    } else if (temp_a1 < *(s32 *)((u8 *)D_004707FC + 0x58)) {
        var_t4 = *(s16 *)((u8 *)((temp_a1 * 2) + D_004707FC) + 0x134);
    } else {
        var_t4 = -1;
    }
    if (temp_a1 > 0) {
        var_a3 = 1;
        if (*(s32 *)((u8 *)D_004707FC + 0x58) >= 2) {
            var_a2 = (u8 *)(D_004707FC + 2);
loop_9:
            if (var_t4 == *(s16 *)((u8 *)var_a2 + 0x134)) {
                var_a1 = *(s16 *)((u8 *)((var_a3 * 2) + D_004707FC) + 0x132);
            } else {
                var_a3 += 1;
                var_a2 += 2;
                if (var_a3 >= *(s32 *)((u8 *)D_004707FC + 0x58)) {
                    goto block_13;
                }
                goto loop_9;
            }
        } else {
block_13:
            var_a1 = -1;
        }
        func_002702A0(D_004707FC + 0x75C, var_a1, var_a2, var_a3);
    } else {
        func_002702A0(D_004707FC + 0x75C, var_t4);
    }
    var_t3 = 1;
    var_t2 = 8;
    do {
        func_002702A0(D_004707FC + var_t2 + 0x75C, M2C_ERROR(/* Read from unset register $t4 */));
        var_a3_2 = 0;
        if ((*(s32 *)((u8 *)D_004707FC + 0x58) - 1) > 0) {
            var_a2_2 = (u8 *)(D_004707FC);
loop_19:
            if (M2C_ERROR(/* Read from unset register $t4 */) == *(s16 *)((u8 *)var_a2_2 + 0x134)) {

            } else {
                var_a3_2 += 1;
                var_a2_2 += 2;
                if (var_a3_2 >= (*(s32 *)((u8 *)D_004707FC + 0x58) - 1)) {

                } else {
                    goto loop_19;
                }
            }
        }
        var_t3 += 1;
        var_t2 += 8;
    } while (var_t3 < 0xB);
    var_a3_3 = 0;
    *(s32 *)((u8 *)D_004707FC + 0x50) = -1;
    var_a2_3 = (u8 *)(D_004707FC);
loop_25:
    if ((*(s32 *)((u8 *)D_004707FC + 0x4C) + *(s32 *)((u8 *)D_004707FC + 0x48)) < *(s32 *)((u8 *)var_a2_3 + 0x5DC)) {
        var_a2_4 = var_a3_3 - 1;
        if (var_a2_4 >= 0) {
            var_a0 = (u8 *)(D_004707FC + (var_a2_4 * 4));
loop_28:
            if (*(s32 *)((u8 *)var_a0 + 0x5DC) >= 0) {

            } else {
                var_a2_4 -= 1;
                var_a0 -= 4;
                if (var_a2_4 < 0) {
                    goto block_33;
                }
                goto loop_28;
            }
        } else {
block_33:
            var_a2_4 = -1;
        }
        *(s32 *)((u8 *)D_004707FC + 0x50) = var_a2_4;
    } else {
        var_a3_3 += 1;
        var_a2_3 += 4;
        if (var_a3_3 < 0x30) {
            goto loop_25;
        }
    }
    if (*(s32 *)((u8 *)D_004707FC + 0x50) < 0) {
        *(s32 *)((u8 *)D_004707FC + 0x50) = 0x2F;
    }
    var_v1 = 0;
    var_t1 = 0;
    do {
        temp_a0 = *(s32 *)((u8 *)D_004707FC + 0x50);
        temp_a2 = (u8 *)(D_004707FC + var_t1);
        if (var_v1 < temp_a0) {
            var_t2_2 = var_v1 + 1;
            if (*(s32 *)((u8 *)temp_a2 + 0x5DC) >= 0) {
                if (var_t2_2 < 0x30) {
                    var_t0 = (u8 *)(D_004707FC + (var_t2_2 * 4));
loop_43:
                    if (*(s32 *)((u8 *)var_t0 + 0x5DC) >= 0) {

                    } else {
                        var_t2_2 += 1;
                        var_t0 += 4;
                        if (var_t2_2 >= 0x30) {
                            goto block_47;
                        }
                        goto loop_43;
                    }
                } else {
block_47:
                    var_t2_2 = -1;
                }
                *(s32 *)((u8 *)temp_a2 + 0x69C) = (s32) (*(s32 *)((u8 *)(D_004707FC + (var_t2_2 * 4)) + 0x5DC) - 1);
            } else {
                *(s32 *)((u8 *)temp_a2 + 0x69C) = -1;
            }
        } else if (var_v1 == temp_a0) {
            *(s32 *)((u8 *)(D_004707FC + var_t1) + 0x69C) = (s32) (*(s32 *)((u8 *)D_004707FC + 0x4C) + *(s32 *)((u8 *)D_004707FC + 0x48));
        } else {
            temp_a1_2 = (u8 *)(D_004707FC + var_t1);
            *(s32 *)((u8 *)temp_a1_2 + 0x69C) = (s32) *(s32 *)((u8 *)temp_a1_2 + 0x5DC);
        }
        var_v1 += 1;
        var_t1 += 4;
    } while (var_v1 < 0x30);
}
