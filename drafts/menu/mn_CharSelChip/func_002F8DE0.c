/* Draft (not built): func_002F8DE0 at 0x002F8DE0, size 0xCC, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void func_002F8DE0(void *arg0) {
    s16 temp_a2_2;
    s32 var_a0;
    s8 temp_t2;
    void *temp_a2;
    void *temp_t0;
    void *var_t2;
    void *var_v1;

    temp_a2 = M2C_FIELD(arg0, void **, 0x30);
    temp_t2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s8 *, 2);
    var_a0 = 0;
    M2C_FIELD(temp_a2, s8 *, 0xB60) = temp_t2;
    var_v1 = temp_a2 + 0xB70;
    M2C_FIELD(temp_a2, u8 *, 0xB61) = (u8) M2C_FIELD((temp_t2 + temp_a2), u8 *, 0x420);
    temp_t0 = temp_a2 + (temp_t2 * 0xC);
    var_t2 = temp_a2 + (temp_t2 * 0xE);
    M2C_FIELD(temp_a2, s8 *, 0xB64) = (s8) M2C_FIELD(temp_t0, s8 *, 0x258);
    M2C_FIELD(temp_a2, s8 *, 0xB65) = (s8) M2C_FIELD(temp_t0, s8 *, 0x259);
    M2C_FIELD(temp_a2, s8 *, 0xB66) = (s8) M2C_FIELD(temp_t0, s8 *, 0x25A);
    M2C_FIELD(temp_a2, s8 *, 0xB67) = (s8) M2C_FIELD(temp_t0, s8 *, 0x25B);
    M2C_FIELD(temp_a2, s8 *, 0xB68) = (s8) M2C_FIELD(temp_t0, s8 *, 0x25C);
    M2C_FIELD(temp_a2, s8 *, 0xB69) = (s8) M2C_FIELD(temp_t0, s8 *, 0x25D);
    M2C_FIELD(temp_a2, s8 *, 0xB6A) = (s8) M2C_FIELD(temp_t0, s8 *, 0x25E);
    M2C_FIELD(temp_a2, s8 *, 0xB6B) = (s8) M2C_FIELD(temp_t0, s8 *, 0x25F);
    M2C_FIELD(temp_a2, s32 *, 0xB6C) = (s32) M2C_FIELD(temp_t0, s32 *, 0x260);
    M2C_FIELD(temp_a2, s16 *, 0xB70) = 0;
    do {
        temp_a2_2 = M2C_FIELD(var_t2, s16 *, 0x44);
        M2C_FIELD(var_v1, s16 *, 2) = temp_a2_2;
        if (temp_a2_2 != 0) {
            M2C_FIELD(temp_a2, s16 *, 0xB70) = (s16) (M2C_FIELD(temp_a2, s16 *, 0xB70) + 1);
        }
        var_a0 += 1;
        var_t2 += 2;
        var_v1 += 2;
    } while (var_a0 < 7);
}
