/* Draft (not built): func_00286DA0 at 0x00286DA0, size 0xCC, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK func_00286C50(void *, s32, u8, s16);        /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */

void func_00286DA0(void *arg0, u16 arg1) {
    s16 var_a3;
    s32 temp_a1;
    u8 temp_a2;
    u8 var_s0;
    void *var_a2;

    M2C_FIELD(arg0, u16 *, 0x23E) = arg1;
    var_s0 = 0;
    M2C_FIELD(arg0, u16 *, 0x240) = arg1;
    memset(arg0 + 0x242, -1, 0x1A);
    var_a3 = 0;
    var_a2 = arg0;
    do {
        if (M2C_FIELD(arg0, u16 *, 0x23E) & (1 << var_a3)) {
            M2C_FIELD(var_a2, s16 *, 0x242) = var_a3;
            var_s0 += 1;
            var_a2 += 2;
        }
        var_a3 += 1;
    } while (var_a3 < 0xD);
    M2C_FIELD(arg0, u8 *, 0x261) = var_s0;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x261);
    temp_a1 = temp_a2 * 0xC;
    M2C_FIELD(arg0, s32 *, 0x278) = (s32) (0x10000 / temp_a1);
    if (M2C_FIELD(arg0, u8 *, 0x262) == 2) {
        func_00286C50(arg0, temp_a1, temp_a2, var_a3);
    }
}
