/* Draft (not built): func_00213570 at 0x00213570, size 0x564, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 220 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x568, original 0x564
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00213570.s */

// src/unk/unk_20A4D0.c func_00213570 size diff=220/346
s32 amMotion_CreateFromObj(s32, s32, s32);
extern s128 D_0044BA40;
extern s128 D_0044BA50;
void func_00213570(u8 *arg0) {
    s32 sp90;
    s32 spA0;
    s128 spB0;
    s128 spC0;
    f32 temp_f0;
    f32 temp_f1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t0;
    s16 temp_v1;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_s2_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 var_a2;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_5;
    u8 *temp_s1_6;
    u8 *temp_s2_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v1_3;
    u8 *temp_v1_4;

    temp_s2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
    if (*(f32 *)((u8 *)arg0 + 0x84) <= 0.0f) {
        goto block_24;
    }
    if (*(s32 *)((u8 *)arg0 + 0x74) & 0x80) {
        goto block_10;
    }
    temp_v1 = *(s16 *)((u8 *)arg0 + 0x54);
    if (temp_v1 == 0xB) {
        goto block_5;
    }
    if (temp_v1 != 0xC) {
        goto block_10;
    }
block_5:
    temp_v0 = func_00215320((s64) ((s64) temp_s2 << 0x30) >> 0x30, *(s16 *)((u8 *)arg0 + 0x50));
    if (temp_v0 == NULL) {
        goto block_24;
    }
    *(s32 **)((u8 *)temp_v0 + 8) = (int *)(&func_002114A0);
    *(s32 *)((u8 *)temp_v0 + 0xC) = 0;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x84);
    if (temp_f1 == 0.0f) {
        goto block_8;
    }
    *(f32 *)((u8 *)temp_v0 + 0x18) = temp_f1;
    goto block_9;
block_8:
    *(f32 *)((u8 *)temp_v0 + 0x18) = 100.0f;
