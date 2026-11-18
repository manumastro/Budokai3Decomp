/* Draft (not built): func_002178C0 at 0x002178C0, size 0x118, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x60, original 0x118
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002178C0.s */

// src/unk/unk_20A4D0.c func_002178C0 size diff=54/24
void func_002178C0(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s32 sp40;

    if (*(s32 *)((u8 *)arg0 + 0x18) != -1) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&sp30);
    func_0020D780(&sp20);
    *(s32 **)((u8 *)arg0 + 4) = &sp20;
    *(s32 **)((u8 *)arg0 + 0) = &sp40;
    *(s16 *)((u8 *)arg0 + 0x20) = 0xA;
    *(s16 *)((u8 *)arg0 + 0x22) = 0;
    *(s16 *)((u8 *)arg0 + 0x24) = 0;
    jtbl_00469CC4[0](arg0);
}
