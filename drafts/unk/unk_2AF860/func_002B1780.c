/* Draft (not built): func_002B1780 at 0x002B1780, size 0x38C, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 158 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3E0, original 0x38C
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1780.s */

// src/unk/unk_2AF860.c func_002B1780 size diff=158/248
s32 func_002B1780(u8 *arg0, s32 arg1, s32 arg3) {
    s32 sp80;
    s32 sp84;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_s0;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t1;
    s32 var_t3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v1_2;
    u8 temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_t2;
    u8 *var_v0_2;

    var_a3 = arg3;
    var_t3 = 0;
    temp_s5 = arg1 * 0x28;
    temp_a2 = *(s32 *)((u8 *)arg0 + 0xB8);
    temp_s2 = arg0 + 0xB8;
    temp_s1 = ((u8 *)&D_004E0660) + temp_s5;
    if (temp_a2 <= 0) {
        goto block_11;
    }
    var_a3 = *(s32 *)((u8 *)arg0 + 0x20);
loop_2:
    var_t2 = arg0 + 0xB8;
    var_t1 = 0;
    var_t0 = 0;
    if (temp_a2 <= 0) {
        goto block_7;
    }
loop_4:
    if (var_t3 < var_t0) {
        goto block_7;
    }
    temp_a0 = *(s32 *)((u8 *)var_t2 + 4);
    var_t0 += 1;
    temp_v1 = temp_a0 * 4;
    var_t2 += 4;
    var_t1 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_v1 + temp_a0) * 8)) + 8) & 7;
    if (var_t0 < temp_a2) {
        goto loop_4;
    }
block_7:
    if (var_a3 != var_t1) {
        goto block_10;
    }
    var_v1 = *(s32 *)((u8 *)((var_t3 * 4) + temp_s2) + 4);
    goto block_12;
block_10:
    var_t3 += 1;
    if (var_t3 < temp_a2) {
        goto loop_2;
    }
block_11:
    var_v1 = -1;
block_12:
    *(s32 *)((u8 *)(&sp80) + 0) = *(s32 *)((u8 *)arg0 + 0xB8);
    *(f32 *)((u8 *)(&sp80) + 4) = (f32) *(f32 *)((u8 *)temp_s2 + 4);
    *(f32 *)((u8 *)(&sp80) + 8) = (f32) *(f32 *)((u8 *)temp_s2 + 8);
    *(f32 *)((u8 *)(&sp80) + 0xC) = (f32) *(f32 *)((u8 *)temp_s2 + 0xC);
    *(f32 *)((u8 *)(&sp80) + 0x10) = (f32) *(f32 *)((u8 *)temp_s2 + 0x10);
    *(f32 *)((u8 *)(&sp80) + 0x14) = (f32) *(f32 *)((u8 *)temp_s2 + 0x14);
    *(f32 *)((u8 *)(&sp80) + 0x18) = (f32) *(f32 *)((u8 *)temp_s2 + 0x18);
    *(f32 *)((u8 *)(&sp80) + 0x1C) = (f32) *(f32 *)((u8 *)temp_s2 + 0x1C);
    temp_s6 = *(s32 *)((u8 *)arg0 + 0x20);
    var_s0 = 0;
    if (var_v1 <= 0) {
        goto block_15;
    }
    if (func_002B0E00(arg0, &D_004E0660, temp_a2, var_a3) != 0) {
        goto block_15;
    }
    var_s0 = 3;
block_15:
    if (var_s0 != 0) {
        goto block_23;
    }
    var_v0 = 0;
    var_a3_2 = 0;
    var_a2 = temp_s2;
    var_t0_2 = *(((u8 *)&D_004E0668) + temp_s5) & 7;
loop_17:
    temp_a1 = *(s32 *)((u8 *)var_a2 + 4);
    if (temp_a1 <= 0) {
        goto block_20;
    }
    var_t0_2 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + (temp_a1 * 0x28)) + 8) & 7;
    if (var_t0_2 < 8) {
        goto block_20;
    }
    var_v0 = 1;
    goto block_21;
