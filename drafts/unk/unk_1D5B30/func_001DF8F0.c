/* Draft (not built): func_001DF8F0 at 0x001DF8F0, size 0x198, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 91 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x78, original 0x198
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DF8F0.s */

// src/unk/unk_1D5B30.c func_001DF8F0 size diff=91/30
s32 func_001DF8F0(s32 arg0, s32 arg1) {
    s16 temp_t0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t1;
    u8 var_v1_2;
    u8 *var_a0;
    u8 *var_v1;

    var_a0 = (unsigned char *)(arg0);
    if (var_a0 != NULL) {
        goto block_3;
    }
    var_a3 = *(s32 *)((u8 *)gBattle + 0x88D8);
    var_a0 = (unsigned char *)(gBattle + 0x830);
    goto block_4;
block_3:
    var_a3 = 1;
block_4:
    if (arg1 >= 0x64) {
        goto block_14;
    }
    var_a2 = 0;
    if (var_a3 <= 0) {
        goto block_25;
    }
    if (var_a3 < 9) {
        goto block_9;
    }
loop_8:
    var_a2 += 8;
    if (var_a2 < (var_a3 - 8)) {
        goto loop_8;
    }
block_9:
    if (var_a2 >= var_a3) {
        goto block_25;
    }
loop_11:
    var_a2 += 1;
    if (var_a2 < var_a3) {
        goto loop_11;
    }
    return;
block_14:
    var_t1 = 0;
    if (var_a3 <= 0) {
        goto block_25;
    }
loop_16:
    temp_t0 = *(s16 *)((u8 *)var_a0 + 0x1FF0);
    if (temp_t0 != 0) {
        goto block_18;
    }
    var_v1 = NULL;
    goto block_19;
block_18:
    var_v1 = ((u8 *)&D_004E0660) + (temp_t0 * 0x28);
block_19:
    if (var_v1 == NULL) {
        goto block_21;
    }
    var_v1_2 = *(u8 *)((u8 *)var_v1 + 0x15);
    goto block_22;
block_21:
    var_v1_2 = 0;
block_22:
    if (arg1 != (var_v1_2 & 0xFF)) {
        goto block_24;
    }
block_24:
    var_t1 += 1;
    var_a0 += 0x2020;
    if (var_t1 < var_a3) {
        goto loop_16;
    }
block_25:
    return;
}
