/* Draft (not built): func_001DF500 at 0x001DF500, size 0x32C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 135 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x314, original 0x32C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DF500.s */

// src/unk/unk_1D5B30.c func_001DF500 size diff=135/197
s32 func_001DF500(u8 *arg0, s32 arg1) {
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a2_3;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;
    u8 *temp_s0;

    if (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB0)) + 6) == 4) {
        return 0;
    }
    temp_s0 = &D_004E0660 + (arg1 * 0x28);
    temp_v0 = func_001DFA90(0, 0);
    if ((temp_v0 <= 0) && (*(s16 *)((u8 *)temp_s0 + 0x1E) != 1)) {
        return 0;
    }
    temp_v1 = *(s16 *)((u8 *)temp_s0 + 0x1E);
    switch (temp_v1) {
    case 1:
        if (*(s16 *)((u8 *)temp_s0 + 0x20) != *(s32 *)((u8 *)arg0 + 0xB9C)) {
            return 0;
        }
    default:
block_58:
        if (!(*(u8 *)((u8 *)temp_s0 + 0xE) & ((1 << *(s32 *)((u8 *)arg0 + 0xBA4)) & 0xFF))) {
            return temp_v1 != 5;
        }
        if (func_001DFE60(arg0, 2, (f32) (*(u8 *)((u8 *)temp_s0 + 0xF) * 0x64)) == 0) {
            return 1;
        }
        return (*(s16 *)((u8 *)gBattle + 0x8944) == 0) ? 2 : 1;
    case 2:
        temp_a3 = *(s32 *)((u8 *)arg0 + 0xBA4);
        var_a2 = (s32 *)(&D_004693C0);
        if (temp_a3 < 0) {

        }
loop_18:
        temp_a0 = *(s32 *)((u8 *)var_a2 + 0);
        if (temp_a0 == -1) {
            var_a0 = 0;
        } else if ((*(s32 *)((u8 *)arg0 + 0x1CFC) == temp_a0) && (temp_a3 >= *(s32 *)((u8 *)var_a2 + 4))) {
            var_a0 = *(s32 *)((u8 *)var_a2 + 8);
        } else {
            var_a2 += 0xC;
            goto loop_18;
        }
        if (var_a0 == 1) {
            return 0;
        }
        goto block_58;
    case 3:
        temp_a3_2 = *(s32 *)((u8 *)arg0 + 0xBA4);
        var_a2_2 = (s32 *)(&D_004693C0);
        if (temp_a3_2 < 0) {

        }
loop_30:
        temp_a0_2 = *(s32 *)((u8 *)var_a2_2 + 0);
        if (temp_a0_2 == -1) {
            var_a0_2 = 0;
        } else if ((*(s32 *)((u8 *)arg0 + 0x1CFC) == temp_a0_2) && (temp_a3_2 >= *(s32 *)((u8 *)var_a2_2 + 4))) {
            var_a0_2 = *(s32 *)((u8 *)var_a2_2 + 8);
        } else {
            var_a2_2 += 0xC;
            goto loop_30;
        }
        var_v0 = 0;
        if (var_a0_2 == 2) {

        } else {
            var_v0 = 0;
            if (*(s8 *)((u8 *)arg0 + 0x2016) != 0) {

            } else {
                var_v0 = 1;
            }
        }
        if (var_v0 == 0) {
            return 0;
        }
        goto block_58;
    case 4:
        temp_a3_3 = *(s32 *)((u8 *)arg0 + 0xBA4);
        var_a2_3 = (s32 *)(&D_004693C0);
        if (temp_a3_3 < 0) {

        }
loop_48:
        temp_a0_3 = *(s32 *)((u8 *)var_a2_3 + 0);
        if (temp_a0_3 == -1) {
            var_a0_3 = 0;
        } else if ((*(s32 *)((u8 *)arg0 + 0x1CFC) == temp_a0_3) && (temp_a3_3 >= *(s32 *)((u8 *)var_a2_3 + 4))) {
            var_a0_3 = *(s32 *)((u8 *)var_a2_3 + 8);
        } else {
            var_a2_3 += 0xC;
            goto loop_48;
        }
        if (var_a0_3 == 3) {
            return 0;
        }
        goto block_58;
    case 6:
        if ((temp_v0 <= 0) || !(*(u8 *)((u8 *)temp_s0 + 0xE) & ((1 << *(s32 *)((u8 *)arg0 + 0xBA4)) & 0xFF & 0xFF))) {
            return 0;
        }
        goto block_58;
    case 7:
        if (*(s16 *)((u8 *)temp_s0 + 0x20) == *(s32 *)((u8 *)arg0 + 0xB9C)) {
            return 0;
        }
        goto block_58;
    }
}