block_20:
    var_a3_2 += 1;
    var_a2 += 4;
    if (var_a3_2 < 7) {
        goto loop_17;
    }
block_21:
    if (var_v0 == 0) {
        goto block_23;
    }
    var_s0 = 2;
block_23:
    var_t0_3 = 0;
    if (var_s0 != 0) {
        goto block_35;
    }
    var_a3_3 = 0;
    var_a1 = temp_s1;
loop_25:
    temp_v1_2 = *(u16 *)((u8 *)var_a1 + 0x10);
    if ((s32) temp_v1_2 <= 0) {
        goto block_32;
    }
    var_t0_3 = 1;
    var_a2_2 = 0;
    var_a0 = temp_s2;
loop_27:
    if (*(s32 *)((u8 *)var_a0 + 4) != temp_v1_2) {
        goto block_30;
    }
    var_t0_3 = 0;
    goto block_31;
block_30:
    var_a2_2 += 1;
    var_a0 += 4;
    if (var_a2_2 < 7) {
        goto loop_27;
    }
block_31:
    if (var_t0_3 != 0) {
        goto block_33;
    }
block_32:
    var_a3_3 += 1;
    var_a1 += 2;
    if (var_a3_3 < 2) {
        goto loop_25;
    }
block_33:
    if (var_t0_3 == 0) {
        goto block_35;
    }
    var_s0 = 3;
block_35:
    if (var_s0 != 0) {
        goto block_49;
    }
    var_a3_4 = 0;
    temp_a0_2 = *(u8 *)((u8 *)temp_s1 + 9);
    var_a1_2 = 0;
    var_v1_2 = 0;
    var_v0_2 = temp_s2;
loop_37:
    temp_t3 = *(s32 *)((u8 *)var_v0_2 + 4);
    if (temp_t3 <= 0) {
        goto block_43;
    }
    if (temp_t3 != arg1) {
        goto block_43;
    }
    var_a1_2 += 1;
    if (var_a1_2 < (((s32) *(u8 *)((u8 *)temp_s1 + 8) >> 4) & 7)) {
        goto block_41;
    }
    var_a3_4 = 1;
    goto block_47;
block_41:
    if (*(s32 *)(*(s32 *)((u8 *)gSklEdit + 0x44) + arg1) != 1) {
        goto block_43;
    }
    var_a3_4 = 1;
    goto block_47;
block_43:
    if (temp_a0_2 == 0) {
        goto block_46;
    }
    if (temp_a0_2 != *(u8 *)((u8 *)(((u8 *)&D_004E0660) + (temp_t3 * 0x28)) + 9)) {
        goto block_46;
    }
    var_a3_4 = 1;
    goto block_47;
block_46:
    var_v1_2 += 1;
    var_v0_2 += 4;
    if (var_v1_2 < 7) {
        goto loop_37;
    }
block_47:
    if (var_a3_4 == 0) {
        goto block_49;
    }
    var_s0 = 1;
block_49:
    *(s32 *)((u8 *)arg0 + 0xB8) = sp80;
    *(f32 *)((u8 *)temp_s2 + 4) = (f32) *(f32 *)((u8 *)(&sp84) + 0);
    *(f32 *)((u8 *)temp_s2 + 8) = (f32) *(f32 *)((u8 *)(&sp84) + 4);
    *(f32 *)((u8 *)temp_s2 + 0xC) = (f32) *(f32 *)((u8 *)(&sp84) + 8);
    *(f32 *)((u8 *)temp_s2 + 0x10) = (f32) *(f32 *)((u8 *)(&sp84) + 0xC);
    *(f32 *)((u8 *)temp_s2 + 0x14) = (f32) *(f32 *)((u8 *)(&sp84) + 0x10);
    *(f32 *)((u8 *)temp_s2 + 0x18) = (f32) *(f32 *)((u8 *)(&sp84) + 0x14);
    *(f32 *)((u8 *)temp_s2 + 0x1C) = (f32) *(f32 *)((u8 *)(&sp84) + 0x18);
    *(s32 *)((u8 *)arg0 + 0x20) = temp_s6;
    return var_s0;
}
