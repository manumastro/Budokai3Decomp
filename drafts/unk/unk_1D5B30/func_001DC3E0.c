/* Draft (not built): func_001DC3E0 at 0x001DC3E0, size 0x778, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 339 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5F4, original 0x778
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DC3E0.s */

// src/unk/unk_1D5B30.c func_001DC3E0 size diff=339/381
extern void func_001E8640(Fighter *c, s32 mask);
s32 func_001D54A0(void *, s16, s32 *, s32);
s32 func_001D5900(void *, s16, s32 *);
void func_001DC3E0(u8 *arg0) {
    s32 sp48;
    u8 *sp20;
    s32 sp24;
    s16 sp28;
    s32 sp30;
    f32 sp34;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;

    temp_f1 = *(f32 *)((u8 *)arg0 + 0xC9C) * gBattle->f88F0;
    if (!(temp_f1 <= 0.0f)) {
        temp_f2 = 0.35f * temp_f1;
        if (*(s16 *)((u8 *)arg0 + 0x19E8) != 0) {
            *(f32 *)((u8 *)arg0 + 0x19F4) = (f32) (*(f32 *)((u8 *)arg0 + 0x19F4) + temp_f2);
        } else {
            *(f32 *)((u8 *)arg0 + 0x19F4) = (f32) (*(f32 *)((u8 *)arg0 + 0x19F4) - temp_f2);
        }
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x19F4);
        var_f1 = 1.0f;
        if (!(temp_f0 <= 1.0f)) {

        } else {
            var_f1 = 0.0f;
            if (temp_f0 < 0.0f) {

            } else {
                var_f1 = temp_f0;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x19F4) = var_f1;
        if (*(s16 *)((u8 *)arg0 + 0x19EA) != 0) {
            *(f32 *)((u8 *)arg0 + 0x19F8) = (f32) (*(f32 *)((u8 *)arg0 + 0x19F8) + temp_f2);
        } else {
            *(f32 *)((u8 *)arg0 + 0x19F8) = (f32) (*(f32 *)((u8 *)arg0 + 0x19F8) - temp_f2);
        }
        temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x19F8);
        var_f1_2 = 1.0f;
        if (!(temp_f0_2 <= 1.0f)) {

        } else {
            var_f1_2 = 0.0f;
            if (temp_f0_2 < 0.0f) {

            } else {
                var_f1_2 = temp_f0_2;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x19F8) = var_f1_2;
        if (*(s16 *)((u8 *)arg0 + 0x19EC) != 0) {
            *(f32 *)((u8 *)arg0 + 0x19FC) = (f32) (*(f32 *)((u8 *)arg0 + 0x19FC) + temp_f2);
        } else {
            *(f32 *)((u8 *)arg0 + 0x19FC) = (f32) (*(f32 *)((u8 *)arg0 + 0x19FC) - temp_f2);
        }
        temp_f0_3 = *(f32 *)((u8 *)arg0 + 0x19FC);
        var_f1_3 = 1.0f;
        if (!(temp_f0_3 <= 1.0f)) {

        } else {
            var_f1_3 = 0.0f;
            if (temp_f0_3 < 0.0f) {

            } else {
                var_f1_3 = temp_f0_3;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x19FC) = var_f1_3;
        if (*(s16 *)((u8 *)arg0 + 0x19EE) != 0) {
            *(f32 *)((u8 *)arg0 + 0x1A00) = (f32) (*(f32 *)((u8 *)arg0 + 0x1A00) + temp_f2);
        } else {
            *(f32 *)((u8 *)arg0 + 0x1A00) = (f32) (*(f32 *)((u8 *)arg0 + 0x1A00) - temp_f2);
        }
        temp_f0_4 = *(f32 *)((u8 *)arg0 + 0x1A00);
        var_f1_4 = 1.0f;
        if (!(temp_f0_4 <= 1.0f)) {

        } else {
            var_f1_4 = 0.0f;
            if (temp_f0_4 < 0.0f) {

            } else {
                var_f1_4 = temp_f0_4;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x1A00) = var_f1_4;
        if (*(s16 *)((u8 *)arg0 + 0x19F0) != 0) {
            *(f32 *)((u8 *)arg0 + 0x1A04) = (f32) (*(f32 *)((u8 *)arg0 + 0x1A04) + temp_f2);
        } else {
            *(f32 *)((u8 *)arg0 + 0x1A04) = (f32) (*(f32 *)((u8 *)arg0 + 0x1A04) - temp_f2);
        }
        temp_f0_5 = *(f32 *)((u8 *)arg0 + 0x1A04);
        var_f1_5 = 1.0f;
        if (!(temp_f0_5 <= 1.0f)) {

        } else {
            var_f1_5 = 0.0f;
            if (temp_f0_5 < 0.0f) {

            } else {
                var_f1_5 = temp_f0_5;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x1A04) = var_f1_5;
    }
    func_001E8640((Fighter *)(arg0 + 0x650), 0xF004);
    sp20 = arg0;
    sp28 = -1;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (!((((*(f32 *)((u8 *)arg0 + 0x1844) + 1.5f) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08)) <= sp34)) {
        sp24 = 2;
        temp_f0_6 = ((func_00200270(&sp20, sp40, sp48) + 1.5f) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08);
        if (!(temp_f0_6 <= sp34)) {
            sp34 = temp_f0_6;
            func_001D5900(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 4), &sp30);
        }
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp24 = 0xC;
    temp_f0_7 = ((func_00200270(&sp20, sp40, sp48) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 8)) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08);
    if (!(temp_f0_7 <= (0.1f + sp34))) {
        sp34 = temp_f0_7;
        func_001D54A0(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x18), &sp30, 0);
    } else if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
        temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x19F4);
        if (!(temp_f2_2 <= 0.0f) && (temp_f0_7 < (sp34 - 0.1f))) {
            sp34 -= temp_f2_2 * (sp34 - temp_f0_7);
            func_001D54A0(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x18), &sp30, 0);
        }
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp24 = 0xD;
    temp_f0_8 = ((func_00200270(&sp20, sp40, sp48) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 8)) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08);
    if (!(temp_f0_8 <= (0.1f + sp34))) {
        sp34 = temp_f0_8;
        func_001D54A0(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x1A), &sp30, 0);
    } else if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
        temp_f2_3 = *(f32 *)((u8 *)arg0 + 0x19F8);
        if (!(temp_f2_3 <= 0.0f) && (temp_f0_8 < (sp34 - 0.1f))) {
            sp34 -= temp_f2_3 * (sp34 - temp_f0_8);
            func_001D54A0(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x1A), &sp30, 0);
        }
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (!((((*(f32 *)((u8 *)arg0 + 0x1844) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 4)) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08)) <= sp34)) {
        sp24 = 0xE;
        temp_f0_9 = ((func_00200270(&sp20, sp40, sp48) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 4)) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08);
        if (!(temp_f0_9 <= sp34)) {
            sp34 = temp_f0_9;
            func_001D54A0(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x14), &sp30, 1);
        }
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (!((((*(f32 *)((u8 *)arg0 + 0x1844) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 4)) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08)) <= sp34)) {
        sp24 = 0xF;
        temp_f0_10 = ((func_00200270(&sp20, sp40, sp48) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 4)) - *(f32 *)((u8 *)arg0 + 0x44)) + *(f32 *)((u8 *)arg0 + 0x1A08);
        if (!(temp_f0_10 <= sp34)) {
            sp34 = temp_f0_10;
            func_001D54A0(*(u8 **)((u8 *)arg0 + 0xB88), *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB8C)) + 0x16), &sp30, 1);
        }
    }
}
