/* Draft (not built): func_001DCB70 at 0x001DCB70, size 0x110, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DCB70.s */

void func_001DCB70(u8 *arg0) {
    f32 temp_f1;
    f32 var_f0;
    s32 var_v1;
    u32 temp_hi;
    u8 ***temp_a0;
    if (*(s8 *)((u8 *)arg0 + 0x2000) == 0) {
        goto block_14;
    }
    temp_a0 = *(u8 ****)((u8 *)arg0 + 0xB88);
    if (temp_a0 == NULL) {
        goto block_5;
    }
    if (0 > *(s16 *)((u8 *)*(u8 **)((u8 *)arg0 + 0xB8C) + 0x26)) {
        goto block_5;
    }
    if (*(s32 *)((u8 *)**temp_a0 + 0x20) >= 2) {
        goto block_6;
    }
    block_5:
    return;

    block_6:
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x18DC) + *(f32 *)((u8 *)arg0 + 0xC9C) * *(f32 *)((u8 *)gBattle + 0x88F0);

    *(f32 *)((u8 *)arg0 + 0x18DC) = temp_f1;
    if (temp_f1 <= 10.0f) {
        goto block_11;
    }
    temp_hi = func_0012EAE0(0x20) % 300U;
    if (0 > (s32)temp_hi) {
        goto block_9;
    }
    var_f0 = (f32)temp_hi;
    goto block_10;
    block_9:
    var_f0 = 2.0f * (f32)(temp_hi >> 1 | temp_hi & 1);

    block_10:
    *(f32 *)((u8 *)arg0 + 0x18DC) = (f32)-var_f0;

    block_11:
    var_v1 = 1;

    if (!(*(f32 *)((u8 *)arg0 + 0x18DC) <= 0.0f)) {
        goto block_13;
    }
    var_v1 = 0;
    block_13:
    *(s32 *)((u8 *)arg0 + 0x18E0) = var_v1;

    block_14:
    return;
}
