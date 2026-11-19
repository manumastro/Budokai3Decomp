/* Draft (not built): func_0020BBD0 at 0x0020BBD0, size 0x1E0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020BBD0.s */

// src/unk/unk_20A4D0.c func_0020BBD0 diff diff=93/120
s32 func_0020BBD0(u8 *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f2;
    s32 temp_t0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;
    u8 *temp_a3;
    u8 *temp_t1;

    temp_f3 = *(f32 *)((u8 *)arg0 + 0x20F8) - 1.0f;
    if (gBattle == NULL) {
        goto block_2;
    }
    var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
    goto block_3;
block_2:
    var_v0 = 0;
block_3:
    if (var_v0 == 0) {
        goto block_6;
    }
    return 0;
block_6:
    if (*(u8 **)((u8 *)arg0 + 0x9C) != NULL) {
        goto block_9;
    }
    return 0;
block_9:
    if (!(*(s32 *)((u8 *)arg0 + 0x20EC) & 0x10)) {
        goto block_12;
    }
    var_f0 = *(f32 *)((u8 *)arg0 + 0x20F0) + *(f32 *)((u8 *)arg0 + 0x20FC);
    goto block_18;
block_12:
    if (gBattle == NULL) {
        goto block_14;
    }
    var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    goto block_17;
block_14:
    if (D_004703F4 == 3) {
        goto block_16;
    }
    var_f2 = 1.0f;
    goto block_17;
block_16:
    var_f2 = 1.2f;
block_17:
    var_f0 = *(f32 *)((u8 *)arg0 + 0x20F0) + (*(f32 *)((u8 *)arg0 + 0x20FC) * var_f2);
block_18:
    *(f32 *)((u8 *)arg0 + 0x20F0) = var_f0;
    if (!(*(f32 *)((u8 *)arg0 + 0x20F0) < 0.0f)) {
        goto block_20;
    }
    *(f32 *)((u8 *)arg0 + 0x20F0) = 0.0f;
block_20:
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x20F0);
    if (temp_f0 <= temp_f3) {
        goto block_26;
    }
    if (arg1 == 0) {
        goto block_24;
    }
    *(f32 *)((u8 *)arg0 + 0x20F0) = (f32) (temp_f0 - temp_f3);
    goto block_25;
block_24:
    *(f32 *)((u8 *)arg0 + 0x20F0) = temp_f3;
block_25:
    var_s0 = 1;
    goto block_27;
block_26:
    var_s0 = 0;
block_27:
    temp_t1 = *(u8 **)((u8 *)arg0 + 0x9C);
    temp_t0 = *(s32 *)((u8 *)arg0 + 0x2100);
    temp_a3 = temp_t1 + 0x41C;
    if (*(s32 *)((u8 *)temp_t1 + 0x41C) == temp_t0) {
        goto block_32;
    }
    var_a2 = 0;
    if (*(s32 *)((u8 *)temp_t1 + 0x418) <= 0) {
        goto block_31;
    }
    var_a1 = 0;
loop_30:
    var_a2 += 1;
    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x30) = -1;
    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x34) = -1;
    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x38) = -1;
    var_a1 += 0x40;
    if (var_a2 < *(s32 *)((u8 *)temp_t1 + 0x418)) {
        goto loop_30;
    }
block_31:
    *(s32 *)((u8 *)temp_a3 + 0xC) = 0xBF800000;
block_32:
    *(s32 *)((u8 *)temp_t1 + 0x41C) = temp_t0;
    *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x9C)) + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x20F0);
    amMotion_Update(*(u8 **)((u8 *)arg0 + 0x9C), 0);
    return var_s0;
}
