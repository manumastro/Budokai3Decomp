/* Draft (not built): func_002D5570 at 0x002D5570, size 0x1A8, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x1A8
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D5570.s */

// src/unk/unk_2D2530.c func_002D5570 size diff=59/71
void func_002D5570(void) {
    s32 sp40;
    s32 sp50;
    f32 sp54;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = (u8 *)(gOptionWork);
    func_002D4530(&sp50, &sp40);
    var_s0 = *(u8 **)((u8 *)var_s1 + 0x2A4);
    var_s2 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp50 != NULL) {
        func_00227A30((struct Vec4 *)(&sp50));
    }
    temp_a0 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(var_s0), 0x3F800000);
    func_00228410();
    if (&sp40 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(var_s0));
    func_00228410();
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    var_s0 = (u8 *)(gOptionWork);
    sp54 = 185.0f - (1.77f * (f32) (0x80 - ((s64) ((s64) *(s16 *)((u8 *)var_s1 + 0x418) << 0x30) >> 0x30)));
    var_s1 = *(u8 **)((u8 *)var_s1 + 0x2A8);
    func_00228430(0);
    func_00228430(0);
    if (&sp50 != NULL) {
        func_00227A30((struct Vec4 *)(&sp50));
    }
    temp_a0_2 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = (s32)(temp_a0_2);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(var_s1), 0x3F800000);
    func_00228410();
    if (&sp40 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(var_s1));
    func_00228410();
}
