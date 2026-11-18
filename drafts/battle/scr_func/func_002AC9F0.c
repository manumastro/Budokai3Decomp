/* Draft (not built): func_002AC9F0 at 0x002AC9F0, size 0x1FC, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x21C, original 0x1FC
 * Original: asm/nonmatchings/battle/scr_func/func_002AC9F0.s */

// src/battle/scr_func.c func_002AC9F0 size diff=50/135
s32 amModel_SetupPart(s32, void *, s32, s32, f32);
s32 func_002AC9F0(u8 *arg0, u8 *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    u8 *temp_t0;
    u8 *temp_v1;

    temp_t0 = *(u8 **)((u8 *)arg0 + 0);
    temp_v1 = ((*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 8) + 1) * 0x30) + (&D_005BC440 + (*(s32 *)((u8 *)temp_t0 + 0) * 0x90));
    if (*(s32 *)((u8 *)temp_v1 + 0) == 0) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)temp_v1 + 8) != 0) {
        goto block_5;
    }
block_3:
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return 1;
block_5:
    temp_a3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 4)) + 0x14);
    temp_f3 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0xC) * 0x10) + temp_a3) + 8);
    if (*(s32 *)((u8 *)temp_t0 + 0xC) == 3) {
        goto block_26;
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x10) + *(f32 *)((u8 *)temp_v1 + 0x14));
    if (*(s32 *)((u8 *)temp_v1 + 0x18) != 1) {
        goto block_12;
    }
    temp_f1 = *(f32 *)((u8 *)temp_v1 + 0x10);
    temp_f3_2 = temp_f3 - 1.0f;
    if (temp_f1 <= temp_f3_2) {
        goto block_9;
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) (temp_f1 - temp_f3_2);
    *(s32 *)((u8 *)temp_v1 + 0x18) = (s32) (*(s32 *)((u8 *)temp_v1 + 0x18) - 1);
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return 1;
block_9:
    if (!(temp_f1 < 0.0f)) {
        goto block_26;
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) (temp_f1 + temp_f3_2);
    *(s32 *)((u8 *)temp_v1 + 0x18) = (s32) (*(s32 *)((u8 *)temp_v1 + 0x18) - 1);
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return 1;
block_12:
    temp_f2 = *(f32 *)((u8 *)temp_v1 + 0x10);
    temp_f1_2 = temp_f3 - 1.0f;
    if (temp_f2 <= temp_f1_2) {
        goto block_19;
    }
    temp_f1_3 = temp_f2 - temp_f3;
    *(f32 *)((u8 *)temp_v1 + 0x10) = temp_f1_3;
    if (!(temp_f1_3 < 0.0f)) {
        goto block_15;
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = 0.0f;
block_15:
    temp_a1 = *(s32 *)((u8 *)temp_v1 + 0x18);
    if (temp_a1 == -1) {
        goto block_26;
    }
    *(s32 *)((u8 *)temp_v1 + 0x18) = (s32) (temp_a1 - 1);
    if (*(s32 *)((u8 *)temp_v1 + 0x18) > 0) {
        goto block_26;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return 1;
block_19:
    temp_f0 = temp_f2 + temp_f3;
    if (!(temp_f2 < 0.0f)) {
        goto block_26;
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = temp_f0;
    if (temp_f0 <= temp_f1_2) {
        goto block_22;
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = temp_f1_2;
block_22:
    temp_a1_2 = *(s32 *)((u8 *)temp_v1 + 0x18);
    if (temp_a1_2 == -1) {
        goto block_26;
    }
    *(s32 *)((u8 *)temp_v1 + 0x18) = (s32) (temp_a1_2 - 1);
    if (*(s32 *)((u8 *)temp_v1 + 0x18) > 0) {
        goto block_26;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    return 1;
block_26:
    amModel_SetupPart(*(s32 *)((u8 *)temp_v1 + 8), *(u8 **)((u8 *)temp_v1 + 4), *(s32 *)((u8 *)temp_v1 + 0xC), temp_a3, *(f32 *)((u8 *)temp_v1 + 0x10));
    return 3;
}
