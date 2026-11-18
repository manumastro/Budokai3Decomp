/* Draft (not built): func_002559B0 at 0x002559B0, size 0x454, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0)) & 1) + 0x30) * 4)), 0); @ 2580: D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s6 + 0xE68)) + 0x14) + (var_s2 * 4)), 0);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002559B0.s */

// src/battle/skill_cmd.c func_002559B0 cerr diff=-1/0
extern s32 func_0022D860(s32, f32);
s32 func_001E9B00(s32, s32, s32, s32, s32, s32);
extern void func_00254DB0(void);
void func_002559B0(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_4;
    u8 *temp_s6;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s4;
    u8 *var_s5;

    var_s5 = arg0 + 0x30;
    temp_s6 = gBtlSys;
    var_s4 = *(u8 **)((u8 *)arg0 + 0x30) + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)var_s5 + 8) = (f32) (*(f32 *)((u8 *)var_s5 + 8) + D_00470710);
        temp_a0 = *(u8 **)((u8 *)temp_s6 + 0xE60);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        func_0022C7D0(*(s32 *)((u8 *)var_s4 + 4), 1, *(f32 *)((u8 *)var_s5 + 8));
        func_002543B0(var_s5);
        func_0022ACF0(*(s32 *)((u8 *)var_s4 + 4));
        var_s3 = 0;
        var_s1 = var_s4;
        var_s0 = var_s5;
        do {
            temp_s2 = (var_s3 != 0) ? 2 : 1;
            func_00228430(0);
            func_0022C060(*(s32 *)((u8 *)var_s1 + 0x18), 0x3F800000);
            func_00228410();
            temp_v0 = func_0021C360(*(s16 *)((u8 *)var_s0 + 0x20));
            if (!(*(u16 *)((u8 *)var_s5 + 0x1A) & temp_s2)) {
                temp_v1 = *(u16 *)((u8 *)var_s0 + 0x1C) & 0xF;
                switch (temp_v1) {                  /* irregular */
                case 1:
                    if (!(*(u16 *)((u8 *)var_s5 + 0x18) & 1)) {
                        *(u16 *)((u8 *)var_s0 + 0x1C) = 1U;
                        *(u16 *)((u8 *)var_s5 + 0x1A) = (u16) (*(u16 *)((u8 *)var_s5 + 0x1A) | (temp_s2 & 0xFFFF));
                    }
                    break;
                case 2:
                    if (!(*(u16 *)((u8 *)var_s5 + 0x18) & 2)) {
                        *(u16 *)((u8 *)var_s0 + 0x1C) = 2U;
                        *(u16 *)((u8 *)var_s5 + 0x1A) = (u16) (*(u16 *)((u8 *)var_s5 + 0x1A) | (temp_s2 & 0xFFFF));
                    }
                    break;
                case 4:
                    if (!(*(u16 *)((u8 *)var_s5 + 0x18) & 4)) {
                        *(u16 *)((u8 *)var_s0 + 0x1C) = 4U;
                        *(u16 *)((u8 *)var_s5 + 0x1A) = (u16) (*(u16 *)((u8 *)var_s5 + 0x1A) | (temp_s2 & 0xFFFF));
                    }
                    break;
                case 8:
                    if (!(*(u16 *)((u8 *)var_s5 + 0x18) & 8)) {
                        *(u16 *)((u8 *)var_s0 + 0x1C) = 8U;
                        *(u16 *)((u8 *)var_s5 + 0x1A) = (u16) (*(u16 *)((u8 *)var_s5 + 0x1A) | (temp_s2 & 0xFFFF));
                    }
                    break;
                default:
                    *(u16 *)((u8 *)var_s0 + 0x1C) = 0U;
                    break;
                }
                if (*(u16 *)((u8 *)var_s5 + 0x1A) & temp_s2) {
                    if (var_s3 == 0) {
                        var_s2 = (temp_v0 & 1) + 0x2C;
                    } else {
                        var_s2 = (temp_v0 & 1) + 0x2E;
                    }
                    temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0x18);
                    if (temp_a0_2 != 0) {
                        func_0022D0E0(temp_a0_2, 1);
                    }
                    *(s32 *)((u8 *)var_s1 + 0x18) = 0;
                    func_00228430(0);
                    *(s32 *)((u8 *)var_s1 + 0x18) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s6 + 0xE68)) + 0x14) + (var_s2 * 4)), 0);
                    func_00228410();
                    func_001E9B00(1, 0x2E, 0, 0, 0, 0x3F800000);
                }
            }
            var_s3 += 1;
            var_s1 += 4;
            var_s0 += 2;
        } while (var_s3 < 2);
        if (!(*(f32 *)((u8 *)var_s5 + 8) < *(f32 *)((u8 *)var_s5 + 0x10))) {
            *(s32 *)((u8 *)var_s5 + 4) = 5;
            var_v0 = (s32 *)(&func_00254DB0);
            *(f32 *)((u8 *)var_s5 + 8) = 0.0f;
            *(u16 *)((u8 *)var_s5 + 0x18) = (u16) (*(u16 *)((u8 *)var_s5 + 0x18) | *(u16 *)((u8 *)var_s5 + 0x1C));
            *(u16 *)((u8 *)((*(s16 *)((u8 *)var_s5 + 0x32) * 2) + var_s5) + 0x24) = (u16) *(u16 *)((u8 *)var_s5 + 0x1C);
            *(u16 *)((u8 *)((*(s16 *)((u8 *)var_s5 + 0x32) * 2) + var_s5) + 0x2A) = (u16) *(u16 *)((u8 *)var_s5 + 0x1E);
            if (&func_00254DB0 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            var_v0_2 = (s32 *)(&Skill_DrawHeldSet);
            if (&Skill_DrawHeldSet == NULL) {
                var_v0_2 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
            temp_a0_3 = *(s32 *)((u8 *)var_s4 + 4);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)var_s4 + 4) = 0;
            temp_a0_4 = *(u8 **)((u8 *)temp_s6 + 0xE60);
            D_00470704 = (s32)(temp_a0_4);
            D_0047070C = 0x04000000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_4), 0x04000000);
            D_00470238 = 0;
            *(s32 *)((u8 *)var_s4 + 4) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s6 + 0xE68)) + 0x14) + (((func_0021C360(*(s16 *)((u8 *)var_s5 + 0x20)) & 1) + 0x30) * 4)), 0);
            func_0022C7D0(*(s32 *)((u8 *)var_s4 + 4), 1, 0.0f);
            func_002543B0(var_s5);
            func_0022ACF0(*(s32 *)((u8 *)var_s4 + 4));
            var_s0_2 = 0;
            do {
                temp_v0_2 = func_0021C360(*(s16 *)((u8 *)var_s5 + 0x20));
                if (*(u16 *)((u8 *)var_s5 + 0x1C) == 0) {
                    if (var_s0_2 == 0) {
                        var_s1_2 = (temp_v0_2 & 1) + 0x2C;
                    } else {
                        var_s1_2 = (temp_v0_2 & 1) + 0x2E;
                    }
                    temp_a0_5 = *(s32 *)((u8 *)var_s4 + 0x18);
                    if (temp_a0_5 != 0) {
                        func_0022D0E0(temp_a0_5, 1);
                    }
                    *(s32 *)((u8 *)var_s4 + 0x18) = 0;
                    func_00228430(0);
                    *(s32 *)((u8 *)var_s4 + 0x18) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s6 + 0xE68)) + 0x14) + (var_s1_2 * 4)), 0);
                    func_00228410();
                }
                var_s0_2 += 1;
                var_s5 += 2;
                var_s4 += 4;
            } while (var_s0_2 < 2);
        }
    }
}
