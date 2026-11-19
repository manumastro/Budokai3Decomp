/* Draft (not built): func_00242E10 at 0x00242E10, size 0x210, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D4, original 0x210
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242E10.s */

// src/unk/unk_23A890.c func_00242E10 size diff=66/117
s32 amMtxStack_Pop(s32);
s32 func_00209D70(s32 *);
extern void func_0013B0B0(void *);
extern void func_00208D60();
extern void func_00209C50(void);
extern void func_0013B060(void *);
void func_00242E10(void) {
    s32 sp40;
    s32 temp_a0;
    s32 temp_a3;
    s32 var_s2;
    s32 var_v1;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s1;
    u8 *var_s0;

    if (*(s8 *)((u8 *)gBattle + 0x8975) == 1) {
        goto block_23;
    }
    func_0013B0B0(NULL);
    var_s2 = 0;
    goto loop_20;
block_2:
    temp_a3 = var_s2 << 7;
    temp_s1 = D_0046FE44 + temp_a3;
    var_s0 = D_0046FE48 + (var_s2 * 0x1A4);
    if (func_00241010(var_s2, var_s2 * 0xF, D_0046FE44, temp_a3) == 0) {
        goto block_19;
    }
    if (*(s8 *)((u8 *)temp_s1 + 0x39) == 0) {
        goto block_19;
    }
    if (*(s32 *)((u8 *)temp_s1 + 0x2C) & 1) {
        goto block_19;
    }
    D_00470238 = 0;
    if (!(*(s32 *)((u8 *)temp_s1 + 0x2C) & 0x80)) {
        goto block_10;
    }
    var_v1 = 1;
    if (var_s2 != 0) {
        goto block_8;
    }
    goto block_9;
block_8:
    var_v1 = 0;
block_9:
    var_s0 = D_0046FE48 + (var_v1 * 0x1A4);
block_10:
    amModel_SetCurrent(*(s32 *)((u8 *)var_s0 + 0x194), *(s32 *)((u8 *)var_s0 + 0x19C));
    temp_a0 = *(s32 *)((u8 *)var_s0 + 0x198);
    if (temp_a0 == 0) {
        goto block_12;
    }
    func_00208D60(temp_a0);
block_12:
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00209D70(&sp40);
    func_0013B060(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 0x40);
    if (temp_a0_2 == NULL) {
        goto block_14;
    }
    func_00208D70((s32)(temp_a0_2));
block_14:
    temp_a0_3 = *(u8 **)((u8 *)temp_s1 + 0x44);
    if (temp_a0_3 == NULL) {
        goto block_16;
    }
    func_00208D70((s32)(temp_a0_3));
block_16:
    temp_a0_4 = *(u8 **)((u8 *)temp_s1 + 0x48);
    if (temp_a0_4 == NULL) {
        goto block_18;
    }
    func_00208D70((s32)(temp_a0_4));
block_18:
    func_0013B060(NULL);
    func_00209C50();
block_19:
    var_s2 += 1;
loop_20:
    if (var_s2 < *(s16 *)((u8 *)D_0046FE44 + 0x102)) {
        goto block_2;
    }
    amMtxStack_Pop(1);
    if (*(s32 *)((u8 *)gWave + 0x88) == 0) {
        goto block_23;
    }
    func_00215500(4);
block_23:
    return;
}
