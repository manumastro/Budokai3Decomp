/* Draft (not built): func_001E8A30 at 0x001E8A30, size 0xB4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'short' to 'void *' @ 4612: return func_00233B20(&sp10, temp_a2) & 0xF;
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E8A30.s */

// src/unk/unk_1D5B30.c func_001E8A30 cerr diff=-1/0
s32 func_001E8A30(u8 *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s16 temp_a2;

    if (*(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        if (*(s16 *)((u8 *)arg0 + 0x1AD0) == 0) {
            goto block_3;
        }
        if ((*(s16 *)((u8 *)gBattle + 0x7E2) == 3) && (*(s8 *)((u8 *)gBattle + 0x8977) != 3)) {
            return 0;
        }
        sp14 = (s32) *(s16 *)((u8 *)arg0 + 0x1AD2);
        sp18 = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1ACE);
        temp_a2 = *(s16 *)((u8 *)gBattle + 0x894A);
        sp1C = 0xF;
        sp10 = *(s32 *)((u8 *)arg0 + 0x1350) == temp_a2;
        return func_00233B20(&sp10, temp_a2) & 0xF;
    }
block_3:
    return 0;
}
