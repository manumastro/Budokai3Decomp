/* Draft (not built): func_002570A0 at 0x002570A0, size 0x34C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'float *' mwccps2.exe Compiler: @ 2843: func_002544A0(*(s32 *)((u8 *)var_v0 + 0x30), *(s16 *)((u8 *)var_s5_2 + 0x34));
 * Original: asm/nonmatchings/battle/skill_cmd/func_002570A0.s */

// src/battle/skill_cmd.c func_002570A0 cerr diff=-1/0
void func_002570A0(u8 *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_7;
    u8 *temp_s2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s4;
    u8 *var_s5_2;
    u8 *var_v0;
    u8 *var_v0_2;

    var_s1 = arg0 + 0x30;
    temp_s2 = gBtlSys;
    var_s0 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x30) + 0x30);
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)var_s1 + 0xC) = (f32) (*(f32 *)((u8 *)var_s1 + 0xC) + D_00470710);
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xE60);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        var_s5 = 0;
        var_s4 = var_s0;
        do {
            temp_a0_2 = *(s32 *)((u8 *)var_s4 + 0xC);
            if (temp_a0_2 != 0) {
                func_0022C060(temp_a0_2, 0x3F800000);
            }
            temp_a0_3 = *(s32 *)((u8 *)var_s4 + 0x2C);
            if (temp_a0_3 != 0) {
                func_0022C060(temp_a0_3, 0x3F800000);
            }
            var_s5 += 1;
            var_s4 += 4;
        } while (var_s5 < 2);
        temp_a0_4 = *(s32 *)((u8 *)var_s0 + 0x24);
        if (temp_a0_4 != 0) {
            func_0022C060(temp_a0_4, 0x3F800000);
        }
        if (*(s32 *)((u8 *)var_s1 + 4) == 3) {
            func_00228430(0);
            func_0022C7D0(*(s32 *)((u8 *)var_s0 + 4), 1, *(f32 *)((u8 *)var_s1 + 0xC));
            func_0022ACF0(*(s32 *)((u8 *)var_s0 + 4));
            func_00228410();
            var_s4_2 = 0;
            var_s5_2 = var_s1;
            do {
                if (func_0021C360(*(s16 *)((u8 *)var_s5_2 + 0x34)) & 1) {
                    var_v0 = (u8 *)func_00259CC0((s32 *)(*(s32 *)((u8 *)var_s0 + 4)), 0xF);
                } else {
                    var_v0 = (u8 *)func_00259CC0((s32 *)(*(s32 *)((u8 *)var_s0 + 4)), 0xE);
                }
                if (var_v0 != NULL) {
                    func_002544A0(*(s32 *)((u8 *)var_v0 + 0x30), *(s16 *)((u8 *)var_s5_2 + 0x34));
                }
                var_s4_2 += 1;
                var_s5_2 += 2;
            } while (var_s4_2 < 2);
        }
        if (*(s32 *)((u8 *)var_s1 + 4) == 2) {
            if (!(*(f32 *)((u8 *)var_s1 + 0xC) < 90.0f)) {
                *(s32 *)((u8 *)var_s1 + 4) = 3;
                *(f32 *)((u8 *)var_s1 + 0xC) = 0.0f;
                temp_a0_5 = *(s32 *)((u8 *)var_s0 + 4);
                if (temp_a0_5 != 0) {
                    func_0022D0E0(temp_a0_5, 1);
                }
                *(s32 *)((u8 *)var_s0 + 4) = 0;
                temp_a0_6 = *(s32 *)((u8 *)var_s0 + 0x24);
                if (temp_a0_6 != 0) {
                    func_0022D0E0(temp_a0_6, 1);
                }
                *(s32 *)((u8 *)var_s0 + 0x24) = 0;
                temp_a0_7 = *(u8 **)((u8 *)temp_s2 + 0xE60);
                D_00470704 = (s32)(temp_a0_7);
                D_0047070C = 0x04000000;
                D_00470708 = 0;
                amModel_SetCurrent((s32)(temp_a0_7), 0x04000000);
                D_00470238 = 0;
                func_00228430(0);
                *(s32 *)((u8 *)var_s0 + 4) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x1E8), 0);
                func_0022C7D0(*(s32 *)((u8 *)var_s0 + 4), 1, 0.0f);
                func_0022ACF0(*(s32 *)((u8 *)var_s0 + 4));
                func_00228410();
                var_s2 = 0;
                do {
                    if (func_0021C360(*(s16 *)((u8 *)var_s1 + 0x34)) & 1) {
                        var_v0_2 = (u8 *)func_00259CC0((s32 *)(*(s32 *)((u8 *)var_s0 + 4)), 0xF);
                    } else {
                        var_v0_2 = (u8 *)func_00259CC0((s32 *)(*(s32 *)((u8 *)var_s0 + 4)), 0xE);
                    }
                    if (var_v0_2 != NULL) {
                        func_002544A0(*(s32 *)((u8 *)var_v0_2 + 0x30), *(s16 *)((u8 *)var_s1 + 0x34));
                    }
                    var_s2 += 1;
                    var_s1 += 2;
                } while (var_s2 < 2);
                var_s1_2 = 0;
                do {
                    temp_a0_8 = *(s32 *)((u8 *)var_s0 + 0xC);
                    if (temp_a0_8 != 0) {
                        func_0022D0E0(temp_a0_8, 1);
                    }
                    var_s1_2 += 1;
                    *(s32 *)((u8 *)var_s0 + 0xC) = 0;
                    var_s0 += 4;
                } while (var_s1_2 < 2);
            }
        } else if (!(*(f32 *)((u8 *)var_s1 + 0xC) < 30.0f)) {
            amTask_Kill((s32)((void *)(arg0)));
        }
    }
}
