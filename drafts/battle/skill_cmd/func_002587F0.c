/* Draft (not built): func_002587F0 at 0x002587F0, size 0x2D0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 2)) & 1) + 0x2A) * 4)), 0); @ 3029: ) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x20)) & 1) + 0x28) * 4)), 0);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002587F0.s */

// src/battle/skill_cmd.c func_002587F0 cerr diff=-1/0
extern void func_00258310(void);
void func_002587F0(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f20;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 var_s1;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_5;
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
        temp_f2 = *(f32 *)((u8 *)temp_s3 + 8);
        temp_f3 = *(f32 *)((u8 *)temp_s3 + 0xC) - 60.0f;
        if (!(temp_f2 < temp_f3)) {
            var_f20 = temp_f2 - temp_f3;
            if (!(temp_f3 < 0.0f)) {
                var_f20 = temp_f2 - 60.0f;
            }
            temp_a0 = *(u8 **)((u8 *)temp_s4 + 0xE60);
            D_00470704 = (s32)(temp_a0);
            D_0047070C = 0x04000000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0), 0x04000000);
            D_00470238 = 0;
            func_0022C7D0(*(s32 *)((u8 *)temp_s2 + 4), 1, var_f20);
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
        }
        if (!(*(f32 *)((u8 *)temp_s3 + 8) < *(f32 *)((u8 *)temp_s3 + 0xC))) {
            *(s32 *)((u8 *)temp_s3 + 4) = 1;
            var_v0 = (s32 *)(&func_00258310);
            *(f32 *)((u8 *)temp_s3 + 8) = 0.0f;
            if (&func_00258310 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            var_v0_2 = (s32 *)(&Skill_DrawHeldPartB);
            if (&Skill_DrawHeldPartB == NULL) {
                var_v0_2 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
            func_0022D0E0(*(s32 *)((u8 *)temp_s2 + 4), 1);
            *(s32 *)((u8 *)temp_s2 + 4) = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s2 + 0x30);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x30) = 0;
            temp_a0_4 = *(s32 *)((u8 *)temp_s2 + 0x34);
            if (temp_a0_4 != 0) {
                func_0022D0E0(temp_a0_4, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x34) = 0;
            temp_a0_5 = *(u8 **)((u8 *)temp_s4 + 0xE60);
            D_00470704 = (s32)(temp_a0_5);
            D_0047070C = 0x04000000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_5), 0x04000000);
            D_00470238 = 0;
            *(s32 *)((u8 *)temp_s2 + 4) = func_0022D860(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x20)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0x16C), 0);
            func_0022C7D0(*(s32 *)((u8 *)temp_s2 + 4), 1, 0.0f);
            func_002543B0(temp_s3);
            func_0022ACF0(*(s32 *)((u8 *)temp_s2 + 4));
            temp_a0_6 = *(s32 *)((u8 *)temp_s2 + 0x18);
            if (temp_a0_6 != 0) {
                func_0022D0E0(temp_a0_6, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x18) = 0;
            *(s32 *)((u8 *)temp_s2 + 0x18) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x20)) & 1) + 0x28) * 4)), 0);
            temp_a0_7 = *(s32 *)((u8 *)temp_s2 + 0x1C);
            if (temp_a0_7 != 0) {
                func_0022D0E0(temp_a0_7, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x1C) = 0;
            *(s32 *)((u8 *)temp_s2 + 0x1C) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)temp_s3 + 0x22)) & 1) + 0x2A) * 4)), 0);
        }
    }
}
