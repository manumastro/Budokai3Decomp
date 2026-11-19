/* Draft (not built): func_00218990 at 0x00218990, size 0xCC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00218990.s */

// src/unk/unk_20A4D0.c func_00218990 diff diff=6/51
s8 func_00218990(s32 arg0) {
    s32 var_a0;
    s32 var_s1;
    s8 *temp_s0;
    s8 *var_v1;

    var_a0 = arg0;
    if (var_a0 < 0xC) {
        goto block_2;
    }
    var_a0 = 0xB;
    goto block_4;
block_2:
    if (var_a0 >= 0) {
        goto block_4;
    }
    var_a0 = 0;
block_4:
    var_s1 = 0;
    temp_s0 = (signed char *)(((u8 *)&D_0046A3A0) + (var_a0 * 2));
    var_v1 = temp_s0;
    goto loop_7;
block_6:
    var_v1 += 1;
    var_s1 += 1;
loop_7:
    if (var_s1 >= 4) {
        goto block_9;
    }
    if (*var_v1 >= 0) {
        goto block_6;
    }
block_9:
    if (var_s1 > 0) {
        goto block_11;
    }
    return -1;
block_11:
    if (var_s1 != 1) {
        goto block_14;
    }
    return *temp_s0;
block_14:
    return *(temp_s0 + (func_0012EAE0(0x20) % (u32) var_s1));
}
