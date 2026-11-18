/* Draft (not built): func_002B16B0 at 0x002B16B0, size 0xD0, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD8, original 0xD0
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B16B0.s */

// src/unk/unk_2AF860.c func_002B16B0 size diff=30/54
s32 func_002B16B0(u8 *arg0) {
    s32 temp_a3;
    s32 var_t2;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_t3;
    u8 *var_t1;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0xB8);
    temp_t3 = arg0 + 0xB8;
    if (temp_a3 == 0) {
        return 0;
    }
    var_t2 = 0;
    var_v0 = 0;
    if (temp_a3 > 0) {
        var_t1 = temp_t3;
loop_5:
        var_t2 += *(u8 *)((u8 *)(&D_004E0660 + (*(s32 *)((u8 *)var_t1 + 4) * 0x28)) + 8) & 7;
        if (var_t2 != *(s32 *)((u8 *)arg0 + 0x20)) {
            var_v0 += 1;
            var_t1 += 4;
            if (var_v0 < temp_a3) {
                goto loop_5;
            }
        }
    }
    if (var_v0 > 0) {
        if (var_v0 == temp_a3) {
            var_v1 = *(s32 *)((u8 *)arg0 + 0x20) - 1;
        } else {
            var_v1 = *(s32 *)((u8 *)arg0 + 0x20) - (*(&D_004E0668 + (*(s32 *)((u8 *)((var_v0 * 4) + temp_t3) + 4) * 0x28)) & 7);
        }
        *(s32 *)((u8 *)arg0 + 0x20) = var_v1;
    }
    return var_v0;
}
