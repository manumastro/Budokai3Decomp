/* Draft (not built): func_001C2B10 at 0x001C2B10, size 0x610, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 234 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5D8, original 0x610
 * Original: asm/nonmatchings/battle/btl_main/func_001C2B10.s */

// src/battle/btl_main.c func_001C2B10 size diff=234/374
f32 func_00146EB0(s32 *);
s32 func_001D9220(void *);
s32 func_001C2B10(u8 *arg0) {
    s32 sp40;
    f32 sp44;
    f32 temp_f20;
    f32 var_f1;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 var_v0_10;
    s16 var_v0_4;
    s16 var_v0_6;
    s16 var_v0_8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_7;
    s32 var_v0_9;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x1360;
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) > 0) {
        goto block_3;
    }
    return 0;
block_3:
    if (*(s8 *)((u8 *)arg0 + 0x2013) != 1) {
        goto block_5;
    }
    return 0x29;
block_5:
    if (*(s8 *)((u8 *)arg0 + 0x200F) != 1) {
        goto block_8;
    }
    return 0x33;
block_8:
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        goto block_17;
    }
    if (*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f) {
        goto block_12;
    }
    var_f1 = *(f32 *)((u8 *)arg0 + 0x17D4);
    goto block_13;
block_12:
    var_f1 = *(f32 *)((u8 *)arg0 + 0x17D0);
block_13:
    if (!(var_f1 < *(f32 *)((u8 *)arg0 + 0x17D4))) {
        goto block_17;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 2) {
        goto block_17;
    }
    if (func_001C2340(temp_s0) == 0) {
        goto block_17;
    }
    return 4;
block_17:
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 2) {
        goto block_33;
    }
    if (func_001C21C0(temp_s0) == 0) {
        goto block_33;
    }
    if (gBattle == NULL) {
        goto block_22;
    }
    var_v0 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x800;
    goto block_23;
block_22:
    var_v0 = 0;
block_23:
    if (var_v0 != 0) {
        goto block_27;
    }
    if (*(s16 *)((u8 *)arg0 + 0x1FEC) == 0) {
        goto block_27;
    }
    return 0x30;
block_27:
    if (gBattle == NULL) {
        goto block_30;
    }
    var_v0_2 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x400;
    goto block_31;
block_30:
    var_v0_2 = 0;
block_31:
    if (var_v0_2 != 0) {
        goto block_33;
    }
    return 0x31;
block_33:
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x42F00000) == 0) {
        goto block_70;
    }
    temp_v0 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_v0 > 0) {
        goto block_37;
    }
    var_v0_3 = 0;
    goto block_50;
block_37:
    if (temp_v0 < 7) {
        goto block_40;
    }
    var_v0_3 = 0;
    goto block_50;
block_40:
    temp_a0 = temp_s0 + 0xE4 + (*(s32 *)((u8 *)temp_s0 + 0x5C) * 4);
    var_v0_3 = 0;
    if (*(s16 *)((u8 *)temp_a0 + 0) == -1) {
        goto block_43;
    }
    goto block_50;
block_43:
    var_v0_4 = *(s16 *)((u8 *)temp_a0 + 2);
    if (var_v0_4 >= 0) {
        goto block_46;
    }
    var_v0_4 = -var_v0_4;
block_46:
    if (var_v0_4 < 7) {
        goto block_49;
    }
    var_v0_3 = 0;
    goto block_50;
block_49:
    var_v0_3 = 1;
block_50:
    if (var_v0_3 == 0) {
        goto block_52;
    }
    return 8;
block_52:
    temp_v0_2 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_v0_2 > 0) {
        goto block_55;
    }
    var_v0_5 = 0;
    goto block_68;
block_55:
    if (temp_v0_2 < 7) {
        goto block_58;
    }
    var_v0_5 = 0;
    goto block_68;
block_58:
    temp_a0_2 = temp_s0 + 0xE4 + (*(s32 *)((u8 *)temp_s0 + 0x5C) * 4);
    var_v0_5 = 0;
    if (*(s16 *)((u8 *)temp_a0_2 + 0) == 1) {
        goto block_61;
    }
    goto block_68;
block_61:
    var_v0_6 = *(s16 *)((u8 *)temp_a0_2 + 2);
    if (var_v0_6 >= 0) {
        goto block_64;
    }
    var_v0_6 = -var_v0_6;
