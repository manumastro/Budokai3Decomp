/* Draft (not built): func_00218B60 at 0x00218B60, size 0xDC, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 16 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00218B60.s */

// src/unk/unk_20A4D0.c func_00218B60 diff diff=16/55
extern s32 D_0046A330;
s8 func_00218B60(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s0;
    s8 *temp_s1;
    s8 *var_v1;

    var_a0 = arg0;
    if (var_a0 < 0x11) {
        goto block_2;
    }
    var_a0 = 0x10;
    goto block_4;
block_2:
    if (var_a0 >= 0) {
        goto block_4;
    }
    var_a0 = 0;
block_4:
    var_s0 = 0;
    temp_s1 = (signed char *)(&D_0046A330 + ((arg1 != 0) * 0x22) + (var_a0 * 2));
    var_v1 = temp_s1;
    goto loop_6;
block_5:
    var_v1 += 1;
    var_s0 += 1;
loop_6:
    if (var_s0 >= 4) {
        goto block_8;
    }
    if (*var_v1 >= 0) {
        goto block_5;
    }
block_8:
    if (var_s0 > 0) {
        goto block_10;
    }
    return -1;
block_10:
    if (var_s0 != 1) {
        goto block_13;
    }
    return *temp_s1;
block_13:
    return *(temp_s1 + (func_0012EAE0(0x20) % (u32) var_s0));
}
