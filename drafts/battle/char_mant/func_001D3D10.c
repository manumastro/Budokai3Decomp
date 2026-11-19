/* Draft (not built): func_001D3D10 at 0x001D3D10, size 0x100, segment battle/char_mant (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD0, original 0x100
 * Original: asm/nonmatchings/battle/char_mant/func_001D3D10.s */

// src/battle/char_mant.c func_001D3D10 size diff=25/52
f32 func_0029D850();
s32 func_0029D8A0();
extern s32 D_00470590;
void func_001D3D10(u8 *arg0, s32 arg1) {
    u8 *var_a3;

    if (arg0 == NULL) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)arg0 + 0) != 0) {
        goto block_4;
    }
block_3:
    return;
block_4:
    D_00470590 = arg1;
    if (func_0029D8A0() != 0) {
        goto block_7;
    }
    if (!(func_0029D850() <= 0.0f)) {
        goto block_10;
    }
block_7:
    var_a3 = *(u8 **)((u8 *)arg0 + 4);
loop_8:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($a3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($a3) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a1) */);
    var_a3 = *(u8 **)((u8 *)var_a3 + 0x124);
    if (var_a3 != NULL) {
        goto loop_8;
    }
    return;
block_10:
    if (!(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x18) & 0x10)) {
        goto block_13;
    }
    func_001D39D0(arg0);
    return;
block_13:
    func_001D3B60(arg0);
    return;
}
