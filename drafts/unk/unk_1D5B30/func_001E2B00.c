/* Draft (not built): func_001E2B00 at 0x001E2B00, size 0x14C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); gal implicit conversion from 'long' to 'struct PtrCount' mwccps2.exe Compiler: @ 3091: func_002470B0(-1, (s64) sp38, 0);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E2B00.s */

// src/unk/unk_1D5B30.c func_001E2B00 cerr diff=-1/0
void func_001E2B00(u8 *arg0) {
    u8 *sp30;
    s32 sp34;
    u8 *sp38;
    s32 sp3C;
    s32 temp_a1;
    s32 var_a2;
    u8 *temp_s1;
    u8 *temp_s1_2;

    var_a2 = 0;
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x1CF0);
    if (temp_a1 >= 0) {
        if (*(s8 *)((u8 *)arg0 + 0x2013) != 0) {
            sp38 = arg0;
            sp3C = 7;
            func_002470B0(-1, (s64) sp38, 0);
            *(s32 *)((u8 *)arg0 + 0x1860) = 0xBF800000;
            temp_s1 = arg0 + 0x1AA0;
            if (*(s32 *)((u8 *)arg0 + 0x1AA4) > 0) {
                func_00144430(temp_s1);
                *(s32 *)((u8 *)temp_s1 + 4) = 0;
            }
            *(s32 *)((u8 *)arg0 + 0x1CF0) = -1;
            return;
        }
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            if (*(s32 *)((u8 *)arg0 + 0x13B4) < temp_a1) {
                var_a2 = 1;
            }
        } else {
            var_a2 = func_001E8B90(temp_a1, 0);
        }
        if (var_a2 != 0) {
            sp30 = arg0;
            sp34 = 6;
            func_002470B0(-1, (s64) sp30, var_a2);
            *(s32 *)((u8 *)arg0 + 0x1860) = 0xBF800000;
            temp_s1_2 = arg0 + 0x1AA0;
            if (*(s32 *)((u8 *)arg0 + 0x1AA4) > 0) {
                func_00144430(temp_s1_2);
                *(s32 *)((u8 *)temp_s1_2 + 4) = 0;
            }
            *(s32 *)((u8 *)arg0 + 0x1CF0) = -1;
            return;
        }
        if (*(s32 *)((u8 *)arg0 + 0x1CFC) == 0x20) {
            func_001E9B00(*(s32 *)((u8 *)arg0 + 0x1350) + 2, 0x33, 0, arg0 + 0x1AA0, 0x42AA0000, 0x3F800000);
        }
    }
}
