/* Draft (not built): func_0028E790 at 0x0028E790, size 0x2EC, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 106 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x280, original 0x2EC
 * Original: asm/nonmatchings/story/str_bg/func_0028E790.s */

// src/story/str_bg.c func_0028E790 size diff=106/160
s32 func_00227880(f32 *);
s32 func_00227A30(f32 *);
s32 func_00228430(s32);
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_0028E790(u8 *arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s8 sp40;
    s8 sp41;
    s8 sp42;
    s8 sp43;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 sp50;
    f32 sp54;
    s32 sp58;
    s32 sp5C;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v0_2;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_v0;
    u8 *var_v1;

    temp_s1 = arg0 + 0x30;
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x38);
    var_s0 = **(u8 ***)((u8 *)arg0 + 0x3C);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x34);
    D_00470704 = temp_a0;
    D_0047070C = temp_a1;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, temp_a1);
    D_00470238 = 0;
    if (*(u8 **)((u8 *)temp_s1 + 0x14) == NULL) {
        goto block_15;
    }
    func_00228430(0);
    if (!(*(u16 *)((u8 *)arg0 + 0x30) & 1)) {
        goto block_3;
    }
    sp50 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 0);
    sp54 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 4);
    sp5C = 0x3F800000;
    sp58 = 0;
    func_00227A30(&sp50);
    goto block_15;
block_3:
    if (*(s32 *)((u8 *)var_s0 + 0xC) != 1) {
        goto block_5;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    goto block_14;
block_5:
    var_v1 = *(u8 **)((u8 *)var_s0 + 0);
    goto loop_11;
block_6:
    var_v0 = *(u8 **)((u8 *)var_v1 + 4);
    if (var_v0 == NULL) {
        goto block_9;
    }
    goto block_10;
block_9:
    var_v0 = *(u8 **)((u8 *)var_v1 + 8);
    if (var_v0 == NULL) {
        goto block_13;
    }
block_10:
    var_v1 = var_v0;
loop_11:
    if (*(u8 **)((u8 *)var_v1 + 0x10) == NULL) {
        goto block_6;
    }
block_13:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
block_14:
    sp58 = 0;
    func_00227A30(&sp50);
block_15:
    if (*(u8 **)((u8 *)temp_s1 + 0x20) == NULL) {
        goto loop_19;
    }
    if (*(u8 **)((u8 *)temp_s1 + 0x14) != NULL) {
        goto block_18;
    }
    func_00228430(0);
block_18:
    temp_v1 = *(u8 **)((u8 *)temp_s1 + 0x20);
    sp30 = *(f32 *)((u8 *)temp_v1 + 0);
    sp34 = *(f32 *)((u8 *)temp_v1 + 4);
    sp38 = *(f32 *)((u8 *)temp_v1 + 8);
    sp3C = *(f32 *)((u8 *)temp_v1 + 0xC);
    sp44 = 0x44;
    sp40 = 0;
    sp41 = 0;
    sp42 = 0;
    sp43 = 0;
    sp48 = 0;
    sp4C = 0;
    func_00227880(&sp30);
loop_19:
    func_0022C060((s32) var_s0, *(f32 *)((u8 *)temp_s1 + 0x1C));
    if (func_0022BF80((s32) var_s0) != 0xFF) {
        goto block_27;
    }
    if (*(s16 *)((u8 *)temp_s1 + 2) == -1) {
        goto block_27;
    }
    func_0022D0E0((s32) var_s0, 1);
    temp_v1_2 = *(s16 *)((u8 *)temp_s1 + 2);
    if (!(temp_v1_2 & 0x8000)) {
        goto block_24;
    }
    var_v0_2 = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x18)) + 0x14) + ((temp_v1_2 & 0x7FFF) * 4)), 0.0f);
    goto block_25;
block_24:
    var_v0_2 = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x18)) + 0x1C) + (temp_v1_2 * 4)), 0.0f);
block_25:
    var_s0 = (u8 *) var_v0_2;
    **(u8 ***)((u8 *)temp_s1 + 0xC) = var_s0;
    *(s16 *)((u8 *)temp_s1 + 2) = -1;
    goto loop_19;
block_27:
    temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 0x10);
    if (temp_a0_2 == NULL) {
        goto block_30;
    }
    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x30)) + 0x18) = (s16) *(s32 *)((u8 *)temp_a0_2 + 0);
    if (*(u16 *)((u8 *)arg0 + 0x30) & 2) {
        goto block_30;
    }
    temp_v0 = *(u8 **)((u8 *)var_s0 + 0x30);
    *(f32 *)((u8 *)temp_v0 + 0x40) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x10);
    *(f32 *)((u8 *)temp_v0 + 0x44) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x14);
    *(f32 *)((u8 *)temp_v0 + 0x48) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x18);
    *(f32 *)((u8 *)temp_v0 + 0x4C) = (f32) *(f32 *)((u8 *)temp_a0_2 + 0x1C);
block_30:
    func_0022CD00(var_s0);
    if (*(u8 **)((u8 *)temp_s1 + 0x14) != NULL) {
        goto block_32;
    }
    if (*(u8 **)((u8 *)temp_s1 + 0x20) == NULL) {
        goto block_33;
    }
block_32:
    func_00228410();
block_33:
    return;
}
