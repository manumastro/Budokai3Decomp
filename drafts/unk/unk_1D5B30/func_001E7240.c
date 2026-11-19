/* Draft (not built): func_001E7240 at 0x001E7240, size 0x180, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 27 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E7240.s */

void func_001E7240(u8 *arg0) {
    f32 temp_f1;
    f32 var_f12;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_v1_2;
    if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
        temp_s0 = *(u8 **)((u8 *)arg0 + 0x540);
        if (temp_s0 != NULL) {
            temp_a1 = *(s32 *)((u8 *)arg0 + 0x640);
            if (temp_a1 >= 0) {
                temp_v1 = (temp_a1 >> 0x10) - 1;
                temp_a2 = temp_a1 & 0xFFFF;
                if (temp_v1 < 0) {
                    var_v0 = 0;
                } else {
                    var_v0 = 0;
                    if (temp_v1 >= 0x10) {
                    } else {
                        temp_v1_2 = *(u8 **)((u8 *)(temp_v1 * 4 + temp_s0) + 0x2C);
                        var_v0 = 0;
                        if (temp_v1_2 == NULL) {
                        } else
                            if (temp_a2 >= 0 && temp_a2 < *(s32 *)((u8 *)temp_v1_2 + 0x14) && ((var_v0 = 1, 0 < *(s32 *)((u8 *)(temp_a2 * 0x10 + *(s32 *)((u8 *)temp_v1_2 + 0x18)) + 4)))) {
                        } else {
                            var_v0 = 0;
                        }
                    }
                }
                if (var_v0 != 0) {
                    if (*(s32 *)((u8 *)temp_s0 + 0x78) != temp_a1) {
                        *(s8 *)((u8 *)temp_s0 + 0x6E) = -1;
                        *(s8 *)((u8 *)temp_s0 + 0x6C) = -1;
                        *(s32 *)((u8 *)temp_s0 + 0x70) = -1;
                        *(f32 *)((u8 *)temp_s0 + 0x74) = -1.0f;
                        *(s8 *)((u8 *)temp_s0 + 0x6D) = -1;
                        *(s8 *)((u8 *)temp_s0 + 0x6F) = -1;
                        *(s32 *)((u8 *)temp_s0 + 0x78) = temp_a1;
                    }
                    temp_f1 = *(f32 *)((u8 *)arg0 + 0x644);
                    if (!(temp_f1 <= *(f32 *)((u8 *)temp_s0 + 0x74))) {
                        *(s32 *)((u8 *)temp_s0 + 0x70) = -1;
                    }
                    *(f32 *)((u8 *)temp_s0 + 0x7C) = temp_f1;
                    func_001A5510(temp_s0 + 0x20, temp_a1, temp_a2);
                } else {
                    goto block_24;
                }
            } else {
                block_24:
                func_001C9EF0(temp_s0, 0, 0);
            }
            if (*(s8 *)((u8 *)temp_s0 + 0x6C) == *(s8 *)((u8 *)temp_s0 + 0x6D)) {
                var_f12 = 0.6f;
            } else {
                var_f12 = 0.75f;
            }
            func_001A5350(temp_s0 + 0x20, var_f12);
        }
    }
}
