/* Draft (not built): func_00242B40 at 0x00242B40, size 0x2CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 110 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x268, original 0x2CC
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242B40.s */

// src/unk/unk_23A890.c func_00242B40 size diff=110/154
s32 func_0013B110(s32);
s32 func_00141E70(void *, s32);
extern void func_0013B0B0(void *);
extern void func_00209390(void *);
extern void func_0013BA20(void *);
void func_00242B40(void) {
    s32 var_a1_2;
    s16 temp_a0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_v1;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;

    var_s0 = 0;
    goto loop_44;
block_2:
    temp_v1 = gBattle + (var_s0 * 0x2020);
    temp_s1 = temp_v1 + 0x830;
    temp_s2 = D_0046FE44 + (var_s0 << 7);
    if (*(s8 *)((u8 *)temp_v1 + 0x14ED) != 0) {
        goto block_43;
    }
    if (*(s32 *)((u8 *)temp_s1 + 0xB9C) != 0xE) {
        goto block_43;
    }
    if (gBattle == NULL) {
        goto block_19;
    }
    var_a3 = 1;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) != 0) {
        goto block_18;
    }
    var_a1 = 0;
    var_a0 = 0;
    if (*(s8 *)((u8 *)gBattle + 0x8AB2) == 0) {
        goto block_9;
    }
    if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
        goto block_9;
    }
    var_a0 = 1;
block_9:
    if (var_a0 == 0) {
        goto block_12;
    }
    var_v1 = *(s8 *)((u8 *)gBattle + 0x8AB3);
    goto block_13;
block_12:
    var_v1 = -1;
block_13:
    if (var_s0 != var_v1) {
        goto block_16;
    }
    if (*(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        goto block_16;
    }
    var_a1 = 1;
block_16:
    if (var_a1 != 0) {
        goto block_18;
    }
    var_a3 = 0;
block_18:
    goto block_20;
block_19:
    var_a3 = 0;
block_20:
    if (var_a3 != 0) {
        goto block_43;
    }
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    func_0013BA20(*(u8 **)((u8 *)temp_s1 + 0x17A4));
    func_00141E70(temp_s2 + 0x50, 0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B110(1);
    temp_a0 = *(s16 *)((u8 *)temp_s1 + 0xCAC);
    if (temp_a0 == 5) {
        goto block_23;
    }
    if (temp_a0 != 9) {
        goto block_35;
    }
block_23:
    if (*(u8 **)((u8 *)temp_s2 + 0x74) != NULL) {
        goto block_37;
    }
    var_v0 = *(s32 *)((u8 *)temp_s1 + 0xBA0);
    if (var_v0 < 0) {
        goto block_26;
    }
    if (var_v0 < 2) {
        goto block_27;
    }
block_26:
    var_v0 = 0;
block_27:
    if (var_v0 == 0) {
        goto block_29;
    }
    var_v0_2 = 0xB;
    goto block_30;
block_29:
    var_v0_2 = 0xA;
block_30:
    if (var_s0 == 0) {
        goto block_33;
    }
    var_a1_2 = 0x400080;
    goto block_34;
block_33:
    var_a1_2 = 0x400040;
block_34:
    *(u8 **)((u8 *)temp_s2 + 0x74) = (unsigned char *)(func_00209540(*(((u8 *)&D_0058CA08) + (var_v0_2 * 4)), var_a1_2, 0));
    goto block_37;
block_35:
    temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0x74);
    if (temp_a0_2 == NULL) {
        goto block_37;
    }
    func_00209390(temp_a0_2);
block_37:
    temp_a0_3 = *(u8 **)((u8 *)temp_s2 + 0x70);
    if (temp_a0_3 == NULL) {
        goto block_40;
    }
    func_00208F70((s32)(temp_a0_3));
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x70)) + 0x38) >= 0) {
        goto block_40;
    }
    *(u8 **)((u8 *)temp_s2 + 0x70) = NULL;
block_40:
    temp_a0_4 = *(u8 **)((u8 *)temp_s2 + 0x74);
    if (temp_a0_4 == NULL) {
        goto block_43;
    }
    func_00208F70((s32)(temp_a0_4));
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x74)) + 0x38) >= 0) {
        goto block_43;
    }
    *(u8 **)((u8 *)temp_s2 + 0x74) = NULL;
block_43:
    var_s0 += 1;
loop_44:
    if (var_s0 < *(s16 *)((u8 *)D_0046FE44 + 0x102)) {
        goto block_2;
    }
    return;
}
