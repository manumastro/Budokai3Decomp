/* Draft (not built): func_002B1160 at 0x002B1160, size 0x428, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 160 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x404, original 0x428
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1160.s */

// src/unk/unk_2AF860.c func_002B1160 size diff=160/257
s32 func_002B1160(u8 *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t3;
    s32 var_t3_3;
    s32 var_t4;
    s32 var_t4_2;
    s32 var_t5;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s0;
    u8 *var_t2;
    u8 *var_t2_2;
    u8 *var_t3_2;
    u8 *var_t5_2;
    u8 *var_v0_3;

    temp_s0 = arg0 + 0xB8;
    temp_v0 = func_002B1780();
    if (temp_v0 == 3) {
        goto block_66;
    }
    if (temp_v0 == 2) {
        goto block_65;
    }
    if (temp_v0 == 1) {
        goto block_63;
    }
    if (temp_v0 == 0) {
        goto block_6;
    }
    goto block_67;
block_6:
    temp_a2 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_t3 = 0;
    if (temp_a2 <= 0) {
        goto block_17;
    }
loop_8:
    var_t2 = arg0 + 0xB8;
    var_t1 = 0;
    var_t0 = 0;
    if (temp_a2 <= 0) {
        goto block_13;
    }
loop_10:
    if (var_t3 < var_t0) {
        goto block_13;
    }
    temp_a1 = *(s32 *)((u8 *)var_t2 + 4);
    var_t0 += 1;
    temp_v1 = temp_a1 * 4;
    var_t2 += 4;
    var_t1 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_v1 + temp_a1) * 8)) + 8) & 7;
    if (var_t0 < temp_a2) {
        goto loop_10;
    }
block_13:
    if (*(s32 *)((u8 *)arg0 + 0x20) != var_t1) {
        goto block_16;
    }
    var_v0_2 = *(s32 *)((u8 *)((var_t3 * 4) + temp_s0) + 4);
    goto block_18;
block_16:
    var_t3 += 1;
    if (var_t3 < temp_a2) {
        goto loop_8;
    }
block_17:
    var_v0_2 = -1;
block_18:
    if (arg1 != var_v0_2) {
        goto block_20;
    }
    return 1;
block_20:
    if (func_002B0E00(arg0) == 0) {
        goto block_67;
    }
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_a1 = -1;
    if (temp_v0_2 <= 0) {
        goto block_49;
    }
    var_a0 = 0;
    goto block_68;
block_24:
    if (var_a1 <= 0) {
        goto block_26;
    }
    temp_a2_2 = *(s32 *)((u8 *)var_v0_3 + 4);
    *(s32 *)((u8 *)var_v0_3 + 4) = var_a1;
    var_a1 = temp_a2_2;
block_26:
    temp_t2 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_t5 = 0;
    var_t4 = 0;
    if (temp_t2 <= 0) {
        goto block_31;
    }
    var_t3_2 = arg0 + 0xB8;
loop_28:
    if (var_a0 < var_t4) {
        goto block_31;
    }
    temp_t0 = *(s32 *)((u8 *)var_t3_2 + 4);
    var_t4 += 1;
    temp_a3 = temp_t0 * 4;
    var_t3_2 += 4;
    var_t5 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_a3 + temp_t0) * 8)) + 8) & 7;
    if (var_t4 < temp_t2) {
        goto loop_28;
    }
block_31:
    if (var_t5 != *(s32 *)((u8 *)arg0 + 0x20)) {
        goto block_38;
    }
    var_a1 = *(s32 *)((u8 *)var_v0_3 + 4);
    var_t5_2 = arg0 + 0xB8;
    var_t4_2 = 0;
    *(s32 *)((u8 *)var_v0_3 + 4) = arg1;
    temp_t2_2 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_t3_3 = 0;
    if (temp_t2_2 <= 0) {
        goto block_37;
    }
