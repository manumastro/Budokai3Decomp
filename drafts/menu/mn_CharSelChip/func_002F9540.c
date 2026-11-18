/* Draft (not built): func_002F9540 at 0x002F9540, size 0xA0, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK amHeap_Free(void *);                        /* extern */
M2C_UNK amTask_Kill(void *);                        /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */

void func_002F9540(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    void *temp_s2;
    void *temp_s3;
    void *var_s0;

    var_s1 = 0;
    temp_s3 = M2C_FIELD(arg0, void **, 0x30);
    var_s0 = temp_s3;
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x3C);
        temp_s2 = var_s0 + 0x38;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            M2C_FIELD(temp_s2, s32 *, 4) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s2, s32 *, 8);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            M2C_FIELD(temp_s2, s32 *, 8) = 0;
        }
        var_s1 += 1;
        var_s0 += 0x1C;
    } while (var_s1 < 0x27);
    amHeap_Free(temp_s3);
    amTask_Kill(arg0);
}
