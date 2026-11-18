/* Draft (not built): func_00258310 at 0x00258310, size 0x4E0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 3021: D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + (var_s6 * 4)), 0);
 * Original: asm/nonmatchings/battle/skill_cmd/func_00258310.s */

// src/battle/skill_cmd.c func_00258310 cerr diff=-1/0
s32 func_001E9B00(s32, s32, s32, s32, s32, s32);
extern void func_00258090(void);
void func_00258310(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s6;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s4_2;
    s32 var_s6;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    u16 temp_v1;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *var_s0_2;
    u8 *var_s4;
    u8 *var_s5;

    temp_s2 = arg0 + 0x30;
    temp_s3 = gBtlSys;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30) + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        temp_f0 = *(f32 *)((u8 *)temp_s2 + 8) + D_00470710;
        *(f32 *)((u8 *)temp_s2 + 8) = temp_f0;
        temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xE60);
        temp_f20 = (180.0f * temp_f0) / *(f32 *)((u8 *)temp_s2 + 0x10);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 4), 1, temp_f20);
        func_002543B0(temp_s2);
        func_0022ACF0(*(s32 *)((u8 *)temp_s1 + 4));
        var_s0 = 0;
        var_s5 = temp_s1;
        var_s4 = temp_s2;
        do {
            temp_s6 = (var_s0 != 0) ? 2 : 1;
            func_00228430(0);
            func_0022C060(*(s32 *)((u8 *)var_s5 + 0x18), 0x3F800000);
            func_00228410();
            temp_v0 = func_0021C360(*(s16 *)((u8 *)var_s4 + 0x20));
            if (!(*(u16 *)((u8 *)temp_s2 + 0x1A) & temp_s6)) {
                temp_a0_2 = *(u16 *)((u8 *)var_s4 + 0x1C) & 0xF;
                switch (temp_a0_2) {                /* irregular */
                case 1:
                    *(u16 *)((u8 *)var_s4 + 0x1C) = 1U;
                    *(u16 *)((u8 *)temp_s2 + 0x1A) = (u16) (*(u16 *)((u8 *)temp_s2 + 0x1A) | (temp_s6 & 0xFFFF));
                    break;
                case 2:
                    *(u16 *)((u8 *)var_s4 + 0x1C) = 2U;
                    *(u16 *)((u8 *)temp_s2 + 0x1A) = (u16) (*(u16 *)((u8 *)temp_s2 + 0x1A) | (temp_s6 & 0xFFFF));
                    break;
                case 4:
                    *(u16 *)((u8 *)var_s4 + 0x1C) = 4U;
                    *(u16 *)((u8 *)temp_s2 + 0x1A) = (u16) (*(u16 *)((u8 *)temp_s2 + 0x1A) | (temp_s6 & 0xFFFF));
                    break;
                case 8:
                    *(u16 *)((u8 *)var_s4 + 0x1C) = 8U;
                    *(u16 *)((u8 *)temp_s2 + 0x1A) = (u16) (*(u16 *)((u8 *)temp_s2 + 0x1A) | (temp_s6 & 0xFFFF));
                    break;
                default:
                    *(u16 *)((u8 *)var_s4 + 0x1C) = 0U;
                    break;
                }
                if (*(u16 *)((u8 *)temp_s2 + 0x1A) & temp_s6) {
                    if (var_s0 == 0) {
                        var_s6 = (temp_v0 & 1) + 0x2C;
                    } else {
                        var_s6 = (temp_v0 & 1) + 0x2E;
                    }
                    temp_a0_3 = *(s32 *)((u8 *)var_s5 + 0x18);
                    if (temp_a0_3 != 0) {
                        func_0022D0E0(temp_a0_3, 1);
                    }
                    func_00228430(0);
                    *(s32 *)((u8 *)var_s5 + 0x18) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + (var_s6 * 4)), 0);
                    func_00228410();
                    func_001E9B00(1, 0x2E, 0, 0, 0, 0x3F800000);
                }
            }
            var_s0 += 1;
            var_s5 += 4;
            var_s4 += 2;
        } while (var_s0 < 2);
        if (!(*(f32 *)((u8 *)temp_s2 + 8) < *(f32 *)((u8 *)temp_s2 + 0x10))) {
            *(s32 *)((u8 *)temp_s2 + 4) = 2;
            var_v0 = (s32 *)(&func_00258090);
            *(f32 *)((u8 *)temp_s2 + 8) = 0.0f;
            if (&func_00258090 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            var_v0_2 = (s32 *)(&Skill_DrawHeldPart);
            if (&Skill_DrawHeldPart == NULL) {
                var_v0_2 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
            var_s4_2 = 0;
            var_s0_2 = temp_s1;
            do {
                func_0022D0E0(*(s32 *)((u8 *)var_s0_2 + 0x18), 1);
                var_s4_2 += 1;
                *(s32 *)((u8 *)var_s0_2 + 0x18) = 0;
                var_s0_2 += 4;
            } while (var_s4_2 < 2);
            func_0022D0E0(*(s32 *)((u8 *)temp_s1 + 4), 1);
            *(s32 *)((u8 *)temp_s1 + 4) = 0;
            temp_v1 = *(u16 *)((u8 *)temp_s2 + 0x1C);
            if (temp_v1 != 0) {
                var_v0_3 = 0;
                if (temp_v1 == *(u16 *)((u8 *)temp_s2 + 0x1E)) {

                } else {
                    var_v0_3 = 1;
                }
            } else {
                var_v0_3 = 0;
                if (*(u16 *)((u8 *)temp_s2 + 0x1E) != 0) {

                } else {
                    var_v0_3 = 1;
                }
            }
            if (var_v0_3 != 0) {
                func_001E9B00(1, 0x2F, 0, 0, 0, 0x3F800000);
                *(s32 *)((u8 *)temp_s1 + 4) = func_0022D860(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s2 + 0x20)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x174), 0);
                func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 4), 1, 0.0f);
                func_002543B0(temp_s2);
                func_0022ACF0(*(s32 *)((u8 *)temp_s1 + 4));
                var_v0_4 = func_0021C460(*(s16 *)((u8 *)temp_s2 + 0x20));
                if (var_v0_4 == -1) {
                    var_v0_4 = 2;
                }
                *(s32 *)((u8 *)temp_s1 + 0x30) = func_0022D860(*(s32 *)((u8 *)(((var_v0_4 & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x18C), 0);
                return;
            }
            func_001E9B00(1, 0x30, 0, 0, 0, 0x3F800000);
            *(s16 *)((u8 *)temp_s2 + 0x34) = 1;
            *(s32 *)((u8 *)temp_s1 + 4) = func_0022D860(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s2 + 0x22)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x17C), 0);
            func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 4), 1, 0.0f);
            func_002543B0(temp_s2);
            func_0022ACF0(*(s32 *)((u8 *)temp_s1 + 4));
            var_v0_5 = func_0021C460(*(s16 *)((u8 *)temp_s2 + 0x22));
            if (var_v0_5 == -1) {
                var_v0_5 = 2;
            }
            *(s32 *)((u8 *)temp_s1 + 0x30) = func_0022D860(*(s32 *)((u8 *)(((var_v0_5 & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14)) + 0x194), 0);
        }
    }
}
