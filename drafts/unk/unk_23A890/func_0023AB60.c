/* Draft (not built): func_0023AB60 at 0x0023AB60, size 0x378, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 165 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x314, original 0x378
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023AB60.s */

// src/unk/unk_23A890.c func_0023AB60 size diff=165/197
s32 func_0021C080(s32, s32, s32);
s32 func_00228430(s32);
s32 func_00228AC0(s32, s32, s32, f32);
s32 func_0022B900(s32, s32, f32);
extern s32 D_00450100;
extern s32 D_00450120;
extern s32 D_00450140;
extern void func_00228410(void);
void func_0023AB60(s32 arg0, s32 arg1, u8 *arg2) {
    u8 sp[0x400];
    s32 sp90;
    s32 spB0;
    s32 spD0;
    f32 temp_f0;
    f32 var_f12;
    s32 temp_a0;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    u16 temp_a0_2;
    u8 *temp_s0;
    u8 *temp_v1_2;

    temp_a0 = *(s32 *)((u8 *)gBtlSys + 0xE64);
    temp_s0 = *(u8 **)((u8 *)gBtlSys + 0xE6C);
    *(s128 *)((u8 *)(&spD0) + 0) = (s128) *(s128 *)((u8 *)(&D_00450100) + 0);
    *(s128 *)((u8 *)(&spD0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00450100) + 0x10);
    *(s128 *)((u8 *)(&spB0) + 0) = (s128) *(s128 *)((u8 *)(&D_00450120) + 0);
    *(s128 *)((u8 *)(&spB0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00450120) + 0x10);
    *(s128 *)((u8 *)(&sp90) + 0) = (s128) *(s128 *)((u8 *)(&D_00450140) + 0);
    *(s128 *)((u8 *)(&sp90) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00450140) + 0x10);
    D_00470704 = temp_a0;
    D_0047070C = 0x04001000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x04001000);
    D_00470238 = 0;
    func_00228430(0);
    var_s3 = 0;
    goto loop_23;
block_2:
    temp_v1 = var_s3 * 4;
    temp_s5 = *(s32 *)((u8 *)(temp_v1 + arg1) + 0x30);
    if (temp_s5 == 0) {
        goto block_22;
    }
    temp_f0 = *(f32 *)((u8 *)(temp_v1 + sp) + 0x90);
    var_f12 = (f32) *(arg2 + 0x50 + (var_s3 * 2));
    if (var_f12 < temp_f0) {
        goto block_5;
    }
    var_f12 = temp_f0;
block_5:
    func_0022C7D0(temp_s5, var_f12, 1);
    func_0022ACF0(temp_s5);
    temp_a0_2 = *(u16 *)((u8 *)arg2 + 0x4C);
    temp_v1_2 = (var_s3 * 4) + sp;
    if (!(temp_a0_2 & *(s32 *)((u8 *)temp_v1_2 + 0xD0))) {
        goto block_22;
    }
    if (*(s32 *)((u8 *)temp_v1_2 + 0xB0) == -1) {
        goto block_22;
    }
    if (var_s3 != 4) {
        goto block_9;
    }
    if (temp_a0_2 & 0x20) {
        goto block_12;
    }
block_9:
    if (var_s3 != 5) {
        goto block_17;
    }
    if (!(*(u16 *)((u8 *)arg2 + 0x4C) & 0x80)) {
        goto block_17;
    }
block_12:
    if (!(arg0 & 1)) {
        goto block_15;
    }
    var_s4 = 0x13;
    goto block_16;
block_15:
    var_s4 = 0x11;
block_16:
    func_00228AC0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0xC8), arg1 + 0x10, -1, *(f32 *)((u8 *)((var_s3 * 4) + arg2) + 0x60));
    func_0021C080(temp_s5, arg1 + 0x10, 3);
    temp_v0 = var_s3 * 4;
    func_0022B900(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (var_s4 * 4)), *(s32 *)((u8 *)((*(s32 *)((u8 *)(temp_v0 + sp) + 0xB0) * 4) + arg1) + 0x50), *(f32 *)((u8 *)(temp_v0 + arg2) + 0x60));
    *(f32 *)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)((var_s3 * 4) + sp) + 0xB0) * 4) + arg1) + 0x50)) + 0x24) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0x30)) + 0x24);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    goto block_22;
block_17:
    if (!(arg0 & 1)) {
        goto block_20;
    }
    var_s4_2 = 0x12;
    goto block_21;
block_20:
    var_s4_2 = 0x10;
block_21:
    func_00228AC0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0xC4), arg1 + 0x10, -1, *(f32 *)((u8 *)((var_s3 * 4) + arg2) + 0x60));
    func_0021C080(temp_s5, arg1 + 0x10, 3);
    temp_v0_2 = var_s3 * 4;
    func_0022B900(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (var_s4_2 * 4)), *(s32 *)((u8 *)((*(s32 *)((u8 *)(temp_v0_2 + sp) + 0xB0) * 4) + arg1) + 0x50), *(f32 *)((u8 *)(temp_v0_2 + arg2) + 0x60));
    *(f32 *)((u8 *)(*(u8 **)((u8 *)((*(s32 *)((u8 *)((var_s3 * 4) + sp) + 0xB0) * 4) + arg1) + 0x50)) + 0x24) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0x30)) + 0x24);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
block_22:
    var_s3 += 1;
loop_23:
    if (var_s3 < 8) {
        goto block_2;
    }
    func_00228410();
    return;
}
