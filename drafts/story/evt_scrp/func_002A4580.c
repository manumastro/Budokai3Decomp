/* Draft (not built): func_002A4580 at 0x002A4580, size 0x9C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x38, original 0x9C
 * Original: asm/nonmatchings/story/evt_scrp/func_002A4580.s */

// src/story/evt_scrp.c func_002A4580 size diff=32/14
s32 func_002A0B20(s32, s32, s32, f32 *);
s32 func_002A4580(u8 *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp1C;
    u8 *temp_a3;

    temp_a3 = *(u8 **)((u8 *)arg1 + 0x2C);
    sp1C = 0x3F800000;
    sp10 = *(f32 *)((u8 *)temp_a3 + 0xC);
    sp14 = *(f32 *)((u8 *)temp_a3 + 8);
    sp18 = *(f32 *)((u8 *)temp_a3 + 4);
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $t1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $t0, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a3, $vf3 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf4 */);
    M2C_ERROR(/* unknown instruction: vaddx.x $vf5, $vf5, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf5, $vf5, $vf2x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf5, $vf5, $vf3x */);
    M2C_ERROR(/* unknown instruction: vaddx.w $vf5, $vf5, $vf4x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($v1) */);
    func_002A0B20(*(s32 *)((u8 *)temp_a3 + 0x18), *(s32 *)((u8 *)temp_a3 + 0x14), *(s32 *)((u8 *)temp_a3 + 0x10), &sp10);
    return 1;
}
