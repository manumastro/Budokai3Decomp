/* Draft (not built): func_002AC710 at 0x002AC710, size 0x80, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x8, original 0x80
 * Original: asm/nonmatchings/battle/scr_func/func_002AC710.s */

// src/battle/scr_func.c func_002AC710 size diff=31/2
s32 func_002AC710(s32 **arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    s32 spC;

    spC = 0;
    sp0 = *(f32 *)((u8 *)D_00459390 + 8);
    sp4 = *(f32 *)((u8 *)(&D_004593A0) + 8);
    sp8 = *(f32 *)((u8 *)(&D_004593B0) + 8);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    return 0;
}
