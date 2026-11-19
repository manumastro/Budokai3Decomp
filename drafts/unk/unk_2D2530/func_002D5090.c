/* Draft (not built): func_002D5090 at 0x002D5090, size 0x4E0, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 181 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x398, original 0x4E0
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D5090.s */

// src/unk/unk_2D2530.c func_002D5090 size diff=181/230
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
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s0 = (unsigned char *)(gOptionWork);
    sp40 = (f32) *(s32 *)((u8 *)D_004E05DC + 0x24);
    temp_a0 = ((s32)(D_00492FCC)) | ((s32)(D_00493084));
    sp4C = 0x3F800000;
    sp48 = 0;
    sp44 = (f32) *(s32 *)((u8 *)D_004E05DC + 0x28);
    if (temp_a0 & 0x2000) {
        var_s1 = *(u8 **)((u8 *)var_s0 + 0x2B0);
        func_00228430(0);
        func_00228430(0);
        if (&sp40 != NULL) {
            func_00227A30((Vec4 *)(&sp40));
        }
        temp_a0_2 = *(u8 **)((u8 *)var_s0 + 0xC);
        D_00470704 = (int)(temp_a0_2);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
        func_00228410();
        func_0022CD00((Model2D2530 *)(var_s1));
        func_00228410();
        return;
    }
    if (temp_a0 & 0x8000) {
        var_s1 = *(u8 **)((u8 *)var_s0 + 0x2B4);
        func_00228430(0);
        func_00228430(0);
        temp_a0_3 = *(u8 **)((u8 *)var_s0 + 0xC);
        D_00470704 = (int)(temp_a0_3);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
        func_00228410();
        func_0022CD00((Model2D2530 *)(var_s1));
        func_00228410();
        var_s1 = *(u8 **)((u8 *)var_s0 + 0x2AC);
        var_s0 = (unsigned char *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0_4 = *(u8 **)((u8 *)var_s0 + 0xC);
        D_00470704 = (int)(temp_a0_4);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0_4), 0);
        D_00470238 = 0;
        func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
        func_00228410();
        func_0022CD00((Model2D2530 *)(var_s1));
        func_00228410();
        return;
    }
    var_s1 = *(u8 **)((u8 *)var_s0 + 0x2AC);
    func_00228430(0);
    func_00228430(0);
    temp_a0_5 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = (int)(temp_a0_5);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_5), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
    func_00228410();
    func_0022CD00((Model2D2530 *)(var_s1));
    func_00228410();
    var_s1 = *(u8 **)((u8 *)var_s0 + 0x2B8);
    var_s2 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_6 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = (int)(temp_a0_6);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_6), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
    func_00228410();
    func_0022CD00((Model2D2530 *)(var_s1));
    func_00228410();
    var_s1 = *(u8 **)((u8 *)var_s0 + 0x2BC);
    var_s2 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    temp_a0_7 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = (int)(temp_a0_7);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_7), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
    func_00228410();
    func_0022CD00((Model2D2530 *)(var_s1));
    func_00228410();
    var_s1 = *(u8 **)((u8 *)var_s0 + 0x2C0);
    var_s2 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp40 != NULL) {
        func_00227A30((Vec4 *)(&sp40));
    }
    temp_a0_8 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = (int)(temp_a0_8);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_8), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s1), 0x3F800000);
    func_00228410();
    func_0022CD00((Model2D2530 *)(var_s1));
    func_00228410();
    var_s0 = *(u8 **)((u8 *)var_s0 + 0x2C4);
    var_s1 = (unsigned char *)(gOptionWork);
    func_00228430(0);
    func_00228430(0);
    if (&sp40 != NULL) {
        func_00227A30((Vec4 *)(&sp40));
    }
    temp_a0_9 = *(u8 **)((u8 *)var_s1 + 0xC);
    D_00470704 = (int)(temp_a0_9);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0_9), 0);
    D_00470238 = 0;
    func_0022C060((Model2D2530 *)(var_s0), 0x3F800000);
    func_00228410();
    func_0022CD00((Model2D2530 *)(var_s0));
    func_00228410();
}
