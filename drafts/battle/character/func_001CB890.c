/* Draft (not built): func_001CB890 at 0x001CB890, size 0x11C, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xCC, original 0x11C
 * Original: asm/nonmatchings/battle/character/func_001CB890.s */

// src/battle/character.c func_001CB890 size diff=54/51
s32 func_00146ED0(f32 *, f32 *, f32 *, s32);
s32 func_001DA5C0(s32, s32, s32, s32);
s32 func_001CB890(s32 unused_arg0, u8 *arg1) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    s32 sp5C;
    s32 var_s1;
    s32 var_s2;
    s32 temp_a0;
    s32 temp_s0;
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a0 = *(s32 *)((u8 *)temp_v0 + 0x18);
    if (temp_a0 & 1) {
        var_s2 = 0;
    } else {
        var_s2 = 2;
    }
    var_s1 = 1;
    if (temp_a0 & 0x10) {

    } else {
        var_s1 = 0;
    }
    temp_s0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v0 + 0x1C) * 4) + gBattle) + 0x8934);
    sp50 = *(f32 *)((u8 *)temp_v0 + 0x14);
    sp5C = 0x3F800000;
    sp54 = *(f32 *)((u8 *)temp_v0 + 0x10);
    sp4C = 0x3F800000;
    sp58 = *(f32 *)((u8 *)temp_v0 + 0xC);
    sp40 = *(f32 *)((u8 *)temp_v0 + 8);
    sp44 = *(f32 *)((u8 *)temp_v0 + 4);
    sp48 = *(f32 *)((u8 *)temp_v0 + 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    func_00146ED0(&sp40, &sp40, &sp40, 0x40733333);
    func_001DA5C0(temp_s0, 1, var_s2, var_s1);
    return 1;
}
