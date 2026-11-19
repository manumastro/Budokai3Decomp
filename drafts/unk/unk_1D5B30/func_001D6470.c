/* Draft (not built): func_001D6470 at 0x001D6470, size 0x1D0, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 107 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6470.s */

// src/unk/unk_1D5B30.c func_001D6470 diff diff=107/116
f32 func_001D6470(u8 *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f20;
    s16 temp_a0;
    s32 var_s0;
    s32 var_s1;
    u8 temp_v1;
    u8 *temp_a0_2;
    u8 *var_v1;

    var_s1 = 0;
    var_v1 = *(u8 **)((u8 *)arg0 + 0x1CF4);
    var_f20 = fparg0;
    if (*(s16 *)((u8 *)var_v1 + 0x34) > 0) {
        var_s0 = 0;
        do {
            temp_a0 = *(s16 *)((u8 *)(var_v1 + var_s0) + 0x36);
            if (temp_a0 > 0) {
                temp_a0_2 = ((u8 *)&D_004E0660) + (temp_a0 * 0x28);
                temp_v1 = *(u8 *)((u8 *)temp_a0_2 + 0x15);
                switch (temp_v1) {                  /* irregular */
                case 18:
                    var_f1 = 0.01f * (100.0f - (((f32) *(s16 *)((u8 *)temp_a0_2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f));
                    if (!(var_f1 <= 1.0f)) {
                        var_f1 = 1.0f;
                    } else if (var_f1 < 0.0f) {
                        var_f1 = 0.0f;
                    }
                    var_f20 *= var_f1;
                    break;
                case 19:
                    temp_f0 = 0.01f * (((f32) *(s16 *)((u8 *)temp_a0_2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
                    temp_f21 = var_f20 * temp_f0;
                    temp_f0_2 = temp_f21 * temp_f0;
                    if (M2C_BITWISE(s32, temp_f0_2) > 0) {
                        var_f20 -= temp_f21 * ((f32) func_001DFE60((Fighter *)(arg0), 0, (f32) temp_f0_2) / (f32) temp_f0_2);
                    }
                    break;
                }
            }
            var_v1 = *(u8 **)((u8 *)arg0 + 0x1CF4);
            var_s1 += 1;
            var_s0 += 2;
        } while (var_s1 < *(s16 *)((u8 *)var_v1 + 0x34));
    }
    return var_f20;
}
