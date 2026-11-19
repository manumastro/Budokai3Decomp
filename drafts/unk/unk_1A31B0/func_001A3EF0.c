/* Draft (not built): func_001A3EF0 at 0x001A3EF0, size 0x568, segment unk/unk_1A31B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 139 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x508, original 0x568
 * Original: asm/nonmatchings/unk/unk_1A31B0/func_001A3EF0.s */

// src/unk/unk_1A31B0.c func_001A3EF0 size diff=139/322
s32 memcpy(void *, void *, s32);
void func_001A3EF0(s32 arg0) {
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_a2_2;
    u16 temp_a0;
    u16 var_v1;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = (unsigned char *)(D_00492EC0 + (arg0 << 5));
    temp_s1 = ((u8 *)&D_00492FC0) + (arg0 * 0xB8);
    temp_a0 = ~*(u16 *)((u8 *)temp_s2 + 2);
    temp_s0 = temp_a0 & 0xFFFF;
    temp_a1 = (*(u16 *)((u8 *)temp_s1 + 0xC) ^ temp_s0) & 0xFFFF;
    *(u16 *)((u8 *)temp_s1 + 0xE) = (u16) (temp_a1 & temp_s0);
    *(u16 *)((u8 *)temp_s1 + 0x10) = (u16) (temp_a1 & *(u16 *)((u8 *)temp_s1 + 0xC));
    *(u16 *)((u8 *)temp_s1 + 0xC) = temp_a0;
    if (*(s32 *)((u8 *)temp_s1 + 4) == 7) {
        goto block_3;
    }
    goto block_4;
block_3:
    *(s8 *)((u8 *)temp_s1 + 0x18) = (s8) (*(u8 *)((u8 *)temp_s2 + 4) - 0x80);
    *(s8 *)((u8 *)temp_s1 + 0x19) = (s8) (*(u8 *)((u8 *)temp_s2 + 5) - 0x80);
    *(s8 *)((u8 *)temp_s1 + 0x1A) = (s8) (*(u8 *)((u8 *)temp_s2 + 6) - 0x80);
    *(s8 *)((u8 *)temp_s1 + 0x1B) = (s8) (*(u8 *)((u8 *)temp_s2 + 7) - 0x80);
    goto block_5;
block_4:
    *(s8 *)((u8 *)temp_s1 + 0x18) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x19) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x1A) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x1B) = 0;
block_5:
    if (*(s32 *)((u8 *)temp_s1 + 4) == 7) {
        goto block_7;
    }
    goto block_8;
block_7:
    *(s8 *)((u8 *)temp_s1 + 0x68) = func_001A4460(*(s8 *)((u8 *)temp_s1 + 0x18), 0x40);
    *(s8 *)((u8 *)temp_s1 + 0x69) = func_001A4460(*(s8 *)((u8 *)temp_s1 + 0x19), 0x40);
    *(s8 *)((u8 *)temp_s1 + 0x6A) = func_001A4460(*(s8 *)((u8 *)temp_s1 + 0x1A), 0x40);
    *(s8 *)((u8 *)temp_s1 + 0x6B) = func_001A4460(*(s8 *)((u8 *)temp_s1 + 0x1B), 0x40);
    goto block_9;
block_8:
    *(s8 *)((u8 *)temp_s1 + 0x68) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x69) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x6A) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x6B) = 0;
block_9:
    var_v1 = 0;
    if (*(s8 *)((u8 *)temp_s1 + 0x6A) <= 0) {
        goto block_11;
    }
    var_v1 = 0x20 & 0xFFFF;
block_11:
    if (*(s8 *)((u8 *)temp_s1 + 0x6A) >= 0) {
        goto block_13;
    }
    var_v1 = (var_v1 | 0x80) & 0xFFFF;
block_13:
    if (*(s8 *)((u8 *)temp_s1 + 0x6B) <= 0) {
        goto block_15;
    }
    var_v1 = (var_v1 | 0x40) & 0xFFFF;
block_15:
    if (*(s8 *)((u8 *)temp_s1 + 0x6B) >= 0) {
        goto block_17;
    }
    var_v1 = (var_v1 | 0x10) & 0xFFFF;
block_17:
    if (*(s8 *)((u8 *)temp_s1 + 0x68) <= 0) {
        goto block_19;
    }
    var_v1 = (var_v1 | 0x2000) & 0xFFFF;
block_19:
    if (*(s8 *)((u8 *)temp_s1 + 0x68) >= 0) {
        goto block_21;
    }
    var_v1 = (var_v1 | 0x8000) & 0xFFFF;
block_21:
    if (*(s8 *)((u8 *)temp_s1 + 0x69) <= 0) {
        goto block_23;
    }
    var_v1 = (var_v1 | 0x4000) & 0xFFFF;
block_23:
    if (*(s8 *)((u8 *)temp_s1 + 0x69) >= 0) {
        goto block_25;
    }
    var_v1 = (var_v1 | 0x1000) & 0xFFFF;
