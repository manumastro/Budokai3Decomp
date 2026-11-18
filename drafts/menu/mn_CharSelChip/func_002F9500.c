/* Draft (not built): func_002F9500 at 0x002F9500, size 0x10, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void func_002F9500(void *arg0, f32 fparg0, f32 fparg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_v1, f32 *, 0x18) = fparg0;
    M2C_FIELD(temp_v1, f32 *, 0x1C) = fparg1;
}
