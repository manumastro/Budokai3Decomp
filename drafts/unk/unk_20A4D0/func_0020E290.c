/* Draft (not built): func_0020E290 at 0x0020E290, size 0xFC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x84, original 0xFC
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020E290.s */

// src/unk/unk_20A4D0.c func_0020E290 size diff=48/33
void func_0020E290(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
    case 0:
        func_0013B160(((u8 *)&D_00568C90) + (arg0 * 0x2140) + 0x40);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
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
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: vmulx.xyz $vf28, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmuly.xyz $vf29, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmulz.xyz $vf30, $vf30, $vf1z */);
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
