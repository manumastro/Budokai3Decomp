/* Draft (not built): func_001E92D0 at 0x001E92D0, size 0x130, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 51 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E92D0.s */

s32 func_00235D90(void *);
s32 func_001E92D0(u8 *arg0) {
    s16 temp_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 2) {
        return 0;
    }
    var_v0_3 = 0;
    if (gBattle != NULL) {
        var_v0_3 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x1000;
    }
    if (var_v0_3 != 0) {
        return 0;
    }
    temp_a0 = *(s16 *)((u8 *)gBattle + 0x7E2);
    if (temp_a0 != 4) {
        if (temp_a0 != 3) {
            goto block_18;
        }
        if (*(s8 *)((u8 *)gBattle + 0x8977) != 3) {
            var_v0_2 = -1;
            if (*(s8 *)((u8 *)gBattle + 0x897B) == 1) {
                var_v0_2 = 0x23;
            }
            return var_v0_2;
        }
        goto block_18;
    }
    if (func_002CC450() & 0x10000) {
        return 0x23;
    }
    block_18:
    var_v0 = func_00235D90(arg0);

    if (!(var_v0 != 0x24)) {
        block_21:
        if (gBattle != NULL) {
            var_v1 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x2000;
        } else {
            var_v1 = 0;
        }

        if (var_v1 != 0) {
            var_v0 = 0x23;
        }
    } else {
        if (var_v0 == 0x25) {
            goto block_21;
        }
    }
    return var_v0;
}
