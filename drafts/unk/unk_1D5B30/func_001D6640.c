/* Draft (not built): func_001D6640 at 0x001D6640, size 0x124, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x124
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6640.s */

// src/unk/unk_1D5B30.c func_001D6640 size diff=29/77
void func_001D6640(u8 *arg0, s32 arg1) {
    s16 temp_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a1_2;
    u8 *var_s3;

    var_s3 = arg0;
    if ((*(s8 *)((u8 *)arg0 + 0x1FCE) > 0) && (*(s8 *)((u8 *)var_s3 + 0x1FF8) > 0)) {
        var_a2 = -1;
        if (arg1 == 3) {
            var_a2 = 0;
        }
        if (arg1 == 5) {
            var_a2 = 1;
        }
        if (var_a2 >= 0) {
            var_s2 = 0;
            if (*(s16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x1CF4)) + 0x34) > 0) {
                var_s0 = var_a2 * 2;
                var_s1 = 0;
                do {
                    temp_a1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x1CF4) + var_s1) + 0x36);
                    if (temp_a1 > 0) {
                        temp_a1_2 = &D_004E0660 + (temp_a1 * 0x28);
                        if (*(u8 *)((u8 *)temp_a1_2 + 0x15) == 0x11) {
                            func_001DFE60(var_s3, 0, -(((f32) *(s16 *)((u8 *)(var_s0 + temp_a1_2) + 0x16) * (100.0f + *(f32 *)((u8 *)var_s3 + 0x1FB8))) / 100.0f));
                        }
                    }
                    var_s2 += 1;
                    var_s1 += 2;
                } while (var_s2 < *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x1CF4)) + 0x34));
            }
        }
    }
}
