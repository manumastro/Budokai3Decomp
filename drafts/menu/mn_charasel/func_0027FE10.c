/* Draft (not built): func_0027FE10 at 0x0027FE10, size 0x94, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK func_0027DDC0(s32);                         /* extern */
M2C_UNK func_0027EA60(void *);                      /* extern */
M2C_UNK func_0027EC10(void *);                      /* extern */
M2C_UNK func_00288000();                            /* extern */
extern M2C_UNK func_0027FCA0;
extern f32 gFrameDelta;

void func_0027FE10(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x38);
    func_0027EA60(temp_s0);
    temp_f1 = M2C_FIELD(temp_s0, f32 *, 0x40) - gFrameDelta;
    M2C_FIELD(temp_s0, f32 *, 0x40) = temp_f1;
    if (temp_f1 <= 0.0f) {
        func_00288000();
        func_0027DDC0(M2C_FIELD(temp_s0, s32 *, 0));
        func_0027DDC0(M2C_FIELD(temp_s0, s32 *, 4));
        func_0027EC10(temp_s0);
        var_v1 = &func_0027FCA0;
        M2C_FIELD(temp_s0, f32 *, 0x40) = 60.0f;
        if (&func_0027FCA0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
