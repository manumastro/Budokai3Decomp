/* Draft (not built): func_002FD560 at 0x002FD560, size 0x278, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x264, original 0x278
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FD560.s */

// src/unk/unk_2FAFF0.c func_002FD560 size diff=84/153
extern u32 func_0012EAE0(s32);
extern s8 D_004B4B58;
extern s8 D_005D0082;
void func_002FD560(void) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a0_3;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_s0;

    var_s1 = 0;
    if ((1 << D_005D0082) > 0) {
        var_s2 = 0;
        do {
            temp_a1 = (u8 *)(gTourMap + var_s2);
            var_s0 = temp_a1 + 0x2EC;
            if ((*(s16 *)((u8 *)temp_a1 + 0x2F6) == -1) && (*(s8 *)((u8 *)var_s0 + 4) == 1)) {
                temp_a0 = *(s8 *)((u8 *)var_s0 + 7);
                if (temp_a0 == D_004B4B58) {
                    if ((var_s1 >> temp_a0) & 1) {
                        temp_a2 = 1 << temp_a0;
                        var_s4 = ((s32) (var_s1 - temp_a2) >> temp_a0) << temp_a0;
                        temp_a2_2 = var_s4 + temp_a2;
                        var_s3 = var_s4;
                        if (var_s4 < temp_a2_2) {
                            var_a1 = (u8 *)(gTourMap + (var_s4 * 0x14));
loop_8:
                            if (*(s8 *)((u8 *)var_a1 + 0x2F3) == temp_a0) {
                                if (func_0012EAE0(0x20) & 1) {
                                    *(s8 *)((u8 *)(gTourMap + (var_s3 * 0x14)) + 0x2F0) = 5;
                                    *(s8 *)((u8 *)var_s0 + 7) = (s8) (*(s8 *)((u8 *)var_s0 + 7) + 1);
                                } else {
                                    temp_a1_2 = (u8 *)(gTourMap + (var_s3 * 0x14));
                                    *(s8 *)((u8 *)temp_a1_2 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a1_2 + 0x2F3) + 1);
                                    *(s8 *)((u8 *)var_s0 + 4) = 5;
                                }
                            } else {
                                var_s3 += 1;
                                var_a1 += 0x14;
                                if (var_s3 < temp_a2_2) {
                                    goto loop_8;
                                }
                            }
                        }
                        temp_a0_2 = *(s8 *)((u8 *)var_s0 + 7);
                        if (var_s3 == (var_s4 + (1 << temp_a0_2))) {
                            *(s8 *)((u8 *)var_s0 + 7) = (s8) (temp_a0_2 + 1);
                        }
                    } else {
                        temp_a2_3 = 1 << temp_a0;
                        var_s4 = ((s32) (var_s1 + temp_a2_3) >> temp_a0) << temp_a0;
                        temp_a2_4 = var_s4 + temp_a2_3;
                        var_s3 = var_s4;
                        if (var_s4 < temp_a2_4) {
                            var_a1_2 = (u8 *)(gTourMap + (var_s4 * 0x14));
loop_18:
                            if (*(s8 *)((u8 *)var_a1_2 + 0x2F3) == temp_a0) {
                                if (func_0012EAE0(0x20) & 1) {
                                    *(s8 *)((u8 *)(gTourMap + (var_s3 * 0x14)) + 0x2F0) = 5;
                                    *(s8 *)((u8 *)var_s0 + 7) = (s8) (*(s8 *)((u8 *)var_s0 + 7) + 1);
                                } else {
                                    temp_a1_3 = (u8 *)(gTourMap + (var_s3 * 0x14));
                                    *(s8 *)((u8 *)temp_a1_3 + 0x2F3) = (s8) (*(s8 *)((u8 *)temp_a1_3 + 0x2F3) + 1);
                                    *(s8 *)((u8 *)var_s0 + 4) = 5;
                                }
                            } else {
                                var_s3 += 1;
                                var_a1_2 += 0x14;
                                if (var_s3 < temp_a2_4) {
                                    goto loop_18;
                                }
                            }
                        }
                        temp_a0_3 = *(s8 *)((u8 *)var_s0 + 7);
                        if (var_s3 == (var_s4 + (1 << temp_a0_3))) {
                            *(s8 *)((u8 *)var_s0 + 7) = (s8) (temp_a0_3 + 1);
                        }
                    }
                }
            }
            var_s1 += 1;
            var_s2 += 0x14;
        } while (var_s1 < (1 << D_005D0082));
    }
}
