/* Draft (not built): func_001DA5C0 at 0x001DA5C0, size 0x364, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 166 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x280, original 0x364
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DA5C0.s */

// src/unk/unk_1D5B30.c func_001DA5C0 size diff=166/160
extern void func_0013B620(void *);
extern char D_003F0800[];
s32 func_0013B110(s32);
s32 func_00146F60(s32 *, void *);
s32 func_0021AFE0(s32, void **, s8);
extern s128 D_0044A1D0;
extern void func_0013B0B0(void *);
extern void func_001D6E20(void);
void func_001DA5C0(u8 *arg0, s32 arg1, s64 arg2, s32 arg3) {
    s32 sp70;
    u8 *sp80;
    s32 *sp84;
    u8 *sp88;
    u8 *sp8C;
    s128 spA0;
    s32 temp_a0;
    s32 temp_v0_2;
    s64 temp_v1;
    s8 temp_a0_2;
    s8 temp_a2;
    s8 temp_a2_2;
    s8 var_t0;
    s8 var_v1;
    u8 *temp_a0_3;
    u8 *temp_a3;
    u8 *temp_v0;

    temp_a0 = gBattle->f88F8;
    if (temp_a0 == 4) {
        goto block_4;
    }
    if (temp_a0 == 5) {
        goto block_4;
    }
    if (temp_a0 != 8) {
        goto block_32;
    }
block_4:
    if (arg1 <= 0) {
        goto block_32;
    }
    temp_v0 = func_001DA430((struct Fighter *)(arg0));
    if (temp_v0 == NULL) {
        goto block_32;
    }
    *(u8 **)((u8 *)temp_v0 + 0x40) = amTask_Create(func_001D6E20, (void *)(NULL), 0x5380, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x40)) + 0x30) = temp_v0;
    if (arg3 >= 0) {
        goto block_8;
    }
    *(s8 *)((u8 *)temp_v0 + 0x4F) = (s8) -(arg3 + 1);
block_8:
    if (M2C_ERROR(/* Read from unset register $t0 */) != 0) {
        goto block_10;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    goto block_11;
block_10:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
block_11:
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
    if (M2C_ERROR(/* Read from unset register $t1 */) != 0) {
        goto block_14;
    }
    spA0 = D_0044A1D0;
    func_0013B0B0(D_003F0800);
    func_0013B620(*(u8 **)((u8 *)arg0 + 0x17A4));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B110(1);
    goto block_15;
block_14:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
block_15:
    func_00146F60((s32 *)(temp_v0 + 0x30), (void *)(temp_v0 + 0x10));
    *(s8 *)((u8 *)temp_v0 + 0x4D) = (s8) ((s64) (arg2 << 0x38) >> 0x38);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_v1 = (s64) ((s64) *(s8 *)((u8 *)temp_v0 + 0x4D) << 0x38) >> 0x38;
    if (temp_v1 == 3) {
        goto block_17;
    }
    if (temp_v1 != 1) {
        goto block_30;
    }
block_17:
    var_v1 = -1;
    var_t0 = 0;
    *(s8 *)((u8 *)temp_v0 + 0x4D) = 0;
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x1354) + 0x150;
    *(s8 *)((u8 *)temp_v0 + 0x4C) = 0;
    goto loop_27;
block_19:
    temp_a3 = (unsigned char *)((var_t0 * 0x50) + temp_v0_2);
    if (*(s16 *)((u8 *)temp_a3 + 0x48) <= 0) {
        goto block_26;
    }
    temp_a0_2 = *(s8 *)((u8 *)temp_a3 + 0x4D);
    if (temp_a0_2 == 2) {
        goto block_26;
    }
    if (temp_a0_2 == 1) {
        goto block_26;
    }
    if (var_v1 < 0) {
        goto block_25;
    }
    if (!(*(f32 *)((u8 *)((var_v1 * 0x50) + temp_v0_2) + 0x44) < *(f32 *)((u8 *)temp_a3 + 0x44))) {
        goto block_26;
    }
block_25:
    var_v1 = var_t0;
block_26:
    var_t0 += 1;
loop_27:
    if (var_t0 < 0x10) {
        goto block_19;
    }
    if (var_v1 < 0) {
        goto block_30;
    }
    temp_a0_3 = arg0 + 0x150;
    *(s8 *)((u8 *)temp_v0 + 0x4D) = 1;
    *(s8 *)((u8 *)temp_v0 + 0x4C) = var_v1;
    *(s8 *)((u8 *)((*(s8 *)((u8 *)temp_v0 + 0x4C) * 0x50) + temp_v0_2) + 0x4D) = 1;
    *(s8 *)((u8 *)((*(s8 *)((u8 *)temp_v0 + 0x4C) * 0x50) + temp_v0_2) + 0x4C) = (s8) (((temp_v0 - temp_a0_3) / 80) + ((u32) (temp_v0 - temp_a0_3) >> 0x1F));
block_30:
    temp_a2 = *(s8 *)((u8 *)temp_v0 + 0x4F);
    sp8C = temp_v0;
    sp88 = (unsigned char *)(gBattle + (temp_a2 * 0x2020) + 0x830);
    func_0021AFE0(0, (void **)(&sp80), (s8)(temp_a2));
    if (arg3 == 0) {
        goto block_32;
    }
    func_00146F60(&sp70, temp_v0 + 0x10);
    sp80 = temp_v0;
    sp84 = &sp70;
    temp_a2_2 = *(s8 *)((u8 *)temp_v0 + 0x4F);
    sp88 = (unsigned char *)(gBattle + (temp_a2_2 * 0x2020) + 0x830);
    func_0021AFE0(5, (void **)(&sp80), (s8)(temp_a2_2));
block_32:
    return;
}
