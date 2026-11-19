/* Draft (not built): func_002AA6B0 at 0x002AA6B0, size 0x1F0, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 89 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/scr_func/func_002AA6B0.s */

// src/battle/scr_func.c func_002AA6B0 diff diff=89/124
s32 func_002AA6B0(s32 *arg0, s32 *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f3;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg0 + 0);
    temp_a3 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 0xC) * 0xD0) + (((u8 *)&D_005BC9E0) + (*(s32 *)((u8 *)temp_v0 + 0) * 0x1A0));
    temp_a2 = *(u8 **)((u8 *)temp_a3 + 4);
    temp_f1 = *(f32 *)((u8 *)temp_a3 + 0x24);
    temp_a1 = temp_a2 + *(temp_a2 + *(s32 *)((u8 *)temp_a2 + 0x14) + (*(s32 *)((u8 *)temp_a3 + 8) * 4));
    if (temp_f1 <= 0.0f) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    var_f3 = 1.0f / temp_f1;
    if (!(var_f3 < 1.0f)) {
        var_f3 = 1.0f;
    }
    if (*(s32 *)((u8 *)temp_v0 + 0xC) != 3) {
        *(f32 *)((u8 *)temp_a3 + 0x24) = (f32) (temp_f1 - D_004708F8);
    } else {
        var_f3 = 0.0f;
    }
    temp_f1_2 = *(f32 *)((u8 *)temp_a3 + 0x50);
    *(f32 *)((u8 *)temp_a3 + 0x50) = (f32) (temp_f1_2 + (var_f3 * (((f32) *(s16 *)((u8 *)temp_a1 + 0x10) * *(f32 *)((u8 *)temp_a3 + 0x28)) - temp_f1_2)));
    temp_f1_3 = *(f32 *)((u8 *)temp_a3 + 0x54);
    *(f32 *)((u8 *)temp_a3 + 0x54) = (f32) (temp_f1_3 + (var_f3 * (((f32) *(s16 *)((u8 *)temp_a1 + 0x12) * *(f32 *)((u8 *)temp_a3 + 0x2C)) - temp_f1_3)));
    if (*(s32 *)((u8 *)temp_a3 + 0x14) & 1) {
        *(f32 *)((u8 *)temp_a3 + 0x60) = (f32) (*(f32 *)((u8 *)temp_a3 + 0x80) - (0.5f * *(f32 *)((u8 *)temp_a3 + 0x50)));
        var_f0 = *(f32 *)((u8 *)temp_a3 + 0x80) + (0.5f * *(f32 *)((u8 *)temp_a3 + 0x50));
    } else {
        var_f0 = *(f32 *)((u8 *)temp_a3 + 0x60) + *(f32 *)((u8 *)temp_a3 + 0x50);
    }
    *(f32 *)((u8 *)temp_a3 + 0x70) = var_f0;
    if (*(s32 *)((u8 *)temp_a3 + 0x14) & 2) {
        *(f32 *)((u8 *)temp_a3 + 0x64) = (f32) (*(f32 *)((u8 *)temp_a3 + 0x84) - (0.5f * *(f32 *)((u8 *)temp_a3 + 0x54)));
        var_f0_2 = *(f32 *)((u8 *)temp_a3 + 0x84) + (0.5f * *(f32 *)((u8 *)temp_a3 + 0x54));
    } else {
        var_f0_2 = *(f32 *)((u8 *)temp_a3 + 0x64) + *(f32 *)((u8 *)temp_a3 + 0x54);
    }
    *(f32 *)((u8 *)temp_a3 + 0x74) = var_f0_2;
    return 3;
}
