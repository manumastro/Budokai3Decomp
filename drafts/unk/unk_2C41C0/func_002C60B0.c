/* Draft (not built): func_002C60B0 at 0x002C60B0, size 0xE4, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C60B0.s */

f32 func_002C60B0(u8 *arg0, f32 fparg0) {
    s32 var_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;
    if (!(*(s32 *)((u8 *)arg0 + 0x50) & 0x100)) {
        func_002C61A0();
    }
    var_a1 = 0;
    var_a0 = 3;
    do {
        temp_v0 = var_a1 + var_a0;
        var_v1 = temp_v0 >> 1;
        if (temp_v0 < 0) {
            var_v1 = (s32)(temp_v0 + 1) >> 1;
        }
        if (*(s32 *)(arg0 + var_v1 * 4) < fparg0) {
            var_a1 = var_v1 + 1;
        } else {
            var_a0 = var_v1;
        }
    }
    while (var_a1 < var_a0);
    if (var_a1 > 0) {
    }
    M2C_ERROR();
    return M2C_ERROR();
}
