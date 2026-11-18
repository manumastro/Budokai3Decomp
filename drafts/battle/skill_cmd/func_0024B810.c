/* Draft (not built): func_0024B810 at 0x0024B810, size 0x29C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); <= 10.0f)) { @ 543: if ((*(s32 *)((u8 *)(((u8 *)temp_a0_4) + D_0046FE54) + 0x38) == 0) && !(*(f32 *)((u8 *)arg0 + 0x50) 
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024B810.s */

// src/battle/skill_cmd.c func_0024B810 cerr diff=-1/0
s32 func_0024B810(u8 *arg0) {
    f32 temp_f1;
    f32 var_f1;
    f32 var_f2;
    s16 temp_v1;
    s32 temp_a0_4;
    s32 temp_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_a0_6;

    temp_a0 = *(u8 **)((u8 *)arg0 + 8);
    temp_v1 = *(s16 *)((u8 *)arg0 + 4);
    temp_s0 = *(s32 *)((u8 *)temp_a0 + 0x1350);
    if (temp_v1 & 0x8000) {
        return 1;
    }
    if (!(temp_v1 & 0x4000) && ((*(f32 *)((u8 *)arg0 + 0) <= 12.0f) || (temp_v1 & 0x2000))) {
        func_001D9280((s32)(temp_a0));
        temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x44);
        if (temp_a0_2 != NULL) {
            func_00209390(temp_a0_2);
        }
        temp_a0_3 = *(u8 **)((u8 *)arg0 + 0x48);
        if (temp_a0_3 != NULL) {
            func_00209390(temp_a0_3);
        }
        *(f32 *)((u8 *)arg0 + 0) = 12.0f;
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x4000);
    }
    if (gBattle != NULL) {
        var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0) - var_f2;
    *(f32 *)((u8 *)arg0 + 0) = temp_f1;
    if (temp_f1 < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0) = 0.0f;
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | ~0x7FFF);
    }
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0_4 = temp_s0 * 0x10;
    *(f32 *)((u8 *)arg0 + 0x50) = (f32) (*(f32 *)((u8 *)arg0 + 0x50) + var_f1);
    if ((*(s32 *)((u8 *)(((u8 *)temp_a0_4) + D_0046FE54) + 0x38) == 0) && !(*(f32 *)((u8 *)arg0 + 0x50) <= 5.0f)) {
        func_00249D50((struct SkillObj *)(arg0), 1);
    } else if ((*(s32 *)((u8 *)(((u8 *)temp_a0_4) + D_0046FE54) + 0x3C) == 0) && !(*(f32 *)((u8 *)arg0 + 0x50) <= 10.0f)) {
        func_00249D50((struct SkillObj *)(arg0), 2);
    } else if ((*(s32 *)((u8 *)(((u8 *)temp_a0_4) + D_0046FE54) + 0x40) == 0) && !(*(f32 *)((u8 *)arg0 + 0x50) <= 15.0f)) {
        func_00249D50((struct SkillObj *)(arg0), 3);
    }
    temp_a0_5 = *(u8 **)((u8 *)arg0 + 0x44);
    if (temp_a0_5 != NULL) {
        func_00208F70(temp_a0_5);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x44)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x44) = NULL;
        }
    }
    temp_a0_6 = *(u8 **)((u8 *)arg0 + 0x48);
    if (temp_a0_6 != NULL) {
        func_00208F70(temp_a0_6);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x48)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x48) = NULL;
        }
    }
    return 0;
}
