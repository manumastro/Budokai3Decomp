/* Draft (not built): func_001FB260 at 0x001FB260, size 0x150, segment unk/unk_1FA3C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); sp28 <= temp_f7) && !((sp20 + temp_f8) < -temp_f5) && ((sp20 - temp_f8) <= temp_f5) && !((sp24 + temp_f6) < -temp_f0)) {
 * Original: asm/nonmatchings/unk/unk_1FA3C0/func_001FB260.s */

// src/unk/unk_1FA3C0.c func_001FB260 cerr diff=-1/0
extern void *D_00470644;
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern s32 D_00459210;
s32 func_001FB260(u8 *arg0) {
    f32 sp20;
    f32 temp_f0;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0);
    if (temp_v0 < 0) {
        return 1;
    }
    if (temp_v0 & 0x1800) {
        return 1;
    }
    func_0013B0B0(&D_00459210);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B110(1);
    temp_f7 = *(f32 *)((u8 *)arg0 + 0x1C);
    temp_f8 = temp_f7 * *(f32 *)((u8 *)D_00470644 + 0x90);
    temp_f6 = temp_f7 * *(f32 *)((u8 *)D_00470644 + 0x94);
    temp_f5 = 0.5f * *(f32 *)((u8 *)D_00470644 + 0x98);
    temp_f0 = 0.5f * *(f32 *)((u8 *)D_00470644 + 0x9C);
    if ((sp28 <= temp_f7) && !((sp20 + temp_f8) < -temp_f5) && ((sp20 - temp_f8) <= temp_f5) && !((sp24 + temp_f6) < -temp_f0)) {
        if (!((sp24 - temp_f6) <= temp_f0)) {
            goto block_11;
        }
        return 0;
    }
block_11:
    return 1;
}
