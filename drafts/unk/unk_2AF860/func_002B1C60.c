/* Draft (not built): func_002B1C60 at 0x002B1C60, size 0x104, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 10 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1C60.s */

s32 func_002B1C60(u8 *arg0) {
    u8 *temp_s1;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_v0;
    u8 *temp_v1;
    temp_v1 = arg0 + *(s32 *)((u8 *)arg0 + 0x24) * 0x1C;
    temp_s1 = temp_v1 + 0x48;
    temp_a0 = *(s32 *)((u8 *)temp_v1 + 0x48);
    temp_v1_2 = *(s16 *)((u8 *)temp_v1 + 0x62);
    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x4C) + temp_a0;
    if (temp_s0 + 9 < temp_v1_2) {
        if (temp_s0 + 0x12 < temp_v1_2) {
            *(s32 *)((u8 *)temp_v1 + 0x48) = (s32)(temp_a0 + 9);
        } else {
            *(s32 *)((u8 *)temp_v1 + 0x48) = (s32)(temp_v1_2 - 9);
            var_v0 = 9 - (*(s32 *)((u8 *)temp_v1 + 0x48) - temp_s0);
            goto block_7;
        }
    } else {
        if (temp_v1_2 < 9) {
            *(s32 *)((u8 *)temp_v1 + 0x48) = 0;
            var_v0 = *(s16 *)((u8 *)temp_s1 + 0x1A) - 1;
        } else {
            *(s32 *)((u8 *)temp_v1 + 0x48) = (s32)(temp_v1_2 - 9);
            var_v0 = 8;
        }
        block_7:
        *(s32 *)((u8 *)temp_s1 + 4) = var_v0;
    }
    func_002B1D70(arg0);
    func_002B1B10(arg0, *(s16 *)((u8 *)(*(s32 *)((u8 *)temp_s1 + 4) * 2 + temp_s1) + 8));
    return temp_s0 != *(s32 *)((u8 *)temp_s1 + 4) + *(s32 *)((u8 *)temp_v1 + 0x48);
}
