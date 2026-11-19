/* Draft (not built): func_0020E620 at 0x0020E620, size 0x104, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x84, original 0x104
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020E620.s */

// src/unk/unk_20A4D0.c func_0020E620 size diff=50/33
void func_0020E620(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
    case 0:
        func_0013B160(((u8 *)&D_00568C90) + (arg0 * 0x2140) + 0x40);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
block_7:
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        return;
    case 1:
        func_0013B160(((u8 *)&D_0058A090) + (arg0 * 0xC0) + 0x50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        goto block_7;
    }
}