block_64:
    if (var_v0_6 < 7) {
        goto block_67;
    }
    var_v0_5 = 0;
    goto block_68;
block_67:
    var_v0_5 = 1;
block_68:
    if (var_v0_5 == 0) {
        goto block_106;
    }
    return 7;
block_70:
    temp_v0_3 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_v0_3 > 0) {
        goto block_73;
    }
    var_v0_7 = 0;
    goto block_86;
block_73:
    if (temp_v0_3 < 7) {
        goto block_76;
    }
    var_v0_7 = 0;
    goto block_86;
block_76:
    temp_a0_3 = temp_s0 + 0xE4 + (*(s32 *)((u8 *)temp_s0 + 0x5C) * 4);
    var_v0_7 = 0;
    if (*(s16 *)((u8 *)temp_a0_3 + 0) == -1) {
        goto block_79;
    }
    goto block_86;
block_79:
    var_v0_8 = *(s16 *)((u8 *)temp_a0_3 + 2);
    if (var_v0_8 >= 0) {
        goto block_82;
    }
    var_v0_8 = -var_v0_8;
block_82:
    if (var_v0_8 < 7) {
        goto block_85;
    }
    var_v0_7 = 0;
    goto block_86;
block_85:
    var_v0_7 = 1;
block_86:
    if (var_v0_7 == 0) {
        goto block_88;
    }
    return 7;
block_88:
    temp_v0_4 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_v0_4 > 0) {
        goto block_91;
    }
    var_v0_9 = 0;
    goto block_104;
block_91:
    if (temp_v0_4 < 7) {
        goto block_94;
    }
    var_v0_9 = 0;
    goto block_104;
block_94:
    temp_a0_4 = temp_s0 + 0xE4 + (*(s32 *)((u8 *)temp_s0 + 0x5C) * 4);
    var_v0_9 = 0;
    if (*(s16 *)((u8 *)temp_a0_4 + 0) == 1) {
        goto block_97;
    }
    goto block_104;
block_97:
    var_v0_10 = *(s16 *)((u8 *)temp_a0_4 + 2);
    if (var_v0_10 >= 0) {
        goto block_100;
    }
    var_v0_10 = -var_v0_10;
block_100:
    if (var_v0_10 < 7) {
        goto block_103;
    }
    var_v0_9 = 0;
    goto block_104;
block_103:
    var_v0_9 = 1;
block_104:
    if (var_v0_9 == 0) {
        goto block_106;
    }
    return 8;
block_106:
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43110000) == 0) {
        goto block_111;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x50) > 0) {
        goto block_110;
    }
    if (*(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x58) * 4) + temp_s0) + 0x64) == 0) {
        goto block_111;
    }
block_110:
    return 0xD;
block_111:
    if (func_001D9220(arg0) == 0) {
        goto block_117;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x50) <= 0) {
        goto block_117;
    }
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43480000) == 0) {
        goto block_116;
    }
    return 3;
block_116:
    return 1;
block_117:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp44 = 0.0f;
    temp_v1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xCAC);
    temp_f20 = func_00146EB0(&sp40);
    if (temp_v1 == 6) {
        goto block_121;
    }
    if (temp_v1 == 0xB) {
        goto block_121;
    }
    if (temp_f20 < 225.0f) {
        goto block_123;
    }
block_121:
    if (func_001C26A0(temp_s0) == 0) {
        goto block_123;
    }
    return 9;
block_123:
    if (*(s16 *)((u8 *)arg0 + 0xCAC) == 0xB) {
        goto block_127;
    }
    if (!(temp_f20 < 19600.0f)) {
        goto block_131;
    }
    if (func_001C24C0(temp_s0) == 0) {
        goto block_131;
    }
    return 0xB;
block_127:
    if (!(temp_f20 < 22500.0f)) {
        goto block_131;
    }
    if (func_001C24C0(temp_s0) == 0) {
        goto block_131;
    }
    return 0xB;
block_131:
    if (func_001C28F0(temp_s0) == 0) {
        goto block_133;
    }
    return 5;
block_133:
    if (func_001C27E0(temp_s0) == 0) {
        goto block_135;
    }
    return 6;
block_135:
    temp_v0_5 = *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x58) * 4) + temp_s0) + 0x64);
    if (temp_v0_5 <= 0) {
        goto block_137;
    }
    return 2;
block_137:
    if (temp_v0_5 >= 0) {
        goto block_139;
    }
    return 3;
block_139:
    return 0;
}
