/* Draft (not built): func_001D9B30 at 0x001D9B30, size 0xBC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x10C, original 0xBC
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D9B30.s */

// src/unk/unk_1D5B30.c func_001D9B30 size diff=31/67
s32 func_001D9B30(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;
    s64 temp_v1_2;
    s64 var_v1;
    s8 temp_a1;
    s8 temp_a2;
    s8 var_a2;
    s8 var_t0;

    temp_a1 = *(s8 *)((u8 *)arg0 + 0x1964);
    var_v0 = 0;
    temp_a2 = *(s8 *)((u8 *)arg0 + 0x1965);
    var_t0 = temp_a1;
    if (temp_a1 != temp_a2) {
loop_2:
        if (*(s32 *)((u8 *)(arg0 + (var_t0 * 4)) + 0x18E4) == *(s32 *)((u8 *)arg0 + 0x17F4)) {
            var_v0 = 1;
        } else {
            var_t0 = (s8) ((s32) (var_t0 + 1) % 32);
            if (var_t0 != temp_a2) {
                goto loop_2;
            }
        }
    }
    temp_v1 = temp_a2 + 1;
    var_a2 = temp_v1 & 0x1F;
    if (temp_v1 < 0) {
        var_v1 = (s64) temp_a1 << 0x38;
        if (var_a2 != 0) {
            var_a2 -= 0x20;
            goto block_9;
        }
    } else {
block_9:
        var_v1 = (s64) temp_a1 << 0x38;
    }
    temp_v1_2 = var_v1 >> 0x38;
    if (temp_v1_2 == var_a2) {
        *(s8 *)((u8 *)arg0 + 0x1964) = (s8) ((s32) (temp_v1_2 + 1) % 32);
    }
    *(s32 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0x1965) * 4) + arg0) + 0x18E4) = (s32) *(s32 *)((u8 *)arg0 + 0x17F4);
    *(s8 *)((u8 *)arg0 + 0x1965) = var_a2;
    return var_v0;
}
