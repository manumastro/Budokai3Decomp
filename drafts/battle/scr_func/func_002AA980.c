/* Draft (not built): func_002AA980 at 0x002AA980, size 0x1B8, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 81 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x150, original 0x1B8
 * Original: asm/nonmatchings/battle/scr_func/func_002AA980.s */

// src/battle/scr_func.c func_002AA980 size diff=81/84
s32 func_002AA980(u8 *arg0, u8 *arg1) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    u8 *temp_a1;

    temp_a1 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 0x10) * 0xD0) + (&D_005BC9E0 + (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0) * 0x1A0));
    temp_f2 = *(f32 *)((u8 *)temp_a1 + 0x20);
    if (temp_f2 <= 0.0f) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    if (!((1.0f / temp_f2) < 1.0f)) {

    }
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0xC) != 3) {
        *(f32 *)((u8 *)temp_a1 + 0x20) = (f32) (temp_f2 - D_004708F8);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($v1) */);
    if (*(s32 *)((u8 *)temp_a1 + 0x14) & 1) {
        *(f32 *)((u8 *)temp_a1 + 0x60) = (f32) (*(f32 *)((u8 *)temp_a1 + 0x80) - (0.5f * *(f32 *)((u8 *)temp_a1 + 0x50)));
        var_f0 = *(f32 *)((u8 *)temp_a1 + 0x80) + (0.5f * *(f32 *)((u8 *)temp_a1 + 0x50));
    } else {
        *(f32 *)((u8 *)temp_a1 + 0x60) = (f32) *(f32 *)((u8 *)temp_a1 + 0x80);
        var_f0 = *(f32 *)((u8 *)temp_a1 + 0x80) + *(f32 *)((u8 *)temp_a1 + 0x50);
    }
    *(f32 *)((u8 *)temp_a1 + 0x70) = var_f0;
    if (*(s32 *)((u8 *)temp_a1 + 0x14) & 2) {
        *(f32 *)((u8 *)temp_a1 + 0x64) = (f32) (*(f32 *)((u8 *)temp_a1 + 0x84) - (0.5f * *(f32 *)((u8 *)temp_a1 + 0x54)));
        var_f0_2 = *(f32 *)((u8 *)temp_a1 + 0x84) + (0.5f * *(f32 *)((u8 *)temp_a1 + 0x54));
    } else {
        *(f32 *)((u8 *)temp_a1 + 0x64) = (f32) *(f32 *)((u8 *)temp_a1 + 0x84);
        var_f0_2 = *(f32 *)((u8 *)temp_a1 + 0x84) + *(f32 *)((u8 *)temp_a1 + 0x54);
    }
    *(f32 *)((u8 *)temp_a1 + 0x74) = var_f0_2;
    return 3;
}
