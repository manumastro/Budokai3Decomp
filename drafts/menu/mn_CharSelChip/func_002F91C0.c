/* Draft (not built): func_002F91C0 at 0x002F91C0, size 0xF4, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK func_002F84A0(void *, s64);                 /* extern */
M2C_UNK func_002F8C60(void *);                      /* extern */
M2C_UNK func_002F8DE0(void *, void *, s64);         /* extern */
M2C_UNK func_002F8EB0(void *, s64);                 /* extern */

void func_002F91C0(void *arg0, s64 arg1) {
    s64 var_a1;
    s64 var_a2;
    s8 var_s0;
    void *temp_s1;
    void *temp_v0;
    void *var_a1_2;

    var_s0 = 0;
    if (arg0 != NULL) {
        temp_s1 = M2C_FIELD(arg0, void **, 0x30);
        temp_v0 = M2C_FIELD(temp_s1, void **, 0x34);
        if (temp_v0 != NULL) {
            var_s0 = M2C_FIELD(temp_v0, s8 *, 2);
        }
        M2C_FIELD(temp_s1, s64 *, 0x10) = arg1;
        M2C_FIELD(temp_s1, s8 *, 0xC) = 0;
        var_a1 = 0;
        do {
            if (M2C_FIELD(temp_s1, s64 *, 0x10) & (1 << var_a1)) {
                M2C_FIELD(temp_s1, s8 *, 0xC) = (s8) (M2C_FIELD(temp_s1, s8 *, 0xC) + 1);
            }
            var_a1 += 1;
        } while (var_a1 < 0x27);
        func_002F8EB0(temp_s1, var_a1);
        var_a2 = 0;
        var_a1_2 = temp_s1;
        do {
            if (M2C_FIELD(temp_s1, s64 *, 0x10) & (1 << var_a2)) {
                M2C_FIELD(var_a1_2, s8 *, 0x3A) = (s8) var_a2;
                var_a1_2 += 0x1C;
            }
            var_a2 += 1;
        } while (var_a2 < 0x27);
        M2C_FIELD(temp_s1, void **, 0x34) = (void *) (temp_s1 + 0x38);
        func_002F8DE0(temp_s1, var_a1_2, var_a2);
        func_002F8C60(temp_s1);
        func_002F84A0(temp_s1, (s64) ((s64) var_s0 << 0x30) >> 0x30);
    }
}
