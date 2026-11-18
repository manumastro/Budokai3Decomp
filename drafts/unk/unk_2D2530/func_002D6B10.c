/* Draft (not built): func_002D6B10 at 0x002D6B10, size 0x42C, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 183 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A0, original 0x42C
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D6B10.s */

// src/unk/unk_2D2530.c func_002D6B10 size diff=183/168
void func_002D6B10(void) {
    s32 sp50;
    f32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    f32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    f32 sp7C;
    s32 sp80;
    f32 sp8C;
    f32 temp_f0;
    f32 var_f20;
    f32 var_f2;
    s32 temp_a1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s2_4;

    temp_s1 = (u8 *)(gOptionWork);
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    var_f20 = 0.0f;
    temp_f0 = *(f32 *)((u8 *)temp_s1 + 0x388) + var_f2;
    *(f32 *)((u8 *)temp_s1 + 0x388) = temp_f0;
    if (!(temp_f0 < 50.0f)) {
        if (!(temp_f0 < 70.0f)) {
            var_f20 = 1.0f;
        } else {
            var_f20 = (temp_f0 - 50.0f) / 20.0f;
        }
    }
    if (var_f20 <= 0.0f) {
        var_f20 = 0.0f;
    }
    sp70 = 0x3EC7AE14;
    sp6C = 1.0f;
    sp7C = 1.0f;
    sp74 = 0x3EF0A3D7;
    sp6C = var_f20;
    sp60 = 0x3F800000;
    sp64 = 0x3F800000;
    sp68 = 0x3F800000;
    sp7C = var_f20;
    sp78 = 0x3E4CCCCD;
    if (*(s32 *)((u8 *)temp_s1 + 0x380) == 0) {
        temp_s0 = *(u8 **)((u8 *)temp_s1 + 0xC4);
        temp_s2 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
        D_00470704 = (s32)(temp_a0);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s0), 0x3F800000);
        func_00228410();
        if (&sp60 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s0));
        func_00228410();
        temp_s0_2 = *(u8 **)((u8 *)temp_s1 + 0x260);
        temp_s2_2 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0_2 = *(u8 **)((u8 *)temp_s2_2 + 0xC);
        D_00470704 = (s32)(temp_a0_2);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s0_2), 0x3F800000);
        func_00228410();
        if (&sp60 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s0_2));
        func_00228410();
    } else {
        temp_s0_3 = *(u8 **)((u8 *)temp_s1 + 0x25C);
        temp_s2_3 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0_3 = *(u8 **)((u8 *)temp_s2_3 + 0xC);
        D_00470704 = (s32)(temp_a0_3);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s0_3), 0x3F800000);
        func_00228410();
        if (&sp60 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s0_3));
        func_00228410();
        temp_s0_4 = *(u8 **)((u8 *)temp_s1 + 0xCC);
        temp_s2_4 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0_4 = *(u8 **)((u8 *)temp_s2_4 + 0xC);
        D_00470704 = (s32)(temp_a0_4);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_4), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s0_4), 0x3F800000);
        func_00228410();
        if (&sp60 != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        }
        func_0022CD00((void *)(temp_s0_4));
        func_00228410();
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    sp5C = 0.0f;
    sp7C = var_f20;
    sp8C = var_f20;
    temp_a1 = *(s32 *)((u8 *)temp_s1 + 0x37C);
    switch (temp_a1) {                              /* irregular */
    case 0:
        func_002D66B0(&sp50, &sp50, &sp50);
        func_002D6400(&sp70, &sp70);
        return;
    case 1:
        func_002D66B0(&sp50, NULL, &sp50);
        func_002D6400(&sp80, &sp70);
        return;
    case 2:
        func_002D66B0(&sp50, &sp50, NULL);
        func_002D6400(&sp70, &sp80);
        return;
    }
}
