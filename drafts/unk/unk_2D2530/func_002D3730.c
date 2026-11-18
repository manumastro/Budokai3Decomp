/* Draft (not built): func_002D3730 at 0x002D3730, size 0x720, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); lared as: 'void (struct Vec4 *, struct Vec4 *, struct Vec4 *, @ 609: void func_002D3730(Vec4 *, Vec4 *, Vec4 *, Vec4 *);
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D3730.s */

// src/unk/unk_2D2530.c func_002D3730 cerr diff=-1/0
void func_002D3730(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3) {
    f32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
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
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s2_4;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *temp_s3_3;
    u8 *temp_s3_4;
    u8 *temp_s3_5;
    u8 *temp_s3_6;
    u8 *temp_s3_7;
    u8 *temp_s3_8;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s4_3;
    u8 *temp_s4_4;
    u8 *temp_s4_5;
    u8 *temp_s4_6;
    u8 *temp_s6;

    temp_s0 = (u8 *)(gOptionWork);
    temp_s4 = *(u8 **)((u8 *)temp_s0 + 0x2E4);
    func_00228430(0);
    func_00228430(0);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s4), 0x3F800000);
    func_00228410();
    if (arg0 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s4));
    func_00228410();
    temp_s4_2 = *(u8 **)((u8 *)temp_s0 + 0x308);
    temp_s6 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = *(u8 **)((u8 *)temp_s6 + 0xC);
    D_00470704 = (s32)(temp_a0_2);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s4_2), 0x3F800000);
    func_00228410();
    if (arg0 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s4_2));
    func_00228410();
    sp80 = 0.0f;
    sp84 = 0xC2300000;
    sp88 = 0;
    sp8C = 0x3F800000;
    temp_s3 = *(u8 **)((u8 *)temp_s0 + 0x2E8);
    temp_s4_3 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)temp_s4_3 + 0xC);
    D_00470704 = (s32)(temp_a0_3);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s3), 0x3F800000);
    func_00228410();
    if (arg1 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s3));
    func_00228410();
    temp_s3_2 = *(u8 **)((u8 *)temp_s0 + 0x2F4);
    temp_s4_4 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp80 != NULL) {
        func_00227A30((struct Vec4 *)(&sp80));
    }
    temp_a0_4 = *(u8 **)((u8 *)temp_s4_4 + 0xC);
    D_00470704 = (s32)(temp_a0_4);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_4), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s3_2), 0x3F800000);
    func_00228410();
    if (arg1 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s3_2));
    func_00228410();
    sp80 = -75.0f + (0.43f * (f32) *(s32 *)((u8 *)temp_s0 + 0x404));
    if (*arg1 != 1.0f) {
        temp_s3_3 = *(u8 **)((u8 *)temp_s0 + 0x2FC);
        temp_s4_5 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((struct Vec4 *)(&sp80));
        }
        temp_a0_5 = *(u8 **)((u8 *)temp_s4_5 + 0xC);
        D_00470704 = (s32)(temp_a0_5);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_5), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s3_3), 0x3F800000);
        func_00228410();
        if (arg1 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s3_3));
        func_00228410();
    } else {
        sp84 = 0;
        temp_s3_4 = *(u8 **)((u8 *)temp_s0 + 0x304);
        temp_s4_6 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((struct Vec4 *)(&sp80));
        }
        temp_a0_6 = *(u8 **)((u8 *)temp_s4_6 + 0xC);
        D_00470704 = (s32)(temp_a0_6);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_6), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s3_4), 0x3F800000);
        func_00228410();
        if (arg1 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s3_4));
        func_00228410();
    }
    sp84 = 0x42300000;
    sp80 = 0.0f;
    sp88 = 0;
    sp8C = 0x3F800000;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x2EC);
    temp_s3_5 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_7 = *(u8 **)((u8 *)temp_s3_5 + 0xC);
    D_00470704 = (s32)(temp_a0_7);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_7), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s2), 0x3F800000);
    func_00228410();
    if (arg2 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s2));
    func_00228410();
    temp_s2_2 = *(u8 **)((u8 *)temp_s0 + 0x2F8);
    temp_s3_6 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_8 = *(u8 **)((u8 *)temp_s3_6 + 0xC);
    D_00470704 = (s32)(temp_a0_8);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_8), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s2_2), 0x3F800000);
    func_00228410();
    if (arg2 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s2_2));
    func_00228410();
    sp80 = -75.0f + (0.43f * (f32) *(s32 *)((u8 *)temp_s0 + 0x408));
    if (*arg2 != 1.0f) {
        sp84 = 0;
        temp_s2_3 = *(u8 **)((u8 *)temp_s0 + 0x300);
        temp_s3_7 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((struct Vec4 *)(&sp80));
        }
        temp_a0_9 = *(u8 **)((u8 *)temp_s3_7 + 0xC);
        D_00470704 = (s32)(temp_a0_9);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_9), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s2_3), 0x3F800000);
        func_00228410();
        if (arg2 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s2_3));
        func_00228410();
    } else {
        temp_s2_4 = *(u8 **)((u8 *)temp_s0 + 0x304);
        temp_s3_8 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        if (&sp80 != NULL) {
            func_00227A30((struct Vec4 *)(&sp80));
        }
        temp_a0_10 = *(u8 **)((u8 *)temp_s3_8 + 0xC);
        D_00470704 = (s32)(temp_a0_10);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_10), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s2_4), 0x3F800000);
        func_00228410();
        if (arg2 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s2_4));
        func_00228410();
    }
    temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x2F0);
    temp_s0_2 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_11 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
    D_00470704 = (s32)(temp_a0_11);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_11), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s1), 0x3F800000);
    func_00228410();
    if (arg3 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    }
    func_0022CD00((void *)(temp_s1));
    func_00228410();
}
