/* Draft (not built): func_0020E530 at 0x0020E530, size 0xEC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA0, original 0xEC
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020E530.s */

// src/unk/unk_20A4D0.c func_0020E530 size diff=37/40
void func_0020E530(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
    case 0:
        func_0013B160(((u8 *)&D_00568C90) + (arg0 * 0x2140) + 0x40);
        func_0013B2B0((u8 *)(arg1));
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        return;
    case 1:
        func_0013B160(((u8 *)&D_0058A090) + (arg0 * 0xC0) + 0x50);
        func_0013B2B0((u8 *)(arg1));
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        return;
    }
}
