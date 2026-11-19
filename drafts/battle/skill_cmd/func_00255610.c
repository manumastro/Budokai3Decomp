/* Draft (not built): func_00255610 at 0x00255610, size 0x394, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 105 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3E4, original 0x394
 * Original: asm/nonmatchings/battle/skill_cmd/func_00255610.s */

// src/battle/skill_cmd.c func_00255610 size diff=105/249
extern s32 func_0022D860(s32, f32);
extern void func_00254DB0(void);
void func_00255610(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v0_4;
    f32 var_f20;
    s16 temp_a0_2;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s2;
    s32 var_v1;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *var_s0;
    u8 *var_s1;
    u8 *temp_s3;

    temp_s4 = arg0 + 0x30;
    temp_s5 = gBtlSys;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30) + 0x30;
    if (gBattle != NULL) {
        var_v1 = gBattle->unk88EC;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)temp_s4 + 8) = (f32) (*(f32 *)((u8 *)temp_s4 + 8) + D_00470710);
        temp_a0 = *(s32 *)((u8 *)temp_s5 + 0xE60);
        D_00470704 = temp_a0;
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04000000);
        D_00470238 = 0;
        func_0022C060(*(s32 *)((u8 *)temp_s3 + 0x30), 1.0f);
        func_0022C7D0(*(s32 *)((u8 *)temp_s3 + 4), *(f32 *)((u8 *)temp_s4 + 8), 1);
        func_002543B0(temp_s4);
        var_s2 = 0;
        var_s1 = temp_s4;
        var_s0 = temp_s4;
        do {
            temp_v0 = func_0021C360((s32) *(s16 *)((u8 *)var_s1 + 0x20));
            temp_a0_2 = *(s16 *)((u8 *)(var_s0 + (*(s16 *)((u8 *)temp_s4 + 0x32) * 2)) + 0x24);
            switch (temp_a0_2) {                    /* irregular */
            case 1:
                var_f20 = 1.0f;
                break;
            case 2:
                var_f20 = 2.0f;
                break;
            case 4:
                var_f20 = 4.0f;
                break;
            case 8:
                var_f20 = 3.0f;
                break;
            default:
                var_f20 = 0.0f;
                break;
            }
            if (var_s2 == 0) {
                var_a1 = ((temp_v0 & 1) * 3) + 0x7D;
            } else {
                var_a1 = ((temp_v0 & 1) * 3) + 0x83;
            }
            func_0022C7D0((s32)(func_00259CC0((s32 *) *(s32 *)((u8 *)temp_s3 + 4), var_a1)), var_f20, 0);
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 6;
        } while (var_s2 < 2);
        func_0022ACF0(*(s32 *)((u8 *)temp_s3 + 4));
        if (!(*(f32 *)((u8 *)temp_s4 + 8) < 90.0f)) {
            if (*(s16 *)((u8 *)temp_s4 + 0x34) == 1) {
                *(s32 *)((u8 *)temp_s4 + 4) = 6;
                var_v0 = (int *)(&func_00254CD0);
                *(f32 *)((u8 *)temp_s4 + 8) = 0.0f;
                if (&func_00254CD0 == NULL) {
                    var_v0 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
                var_v0_2 = (int *)(&func_002545E0);
                if (&func_002545E0 == NULL) {
                    var_v0_2 = NULL;
                }
                *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_2;
                temp_a0_3 = *(s32 *)((u8 *)temp_s3 + 4);
                if (temp_a0_3 != 0) {
                    func_0022D0E0(temp_a0_3, 1);
                }
                *(s32 *)((u8 *)temp_s3 + 4) = 0;
                temp_a0_4 = *(s32 *)((u8 *)temp_s5 + 0xE60);
                D_00470704 = temp_a0_4;
                D_0047070C = 0x04000000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_4, 0x04000000);
                D_00470238 = 0;
                *(s32 *)((u8 *)temp_s3 + 4) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14) + (((func_0021C360((s32) *(s16 *)((u8 *)temp_s4 + 0x20)) & 1) + 0x3E) * 4)), 0.0f);
                return;
            }
            if (*(s32 *)((u8 *)temp_s4 + 4) != 4) {
                *(s32 *)((u8 *)temp_s4 + 4) = 3;
            }
            *(f32 *)((u8 *)temp_s4 + 8) = 0.0f;
            *(s16 *)((u8 *)temp_s4 + 0x1C) = 0;
            *(s16 *)((u8 *)temp_s4 + 0x1E) = 0;
            var_v0_3 = (int *)(&func_00254DB0);
            *(s16 *)((u8 *)temp_s4 + 0x1A) = 0;
            if (&func_00254DB0 == NULL) {
                var_v0_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
            var_v0_4 = (int *)(&Skill_DrawHeldSet);
            if (&Skill_DrawHeldSet == NULL) {
                var_v0_4 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v0_4;
            temp_a0_5 = *(s32 *)((u8 *)temp_s3 + 4);
            if (temp_a0_5 != 0) {
                func_0022D0E0(temp_a0_5, 1);
            }
            *(s32 *)((u8 *)temp_s3 + 4) = 0;
            temp_a0_6 = *(s32 *)((u8 *)temp_s3 + 0x30);
            if (temp_a0_6 != 0) {
                func_0022D0E0(temp_a0_6, 1);
            }
            *(s32 *)((u8 *)temp_s3 + 0x30) = 0;
            temp_a0_7 = *(s32 *)((u8 *)temp_s5 + 0xE60);
            D_00470704 = temp_a0_7;
            D_0047070C = 0x04000000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_7, 0x04000000);
            D_00470238 = 0;
            *(s32 *)((u8 *)temp_s3 + 4) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE68)) + 0x14) + (((func_0021C360((s32) *(s16 *)((u8 *)temp_s4 + 0x20)) & 1) + 0x30) * 4)), 0.0f);
            func_0022C7D0(*(s32 *)((u8 *)temp_s3 + 4), 0.0f, 1);
            func_002543B0(temp_s4);
            func_0022ACF0(*(s32 *)((u8 *)temp_s3 + 4));
        }
    }
}
