/* Draft (not built): func_002B0CA0 at 0x002B0CA0, size 0x158, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B0CA0.s */

s32 func_002B0CA0(u8 *arg0, s32 arg1) {
    u8 *temp_s1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s6;
    s32 var_v0;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *var_s5;
    u8 *var_v1;
    temp_s1 = arg0 + 0xB8;
    temp_v0 = arg1 * 4 + temp_s1;
    var_a0 = 0;
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 4);
    var_v1 = arg0;
    loop_1:
    temp_v0_2 = *(s32 *)((u8 *)var_v1 + 0x2C);

    if (temp_v0_2 > 0) {
        if (temp_v0_2 == temp_s0) {
            var_v0 = 0;
        } else {
            var_a0 += 1;
            var_v1 += 4;
            if (var_a0 >= 7) {
                goto block_6;
            }
            goto loop_1;
        }
    } else {
        block_6:
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        *(s32 *)((u8 *)gSklEdit + 0x30) = 4;
        return 0;
    }
    var_s6 = 0;
    var_s5 = temp_s1;
    loop_11:
    if (var_s6 != arg1) {
        temp_a0 = *(s32 *)((u8 *)var_s5 + 4);
        if (temp_a0 > 0 && (((temp_v1 = (u8 *)&D_004E0660 + temp_a0 * 0x28, *(u16 *)((u8 *)temp_v1 + 0x10) == temp_s0)) || *(u16 *)((u8 *)temp_v1 + 0x12) == temp_s0) && func_002B0CA0(arg0, var_s6) == 0) {
            return 0;
        }
    }

    var_s6 += 1;
    var_s5 += 4;
    if (var_s6 >= 7) {
        *(s32 *)((u8 *)temp_v0 + 4) = -1;
        *(s32 *)((u8 *)arg0 + 0xB8) = (s32)(*(s32 *)((u8 *)arg0 + 0xB8) - 1);
        return 1;
    }
    goto loop_11;
}
