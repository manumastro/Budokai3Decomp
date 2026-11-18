/* Draft (not built): func_0020B1C0 at 0x0020B1C0, size 0x19C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x190, original 0x19C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020B1C0.s */

// src/unk/unk_20A4D0.c func_0020B1C0 size diff=38/100
s32 amMath_SinCosI(s64, f32 *, f32 *);
f32 func_00146E30(s32 *, s32 *);
void func_0020B1C0(u8 *arg1, u8 *arg2) {
    s32 sp40;
    s32 sp50;
    f32 sp68;
    f32 sp6C;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f23;
    f32 var_f21;
    f32 var_f22;
    f32 var_f24;

    var_f24 = *(f32 *)((u8 *)arg2 + 0x6C);
    temp_f23 = *(f32 *)((u8 *)arg2 + 0x70);
    var_f22 = *(f32 *)((u8 *)arg2 + 0x74);
    temp_f20 = *(f32 *)((u8 *)arg2 + 0x14);
    temp_f21 = *(f32 *)((u8 *)arg2 + 0x68) / 4.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    temp_f0 = func_00146E30(&sp50, &sp40);
    if (var_f24 == 0.0f) {
        var_f24 = 0.001f;
    }
    if (var_f22 == 0.0f) {
        var_f22 = 0.001f;
    }
    if (!(temp_f0 < (2.0f * temp_f21))) {
        var_f21 = 0.0f;
    } else if (!(temp_f0 < temp_f21)) {
        var_f21 = temp_f21 / (0.1f + temp_f0);
    } else {
        var_f21 = 1.0f;
    }
    amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * ((temp_f20 / var_f24) - (temp_f0 / var_f22))) / 3.1415927f)) << 0x30) >> 0x30, &sp6C, &sp68);
    *(f32 *)((u8 *)arg1 + 8) = (f32) (sp68 * (sp6C * (2.0f * var_f21 * temp_f23)));
}
