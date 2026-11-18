/* Draft (not built): func_002A11C0 at 0x002A11C0, size 0x1C, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A11C0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(D_004708CC, s32 *, 0x50) + (arg0 * 8);
    M2C_FIELD(temp_v1, s32 *, 0) = arg1;
    M2C_FIELD(temp_v1, s32 *, 4) = arg2;
}
