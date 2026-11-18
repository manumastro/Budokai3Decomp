/* Draft (not built): func_0020D5C0 at 0x0020D5C0, size 0x1C0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d as: 'void (void *, int, void *, unsigned char *)' @ 1071: void func_0020D5C0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020D5C0.s */

// src/unk/unk_20A4D0.c func_0020D5C0 cerr diff=-1/0
s32 func_0013B190(f32 *);
void func_0020D5C0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp80;

    if (arg1 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($v0) */);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($v1) */);
    }
    func_0013B190(&sp80);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a0) */);
    if (arg3 & 1) {
        sp54 = sp94;
        sp58 = sp98;
        sp64 = spA4;
        sp68 = spA8;
    }
    if (arg3 & 2) {
        sp40 = sp80;
        sp48 = sp88;
        sp60 = spA0;
        sp68 = spA8;
    }
    if (arg3 & 4) {
        sp40 = sp80;
        sp44 = sp84;
        sp50 = sp90;
        sp54 = sp94;
    }
    if (arg0 != NULL) {
        func_0013B160(arg0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s2) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        return;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s1) */);
}
