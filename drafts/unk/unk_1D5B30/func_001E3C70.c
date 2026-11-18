/* Draft (not built): func_001E3C70 at 0x001E3C70, size 0xEC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x8, original 0xEC
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E3C70.s */

// src/unk/unk_1D5B30.c func_001E3C70 size diff=58/2
void func_001E3C70(u8 *arg0, u8 *arg1) {
    f32 sp4;
    f32 var_f1;

    if (*(s8 *)((u8 *)arg0 + 0x200E) == -1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        sp4 = 0.5f * (sp4 + *(f32 *)((u8 *)arg0 + 0x774));
        if ((((s64) ((s64) *(s8 *)((u8 *)arg0 + 0x1FF8) << 0x38) >> 0x38) != -1) && (*(s16 *)((u8 *)arg0 + 0x181C) != 0)) {
            sp4 = 0.5f * (sp4 + *(f32 *)((u8 *)arg0 + 0x1818));
        }
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    }
    var_f1 = sp4 - *(f32 *)((u8 *)arg1 + 4);
    if (var_f1 < 0.0f) {
        var_f1 = -var_f1;
    }
    if (var_f1 <= 6.0f) {
        sp4 = *(f32 *)((u8 *)arg1 + 4);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
}
