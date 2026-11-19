/* Draft (not built): func_002573F0 at 0x002573F0, size 0x468, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ersion from 'int' to 'float *' @ 2831: 002544A0(*(s32 *)((u8 *)var_v0 + 0x30),(float *)(*(s16 *)((u8 *)var_s0 + 0x34)));
 * Original: asm/nonmatchings/battle/skill_cmd/func_002573F0.s */

// src/battle/skill_cmd.c func_002573F0 cerr diff=-1/0
extern void func_002570A0(void);
void func_002573F0(u8 *arg0) {
    s32 *var_v0_2;
    s32 *var_v0_3;
    f32 temp_f1;
    s16 temp_a1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_v1;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *var_s0;
    u8 *var_s1_2;
    u8 *var_s1_3;
    u8 *var_s2;
    u8 *var_s2_2;
    u8 *var_s6;
    u8 *var_s6_2;
    u8 *var_v0;

    temp_s4 = arg0 + 0x30;
    temp_s5 = gBtlSys;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30) + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)temp_s4 + 0xC) = (f32) (*(f32 *)((u8 *)temp_s4 + 0xC) + D_00470710);
        temp_a0 = *(u8 **)((u8 *)temp_s5 + 0xE60);
        D_00470704 = (int)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        func_0022C060(*(s32 *)((u8 *)temp_s3 + 8), 0x3F800000);
        func_0022C7D0(*(s32 *)((u8 *)temp_s3 + 4), 1, *(f32 *)((u8 *)temp_s4 + 0xC));
        func_0022ACF0(*(s32 *)((u8 *)temp_s3 + 4));
        var_s1 = 0;
        var_s0 = temp_s4;
        do {
            if (func_0021C360(*(s16 *)((u8 *)var_s0 + 0x34)) & 1) {
                var_v0 = (unsigned char *)(func_00259CC0((s32 *)(*(s32 *)((u8 *)temp_s3 + 4)), 0xF));
            } else {
                var_v0 = (unsigned char *)(func_00259CC0((s32 *)(*(s32 *)((u8 *)temp_s3 + 4)), 0xE));
            }
            if (var_v0 != NULL) {
                func_002544A0(*(s32 *)((u8 *)var_v0 + 0x30),(float *)(*(s16 *)((u8 *)var_s0 + 0x34)));
            }
            var_s1 += 1;
            var_s0 += 2;
        } while (var_s1 < 2);
        var_s0_2 = 0;
        var_s6 = temp_s4;
        var_s2 = temp_s4;
        var_s1_2 = temp_s3;
        do {
            temp_s7 = func_0021C360(*(s16 *)((u8 *)var_s6 + 0x34));
            temp_v1 = 1 << var_s0_2;
            if (*(s32 *)((u8 *)temp_s4 + 8) & temp_v1) {
                temp_f1 = *(f32 *)((u8 *)var_s2 + 0x18) + D_00470710;
                *(f32 *)((u8 *)var_s2 + 0x18) = temp_f1;
                if (temp_f1 < 10.0f) {
                    func_0022C060(*(s32 *)((u8 *)var_s1_2 + 0x1C), 1);
                } else {
                    *(s32 *)((u8 *)temp_s4 + 8) = (s32) (*(s32 *)((u8 *)temp_s4 + 8) ^ temp_v1);
                    *(f32 *)((u8 *)var_s2 + 0x18) = 0.0f;
                    func_0022C7D0(*(s32 *)((u8 *)var_s1_2 + 0x1C), 1, 0.0f);
                    func_0022D0E0(*(s32 *)((u8 *)var_s1_2 + 0x14), 1);
                    *(s32 *)((u8 *)var_s1_2 + 0x14) = 0;
                    temp_a1 = *(s16 *)((u8 *)var_s6 + 0x30);
                    if (temp_a1 == 3) {
                        func_0022D0E0(*(s32 *)((u8 *)var_s1_2 + 0xC), 1);
                        *(s32 *)((u8 *)var_s1_2 + 0xC) = 0;
                        *(s32 *)((u8 *)var_s1_2 + 0xC) = func_0022D860(*(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14) + ((temp_s7 & 1) * 4)) + 0x1E0), 0);
                    } else {
                        *(s32 *)((u8 *)var_s1_2 + 0x14) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14) + ((temp_a1 + (((temp_s7 & 1) * 3) + 0x7C)) * 4)), temp_a1);
                        func_0022C7D0(*(s32 *)((u8 *)var_s1_2 + 0xC), 1, 0.0f);
                        func_0022ACF0(*(s32 *)((u8 *)var_s1_2 + 0xC));
                    }
                }
            } else {
                func_0022C060(*(s32 *)((u8 *)var_s1_2 + 0xC), 1);
                temp_a0_2 = *(s32 *)((u8 *)var_s1_2 + 0x14);
                if (temp_a0_2 != 0) {
                    func_0022C060(temp_a0_2, 0x3F800000);
                }
            }
            temp_a0_3 = *(s32 *)((u8 *)var_s1_2 + 0x2C);
            if (temp_a0_3 != 0) {
                func_0022C060(temp_a0_3, 0x3F800000);
            }
            var_s0_2 += 1;
            var_s6 += 2;
            var_s2 += 4;
            var_s1_2 += 4;
        } while (var_s0_2 < 2);
        if (!(*(f32 *)((u8 *)temp_s4 + 0xC) < *(f32 *)((u8 *)temp_s4 + 0x14))) {
            *(s32 *)((u8 *)temp_s4 + 4) = 2;
            var_v0_2 = (int *)(&func_002570A0);
            *(f32 *)((u8 *)temp_s4 + 0xC) = 0.0f;
            if (&func_002570A0 == NULL) {
                var_v0_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_2;
            var_v0_3 = (int *)(&func_00256BF0);
            if (&func_00256BF0 == NULL) {
                var_v0_3 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_3;
            var_s0_3 = 0;
            var_s6_2 = temp_s4;
            var_s2_2 = temp_s4;
            var_s1_3 = temp_s3;
            do {
                *(s32 *)((u8 *)var_s6_2 + 0x18) = 0;
                temp_a0_4 = *(s32 *)((u8 *)var_s1_3 + 0x14);
                temp_s7_2 = func_0021C360(*(s16 *)((u8 *)var_s2_2 + 0x34));
                if (temp_a0_4 != 0) {
                    func_0022D0E0(temp_a0_4, 1);
                    func_0022D0E0(*(s32 *)((u8 *)var_s1_3 + 0xC), 1);
                    *(s32 *)((u8 *)var_s1_3 + 0x14) = 0;
                    *(s32 *)((u8 *)var_s1_3 + 0xC) = 0;
                    *(s32 *)((u8 *)var_s1_3 + 0xC) = func_0022D860(*(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14) + ((temp_s7_2 & 1) * 4)) + 0x1E0), 0);
                }
                func_0022C7D0(*(s32 *)((u8 *)var_s1_3 + 0x1C), 1, 0.0f);
                func_0022ACF0(*(s32 *)((u8 *)var_s1_3 + 0x1C));
                var_s0_3 += 1;
                var_s6_2 += 4;
                var_s2_2 += 2;
                var_s1_3 += 4;
            } while (var_s0_3 < 2);
            if (!(*(f32 *)((u8 *)temp_s4 + 0x28) < *(f32 *)((u8 *)temp_s4 + 0x2C))) {
                *(s32 *)((u8 *)temp_s3 + 0x24) = func_0022D860(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s4 + 0x34)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14)) + 0x1D0), 0);
            } else {
                *(s32 *)((u8 *)temp_s3 + 0x24) = func_0022D860(*(s32 *)((u8 *)(((func_0021C360(*(s16 *)((u8 *)temp_s4 + 0x36)) & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14)) + 0x1D8), 0);
            }
            func_0022C7D0(*(s32 *)((u8 *)temp_s3 + 8), 1, 240.0f);
            func_0022ACF0(*(s32 *)((u8 *)temp_s3 + 8));
        }
    }
}