loop_34:
    if (var_a0 < var_t3_3) {
        goto block_37;
    }
    temp_t0_2 = *(s32 *)((u8 *)var_t5_2 + 4);
    var_t3_3 += 1;
    temp_a3_2 = temp_t0_2 * 4;
    var_t5_2 += 4;
    var_t4_2 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_a3_2 + temp_t0_2) * 8)) + 8) & 7;
    if (var_t3_3 < temp_t2_2) {
        goto loop_34;
    }
block_37:
    *(s32 *)((u8 *)arg0 + 0x20) = var_t4_2;
block_38:
    var_v0_3 += 4;
    var_a0 += 1;
loop_39:
    if (var_a0 < *(s32 *)((u8 *)arg0 + 0xB8)) {
        goto block_24;
    }
block_40:
    *(s32 *)((u8 *)arg0 + 0xB8) = (s32) (*(s32 *)((u8 *)arg0 + 0xB8) + 1);
    if (var_a1 <= 0) {
        goto block_42;
    }
    *(s32 *)((u8 *)((var_a0 * 4) + temp_s0) + 4) = var_a1;
    goto block_48;
block_42:
    var_t2_2 = arg0 + 0xB8;
    *(s32 *)((u8 *)((var_a0 * 4) + temp_s0) + 4) = arg1;
    var_t1_2 = 0;
    temp_a3_3 = *(s32 *)((u8 *)arg0 + 0xB8);
    var_t0_2 = 0;
    if (temp_a3_3 <= 0) {
        goto block_47;
    }
loop_44:
    if (var_a0 < var_t0_2) {
        goto block_47;
    }
    temp_a2_3 = *(s32 *)((u8 *)var_t2_2 + 4);
    var_t0_2 += 1;
    temp_v1_2 = temp_a2_3 * 4;
    var_t2_2 += 4;
    var_t1_2 += *(u8 *)((u8 *)(((u8 *)&D_004E0660) + ((temp_v1_2 + temp_a2_3) * 8)) + 8) & 7;
    if (var_t0_2 < temp_a3_3) {
        goto loop_44;
    }
block_47:
    *(s32 *)((u8 *)arg0 + 0x20) = var_t1_2;
block_48:
    return 1;
block_49:
    temp_v0_3 = func_002B1780(arg0, arg1);
    if (temp_v0_3 == 3) {
        goto block_60;
    }
    if (temp_v0_3 == 2) {
        goto block_59;
    }
    if (temp_v0_3 == 1) {
        goto block_57;
    }
    if (temp_v0_3 == 0) {
        goto block_54;
    }
    goto block_61;
block_54:
    temp_a1_2 = *(s32 *)((u8 *)arg0 + 0xB8);
    *(s32 *)((u8 *)arg0 + 0xB8) = (s32) (temp_a1_2 + 1);
    *(s32 *)((u8 *)((temp_a1_2 * 4) + (arg0 + 0xB8)) + 4) = arg1;
    *(s32 *)((u8 *)arg0 + 0x20) = (s32) (*(s32 *)((u8 *)arg0 + 0x20) + (*(((u8 *)&D_004E0668) + (arg1 * 0x28)) & 7));
    if (*(s32 *)((u8 *)arg0 + 0x20) < 8) {
        goto block_56;
    }
    *(s32 *)((u8 *)arg0 + 0x20) = 7;
block_56:
    var_v0 = 1;
    goto block_62;
block_57:
    *(s32 *)((u8 *)gSklEdit + 0x30) = 0;
    goto block_61;
block_59:
    *(s32 *)((u8 *)gSklEdit + 0x30) = 1;
    goto block_61;
block_60:
    *(s32 *)((u8 *)gSklEdit + 0x30) = 2;
block_61:
    var_v0 = 0;
block_62:
    return var_v0;
block_63:
    *(s32 *)((u8 *)gSklEdit + 0x30) = 0;
    goto block_67;
block_65:
    *(s32 *)((u8 *)gSklEdit + 0x30) = 1;
    goto block_67;
block_66:
    *(s32 *)((u8 *)gSklEdit + 0x30) = 2;
block_67:
    return 0;
block_68:
    if (temp_v0_2 <= 0) {
        goto block_40;
    }
    var_v0_3 = temp_s0;
    goto loop_39;
}
