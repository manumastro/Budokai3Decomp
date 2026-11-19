/* Draft (not built): func_00244280 at 0x00244280, size 0x18C, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 73 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0x18C
 * Original: asm/nonmatchings/unk/unk_23A890/func_00244280.s */

// src/unk/unk_23A890.c func_00244280 size diff=73/56
s32 func_0013B110(s32);
s32 func_00146ED0(s32 *, s32 *, s32);
s32 func_00209D70(s32 *);
extern void func_0013B0B0(void *);
extern void func_00209C50(void);
extern void func_0013B060(void *);
void func_00244280(void) {
    s32 sp40;
    s32 sp50;
    s32 sp60;
    s32 temp_a0;
    s32 temp_a2;
    s32 var_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v1;

    var_s1 = 0;
    goto loop_5;
block_2:
    temp_v1 = D_0046FE4C + (var_s1 * 0x480);
    if (*(s32 *)((u8 *)temp_v1 + 0x40) == 0) {
        goto block_4;
    }
    temp_v0 = func_00243DC0(var_s1);
    temp_a2 = *(s32 *)((u8 *)temp_v0 + 8);
    temp_a0 = *(s32 *)((u8 *)((temp_a2 * 4) + temp_v0) + 0x14);
    D_00470238 = 0;
    amModel_SetCurrent(temp_a0, (var_s1 * 0x600) + 0x03004000);
    temp_s2 = gBattle + (var_s1 * 0x2020) + 0x830;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146ED0(&sp40, &sp40, 0xC0000000);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00209D70(&sp60);
    func_0013B060(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_00208D70((s32)(*(u8 **)((u8 *)(temp_v1 + 0x10) + 0x30)));
    func_0013B110(1);
    func_00209C50();
block_4:
    var_s1 += 1;
loop_5:
    if (var_s1 < 2) {
        goto block_2;
    }
    return;
}
