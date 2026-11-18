/* Draft (not built): func_001E8830 at 0x001E8830, size 0x178, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x178
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E8830.s */

// src/unk/unk_1D5B30.c func_001E8830 size diff=35/86
s32 func_001E8830(u8 *arg0, s64 arg1) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    if (*(s16 *)((u8 *)temp_s0 + 0x8944) != 0) {
        if (*(s16 *)((u8 *)arg0 + 0x1AD0) == 0) {
            goto block_3;
        }
        temp_a0 = *(s16 *)((u8 *)temp_s0 + 0x7E2);
        if (temp_a0 != 4) {
            if (temp_a0 != 3) {
                goto block_21;
            }
            if (*(s8 *)((u8 *)temp_s0 + 0x8977) != 3) {
                return 0;
            }
            goto block_21;
        }
        if (func_002CC450() & 0x800) {
            if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1ACE) != 0) {
                var_a1 = func_0012EAE0(0x20) & 3;
                var_v0 = 1 << var_a1;
                temp_v1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1ACE);
                if (temp_v1 == var_v0) {
                    do {
                        temp_v0 = var_a1 + 1;
                        var_a1 = temp_v0 & 3;
                        if (temp_v0 < 0) {
                            var_v0 = 1 << var_a1;
                            if (var_a1 != 0) {
                                var_a1 -= 4;
                                goto block_16;
                            }
                        } else {
block_16:
                            var_v0 = 1 << var_a1;
                        }
                    } while (temp_v1 == var_v0);
                }
                return var_v0;
            }
            return 0;
        }
block_21:
        sp44 = (s32) *(s16 *)((u8 *)arg0 + 0x1AD2);
        sp48 = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1ACE);
        temp_a2 = *(s16 *)((u8 *)temp_s0 + 0x894A);
        sp4C = (s32) ((s64) (arg1 << 0x30) >> 0x30);
        sp40 = *(s32 *)((u8 *)arg0 + 0x1350) == temp_a2;
        return ((s64) (arg1 << 0x30) >> 0x30) & func_00233B20(arg0, &sp40, temp_a2);
    }
block_3:
    return 0;
}
