/* Draft (not built): func_002A0A60 at 0x002A0A60, size 0x68, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A0A60(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_t0;
    void *temp_v1;

    *(M2C_FIELD(D_004708CC, s32 *, 0x54) + (arg0 * 4)) = arg1;
    var_t0 = 0;
    if (M2C_FIELD(D_004708CC, s32 *, 0) > 0) {
        var_a1 = 0;
        do {
            var_t0 += 1;
            temp_v1 = *(M2C_FIELD(D_004708CC, s32 *, 0x48) + var_a1) + (arg0 << 5);
            M2C_FIELD(temp_v1, s32 *, 0x18) = 0;
            M2C_FIELD(temp_v1, s32 *, 0x1C) = 0;
            var_a1 += 4;
        } while (var_t0 < M2C_FIELD(D_004708CC, s32 *, 0));
    }
}
