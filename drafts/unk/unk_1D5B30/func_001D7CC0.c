/* Draft (not built): func_001D7CC0 at 0x001D7CC0, size 0x128, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'long' to 'struct PtrCount' mwccps2.exe Compiler: @ 759: func_002470B0(-1, (s64) sp58);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D7CC0.s */

// src/unk/unk_1D5B30.c func_001D7CC0 cerr diff=-1/0
void func_001D7CC0(Fighter *arg0, s32 arg1) {
    s32 sp40;
    u8 *sp50;
    s32 sp54;
    u8 *sp58;
    s32 sp5C;
    s32 var_s0;
    s8 temp_a0;
    u8 *temp_s2;
    u8 *temp_s2_2;

    var_s0 = -1;
    if (*(s8 *)((u8 *)arg0 + 0x2013) != arg1) {
        *(s8 *)((u8 *)arg0 + 0x2013) = arg1;
        temp_a0 = *(s8 *)((u8 *)arg0 + 0x2013);
        switch (temp_a0) {                          /* irregular */
        case 0:
            var_s0 = 0xB;
            break;
        case 2:
            sp58 = (unsigned char *)(arg0);
            sp5C = 7;
            var_s0 = 0xA;
            func_002470B0(-1, (s64) sp58);
            *(s32 *)((u8 *)arg0 + 0x1860) = 0xBF800000;
            temp_s2 = (unsigned char *)(arg0 + 0x1AA0);
            if (*(s32 *)((u8 *)arg0 + 0x1AA4) > 0) {
                func_00144430(temp_s2);
                *(s32 *)((u8 *)temp_s2 + 4) = 0;
            }
block_13:
            *(s32 *)((u8 *)arg0 + 0x1CF0) = -1;
            break;
        case 3:
            sp50 = (unsigned char *)(arg0);
            sp54 = 7;
            var_s0 = 0x2F;
            func_002470B0(-1, (s64) sp50);
            *(s32 *)((u8 *)arg0 + 0x1860) = 0xBF800000;
            temp_s2_2 = (unsigned char *)(arg0 + 0x1AA0);
            if (*(s32 *)((u8 *)arg0 + 0x1AA4) > 0) {
                func_00144430(temp_s2_2);
                *(s32 *)((u8 *)temp_s2_2 + 4) = 0;
            }
            goto block_13;
        }
        if (var_s0 != -1) {
            sp40 = *(s32 *)((u8 *)arg0 + 0x1350);
            A2d_CallHandler(var_s0, &sp40);
        }
    }
}
