/* Draft (not built): func_001D7E50 at 0x001D7E50, size 0x154, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); int' to 'struct Fighter *' @ 867: turn (struct Fighter *)func_001DFE60(0xA, (s32)((struct Fighter *)(0x453B8000))) != 0;
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D7E50.s */

// src/unk/unk_1D5B30.c func_001D7E50 cerr diff=-1/0
s32 func_001D7E50(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_v1_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    if (gBattle != NULL) {
        var_v0 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 8;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) != 2) {
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2013) != 0) {
        return 0;
    }
    if (arg2 & 0xFFFF & 0x80) {
        return 0;
    }
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xB9C);
    if ((u32) (temp_v1 - 0xE) >= 2U) {
        if (temp_v1 == 0x11) {
            goto block_15;
        }
        var_v1 = 0;
    } else {
block_15:
        var_v1 = 1;
    }
    if (var_v1 == 1) {
        if (arg1 == 0) {
            return 0;
        }
        temp_v1_2 = *(s16 *)((u8 *)arg0 + 0xCAC);
        if (temp_v1_2 == 0x10) {
            return 0;
        }
        if (*(s16 *)((u8 *)arg0 + 0xAE4) & 0x40) {
            return 0;
        }
        if (temp_v1_2 == 0x14) {
            return 0;
        }
        if (temp_v1_2 == 0x15) {
            return 0;
        }
        goto block_31;
    }
block_31:
    return (struct Fighter *)func_001DFE60(0xA, (s32)((struct Fighter *)(0x453B8000))) != 0;
}
