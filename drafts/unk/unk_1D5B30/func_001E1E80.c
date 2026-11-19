/* Draft (not built): func_001E1E80 at 0x001E1E80, size 0x1E4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x1E4
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E1E80.s */

// src/unk/unk_1D5B30.c func_001E1E80 size diff=68/144
s16 func_001E1E80(Fighter *arg0) {
    s16 temp_v0_2;
    s16 var_s2;
    s32 temp_a1;
    s32 var_s0;
    s8 temp_v0;
    s8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_v1_2;

    temp_a1 = arg0->fBA4;
    temp_a0 = (unsigned char *)(((s32)(((u8 *)(temp_a1 * 0x14)))) + ((s32)(arg0->f1CF8)));
    if (*(s8 *)((u8 *)temp_a0 + 0xDA) == 6) {
        return 0;
    }
    var_s2 = temp_a1 + 1;
    if (var_s2 >= 8) {
        return 0;
    }
    temp_v1 = *(s8 *)((u8 *)temp_a0 + 0xEE);
    if (temp_v1 == 0) {
        return 0;
    }
    if (temp_v1 == 8) {
        return 0;
    }
    if (var_s2 < 8) {
        var_s0 = var_s2 * 0x14;
loop_13:
        temp_v1_2 = ((u8 *)arg0->f1CF8) + var_s0;
        temp_s1 = temp_v1_2 + 0xD4;
        if (*(s8 *)((u8 *)(arg0 + var_s2) + 0x1FDC) == 0) {
            var_s2 -= 1;
        } else {
            temp_a0_2 = D_004E0660 + (*(s16 *)((u8 *)temp_v1_2 + 0xD4) * 0x28);
            if (!(*(u8 *)((u8 *)temp_a0_2 + 0xE) & ((1 << arg0->fBA4) & 0xFF))) {
                var_s2 -= 1;
            } else if (func_001DFE60(arg0, 2, (f32) (*(u8 *)((u8 *)temp_a0_2 + 0xF) * 0x64)) == 0) {
                var_s2 -= 1;
            } else if (*(s8 *)((u8 *)temp_s1 + 6) != 6) {
                temp_v0 = *(s8 *)((u8 *)temp_s1 + 0x1A);
                if ((temp_v0 != 0) && ((u32) (temp_v0 - 7) >= 2U) && (var_s2 != 7)) {
                    var_s2 += 1;
                    var_s0 += 0x14;
                    if (var_s2 < 8) {
                        goto loop_13;
                    }
                }
            }
        }
    }
    temp_v0_2 = *(s16 *)((u8 *)(arg0->f1CF4) + 0x18);
    if (temp_v0_2 < var_s2) {
        var_s2 = temp_v0_2;
    }
    return (arg0->fBA4 >= var_s2) ? 0 : var_s2;
}
