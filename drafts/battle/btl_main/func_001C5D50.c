/* Draft (not built): func_001C5D50 at 0x001C5D50, size 0x1D0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand @ 5348: if ((*(s16 *)((u8 *)gBattle + 0x7E2) == 5) && (D_004B4B59 == 3)) {
 * Original: asm/nonmatchings/battle/btl_main/func_001C5D50.s */

// src/battle/btl_main.c func_001C5D50 cerr diff=-1/0
void func_001C5D50(void) {
    s16 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *var_s0;
    u8 *var_v1;

    temp_a0 = *(s16 *)((u8 *)gBattle + 0x7E2);
    var_s0 = (u8 *)(gBattle + 0x830);
    switch (temp_a0) {                              /* irregular */
    case 0:
        if (*(s8 *)((u8 *)var_s0 + 0x2015) != 0) {
            var_s0 = *(u8 **)((u8 *)var_s0 + 0x1358);
        }
        func_001D83E0(var_s0);
        *(s8 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1354)) + 0xCBD) = 1;
        var_v1 = *(u8 **)((u8 *)var_s0 + 0x1354);
block_22:
        *(s8 *)((u8 *)var_v1 + 0x1FF8) = 0;
        return;
    case 1:
        temp_v1 = *(s32 *)((u8 *)gBattle + 0x8900);
        if (temp_v1 < 0) {
            func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88DC));
            func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88E0));
            return;
        }
        temp_s0 = var_s0 + (temp_v1 * 0x2020);
        func_001D83E0(temp_s0);
        *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1354)) + 0xCBD) = 1;
        var_v1 = *(u8 **)((u8 *)temp_s0 + 0x1354);
        goto block_22;
    case 5:
    case 2:
        temp_a0_2 = *(s32 *)((u8 *)gBattle + 0x8900);
        if (temp_a0_2 < 0) {
            func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88DC));
            func_001D83E0(*(u8 **)((u8 *)gBattle + 0x88E0));
            return;
        }
        if (*(s32 *)((u8 *)gBattle + 0x8904) < 0) {
            if ((*(s16 *)((u8 *)gBattle + 0x7E2) == 5) && (D_004B4B59 == 3)) {
                goto block_20;
            }
            temp_s0_2 = *(u8 **)((u8 *)((temp_a0_2 * 0x2020) + var_s0) + 0x1354);
            func_001D83E0(temp_s0_2);
            *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0x1354)) + 0xCBD) = 1;
            var_v1 = *(u8 **)((u8 *)temp_s0_2 + 0x1354);
        } else {
block_20:
            temp_s0_3 = var_s0 + (temp_a0_2 * 0x2020);
            func_001D83E0(temp_s0_3);
            *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 0x1354)) + 0xCBD) = 1;
            var_v1 = *(u8 **)((u8 *)temp_s0_3 + 0x1354);
        }
        goto block_22;
    }
}
