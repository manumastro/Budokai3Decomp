/* Draft (not built): func_001E1D60 at 0x001E1D60, size 0x114, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E1D60.s */

s32 func_001E1D60(Fighter *arg0) {
    s16 temp_v0_3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s0;
    s8 temp_v0_2;
    var_s0 = arg0->fBA4;
    if (var_s0 > 0) {
        goto block_3;
    }
    return var_s0;
    block_3:
    if (arg0->f200F != 2) {
        goto block_5;
    }

    var_s0 = arg0->f1A48;
    goto block_18;
    block_5:
    if (arg0->f1FF8 == -1) {
        goto block_18;
    }

    if (func_001DFE60(arg0, 2, 1000.0f) == 0) {
        goto block_18;
    }
    return var_s0;
    block_8:
    if (*(s8 *)((u8 *)(arg0 + var_s0) + 0x1FDC) == 0) {
        goto block_12;
    }

    temp_v0_2 = *(s8 *)((u8 *)((u8 *)arg0->f1CF8 + var_a1 + 0xD4) + 6);
    if (temp_v0_2 == 7) {
        goto block_14;
    }
    if ((u32)(temp_v0_2 - 3) < 3U) {
        goto block_14;
    }
    block_12:
    var_a1 -= 0x14;

    var_s0 -= 1;
    loop_13:
    if (var_s0 > 0) {
        goto block_8;
    }

    block_14:
    temp_v0_3 = *(s16 *)((u8 *)arg0->f1CF4 + 0x16);

    if (var_s0 >= temp_v0_3) {
        goto block_16;
    }
    var_s0 = (s32)temp_v0_3;
    block_16:
    temp_v0 = arg0->fBA4;

    return (temp_v0 <= var_s0) ? (temp_v0) : (var_s0);
    block_18:
    var_a1 = var_s0 * 0x14;

    goto loop_13;
}
