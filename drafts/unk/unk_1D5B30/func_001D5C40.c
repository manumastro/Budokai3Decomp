/* Draft (not built): func_001D5C40 at 0x001D5C40, size 0x528, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 146 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x44C, original 0x528
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D5C40.s */

// src/unk/unk_1D5B30.c func_001D5C40 size diff=146/275
void func_001D5C40(Fighter *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f3;
    f32 var_f12;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f21;
    f32 var_f22;
    f32 var_f3;
    f32 var_f4;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s32 var_t0;
    s32 var_t1;
    s8 temp_a0;
    u8 var_v1_2;
    u8 *temp_a1_2;
    u8 *temp_a2_2;
    u8 *var_a3;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_t0_2;
    u8 *var_v1;

    temp_a1 = *(s16 *)((u8 *)arg0 + 0x1FF0);
    var_f20 = 0.0f;
    var_s0 = (unsigned char *)(gBattle);
    var_s1 = (unsigned char *)(arg0);
    if (temp_a1 == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((u8 *)&D_004E0660) + (temp_a1 * 0x28);
    }
    if (var_v1 != NULL) {
        var_v1_2 = *(u8 *)((u8 *)var_v1 + 0x15);
    } else {
        var_v1_2 = 0;
    }
    if ((var_v1_2 & 0xFF) == 0x70) {
        func_001DFE60((Fighter *)(var_s1), 0x10, -*(f32 *)((u8 *)var_s1 + 0x17D4));
        return;
    }
    if ((*(s16 *)((u8 *)var_s1 + 0xCAC) != 0x32) && (temp_a0 = *(s8 *)((u8 *)var_s1 + 0x2013), (temp_a0 == 0))) {
        if (*(s8 *)((u8 *)var_s1 + 0x2010) != 0) {
            var_f20_2 = 100.0f;
            if ((*(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xBB0)) + 0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                var_f20_2 = 100.0f * 2.0f;
            }
            var_a3 = *(u8 **)((u8 *)var_s1 + 0x1CF4);
            temp_a2 = *(s16 *)((u8 *)var_a3 + 0x34);
            var_t0 = 0;
            if (temp_a2 > 0) {
                do {
                    temp_a1_2 = ((u8 *)&D_004E0660) + (*(s16 *)((u8 *)var_a3 + 0x36) * 0x28);
                    if (*(u8 *)((u8 *)temp_a1_2 + 0x15) == 0x17) {
                        var_f20_2 -= ((f32) *(s16 *)((u8 *)temp_a1_2 + 0x16) * (100.0f + *(f32 *)((u8 *)var_s1 + 0x1FB8))) / 100.0f;
                    }
                    var_t0 += 1;
                    var_a3 += 2;
                } while (var_t0 < temp_a2);
            }
            var_f12 = (5.0f * var_f20_2) / 100.0f;
            if (!(var_f12 <= 0.0f)) {

            } else {
                var_f12 = 0.0f;
            }
            func_001DFE60((Fighter *)(var_s1), 4, M2C_BITWISE(f32, temp_a2));
            func_001DFC80((Fighter *)(var_s1), 0, 0x3F000000);
            if (!(*(f32 *)((u8 *)var_s1 + 0x1A40) <= 0.0f)) {
                var_f1 = *(f32 *)((u8 *)var_s1 + 0x17D4);
            } else {
                var_f1 = *(f32 *)((u8 *)var_s1 + 0x17D0);
            }
            if (var_f1 <= 0.0f) {
                func_001D7CC0((Fighter *)(var_s1), 1);
            }
        } else if (temp_a0 != 1) {
            if (!(*(f32 *)((u8 *)var_s1 + 0x1A40) <= 0.0f)) {
                var_f21 = *(f32 *)((u8 *)var_s1 + 0x17D4);
            } else {
                var_f21 = *(f32 *)((u8 *)var_s1 + 0x17D0);
            }
            if ((*(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xBB0)) + 0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                var_f22 = 0.0f;
            } else {
                var_f22 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0xBA4) * 0x14) + *(s32 *)((u8 *)var_s1 + 0x1CF8)) + 0xDD) * 0x3E8);
            }
            if (!(*(f32 *)((u8 *)var_s1 + 0x1854) <= 0.0f)) {
                if (var_f21 < *(f32 *)((u8 *)var_s1 + 0x17D4)) {
                    *(f32 *)((u8 *)var_s1 + 0x1854) = 0.0f;
                }
                *(f32 *)((u8 *)var_s1 + 0x1854) = (f32) (*(f32 *)((u8 *)var_s1 + 0x1854) - *(f32 *)((u8 *)var_s0 + 0x88F0));
            } else if (var_f21 < var_f22) {
                if (*(s16 *)((u8 *)gBattle + 0x7F8) == 2) {
                    var_f20 = 0.0f;
                } else {
                    temp_f3 = var_f22 - var_f21;
                    temp_f0 = 0.01f * (f32) *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xBB0)) + 0xA) * *(f32 *)((u8 *)var_s0 + 0x88F0);
                    if (temp_f3 < temp_f0) {
                        var_f20 = 0.0f - temp_f3;
                    } else {
                        var_f20 = 0.0f - temp_f0;
                    }
                }
            } else if (!(var_f21 <= var_f22)) {
                if ((*(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xBB0)) + 0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                    var_f1_2 = 3.0f;
                } else {
                    var_f1_2 = 0.01f * (f32) *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xBB0)) + 0xC);
                }
                var_f3 = var_f1_2 * *(f32 *)((u8 *)var_s0 + 0x88F0);
                if (*(s8 *)((u8 *)var_s1 + 0x1FD3) > 0) {
                    var_t0_2 = *(u8 **)((u8 *)var_s1 + 0x1CF4);
                    var_f4 = 100.0f;
                    temp_a3 = *(s16 *)((u8 *)var_t0_2 + 0x34);
                    var_t1 = 0;
                    if (temp_a3 > 0) {
                        do {
                            temp_a2_2 = ((u8 *)&D_004E0660) + (*(s16 *)((u8 *)var_t0_2 + 0x36) * 0x28);
                            if (*(u8 *)((u8 *)temp_a2_2 + 0x15) == 0x16) {
                                var_f4 -= ((f32) *(s16 *)((u8 *)temp_a2_2 + 0x16) * (100.0f + *(f32 *)((u8 *)var_s1 + 0x1FB8))) / 100.0f;
                            }
                            var_t1 += 1;
                            var_t0_2 += 2;
                        } while (var_t1 < temp_a3);
                    }
                    var_f3 = (var_f3 * var_f4) / 100.0f;
                    if (!(var_f3 <= 0.0f)) {

                    } else {
                        var_f3 = 0.0f;
                    }
                }
                temp_f0_2 = var_f21 - var_f22;
                if (temp_f0_2 < var_f3) {
                    var_f20 = 0.0f + temp_f0_2;
                } else {
                    var_f20 = 0.0f + var_f3;
                }
            }
            if (var_f20 != 0.0f) {
                func_001DFE60((Fighter *)(var_s1), 0, var_f20);
            }
        }
    }
}
