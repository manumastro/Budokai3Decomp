/* Draft (not built): func_001D7A70 at 0x001D7A70, size 0x150, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D7A70.s */

void func_001D7A70(u8 *arg0) {
    u8 *temp_a1;
    temp_a1 = *(u8 **)((u8 *)arg0 + 0x1CF8);
    *(s8 *)((u8 *)arg0 + 0x1D04) = (s8)*(s16 *)(*(s16 *)((u8 *)temp_a1 + 0xD8) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0xD6) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D05) = (s8)*(s16 *)(*(s16 *)((u8 *)temp_a1 + 0xEC) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0xEA) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D06) = (s8)*(s16 *)(*(s16 *)((u8 *)temp_a1 + 0x100) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0xFE) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D07) = (s8)*(s16 *)(*(s16 *)((u8 *)temp_a1 + 0x114) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0x112) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D08) = (s8)*(*(s16 *)((u8 *)temp_a1 + 0x128) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0x126) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D09) = (s8)*(*(s16 *)((u8 *)temp_a1 + 0x13C) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0x13A) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D0A) = (s8)*(*(s16 *)((u8 *)temp_a1 + 0x150) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0x14E) * 0x60));
    *(s8 *)((u8 *)arg0 + 0x1D0B) = (s8)*(*(s16 *)((u8 *)temp_a1 + 0x164) * 8 + (D_00447450 + *(s16 *)((u8 *)temp_a1 + 0x162) * 0x60));
}
