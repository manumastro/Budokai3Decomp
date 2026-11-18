/* Draft (not built): func_002C7E00 at 0x002C7E00, size 0x558, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 185 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5A4, original 0x558
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C7E00.s */

// src/unk/unk_2C41C0.c func_002C7E00 size diff=185/361
s32 func_00136130(f32 *, void *, f32 *);
f32 func_00146E30(s32, f32 *);
void func_002C7E00(f32 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    f32 spA0;
    f32 spA4;
    f32 spA8;
    s32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 *var_fp;
    f32 *var_s4;
    f32 *var_s7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f4;
    f32 var_f4_2;
    s16 var_v0;
    s32 var_s0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s5;
    u8 *var_s6;

    var_s6 = arg2;
    var_s5 = arg1;
    var_s4 = arg0;
    var_s3 = arg3;
    var_s2 = *(u8 **)((u8 *)arg0 + 0x34);
    var_s1 = *(u8 **)((u8 *)arg1 + 0);
    spB0 = *(f32 *)((u8 *)arg2 + 0);
    spB4 = *(f32 *)((u8 *)arg2 + 4);
    spB8 = *(f32 *)((u8 *)arg2 + 8);
    temp_f0 = func_00146E30(*(s32 *)((u8 *)arg1 + 8), var_s4);
    if (temp_f0 < 30.0f) {
        temp_f0_2 = 1.0f - ((30.0f - temp_f0) / 30.0f);
        *(f32 *)((u8 *)var_s5 + 0x2C) = (f32) (temp_f0_2 * temp_f0_2);
    }
    var_s0 = 0;
    if (*(s32 *)((u8 *)var_s1 + 0x7C) > 0) {
        var_s7 = &spBC;
        var_fp = &spA4;
        do {
            temp_f0_3 = (f32) (var_s0 + 1) / (f32) (*(s32 *)((u8 *)var_s1 + 0x7C) + 1);
            if (gBattle != NULL) {
                var_f3 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f3 = 1.0f;
            } else {
                var_f3 = 1.2f;
            }
            if (gBattle != NULL) {
                var_f4 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f4 = 1.0f;
            } else {
                var_f4 = 1.2f;
            }
            temp_f5 = *(f32 *)((u8 *)var_s1 + 0x4C);
            temp_f3 = (*(f32 *)((u8 *)var_s4 + 0x30) + ((-1.0f + temp_f0_3) * var_f3)) / ((f32) *(s32 *)((u8 *)var_s1 + 0x5C) * var_f4);
            temp_f1 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f5 + (temp_f3 * (*(f32 *)((u8 *)var_s1 + 0x48) - temp_f5)));
            *(f32 *)((u8 *)var_s3 + 4) = temp_f1;
            *(f32 *)((u8 *)var_s3 + 0) = temp_f1;
            temp_f4 = *(f32 *)((u8 *)var_s1 + 0x58);
            temp_f1_2 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f4 + (temp_f3 * (*(f32 *)((u8 *)var_s1 + 0x54) - temp_f4)));
            *(f32 *)((u8 *)var_s6 + 0xC) = temp_f1_2;
            *var_s7 = temp_f1_2;
            temp_f2 = *(f32 *)((u8 *)var_s4 + 0);
            spA0 = temp_f2 - (temp_f0_3 * (temp_f2 - *(f32 *)((u8 *)var_s2 + 0)));
            temp_f2_2 = *(f32 *)((u8 *)var_s4 + 4);
            *var_fp = temp_f2_2 - (temp_f0_3 * (temp_f2_2 - *(f32 *)((u8 *)var_s2 + 4)));
            temp_f2_3 = *(f32 *)((u8 *)var_s4 + 8);
            spA8 = temp_f2_3 - (temp_f0_3 * (temp_f2_3 - *(f32 *)((u8 *)var_s2 + 8)));
            spAC = 0x3F800000;
            func_00136130(&spA0, var_s3, &spB0);
            var_s0 += 1;
        } while (var_s0 < *(s32 *)((u8 *)var_s1 + 0x7C));
    }
    var_v0 = 0;
    if (gBattle != NULL) {
        var_v0 = *(s16 *)((u8 *)gBattle + 0x8944);
    }
    if (var_v0 != 0) {
        var_v0_2 = 0;
        if (gBattle != NULL) {
            var_v0_2 = *(s32 *)((u8 *)gBattle + 0x88EC);
        }
        if (var_v0_2 != 0) {
            if (gBattle != NULL) {
                var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1 = 1.0f;
            } else {
                var_f1 = 1.2f;
            }
            var_f4_2 = *(f32 *)((u8 *)var_s4 + 0x30) - var_f1;
        } else {
            if (gBattle != NULL) {
                var_f1_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1_2 = 1.0f;
            } else {
                var_f1_2 = 1.2f;
            }
            var_f4_2 = *(f32 *)((u8 *)var_s4 + 0x30) - var_f1_2;
            *(f32 *)((u8 *)var_s4 + 0x30) = var_f4_2;
        }
    } else {
        var_v0_3 = 0;
        if (gBattle != NULL) {
            var_v0_3 = *(s32 *)((u8 *)gBattle + 0x88EC);
        }
        if (var_v0_3 == 0) {
            var_v0_4 = 0;
            if (gBattle != NULL) {
                var_v0_4 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
                if (var_v0_4 != 0) {
                    var_v0_4 = 1;
                    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                        var_v0_4 = 0;
                    }
                }
            }
            if (var_v0_4 != 0) {
                goto block_54;
            }
            if (gBattle != NULL) {
                var_f1_3 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1_3 = 1.0f;
            } else {
                var_f1_3 = 1.2f;
            }
            var_f4_2 = *(f32 *)((u8 *)var_s4 + 0x30) - var_f1_3;
            *(f32 *)((u8 *)var_s4 + 0x30) = var_f4_2;
        } else {
block_54:
            if (gBattle != NULL) {
                var_f1_4 = *(f32 *)((u8 *)gBattle + 0x88F0);
            } else if (D_004703F4 != 3) {
                var_f1_4 = 1.0f;
            } else {
                var_f1_4 = 1.2f;
            }
            var_f4_2 = *(f32 *)((u8 *)var_s4 + 0x30) - var_f1_4;
        }
    }
    if (gBattle != NULL) {
        var_f3_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f3_2 = 1.0f;
    } else {
        var_f3_2 = 1.2f;
    }
    temp_f5_2 = *(f32 *)((u8 *)var_s1 + 0x4C);
    temp_f2_4 = var_f4_2 / ((f32) *(s32 *)((u8 *)var_s1 + 0x5C) * var_f3_2);
    temp_f0_4 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f5_2 + (temp_f2_4 * (*(f32 *)((u8 *)var_s1 + 0x48) - temp_f5_2)));
    *(f32 *)((u8 *)var_s3 + 4) = temp_f0_4;
    *(f32 *)((u8 *)var_s3 + 0) = temp_f0_4;
    temp_f3_2 = *(f32 *)((u8 *)var_s1 + 0x58);
    temp_f0_5 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f3_2 + (temp_f2_4 * (*(f32 *)((u8 *)var_s1 + 0x54) - temp_f3_2)));
    *(f32 *)((u8 *)var_s6 + 0xC) = temp_f0_5;
    spBC = temp_f0_5;
    func_00136130(var_s4, var_s3, &spB0);
}
