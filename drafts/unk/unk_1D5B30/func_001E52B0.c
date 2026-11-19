/* Draft (not built): func_001E52B0 at 0x001E52B0, size 0xF8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA0, original 0xF8
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E52B0.s */

// src/unk/unk_1D5B30.c func_001E52B0 size diff=56/40
s32 func_001E52B0(s32 arg0) {
    s32 sp8;
    s32 sp0;
    f32 sp4;
    f32 temp_f1;
    f32 var_f0;
    s32 temp_v0;
    s32 var_a2;

    var_f0 = 0.0f;
    if (arg0 != 0) {
        var_a2 = 0;
loop_7:
        temp_v0 = var_a2 < *(s32 *)((u8 *)gBattle + 0x88D8);
        if (temp_v0 != 0) {
            if ((s32)(arg0) != (s32)((gBattle + (var_a2 * 0x2020) + 0x830))) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
                temp_f1 = (sp0 * sp0) + (sp8 * sp8);
                M2C_ERROR(/* unknown instruction: c1 0x10044 */);
                sp4 = 0.0f;
                if (var_f0 < temp_f1) {
                    var_f0 = temp_f1;
                }
            }
            var_a2 += 1;
            goto loop_7;
        }
        return temp_v0;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: c1 0x4 */);
    return (s32) (gBattle + 0x2EA0);
}
