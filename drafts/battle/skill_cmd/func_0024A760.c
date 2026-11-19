/* Draft (not built): func_0024A760 at 0x0024A760, size 0x140, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x154, original 0x140
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024A760.s */

// src/battle/skill_cmd.c func_0024A760 size diff=23/85
s32 func_001E2630(s32, void *);
s32 func_0024A760(u8 *arg0) {
    f32 temp_f1;
    f32 var_f2;
    f32 var_f2_2;
    u8 *temp_a0;
    u8 *temp_a1;

    temp_a1 = *(u8 **)((u8 *)arg0 + 0xC);
    if (gBattle != NULL) {
        var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    *(f32 *)((u8 *)arg0 + 0x4C) = (f32) (*(f32 *)((u8 *)arg0 + 0x4C) + (*(f32 *)((u8 *)temp_a1 + 0xD0) * var_f2));
    if (gBattle != NULL) {
        var_f2_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2_2 = 1.0f;
    } else {
        var_f2_2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x50) + var_f2_2;
    *(f32 *)((u8 *)arg0 + 0x50) = temp_f1;
    if (!(temp_f1 <= 32.0f) && (*(s16 *)((u8 *)arg0 + 4) & 0x800)) {
        func_001E2630(*(s32 *)((u8 *)arg0 + 8), temp_a1);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x800);
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x44);
    if (temp_a0 != NULL) {
        func_00208F70(temp_a0);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x44)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x44) = NULL;
            return 1;
        }
    }
    return 0;
}
