/* Draft (not built): func_0020A5F0 at 0x0020A5F0, size 0x128, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'float' - 'unsigned char *' @ 485: *(f32 *)((u8 *)temp_v1 + 0xE4) = (f32) (temp_f3 - D_0051D9A8);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020A5F0.s */

// src/unk/unk_20A4D0.c func_0020A5F0 cerr diff=-1/0
s32 func_0020A5F0(s32 arg0) {
    f32 temp_f3;
    u8 *temp_v1;

    temp_v1 = &D_005687D0 + (arg0 * 0xF0);
    temp_f3 = *(f32 *)((u8 *)temp_v1 + 0xE4);
    if (temp_f3 < 0.0f) {
        return 1;
    }
    *(f32 *)((u8 *)temp_v1 + 0xE4) = (f32) (temp_f3 - D_0051D9A8);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyzw $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyzw ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyzw $vf2, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, ($a0) */);
    return 0;
}
