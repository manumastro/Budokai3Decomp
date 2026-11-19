/* Draft (not built): func_002FD7E0 at 0x002FD7E0, size 0x210, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 104 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x228, original 0x210
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FD7E0.s */

// src/unk/unk_2FAFF0.c func_002FD7E0 size diff=104/138
extern s8 D_004B4B58;
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
s32 func_002FD7E0(s32 arg0) {
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t3;
    s32 var_t6;
    s8 temp_t3_2;
    s8 temp_t3_3;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 var_a2;
    s8 var_t2;
    s8 var_t2_2;
    u8 *temp_a1;
    u8 *var_t1;
    u8 *var_t1_2;
    u8 *var_t1_3;

    if (arg0 != 0) {
        D_005D0081 = -1;
        D_005D0080 = -1;
    }
    var_t6 = 0;
    if (D_005CA030[0] > 0) {
        temp_t3 = 1 << D_005D0082;
loop_4:
        var_a2 = 0;
        if (temp_t3 > 0) {
            var_t1 = (unsigned char *)(gTourMap);
loop_6:
            temp_a1 = var_t1 + 0x2EC;
            if ((*(s16 *)((u8 *)var_t1 + 0x2F6) == var_t6) && ((temp_v0 = *(s8 *)((u8 *)temp_a1 + 4), (temp_v0 == 1)) || (temp_v0 == 2))) {
                temp_v0_2 = *(s8 *)((u8 *)temp_a1 + 7);
                if (temp_v0_2 == D_005D0082) {
                    return 5;
                }
                if (temp_v0_2 == D_004B4B58) {
                    if ((var_a2 >> temp_v0_2) & 1) {
                        temp_t1 = 1 << temp_v0_2;
                        temp_t3_2 = ((s32) (var_a2 - temp_t1) >> temp_v0_2) << temp_v0_2;
                        var_t2 = temp_t3_2;
                        if (temp_t3_2 < (temp_t3_2 + temp_t1)) {
                            var_t1_2 = (unsigned char *)(gTourMap + (temp_t3_2 * 0x14));
                            do {
                                if ((*(s8 *)((u8 *)var_t1_2 + 0x2F3) == *(s8 *)((u8 *)temp_a1 + 7)) && (arg0 != 0)) {
                                    D_005D0080 = var_t2;
                                    D_005D0081 = var_a2;
                                }
                                var_t2 += 1;
                                var_t1_2 += 0x14;
                            } while (var_t2 < (temp_t3_2 + (1 << *(s8 *)((u8 *)temp_a1 + 7))));
                        }
                    } else {
                        temp_t1_2 = 1 << temp_v0_2;
                        temp_t3_3 = ((s32) (var_a2 + temp_t1_2) >> temp_v0_2) << temp_v0_2;
                        var_t2_2 = temp_t3_3;
                        if (temp_t3_3 < (temp_t3_3 + temp_t1_2)) {
                            var_t1_3 = (unsigned char *)(gTourMap + (temp_t3_3 * 0x14));
                            do {
                                if ((*(s8 *)((u8 *)var_t1_3 + 0x2F3) == *(s8 *)((u8 *)temp_a1 + 7)) && (arg0 != 0)) {
                                    D_005D0080 = var_a2;
                                    D_005D0081 = var_t2_2;
                                }
                                var_t2_2 += 1;
                                var_t1_3 += 0x14;
                            } while (var_t2_2 < (temp_t3_3 + (1 << *(s8 *)((u8 *)temp_a1 + 7))));
                        }
                    }
                    if ((arg0 != 0) && (D_005D0080 == -1) && (D_005D0081 == -1)) {
                        *(u8 **)((u8 *)gTourMap + 0x70) = temp_a1;
                        return 4;
                    }
                    return 3;
                }
                goto block_35;
            }
block_35:
            var_a2 += 1;
            var_t1 += 0x14;
            if (var_a2 >= temp_t3) {
                goto block_36;
            }
            goto loop_6;
        }
block_36:
        var_t6 += 1;
        if (var_t6 >= D_005CA030[0]) {
            goto block_37;
        }
        goto loop_4;
    }
block_37:
    return 5;
}
