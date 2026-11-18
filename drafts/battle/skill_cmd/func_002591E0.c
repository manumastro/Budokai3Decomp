/* Draft (not built): func_002591E0 at 0x002591E0, size 0x4C0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d char *' mwccps2.exe Compiler: @ 3144: (u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x3C), 0.0f);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002591E0.s */

// src/battle/skill_cmd.c func_002591E0 cerr diff=-1/0
s32 func_001E9B00(s32, s32, s32, s32, s32, s32);
extern void func_00258F80(void);
void func_002591E0(u8 *arg0) {
    s32 *var_v1_2;
    s32 *var_v1_3;
    f32 var_f0;
    f32 var_f1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s6;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_s4;
    u8 *var_s5;

    temp_s1 = arg0 + 0x30;
    temp_s2 = gBtlSys;
    var_s0 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x30) + 0x30);
    func_0021C460(*(s32 *)((u8 *)arg0 + 0x64));
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)temp_s1 + 8) = (f32) (*(f32 *)((u8 *)temp_s1 + 8) + D_00470710);
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xE60);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        temp_v1 = *(s32 *)((u8 *)temp_s1 + 0x30);
        if (temp_v1 != 0) {
            temp_v0 = *(s32 *)((u8 *)temp_s1 + 0x2C);
            if (temp_v0 < 5) {
                temp_s4 = *(u8 **)((u8 *)((temp_v0 * 4) + var_s0) + 0x10);
                if (temp_v1 == 1) {
                    if (temp_s4 != NULL) {
                        temp_a0_2 = *(u8 **)((u8 *)temp_s4 + 0x2C);
                        if (temp_a0_2 != NULL) {
                            func_0022D0E0((s32)(temp_a0_2), 1);
                        }
                    }
                    *(u8 **)((u8 *)temp_s4 + 0x2C) = NULL;
                    func_00228430(0);
                    *(u8 **)((u8 *)temp_s4 + 0x2C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x3C), 0.0f);
                    func_00228410();
                    *(s32 *)((u8 *)temp_s1 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x2C) + 1);
                    if (*(s32 *)((u8 *)temp_s1 + 0x2C) == 5) {
                        func_001E9B00(1, 0x29, 0, 0, 0, 0x3F800000);
                    } else {
                        func_001E9B00(1, 0x28, 0, 0, 0, 0x3F800000);
                    }
                } else {
                    *(s32 *)((u8 *)temp_s1 + 0x28) = 1;
                    temp_a0_3 = *(u8 **)((u8 *)var_s0 + 0x24);
                    if (temp_a0_3 != NULL) {
                        func_0022D0E0((s32)(temp_a0_3), 1);
                    }
                    *(u8 **)((u8 *)var_s0 + 0x24) = NULL;
                    *(u8 **)((u8 *)var_s0 + 0x24) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x24), (f32) *(s32 *)((u8 *)temp_s1 + 0x2C));
                    func_001E9B00(1, 0x2A, 0, 0, 0, 0x3F800000);
                }
            }
        }
        *(s32 *)((u8 *)temp_s1 + 0x30) = 0;
        func_00228430(0);
        var_s6 = 0;
        var_s5 = var_s0;
        var_s4 = temp_s1;
        do {
            func_0022C060((s32)(*(u8 **)((u8 *)var_s5 + 0x10)), 0x3F800000);
            var_f1 = 128.5f;
            var_f0 = 159.5f;
            temp_v1_2 = *(s32 *)((u8 *)var_s4 + 0x14) & 0xF;
            switch (temp_v1_2) {                    /* irregular */
            case 1:
                var_f1 = 0.5f;
                var_f0 = 31.5f;
                break;
            case 2:
                var_f1 = 32.5f;
                var_f0 = 63.5f;
                break;
            case 8:
                var_f1 = 64.5f;
                var_f0 = 95.5f;
                break;
            case 4:
                var_f1 = 96.5f;
                var_f0 = 127.5f;
                break;
            }
            temp_v0_2 = *(u8 **)((u8 *)var_s5 + 0x10);
            if (temp_v0_2 != NULL) {
                *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x2C)) + 0x30)) + 0x40) = var_f1;
                *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s5 + 0x10)) + 0x2C)) + 0x30)) + 0x48) = var_f0;
            }
            var_s6 += 1;
            var_s5 += 4;
            var_s4 += 4;
        } while (var_s6 < 5);
        func_0022C7D0(*(u8 **)((u8 *)var_s0 + 0x24), 0, (f32) *(s32 *)((u8 *)temp_s1 + 0x2C));
        func_0022C7D0(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x24)) + 0x2C), 1, *(f32 *)((u8 *)temp_s1 + 8));
        func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 0x24)));
        func_0022C060((s32)(*(u8 **)((u8 *)var_s0 + 0xC)), 0x3F800000);
        func_0022C060((s32)(*(u8 **)((u8 *)var_s0 + 0x28)), 0x3F800000);
        func_0022C060((s32)(*(u8 **)((u8 *)var_s0 + 4)), 0x3F800000);
        func_00228410();
        if (!(*(f32 *)((u8 *)temp_s1 + 8) < *(f32 *)((u8 *)temp_s1 + 0x10)) || (*(s32 *)((u8 *)temp_s1 + 0x2C) == 5)) {
            if (*(s32 *)((u8 *)temp_s1 + 0x2C) == 5) {
                *(s32 *)((u8 *)temp_s1 + 4) = 2;
                var_v1_2 = (s32 *)(&func_00258F80);
                *(f32 *)((u8 *)temp_s1 + 8) = 0.0f;
                if (&func_00258F80 == NULL) {
                    var_v1_2 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            } else {
                *(s32 *)((u8 *)temp_s1 + 0x28) = 1;
                func_0022C7D0(*(u8 **)((u8 *)var_s0 + 0x28), 1, 180.0f);
                func_0022ACF0((s32)(*(u8 **)((u8 *)var_s0 + 0x28)));
            }
            temp_a0_4 = *(u8 **)((u8 *)var_s0 + 0x24);
            if (temp_a0_4 != NULL) {
                func_0022D0E0((s32)(temp_a0_4), 1);
            }
            *(u8 **)((u8 *)var_s0 + 0x24) = NULL;
        }
        if (*(s32 *)((u8 *)temp_s1 + 0x28) == 1) {
            *(s32 *)((u8 *)temp_s1 + 4) = 2;
            *(f32 *)((u8 *)temp_s1 + 8) = 0.0f;
            func_00228430(0);
            temp_a0_5 = *(u8 **)((u8 *)var_s0 + 4);
            if (temp_a0_5 != NULL) {
                func_0022D0E0((s32)(temp_a0_5), 1);
            }
            *(u8 **)((u8 *)var_s0 + 4) = NULL;
            *(u8 **)((u8 *)var_s0 + 4) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x10), 0.0f);
            var_s1 = 0;
            do {
                temp_s4_2 = *(u8 **)((u8 *)var_s0 + 0x10);
                if (temp_s4_2 != NULL) {
                    temp_a0_6 = *(u8 **)((u8 *)temp_s4_2 + 0x2C);
                    if (temp_a0_6 != NULL) {
                        func_0022D0E0((s32)(temp_a0_6), 1);
                    }
                }
                *(u8 **)((u8 *)temp_s4_2 + 0x2C) = NULL;
                *(u8 **)((u8 *)temp_s4_2 + 0x2C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x40), 0.0f);
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < 5);
            func_00228410();
            var_v1_3 = (s32 *)(&func_00258F80);
            if (&func_00258F80 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
        }
    }
}
