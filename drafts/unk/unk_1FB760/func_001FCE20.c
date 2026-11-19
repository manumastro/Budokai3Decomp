/* Draft (not built): func_001FCE20 at 0x001FCE20, size 0x27C, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 114 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x220, original 0x27C
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FCE20.s */

// src/unk/unk_1FB760.c func_001FCE20 size diff=114/136
f32 func_00146E30(f32 *, void *);
f32 func_00146F90(s32 *, f32 *);
s32 func_001FCE20(s32 arg0, s32 arg1, u8 *arg2) {
    s32 sp58;
    s32 sp54;
    f32 sp50;
    s32 sp60;
    f32 sp70;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 var_v0;
    u8 *temp_s0;

    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    if (D_0051CD28 == 0) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x20);
    func_00146F10(&sp50, &sp70, func_00146F90(&sp60, &sp70) / (temp_f1 * temp_f1));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    if (!(func_00146E30(&sp50, arg2) <= (*(f32 *)((u8 *)arg2 + 0x10) + *(f32 *)((u8 *)temp_s0 + 0x24)))) {
        return 0;
    }
    temp_f2 = *(f32 *)((u8 *)temp_s0 + 0);
    temp_f1_2 = *(f32 *)((u8 *)temp_s0 + 0x10);
    var_v0 = 0;
    if (temp_f2 < temp_f1_2) {
        if (!(sp50 < temp_f2) && (sp50 <= temp_f1_2)) {
            goto block_12;
        }
    } else if ((sp50 <= temp_f2) && !(sp50 < temp_f1_2)) {
block_12:
        var_v0 = 1;
    }
    temp_f2_2 = *(f32 *)((u8 *)temp_s0 + 4);
    temp_f1_3 = *(f32 *)((u8 *)temp_s0 + 0x14);
    if (temp_f2_2 < temp_f1_3) {
        if (!(sp54 < temp_f2_2) && (sp54 <= temp_f1_3)) {
            goto block_19;
        }
    } else if ((sp54 <= temp_f2_2) && !(sp54 < temp_f1_3)) {
block_19:
        var_v0 += 1;
    }
    temp_f2_3 = *(f32 *)((u8 *)temp_s0 + 8);
    temp_f1_4 = *(f32 *)((u8 *)temp_s0 + 0x18);
    if (temp_f2_3 < temp_f1_4) {
        if (!(sp58 < temp_f2_3) && (sp58 <= temp_f1_4)) {
            goto block_26;
        }
    } else if ((sp58 <= temp_f2_3) && !(sp58 < temp_f1_4)) {
block_26:
        var_v0 += 1;
    }
    if (var_v0 < 3) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30(&sp70);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    func_00146F10(&sp70, &sp70, *(f32 *)((u8 *)temp_s0 + 0x24));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
    return 1;
}