block_25:
    temp_a1_2 = (*(u16 *)((u8 *)temp_s1 + 0x6C) ^ (var_v1 & 0xFFFF)) & 0xFFFF;
    *(u16 *)((u8 *)temp_s1 + 0x6E) = (u16) (temp_a1_2 & (var_v1 & 0xFFFF));
    *(u16 *)((u8 *)temp_s1 + 0x70) = (u16) (temp_a1_2 & *(u16 *)((u8 *)temp_s1 + 0x6C));
    *(u16 *)((u8 *)temp_s1 + 0x6C) = var_v1;
    *(u16 *)((u8 *)temp_s1 + 0x12) = 0U;
    *(u16 *)((u8 *)temp_s1 + 0x72) = 0U;
    if (!((*(u16 *)((u8 *)temp_s1 + 0xE) | *(u16 *)((u8 *)temp_s1 + 0x6E)) & 0xF0)) {
        goto block_28;
    }
    *(u16 *)((u8 *)temp_s1 + 0x12) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x12) | (temp_s0 & 0xFFFF & 0xF0 & 0xFFFF));
    *(u16 *)((u8 *)temp_s1 + 0x72) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x72) | (var_v1 & 0xFFFF & 0xF0 & 0xFFFF));
    *(s16 *)((u8 *)temp_s1 + 0x14) = 0x1E;
    goto block_32;
block_28:
    if (*(s16 *)((u8 *)temp_s1 + 0x14) != 0) {
        goto block_31;
    }
    *(u16 *)((u8 *)temp_s1 + 0x12) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x12) | (temp_s0 & 0xFFFF & 0xF0 & 0xFFFF));
    *(u16 *)((u8 *)temp_s1 + 0x72) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x72) | (var_v1 & 0xFFFF & 0xF0 & 0xFFFF));
    *(s16 *)((u8 *)temp_s1 + 0x14) = 5;
    goto block_32;
block_31:
    *(s16 *)((u8 *)temp_s1 + 0x14) = (s16) (*(s16 *)((u8 *)temp_s1 + 0x14) - 1);
block_32:
    if (!((*(u16 *)((u8 *)temp_s1 + 0xE) | *(u16 *)((u8 *)temp_s1 + 0x6E)) & ~0xF0)) {
        goto block_35;
    }
    *(u16 *)((u8 *)temp_s1 + 0x12) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x12) | (temp_s0 & 0xFFFF & ~0xF0 & 0xFFFF));
    *(u16 *)((u8 *)temp_s1 + 0x72) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x72) | (var_v1 & 0xFFFF & ~0xF0 & 0xFFFF));
    *(s16 *)((u8 *)temp_s1 + 0x16) = 0x1E;
    goto block_39;
block_35:
    if (*(s16 *)((u8 *)temp_s1 + 0x16) != 0) {
        goto block_38;
    }
    *(u16 *)((u8 *)temp_s1 + 0x12) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x12) | (temp_s0 & 0xFFFF & ~0xF0 & 0xFFFF));
    *(u16 *)((u8 *)temp_s1 + 0x72) = (u16) (*(u16 *)((u8 *)temp_s1 + 0x72) | (var_v1 & 0xFFFF & ~0xF0 & 0xFFFF));
    *(s16 *)((u8 *)temp_s1 + 0x16) = 5;
    goto block_39;
block_38:
    *(s16 *)((u8 *)temp_s1 + 0x16) = (s16) (*(s16 *)((u8 *)temp_s1 + 0x16) - 1);
block_39:
    if (*(s16 *)((u8 *)temp_s1 + 8) == 0) {
        goto block_41;
    }
    memcpy(temp_s1 + 0x1C, temp_s2 + 8, 0xC);
block_41:
    var_a0 = 1;
    var_v1_2 = (int *)(temp_s1 + 0x28);
    var_a2 = 0;
    goto loop_52;
block_43:
    if (!(*(u16 *)((u8 *)temp_s1 + 0xE) & var_a0)) {
        goto block_45;
    }
    *var_v1_2 = 1;
    goto block_51;
block_45:
    if (!(*(u16 *)((u8 *)temp_s1 + 0x10) & var_a0)) {
        goto block_47;
    }
    *var_v1_2 = -1;
    goto block_51;
block_47:
    if (!(*(u16 *)((u8 *)temp_s1 + 0xC) & var_a0)) {
        goto block_50;
    }
    *var_v1_2 += 1;
    goto block_51;
block_50:
    *var_v1_2 -= 1;
block_51:
    var_v1_2 += 4;
    var_a0 *= 2;
    var_a2 += 1;
loop_52:
    if (var_a2 < 0x10) {
        goto block_43;
    }
    var_a0_2 = 1;
    var_v1_3 = (int *)(temp_s1 + 0x74);
    var_a2_2 = 0;
    goto loop_63;
block_54:
    if (!(*(u16 *)((u8 *)temp_s1 + 0x6E) & var_a0_2)) {
        goto block_56;
    }
    *var_v1_3 = 1;
    goto block_62;
block_56:
    if (!(*(u16 *)((u8 *)temp_s1 + 0x70) & var_a0_2)) {
        goto block_58;
    }
    *var_v1_3 = -1;
    goto block_62;
block_58:
    if (!(*(u16 *)((u8 *)temp_s1 + 0x6C) & var_a0_2)) {
        goto block_61;
    }
    *var_v1_3 += 1;
    goto block_62;
block_61:
    *var_v1_3 -= 1;
block_62:
    var_v1_3 += 4;
    var_a0_2 *= 2;
    var_a2_2 += 1;
loop_63:
    if (var_a2_2 < 0x10) {
        goto block_54;
    }
    return;
}
