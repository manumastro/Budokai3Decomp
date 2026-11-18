/* Draft (not built): func_001DFA90 at 0x001DFA90, size 0x160, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DFA90.s */

// src/unk/unk_1D5B30.c func_001DFA90 diff diff=56/88
s32 func_001DFA90(u8 *arg0, s16 arg1) {
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t0;
    s16 var_a1;
    s32 var_t2;
    s32 var_v0;
    u8 temp_a2;
    u8 *temp_v1;
    u8 *var_t1;

    var_a1 = arg1;
    var_v0 = 0;
    if (var_a1 <= 0) {
        return 0;
    }
    temp_v1 = &D_004E0660 + (var_a1 * 0x28);
    temp_a3 = *(s16 *)((u8 *)gBattle + 0x7E2);
    if (temp_a3 != 2) {
        if (temp_a3 != 0) {
            goto block_12;
        }
        if (!(*(u8 *)((u8 *)temp_v1 + 0xB) & 0x40)) {
            return 0;
        }
        goto block_12;
    }
    if ((*(s8 *)((u8 *)gBattle + 0x8ABA) == 0) && !(*(u8 *)((u8 *)temp_v1 + 0xB) & 0x10)) {
        return 0;
    }
block_12:
    temp_a3_2 = *(s16 *)((u8 *)temp_v1 + 0x1E);
    if (temp_a3_2 == 5) {
        var_a1 = *(s16 *)((u8 *)temp_v1 + 0x20);
    }
    var_t1 = *(u8 **)((u8 *)arg0 + 0x1CF4);
    temp_t0 = *(s16 *)((u8 *)var_t1 + 0x34);
    var_t2 = 0;
    if (temp_t0 > 0) {
        do {
            if (*(s16 *)((u8 *)var_t1 + 0x36) == var_a1) {
                var_v0 += 1;
            }
            var_t2 += 1;
            var_t1 += 2;
        } while (var_t2 < temp_t0);
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FDB) > 0) {
        temp_a2 = *(u8 *)((u8 *)temp_v1 + 0x15);
        if ((temp_a2 != 0) && (temp_a2 != 6) && (temp_a2 != 0xB)) {
            if (temp_a2 == 7) {
                goto block_25;
            }
            goto block_26;
        }
block_25:
        return !(*(u8 *)((u8 *)temp_v1 + 0xB) & 8) ? 1 : 3;
    }
block_26:
    if ((temp_a3_2 == 1) && (*(s16 *)((u8 *)temp_v1 + 0x20) == *(s32 *)((u8 *)arg0 + 0xB9C))) {
        var_v0 = 1;
    }
    return var_v0;
}
