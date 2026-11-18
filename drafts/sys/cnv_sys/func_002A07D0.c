/* Draft (not built): func_002A07D0 at 0x002A07D0, size 0x58, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A07D0(s32 arg0, s32 arg1, f32 fparg0) {
    void *temp_a0;

    temp_a0 = *(M2C_FIELD(D_004708CC, s32 *, 0x4C) + (arg0 * 4)) + (arg1 * 0x2C);
    if (M2C_FIELD(temp_a0, s32 *, 4) >= 0) {
        M2C_FIELD(temp_a0, f32 *, 0x20) = fparg0;
    }
    if (M2C_FIELD(temp_a0, s32 *, 0) >= 0) {
        M2C_FIELD(temp_a0, f32 *, 0x20) = fparg0;
    }
}
