/* Draft (not built): func_002A0CB0 at 0x002A0CB0, size 0x2C, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A0CB0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 0xE0) + *(M2C_FIELD(D_004708CC, s32 *, 0x44) + (arg0 * 4))), s32 *, 0x30) = arg2;
}
