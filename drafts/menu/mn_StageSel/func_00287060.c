/* Draft (not built): func_00287060 at 0x00287060, size 0x64, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK func_002861B0(void *);                      /* extern */
extern f32 gFrameDelta;

void func_00287060(void *arg0) {
    f32 temp_f1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x30);
    func_002861B0(temp_s0);
    temp_f1 = M2C_FIELD(temp_s0, f32 *, 0x28C) - gFrameDelta;
    M2C_FIELD(temp_s0, f32 *, 0x28C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        M2C_FIELD(temp_s0, s8 *, 0x262) = 5;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
