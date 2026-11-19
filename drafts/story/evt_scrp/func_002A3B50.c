/* Draft (not built): func_002A3B50 at 0x002A3B50, size 0xE0, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x70, original 0xE0
 * Original: asm/nonmatchings/story/evt_scrp/func_002A3B50.s */

// src/story/evt_scrp.c func_002A3B50 size diff=41/28
s32 func_00136E80(s32, s32 *, s32, s32);
extern void amDraw_FlushPacket(void);
void func_002A3B50() {
    u8 sp[0x400];
    s32 sp10;
    s32 sp1C;
    s32 sp20;
    s32 sp30;
    s32 var_v1;
    u8 *temp_v0;

    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
    var_v1 = 0;
loop_3:
    if (var_v1 < 3) {
        temp_v0 = (var_v1 * 4) + sp;
        var_v1 += 1;
        *(s32 *)((u8 *)temp_v0 + 0x10) = 0;
        goto loop_3;
    }
    sp1C = 0x3F800000;
    func_00136E80(0x100, &sp10, 0, 0);
    func_00137B60((s32) &sp20);
    func_00137B60((s32) &sp30);
    amDraw_FlushPacket();
    func_0012F2C0();
}
