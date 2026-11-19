/* Draft (not built): func_00244660 at 0x00244660, size 0x3F4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 103 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3EC, original 0x3F4
 * Original: asm/nonmatchings/unk/unk_23A890/func_00244660.s */

// src/unk/unk_23A890.c func_00244660 size diff=103/251
s32 func_001B0D10();
s32 func_00215120(s64, s32, s32);
void func_00244660(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_f1;
    s16 var_v1_2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v1;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s2 = arg0 + 0x30;
    temp_s1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1350);
    temp_s0 = D_0046FE4C + (temp_s1 * 0x480) + 0x10;
    if (func_001B0D10() != 4) {
        goto block_47;
    }
    var_a1 = 0;
    if (gBattle == NULL) {
        goto block_7;
    }
    var_a1 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
    if (var_a1 == 0) {
        goto block_7;
    }
    var_a1 = 1;
    if (!(*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f)) {
        goto block_5;
    }
    var_a1 = 0;
block_5:
block_7:
    var_v1 = 0;
    if (gBattle == NULL) {
        goto block_10;
    }
    var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
block_10:
    if ((var_v1 | var_a1) != 0) {
        goto block_47;
    }
    var_v1_2 = 0;
    if (gBattle == NULL) {
        goto block_14;
    }
    var_v1_2 = *(s16 *)((u8 *)gBattle + 0x8944);
block_14:
    if (var_v1_2 != 0) {
        goto block_47;
    }
    if (!(*(f32 *)((u8 *)temp_s2 + 8) < *(f32 *)((u8 *)temp_s2 + 0x14))) {
        goto block_25;
    }
    if (gBattle == NULL) {
        goto block_19;
    }
    var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    goto block_24;
block_19:
    if (D_004703F4 == 3) {
        goto block_22;
    }
    var_f1 = 1.0f;
    goto block_23;
block_22:
    var_f1 = 1.2f;
block_23:
block_24:
    *(f32 *)((u8 *)temp_s2 + 8) = (f32) (*(f32 *)((u8 *)temp_s2 + 8) + var_f1);
    goto block_27;
block_25:
    func_00215040((s64) ((s64) temp_s1 << 0x30) >> 0x30, 0x800, 0xC6);
    amTask_Kill((s32)(arg0));
    *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
    return;
block_27:
    temp_f2 = *(f32 *)((u8 *)temp_s2 + 0xC);
    temp_f3 = *(f32 *)((u8 *)temp_s2 + 8);
    if (temp_f3 < temp_f2) {
        goto block_35;
    }
    if (temp_f2 < 700.0f) {
        goto block_31;
    }
    func_00215120((s64) ((s64) temp_s1 << 0x30) >> 0x30, 0x800, 0xC2);
    *(f32 *)((u8 *)temp_s2 + 0xC) = 800.0f;
    return;
block_31:
    if (temp_f2 < 400.0f) {
        goto block_35;
    }
    if (!(temp_f2 < 700.0f)) {
        goto block_35;
    }
    func_00215120((s64) ((s64) temp_s1 << 0x30) >> 0x30, 0x800, 0xC3);
    *(f32 *)((u8 *)temp_s2 + 0xC) = 700.0f;
    return;
block_35:
    temp_f2_2 = *(f32 *)((u8 *)temp_s2 + 0x10);
    if (temp_f3 < temp_f2_2) {
        goto block_47;
    }
    if (temp_f2_2 < 511.0f) {
        goto block_39;
    }
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 1, 6);
    *(f32 *)((u8 *)temp_s2 + 0x10) = 800.0f;
    func_001D9C40(*(u8 **)((u8 *)arg0 + 0x30), temp_s1 + 2, 0x33);
    return;
block_39:
    if (temp_f2_2 < 400.0f) {
        goto block_41;
    }
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 0, 5);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 3, 5);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 6, 5);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 7, 5);
    *(f32 *)((u8 *)temp_s2 + 0x10) = 511.0f;
    return;
block_41:
    if (temp_f2_2 < 200.0f) {
        goto block_44;
    }
    if (!(temp_f2_2 < 400.0f)) {
        goto block_44;
    }
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 0, 4);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 3, 4);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 6, 4);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 7, 4);
    *(f32 *)((u8 *)temp_s2 + 0x10) = 400.0f;
    return;
block_44:
    if (temp_f2_2 < 0.0f) {
        goto block_47;
    }
    if (!(temp_f2_2 < 200.0f)) {
        goto block_47;
    }
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 0, 3);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 3, 3);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 6, 3);
    func_00244580(*(u8 **)((u8 *)arg0 + 0x30), 7, 3);
    *(f32 *)((u8 *)temp_s2 + 0x10) = 200.0f;
block_47:
    return;
}
