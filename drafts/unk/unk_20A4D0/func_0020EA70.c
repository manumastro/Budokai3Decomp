/* Draft (not built): func_0020EA70 at 0x0020EA70, size 0x100, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5C, original 0x100
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020EA70.s */

// src/unk/unk_20A4D0.c func_0020EA70 size diff=52/23
void func_0020EA70(s32 arg0) {
    s32 sp20;
    s32 sp30;
    s32 sp40;
    u8 *temp_s0;

    temp_s0 = &D_00568C90 + (arg0 * 0x2140);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30(&sp40);
    func_00146F10(&sp40, &sp40, *(f32 *)((u8 *)temp_s0 + 0x2138));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
    func_0013B160(temp_s0 + 0x40);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
}
