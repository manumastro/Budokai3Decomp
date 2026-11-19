/* Draft (not built): func_0024A0B0 at 0x0024A0B0, size 0x29C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024A0B0.s */

s32 func_0024A0B0(SkillObj *arg0) {
    Fighter *temp_a0;
    f32 temp_f1;
    f32 var_f1;
    f32 var_f2;
    s16 temp_v1;
    s32 temp_a0_4;
    s32 temp_s0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    temp_a0 = arg0->unk08;
    temp_v1 = arg0->unk04;
    temp_s0 = temp_a0->unk1350;
    if (temp_v1 & 0x8000) {
        return 1;
    }
    if (!(temp_v1 & 0x4000) && (arg0->unk00 <= 12.0f || temp_v1 & 0x2000)) {
        func_001D9280((s32)temp_a0);
        temp_a0_2 = arg0->unk54;
        if (temp_a0_2 != NULL) {
            func_00209390(temp_a0_2);
        }
        temp_a0_3 = arg0->unk58;
        if (temp_a0_3 != NULL) {
            func_00209390(temp_a0_3);
        }
        arg0->unk00 = 12.0f;
        arg0->unk04 |= 0x4000;
    }
    if (gBattle != NULL) {
        var_f2 = gBattle->unk88F0;
    } else
        if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = arg0->unk00 - var_f2;
    arg0->unk00 = temp_f1;
    if (temp_f1 < 0.0f) {
        arg0->unk04 |= ~0x7FFF;
        arg0->unk00 = 0.0f;
    }
    if (gBattle != NULL) {
        var_f1 = gBattle->unk88F0;
    } else
        if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_a0_4 = temp_s0 * 0x10;
    arg0->unk5C += var_f1;
    if (!(*(s32 *)((u8 *)((s32)(u8 *)temp_a0_4 + (s32)D_0046FE54) + 0x38) == 0 && !(arg0->unk5C <= 5.0f)))
        if (*(s32 *)((u8 *)((s32)(u8 *)temp_a0_4 + (s32)D_0046FE54) + 0x3C) == 0 && !(arg0->unk5C <= 10.0f)) {
        func_00249D50(arg0, 2);
    } else
        if (*(s32 *)((u8 *)((s32)(u8 *)temp_a0_4 + (s32)D_0046FE54) + 0x40) == 0 && !(arg0->unk5C <= 15.0f)) {
        func_00249D50(arg0, 3);
    } else {
        func_00249D50(arg0, 1);
    }
    temp_a0_5 = arg0->unk54;
    if (temp_a0_5 != NULL) {
        func_00208F70(temp_a0_5);
        if (*(s32 *)((u8 *)arg0->unk54 + 0x38) < 0) {
            arg0->unk54 = NULL;
        }
    }
    temp_a0_6 = arg0->unk58;
    if (temp_a0_6 != NULL) {
        func_00208F70(temp_a0_6);
        if (*(s32 *)((u8 *)arg0->unk58 + 0x38) < 0) {
            arg0->unk58 = NULL;
        }
    }
    return 0;
}
