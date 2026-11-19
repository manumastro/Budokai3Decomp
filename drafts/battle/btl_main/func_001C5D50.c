/* Draft (not built): func_001C5D50 at 0x001C5D50, size 0x1D0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001C5D50.s */

void func_001C5D50(void) {
    s16 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    u8 *var_s0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *var_v1;
    temp_a0 = *(u16 *)((u8 *)gBattle + 0x7E2);
    var_s0 = &gBattle->unk0000[0x830];
    if (temp_a0 == 5) {
        goto block_13;
    }
    if (temp_a0 == 2) {
        goto block_13;
    }
    if (temp_a0 == 1) {
        goto block_9;
    }
    if (temp_a0 == 0) {
        goto block_6;
    }
    return;
    block_6:
    if ((s8)gBattle->unk0000[0x2845] == 0) {
        goto block_8;
    }

    var_s0 = *(u8 **)((u8 *)gBattle + 0x1B88);
    block_8:
    func_001D83E0(var_s0);

    *(s8 *)((u8 *)*(u8 **)((u8 *)var_s0 + 0x1354) + 0xCBD) = 1;
    var_v1 = *(u8 **)((u8 *)var_s0 + 0x1354);
    goto block_22;
    block_9:
    temp_v1 = *(s32 *)((u8 *)gBattle + 0x8900);

    if (temp_v1 >= 0) {
        goto block_12;
    }
    func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88E0));
    return;
    block_12:
    temp_s0 = var_s0 + temp_v1 * 0x2020;

    func_001D83E0(temp_s0);
    *(s8 *)((u8 *)*(u8 **)((u8 *)temp_s0 + 0x1354) + 0xCBD) = 1;
    var_v1 = *(u8 **)((u8 *)temp_s0 + 0x1354);
    goto block_22;
    block_13:
    temp_a0_2 = *(s32 *)((u8 *)gBattle + 0x8900);

    if (temp_a0_2 >= 0) {
        goto block_16;
    }
    func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88E0));
    return;
    block_16:
    if (*(s32 *)((u8 *)gBattle + 0x8904) >= 0) {
        goto block_20;
    }

    if (*(u16 *)((u8 *)gBattle + 0x7E2) != 5) {
        goto block_21;
    }
    if (*D_004B4B59 != 3) {
        goto block_21;
    }
    block_20:
    temp_s0_2 = var_s0 + temp_a0_2 * 0x2020;

    func_001D83E0(temp_s0_2);
    *(s8 *)((u8 *)*(u8 **)((u8 *)temp_s0_2 + 0x1354) + 0xCBD) = 1;
    var_v1 = *(u8 **)((u8 *)temp_s0_2 + 0x1354);
    goto block_22;
    block_21:
    temp_s0_3 = *(u8 **)((u8 *)(temp_a0_2 * 0x2020 + var_s0) + 0x1354);

    func_001D83E0(temp_s0_3);
    *(s8 *)((u8 *)*(u8 **)((u8 *)temp_s0_3 + 0x1354) + 0xCBD) = 1;
    var_v1 = *(u8 **)((u8 *)temp_s0_3 + 0x1354);
    block_22:
    *(s8 *)((u8 *)var_v1 + 0x1FF8) = 0;

    return;
}