block_9:
    temp_s1 = temp_v0 + 0x20;
    memset(temp_s1, 0, 0x50);
    func_0020F870(*(s16 *)((u8 *)arg0 + 0x90));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    *(s32 *)((u8 *)temp_s1 + 0x2C) = (s32) *(s32 *)((u8 *)arg0 + 0x74);
    *(s32 *)((u8 *)temp_s1 + 0x3C) = (s32) *(s32 *)((u8 *)arg0 + 0x78);
    *(s16 *)((u8 *)temp_s1 + 0x46) = (s16) *(s16 *)((u8 *)arg0 + 0x90);
    *(s16 *)((u8 *)temp_s1 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
    *(s16 *)((u8 *)temp_s1 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
block_10:
    temp_v0_2 = func_00215320((s64) ((s64) temp_s2 << 0x30) >> 0x30, *(s16 *)((u8 *)arg0 + 0x50));
    if (temp_v0_2 == NULL) {
        goto block_24;
    }
    *(s32 **)((u8 *)temp_v0_2 + 8) = (int *)(&func_002117F0);
    temp_s1_2 = temp_v0_2 + 0x20;
    *(s32 **)((u8 *)temp_v0_2 + 0xC) = (int *)(&func_00212570);
    *(f32 *)((u8 *)temp_v0_2 + 0x18) = (f32) *(f32 *)((u8 *)arg0 + 0x84);
    memset(temp_s1_2, 0, 0x50);
    *(s16 *)((u8 *)temp_s1_2 + 0x46) = (s16) *(s16 *)((u8 *)arg0 + 0x90);
    *(s16 *)((u8 *)temp_s1_2 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
    *(s16 *)((u8 *)temp_s1_2 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
    *(s32 *)((u8 *)temp_s1_2 + 0x2C) = (s32) *(s32 *)((u8 *)arg0 + 0x74);
    *(s32 *)((u8 *)temp_s1_2 + 0x3C) = (s32) *(s32 *)((u8 *)arg0 + 0x78);
    *(s16 *)((u8 *)temp_s1_2 + 0x4C) = (s16) *(s16 *)((u8 *)arg0 + 0xAE);
    temp_v0_3 = func_00215320((s64) ((s64) temp_s2 << 0x30) >> 0x30, 0x40);
    if (temp_v0_3 == NULL) {
        goto block_24;
    }
    temp_s1_3 = temp_v0_3 + 0x20;
    *(s32 **)((u8 *)temp_v0_3 + 8) = (int *)(&func_00211680);
    *(s32 *)((u8 *)temp_v0_3 + 0xC) = 0;
    *(f32 *)((u8 *)temp_v0_3 + 0x18) = (f32) *(f32 *)((u8 *)arg0 + 0x84);
    memset(temp_s1_3, 0, 0x50);
    *(s16 *)((u8 *)temp_s1_3 + 0x46) = (s16) *(s16 *)((u8 *)arg0 + 0x90);
    *(s16 *)((u8 *)temp_s1_3 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
    *(s16 *)((u8 *)temp_s1_3 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
    *(s16 *)((u8 *)temp_s1_3 + 0x44) = (s16) *(s32 *)((u8 *)arg0 + 0x68);
    temp_a3 = *(s16 *)((u8 *)arg0 + 0x90);
    temp_s1_4 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
    temp_s2_2 = ((u8 *)&D_00568C90) + (temp_a3 * 0x2140);
    *(s32 *)((u8 *)temp_s2_2 + 0x88) = (int)((unsigned char *)func_0020B020((u8 *)(temp_s1_4), (s32)(*(s16 *)((u8 *)arg0 + 0x94)), (s32)(*(s16 *)((u8 *)arg0 + 0xA0)), (s32)(temp_a3)));
    *(s32 *)((u8 *)temp_s2_2 + 0x20E4) = func_0020AD30(temp_s1_4, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
    temp_a2 = *(s16 *)((u8 *)arg0 + 0xA4);
    if (temp_a2 <= 0) {
        goto block_18;
    }
    *(u8 **)((u8 *)temp_s2_2 + 0x94) = (unsigned char *)(func_0020AE80(temp_s1_4, *(s16 *)((u8 *)arg0 + 0x98), temp_a2));
    var_a2 = 0;
    goto loop_15;
block_14:
    temp_v0_4 = var_a2 * 8;
    var_a2 += 1;
    *(s32 *)((u8 *)(temp_v0_4 + *(u8 **)((u8 *)temp_s2_2 + 0x94)) + 8) = (s32) *(s16 *)((u8 *)arg0 + 0x5E);
loop_15:
    if (var_a2 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_2 + 0x94)) + 4)) {
        goto block_14;
    }
    goto block_19;
block_18:
    *(u8 **)((u8 *)temp_s2_2 + 0x94) = NULL;
block_19:
    temp_t0 = *(s16 *)((u8 *)arg0 + 0x90);
    temp_s1_5 = ((u8 *)&D_00568C90) + (temp_t0 * 0x2140);
    *(s32 *)((u8 *)temp_s1_5 + 0x8C) = (int)((unsigned char *)func_0020B020((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350)), (s32)(*(s16 *)((u8 *)arg0 + 0x9A)), (s32)(*(s16 *)((u8 *)arg0 + 0xA6)), (s32)(temp_t0 * 0x21)));
    *(s32 *)((u8 *)temp_s1_5 + 0x9C) = amMotion_CreateFromObj(*(s32 *)((u8 *)temp_s1_5 + 0x94), 0, 0);
    amMotion_BindAnim((void *)(*(s32 *)((u8 *)temp_s1_5 + 0x9C)), 0, (s32)(*(s32 *)((u8 *)temp_s1_5 + 0x8C)));
    temp_f0 = -1.0f;
    *(s32 *)((u8 *)temp_s1_5 + 0x2100) = (s32) (*(s16 *)((u8 *)arg0 + 0xAC) | 0x10000);
    *(s32 *)((u8 *)temp_s1_5 + 0x20FC) = 0x3F800000;
    *(f32 *)((u8 *)temp_s1_5 + 0x20F0) = temp_f0;
    *(f32 *)((u8 *)temp_s1_5 + 0x20F4) = temp_f0;
    temp_v1_2 = *(s32 *)((u8 *)temp_s1_5 + 0x2100);
    *(f32 *)((u8 *)temp_s1_5 + 0x20F8) = (f32) *(s32 *)((u8 *)(((temp_v1_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1_2 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)temp_s1_5 + 0x9C)) + 0x46C)) + 0x14)) + 8);
    temp_v1_3 = *(u8 **)((u8 *)arg0 + 0x60);
    temp_v1_4 = ((u8 *)&D_00568C90) + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140);
    *(f32 *)((u8 *)temp_v1_4 + 0x2118) = (f32) *(f32 *)((u8 *)temp_v1_3 + 0x98);
    *(f32 *)((u8 *)temp_v1_4 + 0x211C) = (f32) *(f32 *)((u8 *)temp_v1_3 + 0x9C);
    *(f32 *)((u8 *)(((u8 *)&D_00568C90) + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140)) + 0x2128) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x60)) + 0x88);
    *(f32 *)((u8 *)(((u8 *)&D_00568C90) + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140)) + 0x212C) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x60)) + 0x8C);
    *(f32 *)((u8 *)(((u8 *)&D_00568C90) + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140)) + 0x2130) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x60)) + 0x90);
    *(f32 *)((u8 *)(((u8 *)&D_00568C90) + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140)) + 0x2134) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x60)) + 0x94);
    func_0013B160(((u8 *)&D_00568C90) + (*(s16 *)((u8 *)arg0 + 0x90) * 0x2140) + 0x40);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    temp_s2_3 = *(s32 *)((u8 *)arg0 + 0x8C);
    spC0 = D_0044BA40;
    temp_s1_6 = ((u8 *)&D_00568C90) + (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x90) << 0x30) >> 0x30) * 0x2140) + 0x40;
    spB0 = D_0044BA50;
    if (!(temp_s2_3 & 2)) {
        goto block_21;
    }
    func_00141C30(&spA0, &spB0, arg0 + 0x20);
block_21:
    if (!(temp_s2_3 & 4)) {
        goto block_23;
    }
    func_00141C30(&spA0, &spC0, arg0 + 0x20);
block_23:
    func_0013B160(temp_s1_6);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00141CF0(temp_s1_6, &spA0, &sp90);
block_24:
    return;
}
