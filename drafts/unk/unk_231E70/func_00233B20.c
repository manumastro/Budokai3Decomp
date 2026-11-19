/* Draft (not built): func_00233B20 at 0x00233B20, size 0x22C, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x244, original 0x22C
 * Original: asm/nonmatchings/unk/unk_231E70/func_00233B20.s */

// src/unk/unk_231E70.c func_00233B20 size diff=61/145
extern f32 D_0046FE40;
s64 func_00233B20(u8 *arg0, u8 *arg1) {
    u8 sp[0x400];
    f32 sp3C;
    s16 temp_v0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v1_2;
    s64 var_v0;
    s8 var_a0;
    s8 var_v1;
    u32 temp_v0_2;
    u8 var_s0;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_a0 = D_0058BBB0 + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_s0 = *(u8 **)((u8 *)temp_a0 + 8);
    sp3C = D_0046FE40;
    if (*(s32 *)((u8 *)arg1 + 0xC) != 0) {
        goto block_2;
    }
    return 0;
block_2:
    temp_v1 = *(s32 *)((u8 *)arg1 + 4);
    temp_v0 = *(s16 *)((u8 *)temp_a0 + 0x3C);
    if (temp_v0 >= temp_v1) {
        goto block_4;
    }
    *(s16 *)((u8 *)temp_a0 + 0x3C) = (s16) temp_v1;
    return 0;
block_4:
    if ((temp_v0 - temp_v1) >= 5) {
        goto block_6;
    }
    return 0;
block_6:
    *(s16 *)((u8 *)temp_a0 + 0x3C) = (s16) temp_v1;
    if (*(s32 *)((u8 *)arg1 + 4) < 0x3C) {
        goto block_9;
    }
    if ((u32) ((u32) (func_0012EAE0(0x20, (s32) arg1) / 10) % 100U) >= 0x62U) {
        goto block_9;
    }
    return 0;
block_9:
    temp_a0_2 = *(s32 *)((u8 *)arg1 + 0xC);
    var_a1 = (func_0012EAE0(0x20, M2C_ERROR(/* Read from unset register $a1 */)) / 10) & 3;
    var_v1 = *(s8 *)((u8 *)(var_a1 + sp) + 0x3C);
    if (var_v1 & temp_a0_2) {
        goto block_12;
    }
loop_10:
    var_a1 = (var_a1 + 1) & 3;
    var_v1 = *(s8 *)((u8 *)(var_a1 + sp) + 0x3C);
    if (!(var_v1 & temp_a0_2)) {
        goto loop_10;
    }
block_12:
    var_v0 = (s64) ((s64) var_v1 << 0x38) >> 0x38;
    if (*(s32 *)((u8 *)arg1 + 8) == 0) {
        goto block_23;
    }
    if (*(s32 *)((u8 *)arg1 + 0) != 0) {
        goto block_23;
    }
    var_s0 = *(u8 *)((u8 *)temp_s0 + 0x124);
    goto loop_20;
block_16:
    temp_v0_2 = func_0012EAE0(0x20, var_a1);
    var_a1 = *(s32 *)((u8 *)arg1 + 0xC);
    var_v1_2 = (temp_v0_2 / 10) & 3;
    var_a0 = *(s8 *)((u8 *)(var_v1_2 + sp) + 0x3C);
    if (var_a0 & var_a1) {
        goto block_19;
    }
loop_17:
    var_v1_2 = (var_v1_2 + 1) & 3;
    var_a0 = *(s8 *)((u8 *)(var_v1_2 + sp) + 0x3C);
    if (!(var_a0 & var_a1)) {
        goto loop_17;
    }
block_19:
    var_v0 = (s64) ((s64) var_a0 << 0x38) >> 0x38;
    var_s0 -= 1;
loop_20:
    if (*(s32 *)((u8 *)arg1 + 8) == var_v0) {
        goto block_23;
    }
    if (var_s0 != 0) {
        goto block_16;
    }
block_23:
    return var_v0;
}
