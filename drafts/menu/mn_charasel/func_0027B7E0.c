/* Draft (not built): func_0027B7E0 at 0x0027B7E0, size 0x74, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK func_0027A4C0(void *);                      /* extern */
extern M2C_UNK func_0027B7D0;
extern f32 gFrameDelta;

void func_0027B7E0(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x30);
    func_0027A4C0(temp_s0);
    temp_f1 = M2C_FIELD(temp_s0, f32 *, 0x54) - gFrameDelta;
    M2C_FIELD(temp_s0, f32 *, 0x54) = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_v1 = &func_0027B7D0;
        M2C_FIELD(temp_s0, s8 *, 0) = 7;
        if (&func_0027B7D0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
