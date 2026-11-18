/* Draft (not built): func_002A1020 at 0x002A1020, size 0x30, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

s32 func_002A1020(s32 arg0) {
    if (D_004708CC == NULL) {
        return 0;
    }
    return arg0 >= M2C_FIELD(D_004708CC, s32 *, 0x30);
}
