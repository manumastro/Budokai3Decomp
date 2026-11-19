/* Draft (not built): func_002D5570 at 0x002D5570, size 0x1A8, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x15C, original 0x1A8
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D5570.s */

// src/unk/unk_2D2530.c func_002D5570 size diff=54/87
void func_002D5570(void) {
    Vec4 sp40;
    Vec4 sp50;
    Model2D2530 *temp_s0;
    Model2D2530 *temp_s1_2;
    Obj2D2530 *temp_s0_2;
    Obj2D2530 *temp_s1;
    Obj2D2530 *temp_s2;
    s32 temp_a0;
    s32 temp_a0_2;

    temp_s1 = gOptionWork;
    func_002D4530(&sp50, &sp40);
    temp_s0 = temp_s1->f2A4;
    temp_s2 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    if (&sp50 != NULL) {
        func_00227A30(&sp50);
    }
    temp_a0 = temp_s2->fC;
    D_00470704 = temp_a0;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0, 0);
    D_00470238 = 0;
    func_0022C060(temp_s0, 1.0f);
    func_00228410();
    if (&sp40 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00(temp_s0);
    func_00228410();
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    temp_s0_2 = gOptionWork;
    sp50.y = 185.0f - (1.77f * (f32) (0x80 - ((s64) ((s64) temp_s1->f418 << 0x30) >> 0x30)));
    temp_s1_2 = temp_s1->f2A8;
    func_00228430(0);
    func_00228430(0);
    if (&sp50 != NULL) {
        func_00227A30(&sp50);
    }
    temp_a0_2 = temp_s0_2->fC;
    D_00470704 = temp_a0_2;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_2, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_2, 1.0f);
    func_00228410();
    if (&sp40 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00(temp_s1_2);
    func_00228410();
}

/* Similar function already in C: func_002D5720 (src/unk/unk_2D2530.c), similarity 0.89.
 * It is the template below (not built). */
#if 0
void func_002D5720(void) {
    Obj2D2530 *s = gOptionWork;
    Vec4 v;
    Model2D2530 *m;

    DrawModel(s, s->f2A4, 0, 0);
    asm volatile("sqc2 $vf0, 0(%0)" : : "r"(&v));
    v.y = 185.0f - 1.77f * (f32)(128 - s->f418);
    m = s->f2A8;
    DrawModel(gOptionWork, m, &v, 0);
}
#endif
