/* Draft (not built): func_001C7130 at 0x001C7130, size 0x278, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ed identifier 'sp' mwccps2.exe Compiler: 5553: temp_a1 = temp_t6 + sp; @ 5543: *(s8 *)((u8 *)(var_a2 + sp) + 0x40) = -1;
 * Original: asm/nonmatchings/battle/btl_main/func_001C7130.s */

// src/battle/btl_main.c func_001C7130 cerr diff=-1/0
void func_001C7130(void) {
    s32 spA8;
    s32 *var_a1;
    s32 var_a2;
    s32 var_t5;
    s32 var_t7;
    s8 temp_a1_2;
    s8 temp_a1_4;
    s8 temp_a2;
    s8 temp_a2_2;
    s8 temp_s3;
    s8 temp_t4;
    s8 temp_t6;
    s8 var_a1_2;
    s8 var_a1_3;
    s8 var_a2_2;
    u8 *temp_a1;
    u8 *temp_a1_3;
    u8 *temp_t1;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_t3;
    u8 *var_t9;

    if (*(s32 *)((u8 *)gBattle + 0x4550) >= *(s32 *)((u8 *)gBattle + 0x2530)) {
        var_s1 = (u8 *)(gBattle + 0x830);
        var_s0 = (u8 *)(gBattle + 0x2850);
    } else {
        var_s1 = (u8 *)(gBattle + 0x2850);
        var_s0 = (u8 *)(gBattle + 0x830);
    }
    var_a2 = 0x68;
    var_a1 = &spA8;
    var_t9 = *(u8 **)((u8 *)var_s1 + 0x1CF8) + 0xD4;
    do {
        *(s8 *)((u8 *)var_a1 + 0) = -1;
        *(s8 *)((u8 *)var_a1 + -1) = -1;
        var_a2 -= 8;
        *(s8 *)((u8 *)var_a1 + -2) = -1;
        *(s8 *)((u8 *)var_a1 + -3) = -1;
        *(s8 *)((u8 *)var_a1 + -4) = -1;
        *(s8 *)((u8 *)var_a1 + -5) = -1;
        *(s8 *)((u8 *)var_a1 + -6) = -1;
        *(s8 *)((u8 *)var_a1 + -7) = -1;
        var_a1 -= 8;
    } while (var_a2 >= 8);
    var_t7 = 0;
    *(s8 *)((u8 *)(var_a2 + sp) + 0x40) = -1;
    do {
        temp_t1 = var_s1 + var_t7;
        temp_t6 = *(s8 *)((u8 *)temp_t1 + 0x1D04);
        if (*(s16 *)((u8 *)var_t9 + 0) != 0) {
            if (*(s8 *)((u8 *)temp_t1 + 0x1FDC) != 0) {
                goto block_9;
            }
        } else {
block_9:
            temp_a1 = temp_t6 + sp;
            if (var_t7 < *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x1CF8)) + 0xD0)) {
                temp_a1_2 = *(s8 *)((u8 *)temp_a1 + 0x40);
                if (temp_a1_2 >= 0) {
                    *(s8 *)((u8 *)temp_t1 + 0x1D0C) = temp_a1_2;
                } else {
                    var_t5 = 0;
                    var_t3 = *(u8 **)((u8 *)var_s0 + 0x1CF8) + 0xD4;
                    do {
                        temp_a1_3 = var_s0 + var_t5;
                        temp_t4 = *(s8 *)((u8 *)temp_a1_3 + 0x1D04);
                        if ((temp_t6 == temp_t4) && ((*(s16 *)((u8 *)var_t3 + 0) == 0) || (*(s8 *)((u8 *)temp_a1_3 + 0x1FDC) != 0)) && (var_t5 < *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1CF8)) + 0xD0))) {
                            temp_a2 = *(s8 *)((u8 *)(temp_t4 + sp) + 0x40);
                            if (temp_a2 >= 0) {
                                if (temp_a2 < 2) {
                                    var_a2_2 = 1 - temp_a2;
                                } else {
                                    var_a2_2 = 0;
                                }
                                *(s8 *)((u8 *)temp_a1_3 + 0x1D0C) = var_a2_2;
                            } else {
                                temp_a2_2 = *(s8 *)((u8 *)temp_a1_3 + 0x1D0C);
                                temp_a1_4 = *(s8 *)((u8 *)temp_t1 + 0x1D0C);
                                if (temp_a1_4 == temp_a2_2) {
                                    temp_s3 = *(s8 *)((u8 *)var_t9 + 6);
                                    if (temp_s3 != 8) {
                                        if (*(s8 *)((u8 *)var_t3 + 6) != 8) {
                                            goto block_28;
                                        }
                                        goto block_35;
                                    }
block_28:
                                    if ((temp_s3 == 8) && (*(s8 *)((u8 *)var_t3 + 6) != 8) && (temp_t6 != *(s32 *)((u8 *)var_s1 + 0x1CFC)) && (temp_t6 != *(s8 *)((u8 *)(var_s1 + *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x1CF4)) + 0x14)) + 0x1D04))) {
                                        if ((temp_t4 != *(s32 *)((u8 *)var_s0 + 0x1CFC)) && (temp_t4 != *(s8 *)((u8 *)(var_s0 + *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1CF4)) + 0x14)) + 0x1D04))) {
                                            goto block_35;
                                        }
                                        if (temp_a1_4 < 2) {
                                            var_a1_2 = 1 - temp_a1_4;
                                        } else {
                                            var_a1_2 = 0;
                                        }
                                        *(s8 *)((u8 *)temp_t1 + 0x1D0C) = var_a1_2;
                                    } else {
block_35:
                                        var_a1_3 = 0;
                                        if (temp_a2_2 < 2) {
                                            var_a1_3 = 1 - temp_a2_2;
                                        }
                                        *(s8 *)((u8 *)temp_a1_3 + 0x1D0C) = var_a1_3;
                                    }
                                }
                            }
                        }
                        var_t5 += 1;
                        var_t3 += 0x14;
                    } while (var_t5 < 8);
                    *(s8 *)((u8 *)temp_a1 + 0x40) = (s8) *(s8 *)((u8 *)temp_t1 + 0x1D0C);
                }
            }
        }
        var_t7 += 1;
        var_t9 += 0x14;
    } while (var_t7 < 8);
}
