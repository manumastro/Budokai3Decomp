/* Draft (not built): func_002D3730 at 0x002D3730, size 0x720, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 282 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x54C, original 0x720
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D3730.s */

// src/unk/unk_2D2530.c func_002D3730 size diff=282/339
void func_002D3730(Vec4 *arg0, Vec4 *arg1, Vec4 *arg2, Vec4 *arg3) {
    f32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    f32 *var_s0;
    f32 *var_s1;
    f32 *var_s2;
    f32 *var_s3;
    f32 *var_s4;
    f32 *var_s6;
    s32 var_s5;
    u8 *temp_a0;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;

    var_s5 = (int)(arg3);
    var_s3 = (float *)(arg0);
    var_s2 = (float *)(arg1);
    var_s1 = (float *)(arg2);
    var_s0 = (float *)(gOptionWork);
    var_s4 = *(f32 **)((u8 *)var_s0 + 0x2E4);
    func_00228430(0);
    func_00228430(0);
    temp_a0 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = (int)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s4), 0x3F800000);
    func_00228410();
    if (var_s3 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s4));
    func_00228410();
    var_s4 = *(f32 **)((u8 *)var_s0 + 0x308);
    var_s6 = (float *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = *(u8 **)((u8 *)var_s6 + 0xC);
    D_00470704 = (int)(temp_a0_2);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s4), 0x3F800000);
    func_00228410();
    if (var_s3 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s4));
    func_00228410();
    sp80 = 0.0f;
    sp84 = 0xC2300000;
    sp88 = 0;
    sp8C = 0x3F800000;
    var_s3 = *(f32 **)((u8 *)var_s0 + 0x2E8);
    var_s4 = (float *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)var_s4 + 0xC);
    D_00470704 = (int)(temp_a0_3);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s3), 0x3F800000);
    func_00228410();
    if (var_s2 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s3));
    func_00228410();
    var_s3 = *(f32 **)((u8 *)var_s0 + 0x2F4);
    var_s4 = (float *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp80 != NULL) {
        func_00227A30((Vec4 *)(&sp80));
    }
    temp_a0_4 = *(u8 **)((u8 *)var_s4 + 0xC);
    D_00470704 = (int)(temp_a0_4);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_4), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s3), 0x3F800000);
    func_00228410();
    if (var_s2 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s3));
    func_00228410();
    sp80 = -75.0f + (0.43f * (f32) *(s32 *)((u8 *)var_s0 + 0x404));
    if (*var_s2 != 1.0f) {
        var_s3 = *(f32 **)((u8 *)var_s0 + 0x2FC);
        var_s4 = (float *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((Vec4 *)(&sp80));
        }
        temp_a0_5 = *(u8 **)((u8 *)var_s4 + 0xC);
        D_00470704 = (int)(temp_a0_5);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_5), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s3), 0x3F800000);
        func_00228410();
        if (var_s2 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((Model2D2530 *)(var_s3));
        func_00228410();
    } else {
        sp84 = 0;
        var_s3 = *(f32 **)((u8 *)var_s0 + 0x304);
        var_s4 = (float *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((Vec4 *)(&sp80));
        }
        temp_a0_6 = *(u8 **)((u8 *)var_s4 + 0xC);
        D_00470704 = (int)(temp_a0_6);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_6), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s3), 0x3F800000);
        func_00228410();
        if (var_s2 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((Model2D2530 *)(var_s3));
        func_00228410();
    }
    sp84 = 0x42300000;
    sp80 = 0.0f;
    sp88 = 0;
    sp8C = 0x3F800000;
    var_s2 = *(f32 **)((u8 *)var_s0 + 0x2EC);
    var_s3 = (float *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_7 = *(u8 **)((u8 *)var_s3 + 0xC);
    D_00470704 = (int)(temp_a0_7);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_7), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s2), 0x3F800000);
    func_00228410();
    if (var_s1 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s2));
    func_00228410();
    var_s2 = *(f32 **)((u8 *)var_s0 + 0x2F8);
    var_s3 = (float *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_8 = *(u8 **)((u8 *)var_s3 + 0xC);
    D_00470704 = (int)(temp_a0_8);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_8), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s2), 0x3F800000);
    func_00228410();
    if (var_s1 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s2));
    func_00228410();
    sp80 = -75.0f + (0.43f * (f32) *(s32 *)((u8 *)var_s0 + 0x408));
    if (*var_s1 != 1.0f) {
        sp84 = 0;
        var_s2 = *(f32 **)((u8 *)var_s0 + 0x300);
        var_s3 = (float *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((Vec4 *)(&sp80));
        }
        temp_a0_9 = *(u8 **)((u8 *)var_s3 + 0xC);
        D_00470704 = (int)(temp_a0_9);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_9), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s2), 0x3F800000);
        func_00228410();
        if (var_s1 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((Model2D2530 *)(var_s2));
        func_00228410();
    } else {
        var_s2 = *(f32 **)((u8 *)var_s0 + 0x304);
        var_s3 = (float *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((Vec4 *)(&sp80));
        }
        temp_a0_10 = *(u8 **)((u8 *)var_s3 + 0xC);
        D_00470704 = (int)(temp_a0_10);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_10), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s2), 0x3F800000);
        func_00228410();
        if (var_s1 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((Model2D2530 *)(var_s2));
        func_00228410();
    }
    var_s1 = *(f32 **)((u8 *)var_s0 + 0x2F0);
    var_s0 = (float *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_11 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = (int)(temp_a0_11);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_11), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
    func_00228410();
    if (var_s5 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((Model2D2530 *)(var_s1));
    func_00228410();
}
