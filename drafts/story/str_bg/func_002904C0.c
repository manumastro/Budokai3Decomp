/* Draft (not built): func_002904C0 at 0x002904C0, size 0x2B8, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x258, original 0x2B8
 * Original: asm/nonmatchings/story/str_bg/func_002904C0.s */

// src/story/str_bg.c func_002904C0 size diff=90/150
extern s32 D_00470058;
void func_002904C0(u8 *arg0) {
    f32 temp_f0;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_v1_2;
    u8 *var_s0;

    if ((s32)(D_004708A4) == 0) {
        goto block_42;
    }
    temp_t0 = *(s32 *)((u8 *)arg0 + 0);
    if (temp_t0 == -1) {
        goto block_42;
    }
    var_s0 = (unsigned char *)(D_004708A4 + 0x430);
    var_a2 = 0;
    temp_v1 = *(s32 *)((u8 *)arg0 + 4) & 0xE00;
    goto loop_8;
block_4:
    if (*(s32 *)((u8 *)var_s0 + 8) != temp_t0) {
        goto block_7;
    }
    goto block_10;
block_7:
    var_a2 += 1;
    var_s0 += 0x50;
loop_8:
    if (var_a2 < 0x48) {
        goto block_4;
    }
    var_s0 = NULL;
block_10:
    if (var_s0 != NULL) {
        goto block_22;
    }
    if (temp_v1 == 0) {
        goto block_42;
    }
    var_a3 = 0;
    var_s0 = (unsigned char *)(D_004708A4 + 0x430);
    goto loop_17;
block_14:
    if (*(s32 *)((u8 *)var_s0 + 0x40) != 0) {
        goto block_16;
    }
    if (*(s32 *)((u8 *)var_s0 + 8) == -1) {
        goto block_19;
    }
block_16:
    var_a3 += 1;
    var_s0 += 0x50;
loop_17:
    if (var_a3 < 0x48) {
        goto block_14;
    }
block_19:
    if (var_a3 != 0x48) {
        goto block_27;
    }
    return;
block_22:
    **(u8 ***)((u8 *)var_s0 + 4) = *(u8 **)((u8 *)var_s0 + 0);
    temp_a2 = *(u8 **)((u8 *)var_s0 + 0);
    if (temp_a2 == NULL) {
        goto block_24;
    }
    *(u8 ***)((u8 *)temp_a2 + 4) = (u8 **) *(u8 ***)((u8 *)var_s0 + 4);
block_24:
    if (temp_v1 != 0) {
        goto block_27;
    }
    memset(var_s0, 0, 0x50);
    *(s32 *)((u8 *)var_s0 + 8) = -1;
    return;
block_27:
    *(s32 *)((u8 *)var_s0 + 8) = temp_t0;
    temp_a3 = temp_v1 >> 9;
    *(s32 *)((u8 *)var_s0 + 0xC) = 1;
    *(s32 *)((u8 *)var_s0 + 0x10) = (s32) (temp_a3 + 3);
    var_a1 = temp_a3 - 1;
    if (*(s32 *)((u8 *)((temp_a3 * 4) + D_004708A4) + 0x2E8) == 0) {
        goto block_29;
    }
    goto block_30;
block_29:
    var_a1 = -1;
block_30:
    *(s32 *)((u8 *)var_s0 + 0x14) = var_a1;
    *(s32 *)((u8 *)var_s0 + 0x18) = 0;
    if (temp_v1 == 0xA00) {
        goto block_38;
    }
    if (temp_v1 == 0x800) {
        goto block_38;
    }
    if (temp_v1 == 0x600) {
        goto block_37;
    }
    if (temp_v1 == 0x400) {
        goto block_37;
    }
    if (temp_v1 == 0x200) {
        goto block_37;
    }
    goto block_39;
block_37:
    *(s32 *)((u8 *)var_s0 + 0x1C) = (s32) *(s32 *)((u8 *)(((temp_v1 >> 9) * 4) + D_004708A4) + 0x23C);
    *(s32 *)((u8 *)var_s0 + 0x20) = 0;
    goto block_39;
block_38:
    *(s32 *)((u8 *)var_s0 + 0x1C) = 0;
    *(s32 *)((u8 *)var_s0 + 0x20) = (s32) *(s32 *)((u8 *)(((temp_v1 >> 9) * 4) + D_004708A4) + 0x31C);
block_39:
    *(s32 *)((u8 *)var_s0 + 0x40) = 0;
    temp_f0 = (*(f32 *)((u8 *)arg0 + 0x18) + (0.5f * (4000.0f * (f32) *(&D_00470058 + *(s8 *)((u8 *)D_004708A4 + 0x1AB4))))) / 4000.0f;
    temp_a1 = (unsigned char *)(D_004708A4 + (M2C_BITWISE(s32, temp_f0) * 0x300) + (M2C_BITWISE(s32, temp_f0) << 7));
    *(u8 **)((u8 *)var_s0 + 4) = (u8 *) (temp_a1 + 0x1AF0 + 0x20);
    *(u8 **)((u8 *)var_s0 + 0) = (u8 *) *(u8 **)((u8 *)temp_a1 + 0x1B10);
    *(u8 **)((u8 *)temp_a1 + 0x1B10) = var_s0;
    temp_v1_2 = *(u8 **)((u8 *)var_s0 + 0);
    if (temp_v1_2 == NULL) {
        goto block_41;
    }
    *(u8 **)((u8 *)temp_v1_2 + 4) = var_s0;
block_41:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
block_42:
    return;
}
