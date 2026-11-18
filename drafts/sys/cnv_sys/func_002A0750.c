/* Draft (not built): func_002A0750 at 0x002A0750, size 0x50, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A0750(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_t0;
    void *temp_v1;

    var_t0 = 0;
    if (M2C_FIELD(D_004708CC, s32 *, 0) > 0) {
        do {
            var_t0 += 1;
            temp_v1 = M2C_FIELD(D_004708CC, s32 *, 0x58) + (arg0 * 0x30);
            M2C_FIELD(temp_v1, s32 *, 0x18) = arg1;
            M2C_FIELD(temp_v1, s32 *, 0x1C) = arg2;
            M2C_FIELD(temp_v1, s32 *, 0x20) = arg3;
        } while (var_t0 < M2C_FIELD(D_004708CC, s32 *, 0));
    }
}
