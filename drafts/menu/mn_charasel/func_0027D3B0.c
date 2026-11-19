/* Draft (not built): func_0027D3B0 at 0x0027D3B0, size 0x468, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 181 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4A0, original 0x468
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027D3B0.s */

// src/menu/mn_charasel.c func_0027D3B0 size diff=181/296
extern s32 D_0046B610;
extern s8 D_004B4B41;
extern s8 D_004B4B59;
extern s32 D_0058F660;
s64 func_0027D3B0(s64 arg0, s64 arg1) {
    s32 var_t3;
    s32 var_t3_2;
    s64 temp_a2;
    s64 temp_a2_2;
    s64 temp_a3_2;
    s64 temp_t0;
    s64 temp_t1_2;
    s64 temp_v0;
    s64 temp_v1;
    s64 var_a0;
    s64 var_a1;
    s64 var_a2;
    s64 var_a3;
    s64 var_t4;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v0_3;
    s64 var_v1;
    s64 var_v1_2;
    s64 var_v1_3;
    s64 var_v1_4;
    s8 temp_a1;
    s8 temp_t1;
    s8 temp_t5;
    u8 *temp_a3;

    temp_a2 = (s64) (arg0 << 0x30) >> 0x30;
    temp_a3 = (unsigned char *)(temp_a2 + &D_0058F660);
    temp_t1 = *(s8 *)((u8 *)temp_a3 + 8);
    var_v0_2 = 0;
    if (arg1 == 0) {
        goto block_2;
    }
    var_a3 = (s64) (arg1 << 0x30) >> 0x30;
    goto block_3;
block_2:
    var_a3 = 1;
block_3:
    temp_a3_2 = (s64) ((s64) *(&D_0046B610 + *(s16 *)((u8 *)((temp_a2 * 2) + &D_0058F660) + 4)) << 0x30) >> 0x30;
    temp_t0 = (s64) (var_a3 << 0x30) >> 0x30;
    if (temp_a3_2 >= 2) {
        goto block_5;
    }
    return 0;
block_5:
    if (*(s16 *)((u8 *)(&D_0058F660) + 4) == *(s16 *)((u8 *)(&D_0058F660) + 6)) {
        goto block_11;
    }
    var_v1 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
    if (var_v1 >= 0) {
        goto block_8;
    }
    var_v1 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
    goto block_10;
block_8:
    if ((temp_a3_2 - 1) >= var_v1) {
        goto block_10;
    }
    var_v1 = 0;
block_10:
    *(s8 *)((u8 *)temp_a3 + 8) = (s8) var_v1;
    return (s64) (var_v1 << 0x38) >> 0x38;
block_11:
    if (D_004B4B41 == 6) {
        goto block_22;
    }
    if (D_004B4B41 == 5) {
        goto block_17;
    }
    if (D_004B4B41 == 3) {
        goto block_17;
    }
    if (D_004B4B41 == 1) {
        goto block_17;
    }
    if (D_004B4B41 == 0) {
        goto block_17;
    }
    goto block_30;
block_17:
    var_v1_2 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
    if (var_v1_2 >= 0) {
        goto block_19;
    }
    var_v1_2 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
    goto block_21;
block_19:
    if ((temp_a3_2 - 1) >= var_v1_2) {
        goto block_21;
    }
    var_v1_2 = 0;
block_21:
    *(s8 *)((u8 *)temp_a3 + 8) = (s8) var_v1_2;
    return (s64) (var_v1_2 << 0x38) >> 0x38;
block_22:
    if (D_004B4B59 == 1) {
        goto block_25;
    }
    if (D_004B4B59 != 2) {
        goto block_30;
    }
block_25:
    var_v1_3 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
    if (var_v1_3 >= 0) {
        goto block_27;
    }
    var_v1_3 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
    goto block_29;
block_27:
    if ((temp_a3_2 - 1) >= var_v1_3) {
        goto block_29;
    }
    var_v1_3 = 0;
block_29:
    *(s8 *)((u8 *)temp_a3 + 8) = (s8) var_v1_3;
    return (s64) (var_v1_3 << 0x38) >> 0x38;
block_30:
    temp_v1 = (s64) (((s64) ((arg0 == 0) << 0x30) >> 0x30) << 0x30) >> 0x30;
    temp_t5 = *(s8 *)((u8 *)(temp_v1 + &D_0058F660) + 0xA);
    if (temp_t5 != -2) {
        goto block_37;
    }
    var_v1_4 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
    if (var_v1_4 >= 0) {
        goto block_34;
    }
    var_v1_4 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
    goto block_36;
block_34:
    if ((temp_a3_2 - 1) >= var_v1_4) {
        goto block_36;
    }
    var_v1_4 = 0;
block_36:
    *(s8 *)((u8 *)temp_a3 + 8) = (s8) var_v1_4;
    return (s64) (var_v1_4 << 0x38) >> 0x38;
block_37:
    if (*(s8 *)((u8 *)(temp_a2 + &D_0058F660) + 0xA) == -1) {
        goto block_40;
    }
    if (temp_t5 != -1) {
        goto block_40;
    }
    var_v0_2 = 1;
block_40:
    if (((s64) (var_v0_2 << 0x30) >> 0x30) != 0) {
        goto block_57;
    }
    var_a2 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
    if (var_a2 >= 0) {
        goto block_43;
    }
    var_a2 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
    goto block_45;
block_43:
    if ((temp_a3_2 - 1) >= var_a2) {
        goto block_45;
    }
    var_a2 = 0;
block_45:
    var_a1 = (s64) (var_a2 << 0x30) >> 0x30;
    var_t3 = 0;
    if (temp_a3_2 <= 0) {
        goto block_76;
    }
    temp_a2_2 = temp_a3_2 - 1;
loop_47:
    temp_v0 = (s64) (var_a1 << 0x30) >> 0x30;
    if (temp_v0 == *(s8 *)((u8 *)(&D_0058F660 + temp_v1) + 8)) {
        goto block_49;
    }
    *(s8 *)((u8 *)temp_a3 + 8) = (s8) var_a1;
    return (s64) (var_a1 << 0x38) >> 0x38;
block_49:
    var_v0_3 = (s64) ((temp_v0 + temp_t0) << 0x30) >> 0x30;
    if (var_v0_3 >= 0) {
        goto block_52;
    }
    var_v0_3 = (s64) (temp_a2_2 << 0x30) >> 0x30;
    goto block_54;
block_52:
    if (temp_a2_2 >= var_v0_3) {
        goto block_54;
    }
    var_v0_3 = 0;
block_54:
    var_t3 += 1;
    var_a1 = (s64) (var_v0_3 << 0x30) >> 0x30;
    if (var_t3 < temp_a3_2) {
        goto loop_47;
    }
    goto block_76;
block_57:
    var_v0 = (s64) ((((s64) ((s64) temp_t1 << 0x30) >> 0x30) + arg1) << 0x30) >> 0x30;
    if (var_v0 >= 0) {
        goto block_60;
    }
    var_v0 = (s64) ((temp_a3_2 - 1) << 0x30) >> 0x30;
    goto block_62;
block_60:
    if ((temp_a3_2 - 1) >= var_v0) {
        goto block_62;
    }
    var_v0 = 0;
block_62:
    *(s8 *)((u8 *)temp_a3 + 8) = (s8) var_v0;
    temp_a1 = *(s8 *)((u8 *)(temp_v1 + &D_0058F660) + 8);
    if (temp_a1 != ((s64) (var_v0 << 0x30) >> 0x30)) {
        goto block_75;
    }
    var_t4 = (s64) ((s64) temp_a1 << 0x30) >> 0x30;
    var_t3_2 = 0;
    if (temp_a3_2 <= 0) {
        goto block_76;
    }
    temp_t1_2 = temp_a3_2 - 1;
loop_65:
    var_a0 = (s64) ((((s64) (var_t4 << 0x30) >> 0x30) + temp_t0) << 0x30) >> 0x30;
    if (var_a0 >= 0) {
        goto block_68;
    }
    var_a0 = (s64) (temp_t1_2 << 0x30) >> 0x30;
    goto block_70;
block_68:
    if (temp_t1_2 >= var_a0) {
        goto block_70;
    }
    var_a0 = 0;
block_70:
    var_t4 = (s64) (var_a0 << 0x30) >> 0x30;
    if (var_t4 == *(s8 *)((u8 *)(&D_0058F660 + temp_a2) + 8)) {
        goto block_73;
    }
    *(s8 *)((u8 *)(temp_v1 + &D_0058F660) + 0xC) = (s8) var_a0;
    return var_v0;
block_73:
    var_t3_2 += 1;
    if (var_t3_2 < temp_a3_2) {
        goto loop_65;
    }
    goto block_76;
block_75:
    return var_v0;
block_76:
    return 0;
}
