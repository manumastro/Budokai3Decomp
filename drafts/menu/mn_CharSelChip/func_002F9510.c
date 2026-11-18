/* Draft (not built): func_002F9510 at 0x002F9510, size 0x28, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void func_002F9510(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_v1, f32 *, 0x28) = fparg0;
    temp_f1 = (fparg0 - M2C_FIELD(temp_v1, f32 *, 0x24)) / fparg1;
    M2C_FIELD(temp_v1, f32 *, 0x2C) = temp_f1;
    M2C_FIELD(temp_v1, f32 *, 0x24) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x24) + temp_f1);
}
