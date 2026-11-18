/* Draft (not built): func_001E2CC0 at 0x001E2CC0, size 0x11C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal implicit conversion from 'long' to 'struct PtrCount' mwccps2.exe Compiler: @ 3143: func_002470B0(-1, (s64) sp48);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E2CC0.s */

// src/unk/unk_1D5B30.c func_001E2CC0 cerr diff=-1/0
void func_001E2CC0(u8 *arg0) {
    u8 *sp38;
    s32 sp3C;
    u8 *sp40;
    s32 sp44;
    u8 *sp48;
    s32 sp4C;
    s32 var_v1;
    u8 *temp_s1;
    u8 *temp_s1_2;

    if (*(s32 *)((u8 *)arg0 + 0x1CF0) < 0) {
        sp48 = arg0;
        sp4C = 5;
        func_002470B0(-1, (s64) sp48);
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_v1 = *(s32 *)((u8 *)arg0 + 0x13B4);
            if (var_v1 <= 0) {
                sp40 = arg0;
                sp44 = 6;
                func_002470B0(-1, (s64) sp40);
                *(s32 *)((u8 *)arg0 + 0x1860) = 0xBF800000;
                temp_s1 = arg0 + 0x1AA0;
                if (*(s32 *)((u8 *)arg0 + 0x1AA4) > 0) {
                    func_00144430(temp_s1);
                    *(s32 *)((u8 *)temp_s1 + 4) = 0;
                }
                *(s32 *)((u8 *)arg0 + 0x1CF0) = -1;
                return;
            }
            goto block_14;
        }
        if (func_001E8B90(arg0) != 0) {
            sp38 = arg0;
            sp3C = 6;
            func_002470B0(-1, (s64) sp38);
            *(s32 *)((u8 *)arg0 + 0x1860) = 0xBF800000;
            temp_s1_2 = arg0 + 0x1AA0;
            if (*(s32 *)((u8 *)arg0 + 0x1AA4) > 0) {
                func_00144430(temp_s1_2);
                *(s32 *)((u8 *)temp_s1_2 + 4) = 0;
            }
            *(s32 *)((u8 *)arg0 + 0x1CF0) = -1;
            return;
        }
        var_v1 = 1;
block_14:
        *(s32 *)((u8 *)arg0 + 0x1CF0) = var_v1;
    }
}
