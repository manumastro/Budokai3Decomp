/* Draft (not built): func_001DC080 at 0x001DC080, size 0xD0, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DC080.s */

// src/unk/unk_1D5B30.c func_001DC080 diff diff=29/52
s32 func_001DC080(u8 *arg0) {
    f32 var_f1;
    s16 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 *temp_a1;
    u8 *temp_v1;
    u8 *var_a0;

    var_a0 = arg0;
    temp_v1 = *(u8 **)((u8 *)var_a0 + 0x1354);
    temp_a1 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0x175C) * 0x10) + (temp_v1 + 0x1360)) + 0x204);
    if (*(s16 *)((u8 *)temp_a1 + 2) != 5) {
        return 0;
    }
    temp_v1_2 = *(s16 *)((u8 *)temp_a1 + 0);
    if (temp_v1_2 != 2) {
        if (temp_v1_2 != 1) {
            var_f1 = *(f32 *)((u8 *)var_a0 + 0x1788);
        } else {
            var_f1 = *(f32 *)((u8 *)var_a0 + 0x1780);
        }
    } else {
        var_f1 = *(f32 *)((u8 *)var_a0 + 0x1784);
    }
    var_v1 = 0;
loop_9:
    var_v0_2 = 1;
    if (var_f1 <= *(f32 *)((u8 *)var_a0 + 0x1780)) {
        var_v0_2 = 0;
    }
    if ((var_v0_2 ^ 1) == 0) {
        return 0;
    }
    var_v1 += 1;
    var_a0 += 4;
    if (var_v1 >= 3) {
        var_v0 = 1;
        if (!(var_f1 < 10.0f)) {
            var_v0 = 0;
        }
        return var_v0;
    }
    goto loop_9;
}
