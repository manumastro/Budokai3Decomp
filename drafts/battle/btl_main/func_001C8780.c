/* Draft (not built): func_001C8780 at 0x001C8780, size 0xDC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001C8780.s */

s32 func_001C8780(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_v0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    temp_a0 = *(s32 *)((u8 *)(arg1 * 4 + arg0) + 0x1DB8);
    if (temp_a0 == 0) {
        var_a0 = 1;
    } else {
        var_a0 = (func_001CAA30(temp_a0) == 0) ? (0) : (2);
    }
    if (var_a0 == 0) {
        return 0;
    }
    temp_v0 = (unsigned char *)(arg0 + arg1 * 0x1C);
    if (*(s32 *)((u8 *)temp_v0 + 0x1DF8) == 0 && ((temp_v0_2 = *(u8 **)((u8 *)(temp_v0 + 0x1DF8) + 0x14), temp_v0_2 != NULL))) {
        if (*(s16 *)((u8 *)temp_v0_2 + 4) == 3) {
            var_v0 = 2;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        return 0;
    }
    return (var_a0 <= var_v0) ? (var_v0) : (var_a0);
}
