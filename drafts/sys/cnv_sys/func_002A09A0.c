/* Draft (not built): func_002A09A0 at 0x002A09A0, size 0x20, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A09A0(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(D_004708CC, s32 *, 0x58) + (arg0 * 0x30)), s32 *, 0x14) = arg1;
}
