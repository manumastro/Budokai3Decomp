/* Draft (not built): func_001E7180 at 0x001E7180, size 0xB8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); x10) - 1) * 4) + temp_a3) + 0x2C)) + 0x18) + ((temp_a2 & 0xFFFF) * 0x10)) - 1)) && (*(s8 *)((u8 *)arg0 + 0x66C) == 0)) {
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E7180.s */

// src/unk/unk_1D5B30.c func_001E7180 cerr diff=-1/0
void func_001E7180(u8 *arg0) {
    f32 temp_f1;
    s32 temp_a2;
    s32 temp_a3;

    if (*(s8 *)((u8 *)arg0 + 0x66C) == 0) {
        temp_a3 = *(s32 *)((u8 *)arg0 + 0x540);
        if (temp_a3 != 0) {
            temp_a2 = *(s32 *)((u8 *)arg0 + 0x640);
            if ((temp_a2 >= 0) && ((*(s32 *)((u8 *)gBattle + 0x88EC) == 0) || (*(s32 *)((u8 *)arg0 + 0x648) != 0))) {
                temp_f1 = *(f32 *)((u8 *)arg0 + 0x644) + *(f32 *)((u8 *)gBattle + 0x88F0);
                *(f32 *)((u8 *)arg0 + 0x644) = temp_f1;
                if (!(temp_f1 < (f32) (*(*(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_a2 >> 0x10) - 1) * 4) + temp_a3) + 0x2C)) + 0x18) + ((temp_a2 & 0xFFFF) * 0x10)) - 1)) && (*(s8 *)((u8 *)arg0 + 0x66C) == 0)) {
                    *(s32 *)((u8 *)arg0 + 0x640) = -1;
                    *(f32 *)((u8 *)arg0 + 0x644) = 0.0f;
                    *(s32 *)((u8 *)arg0 + 0x648) = 0;
                }
            }
        }
    }
}
