/* Draft (not built): func_002B1590 at 0x002B1590, size 0x120, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1590.s */

// src/unk/unk_2AF860.c func_002B1590 diff diff=67/72
s32 func_002B1590(u8 *arg0) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_t0;
    s32 var_t1_2;
    s32 var_t2;
    s32 var_t4;
    u8 *var_t1;
    u8 *var_t3;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_t1 = arg0 + 0xB8;
    if (temp_a2 != 0) {
        goto block_3;
    }
    return 0;
block_3:
    var_t0 = 0;
    var_t4 = 0;
    if (temp_a2 <= 0) {
        goto block_7;
    }
loop_5:
    var_t0 += *(u8 *)((u8 *)(&D_004E0660 + (*(s32 *)((u8 *)var_t1 + 4) * 0x28)) + 8) & 7;
    if (var_t0 == *(s32 *)((u8 *)arg0 + 0x20)) {
        goto block_7;
    }
    var_t4 += 1;
    var_t1 += 4;
    if (var_t4 < temp_a2) {
        goto loop_5;
    }
block_7:
    if (var_t0 >= 7) {
        goto block_18;
    }
    if (var_t4 < (temp_a2 - 1)) {
        goto block_11;
    }
    *(s32 *)((u8 *)arg0 + 0x20) = (s32) (var_t0 + 1);
    goto block_17;
block_11:
    temp_t0 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_t3 = arg0 + 0xB8;
    var_t2 = 0;
    var_t1_2 = 0;
    if (temp_t0 <= 0) {
        goto block_16;
    }
loop_13:
    if ((var_t4 + 1) < var_t1_2) {
        goto block_16;
    }
    temp_a2_2 = *(s32 *)((u8 *)var_t3 + 4);
    var_t1_2 += 1;
    temp_v1 = temp_a2_2 * 4;
    var_t3 += 4;
    var_t2 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_v1 + temp_a2_2) * 8)) + 8) & 7;
    if (var_t1_2 < temp_t0) {
        goto loop_13;
    }
block_16:
    *(s32 *)((u8 *)arg0 + 0x20) = var_t2;
block_17:
    return 1;
block_18:
    return 0;
}
