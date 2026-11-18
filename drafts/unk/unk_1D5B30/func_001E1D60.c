/* Draft (not built): func_001E1D60 at 0x001E1D60, size 0x114, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); m 'int' to 'struct Fighter *' @ 2849: if ((*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) && (func_001DFE60(2, 0x447A0000) != 0)) {
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E1D60.s */

// src/unk/unk_1D5B30.c func_001E1D60 cerr diff=-1/0
s32 func_001E1D60(u8 *arg0) {
    s16 temp_v0_3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s0;
    s8 temp_v0_2;

    var_s0 = *(s32 *)((u8 *)arg0 + 0xBA4);
    if (var_s0 <= 0) {
        return var_s0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x200F) == 2) {
        var_s0 = *(s32 *)((u8 *)arg0 + 0x1A48);
        goto block_18;
    }
    if ((*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) && (func_001DFE60(2, 0x447A0000) != 0)) {
        return var_s0;
    }
block_18:
    var_a1 = var_s0 * 0x14;
loop_13:
    if (var_s0 > 0) {
        if (*(s8 *)((u8 *)(arg0 + var_s0) + 0x1FDC) != 0) {
            temp_v0_2 = *(s8 *)((u8 *)(*(s32 *)((u8 *)arg0 + 0x1CF8) + var_a1 + 0xD4) + 6);
            if ((temp_v0_2 != 7) && ((u32) (temp_v0_2 - 3) >= 3U)) {
                goto block_12;
            }
        } else {
block_12:
            var_a1 -= 0x14;
            var_s0 -= 1;
            goto loop_13;
        }
    }
    temp_v0_3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x16);
    if (var_s0 < temp_v0_3) {
        var_s0 = (s32) temp_v0_3;
    }
    temp_v0 = *(s32 *)((u8 *)arg0 + 0xBA4);
    return (var_s0 >= temp_v0) ? temp_v0 : var_s0;
}
