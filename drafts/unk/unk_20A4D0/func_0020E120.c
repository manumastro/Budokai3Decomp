/* Draft (not built): func_0020E120 at 0x0020E120, size 0xE8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x70, original 0xE8
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020E120.s */

// src/unk/unk_20A4D0.c func_0020E120 size diff=47/28
void func_0020E120(s32 arg0, s32 arg1) {
    s32 sp20;
    s32 sp30;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    u8 *temp_s0;

    temp_s0 = ((u8 *)&D_00568C90) + (arg0 * 0x2140);
    sp40 = 0;
    sp44 = 0x3F800000;
    sp4C = 0x3F800000;
    sp48 = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    func_00146F30(&sp30);
    func_00141C30(&sp50, &sp40, &sp30);
    func_0013B160(temp_s0 + 0x40);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00141CF0(temp_s0 + 0x40, &sp50, &sp20);
}
