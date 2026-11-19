/* Draft (not built): func_002D7450 at 0x002D7450, size 0x288, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C0, original 0x288
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D7450.s */

// src/unk/unk_2D2530.c func_002D7450 size diff=99/112
extern void func_002DDCA0();
extern void func_002DCC50();
void func_002D7450(void) {
    s32 sp40;
    f32 sp4C;
    Model2D2530 *temp_s0;
    Model2D2530 *temp_s1_2;
    Obj2D2530 *temp_s0_2;
    Obj2D2530 *temp_s1;
    Obj2D2530 *temp_s2;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    void (*temp_a0)();

    temp_s1 = gOptionWork;
    temp_a0 = temp_s1->f344;
    if ((temp_a0 != func_002DDF00) && (temp_a0 != NULL)) {
        if (temp_a0 == func_002DEFE0) {
            goto block_4;
        }
        if ((temp_a0 == func_002DDCA0) || (temp_a0 == func_002DD180)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_f1 = 1.0f - (temp_s1->f3A4 / 25.0f);
            sp4C = temp_f1;
            if (temp_f1 <= 0.0f) {
                sp4C = 0.0f;
            }
        } else if (temp_a0 == func_002DCC50) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            temp_f1_2 = (temp_s1->f3A4 - 60.0f) / 25.0f;
            sp4C = temp_f1_2;
            if (!(temp_f1_2 < 1.0f)) {
                sp4C = 1.0f;
                temp_s1->f344 = func_002DDF00;
            }
            if (sp4C < 0.0f) {
                sp4C = 0.0f;
            }
        }
    } else {
block_4:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp4C = 1.0f;
    }
    temp_s0 = temp_s1->fAC;
    temp_s2 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = temp_s2->fC;
    D_00470704 = temp_a0_2;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_2, 0);
    D_00470238 = 0;
    func_0022C060(temp_s0, 1.0f);
    func_00228410();
    if (&sp40 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00(temp_s0);
    func_00228410();
    temp_s1_2 = temp_s1->fB0;
    temp_s0_2 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = temp_s0_2->fC;
    D_00470704 = temp_a0_3;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_3, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_2, 1.0f);
    func_00228410();
    func_0022CD00(temp_s1_2);
    func_00228410();
}
