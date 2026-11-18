/* Draft (not built): func_002A0AD0 at 0x002A0AD0, size 0x48, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A0AD0(s32 arg0, s32 arg1, void *arg2) {
    void *temp_v1;

    temp_v1 = *(M2C_FIELD(D_004708CC, s32 *, 0x44) + (arg0 * 4)) + (arg1 * 0xE0);
    M2C_FIELD(temp_v1, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_v1, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x14) = 0;
}
