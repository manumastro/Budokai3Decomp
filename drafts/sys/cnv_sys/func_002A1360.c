/* Draft (not built): func_002A1360 at 0x002A1360, size 0x14, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

s32 func_002A1360(s32 arg0) {
    return arg0 == M2C_FIELD(D_004708CC, s32 *, 0x14);
}
