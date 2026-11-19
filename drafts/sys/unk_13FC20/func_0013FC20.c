/* Draft (not built): func_0013FC20 at 0x0013FC20, size 0x238, segment sys/unk_13FC20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 109 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C8, original 0x238
 * Original: asm/nonmatchings/sys/unk_13FC20/func_0013FC20.s */

// src/sys/unk_13FC20.c func_0013FC20 size diff=109/114
s32 func_00146F60(f32 *);
f32 func_00146F90(s32 *, f32 *);
void func_0013FC20(u8 *arg0) {
    s32 sp48;
    s32 sp44;
    s32 sp38;
    s32 sp34;
    s32 sp20;
    f32 sp30;
    f32 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 temp_f0;

    func_00146F60(&sp30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp50 = fabsf(sp30);
    temp_f0 = fabsf(sp34);
    sp54 = temp_f0;
    sp58 = fabsf(sp38);
    sp5C = 1.0f;
    if ((sp50 <= temp_f0) && (sp50 <= sp58)) {
        sp50 = 1.0f;
        sp54 = 0.0f;
        sp58 = 0.0f;
    } else if (sp54 <= sp58) {
        sp50 = 0.0f;
        sp54 = 1.0f;
        sp58 = 0.0f;
    } else {
        sp50 = 0.0f;
        sp54 = 0.0f;
        sp58 = 1.0f;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf4 */);
    M2C_ERROR(/* unknown instruction: vmulax.xyz ACC, $vf1, $vf3x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf4x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    *(f32 *)((u8 *)arg0 + 0) = sp50;
    *(f32 *)((u8 *)arg0 + 4) = sp40;
    *(f32 *)((u8 *)arg0 + 8) = sp30;
    *(f32 *)((u8 *)arg0 + 0xC) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x10) = sp54;
    *(f32 *)((u8 *)arg0 + 0x14) = sp44;
    *(f32 *)((u8 *)arg0 + 0x18) = sp34;
    *(f32 *)((u8 *)arg0 + 0x1C) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x20) = sp58;
    *(f32 *)((u8 *)arg0 + 0x24) = sp48;
    *(f32 *)((u8 *)arg0 + 0x28) = sp38;
    *(f32 *)((u8 *)arg0 + 0x2C) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x30) = (f32) -func_00146F90(&sp20, &sp50);
    *(f32 *)((u8 *)arg0 + 0x34) = (f32) -func_00146F90(&sp20, &sp40);
    *(f32 *)((u8 *)arg0 + 0x38) = (f32) -func_00146F90(&sp20, &sp30);
    *(s32 *)((u8 *)arg0 + 0x3C) = 0x3F800000;
}
