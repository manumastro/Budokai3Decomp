/* Draft (not built): func_00255E10 at 0x00255E10, size 0x28C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 2)) & 1) + 0x2A) * 4)), 0); @ 2668: ) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x20)) & 1) + 0x28) * 4)), 0);
 * Original: asm/nonmatchings/battle/skill_cmd/func_00255E10.s */

// src/battle/skill_cmd.c func_00255E10 cerr diff=-1/0
void func_00255E10(u8 *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 var_s1;
    s32 var_v1;
    void (*var_v0)();
    void (*var_v0_2)();
    u8 *temp_a0;
    u8 *temp_a0_6;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *var_s0;

    temp_s3 = arg0 + 0x30;
    temp_s4 = gBtlSys;
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30) + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)temp_s3 + 8) = (f32) (*(f32 *)((u8 *)temp_s3 + 8) + D_00470710);
        temp_a0 = *(u8 **)((u8 *)temp_s4 + 0xE60);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        func_0022C7D0(*(s32 *)((u8 *)temp_s2 + 4), 1, *(f32 *)((u8 *)temp_s3 + 8));
        func_002543B0(temp_s3);
        func_0022ACF0(*(s32 *)((u8 *)temp_s2 + 4));
        var_s1 = 0;
        var_s0 = temp_s2;
        do {
            temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x30);
            if (temp_a0_2 != 0) {
                func_0022C060(temp_a0_2, 0x3F800000);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        if (*(s32 *)((u8 *)temp_s3 + 4) == 4) {
            *(s32 *)((u8 *)temp_s3 + 4) = 1;
            var_v0 = func_002559B0;
            *(f32 *)((u8 *)temp_s3 + 8) = 0.0f;
            if (func_002559B0 == NULL) {
                var_v0 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
            var_v0_2 = Skill_DrawHeldSetB;
            if (Skill_DrawHeldSetB == NULL) {
                var_v0_2 = NULL;
            }
            *(void (**)())((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
            temp_a0_3 = *(s32 *)((u8 *)temp_s2 + 4);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 4) = 0;
            temp_a0_4 = *(s32 *)((u8 *)temp_s2 + 0x30);
            if (temp_a0_4 != 0) {
                func_0022D0E0(temp_a0_4, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x30) = 0;
            temp_a0_5 = *(s32 *)((u8 *)temp_s2 + 0x34);
            if (temp_a0_5 != 0) {
                func_0022D0E0(temp_a0_5, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x34) = 0;
            temp_a0_6 = *(u8 **)((u8 *)temp_s4 + 0xE60);
            D_00470704 = (s32)(temp_a0_6);
            D_0047070C = 0x04000000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_6), 0x04000000);
            D_00470238 = 0;
            *(s32 *)((u8 *)temp_s2 + 4) = func_0022D860(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x20)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0x98), 0);
            func_0022C7D0(*(s32 *)((u8 *)temp_s2 + 4), 1, 0.0f);
            func_002543B0(temp_s3);
            func_0022ACF0(*(s32 *)((u8 *)temp_s2 + 4));
            temp_a0_7 = *(s32 *)((u8 *)temp_s2 + 0x18);
            if (temp_a0_7 != 0) {
                func_0022D0E0(temp_a0_7, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x18) = 0;
            *(s32 *)((u8 *)temp_s2 + 0x18) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x20)) & 1) + 0x28) * 4)), 0);
            temp_a0_8 = *(s32 *)((u8 *)temp_s2 + 0x1C);
            if (temp_a0_8 != 0) {
                func_0022D0E0(temp_a0_8, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x1C) = 0;
            *(s32 *)((u8 *)temp_s2 + 0x1C) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x22)) & 1) + 0x2A) * 4)), 0);
        }
    }
}
