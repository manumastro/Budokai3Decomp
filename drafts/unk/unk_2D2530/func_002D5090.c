/* Draft (not built): func_002D5090 at 0x002D5090, size 0x4E0, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'unsigned short *' | 'unsigned short *' @ 558: temp_a0 = D_00492FCC | D_00493084;
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D5090.s */

// src/unk/unk_2D2530.c func_002D5090 cerr diff=-1/0
void func_002D5090(void) {
    f32 sp40;
    f32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 temp_a0;
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
    u8 *temp_s0_3;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_4;
    u8 *temp_s1_5;
    u8 *temp_s1_6;
    u8 *temp_s1_7;
    u8 *temp_s1_8;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;

    temp_s0 = (u8 *)(gOptionWork);
    sp40 = (f32) *(s32 *)((u8 *)D_004E05DC + 0x24);
    temp_a0 = D_00492FCC | D_00493084;
    sp4C = 0x3F800000;
    sp48 = 0;
    sp44 = (f32) *(s32 *)((u8 *)D_004E05DC + 0x28);
    if (temp_a0 & 0x2000) {
        temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x2B0);
        func_00228430(0);
        func_00228430(0);
        if (&sp40 != NULL) {
            func_00227A30((struct Vec4 *)(&sp40));
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0xC);
        D_00470704 = (s32)(temp_a0_2);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s1), 0x3F800000);
        func_00228410();
        func_0022CD00((void *)(temp_s1));
        func_00228410();
        return;
    }
    if (temp_a0 & 0x8000) {
        temp_s1_2 = *(u8 **)((u8 *)temp_s0 + 0x2B4);
        func_00228430(0);
        func_00228430(0);
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0xC);
        D_00470704 = (s32)(temp_a0_3);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s1_2), 0x3F800000);
        func_00228410();
        func_0022CD00((void *)(temp_s1_2));
        func_00228410();
        temp_s1_3 = *(u8 **)((u8 *)temp_s0 + 0x2AC);
        temp_s0_2 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0_4 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
        D_00470704 = (s32)(temp_a0_4);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_4), 0);
        D_00470238 = 0;
        func_0022C060((struct Model2D2530 *)(temp_s1_3), 0x3F800000);
        func_00228410();
        func_0022CD00((void *)(temp_s1_3));
        func_00228410();
        return;
    }
    temp_s1_4 = *(u8 **)((u8 *)temp_s0 + 0x2AC);
    func_00228430(0);
    func_00228430(0);
    temp_a0_5 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = (s32)(temp_a0_5);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_5), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s1_4), 0x3F800000);
    func_00228410();
    func_0022CD00((void *)(temp_s1_4));
    func_00228410();
    temp_s1_5 = *(u8 **)((u8 *)temp_s0 + 0x2B8);
    temp_s2 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_6 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = (s32)(temp_a0_6);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_6), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s1_5), 0x3F800000);
    func_00228410();
    func_0022CD00((void *)(temp_s1_5));
    func_00228410();
    temp_s1_6 = *(u8 **)((u8 *)temp_s0 + 0x2BC);
    temp_s2_2 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_7 = *(u8 **)((u8 *)temp_s2_2 + 0xC);
    D_00470704 = (s32)(temp_a0_7);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_7), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s1_6), 0x3F800000);
    func_00228410();
    func_0022CD00((void *)(temp_s1_6));
    func_00228410();
    temp_s1_7 = *(u8 **)((u8 *)temp_s0 + 0x2C0);
    temp_s2_3 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp40 != NULL) {
        func_00227A30((struct Vec4 *)(&sp40));
    }
    temp_a0_8 = *(u8 **)((u8 *)temp_s2_3 + 0xC);
    D_00470704 = (s32)(temp_a0_8);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_8), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s1_7), 0x3F800000);
    func_00228410();
    func_0022CD00((void *)(temp_s1_7));
    func_00228410();
    temp_s0_3 = *(u8 **)((u8 *)temp_s0 + 0x2C4);
    temp_s1_8 = (u8 *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp40 != NULL) {
        func_00227A30((struct Vec4 *)(&sp40));
    }
    temp_a0_9 = *(u8 **)((u8 *)temp_s1_8 + 0xC);
    D_00470704 = (s32)(temp_a0_9);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_9), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s0_3), 0x3F800000);
    func_00228410();
    func_0022CD00((void *)(temp_s0_3));
    func_00228410();
}
