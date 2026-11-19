/* Draft (not built): func_00241010 at 0x00241010, size 0xBC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241010.s */

s32 func_00241010(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a1;
    u8 *temp_v0;
    u8 *temp_v1_3;
    temp_v0 = gBattle + arg0 * 0x2020;
    temp_v1 = *(s32 *)((u8 *)temp_v0 + 0x252C);
    var_a1 = 0;
    if (!((u32)(temp_v1 - 0x28) >= 2U && temp_v1 != 0x12 && temp_v1 != 5 && (u32)(temp_v1 - 0x14) >= 2U && temp_v1 != 0x23 && ((temp_v1_2 = *(s32 *)((u8 *)(temp_v0 + 0x830) + 0xB9C), (u32)(temp_v1_2 - 0x46) < 2U == 0)))) {
        block_8:
        temp_v1_3 = D_0046FE4C + arg0 * 0x480;

        temp_v1_4 = *(s32 *)((u8 *)temp_v1_3 + 0x24);
        if (temp_v1_4 != -1 && temp_v1_4 != *(s32 *)((u8 *)(temp_v1_3 + 0x10) + 0x38)) {
            var_a1 = 1;
        }
    } else {
        if (temp_v1_2 == 0x5C) {
            goto block_8;
        }
    }
    return var_a1 == 0;
}
