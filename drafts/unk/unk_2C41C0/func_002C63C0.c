/* Draft (not built): func_002C63C0 at 0x002C63C0, size 0x334, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 109 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3A4, original 0x334
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C63C0.s */

// src/unk/unk_2C41C0.c func_002C63C0 size diff=109/233
s32 func_00136130(f32 *, void *, f32 *);
void func_002C63C0(f32 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
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
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 var_f1;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f4;
    s32 var_s0;
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
    var_s0 = 0;
    if (*(s32 *)((u8 *)var_s1 + 0x7C) > 0) {
        var_s7 = &spBC;
        var_fp = &spA4;
        do {
            temp_f0 = (f32) (var_s0 + 1) / (f32) (*(s32 *)((u8 *)var_s1 + 0x7C) + 1);
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
            temp_f4 = (*(f32 *)((u8 *)var_s4 + 0x30) + ((-1.0f + temp_f0) * var_f3)) / ((f32) *(s32 *)((u8 *)var_s1 + 0x5C) * var_f4);
            temp_f1 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f5 + (temp_f4 * (*(f32 *)((u8 *)var_s1 + 0x48) - temp_f5)));
            *(f32 *)((u8 *)var_s3 + 4) = temp_f1;
            *(f32 *)((u8 *)var_s3 + 0) = temp_f1;
            temp_f3 = *(f32 *)((u8 *)var_s1 + 0x58);
            temp_f1_2 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f3 + (temp_f4 * (*(f32 *)((u8 *)var_s1 + 0x54) - temp_f3)));
            *(f32 *)((u8 *)var_s6 + 0xC) = temp_f1_2;
            *var_s7 = temp_f1_2;
            temp_f2 = *(f32 *)((u8 *)var_s4 + 0);
            spA0 = temp_f2 - (temp_f0 * (temp_f2 - *(f32 *)((u8 *)var_s2 + 0)));
            temp_f2_2 = *(f32 *)((u8 *)var_s4 + 4);
            *var_fp = temp_f2_2 - (temp_f0 * (temp_f2_2 - *(f32 *)((u8 *)var_s2 + 4)));
            temp_f2_3 = *(f32 *)((u8 *)var_s4 + 8);
            spA8 = temp_f2_3 - (temp_f0 * (temp_f2_3 - *(f32 *)((u8 *)var_s2 + 8)));
            spAC = 0x3F800000;
            func_00136130(&spA0, var_s3, &spB0);
            var_s0 += 1;
        } while (var_s0 < *(s32 *)((u8 *)var_s1 + 0x7C));
    }
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_f4_2 = *(f32 *)((u8 *)var_s4 + 0x30) - var_f1;
    *(f32 *)((u8 *)var_s4 + 0x30) = temp_f4_2;
    if (gBattle != NULL) {
        var_f3_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f3_2 = 1.0f;
    } else {
        var_f3_2 = 1.2f;
    }
    temp_f5_2 = *(f32 *)((u8 *)var_s1 + 0x4C);
    temp_f2_4 = temp_f4_2 / ((f32) *(s32 *)((u8 *)var_s1 + 0x5C) * var_f3_2);
    temp_f0_2 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f5_2 + (temp_f2_4 * (*(f32 *)((u8 *)var_s1 + 0x48) - temp_f5_2)));
    *(f32 *)((u8 *)var_s3 + 4) = temp_f0_2;
    *(f32 *)((u8 *)var_s3 + 0) = temp_f0_2;
    temp_f3_2 = *(f32 *)((u8 *)var_s1 + 0x58);
    temp_f0_3 = *(f32 *)((u8 *)var_s5 + 0x2C) * (temp_f3_2 + (temp_f2_4 * (*(f32 *)((u8 *)var_s1 + 0x54) - temp_f3_2)));
    *(f32 *)((u8 *)var_s6 + 0xC) = temp_f0_3;
    spBC = temp_f0_3;
    func_00136130(var_s4, var_s3, &spB0);
}
