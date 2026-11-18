/* Draft (not built): func_002A1050 at 0x002A1050, size 0xA0, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

f32 func_002A1050(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_f0;
    void **temp_a0;
    void *temp_a1;
    void *temp_v0;

    temp_a0 = M2C_FIELD(D_004708CC, s32 *, 0x50) + (arg1 * 8);
    if (temp_a0 != NULL) {
        temp_a1 = *temp_a0;
        if (temp_a1 == NULL) {
            goto block_3;
        }
        temp_v0 = temp_a1 + *(M2C_FIELD(temp_a1, s32 *, 0x14) + temp_a1 + ((*(*(M2C_FIELD(D_004708CC, s32 *, 0x44) + (arg0 * 4)) + (arg1 * 0xE0)) - M2C_FIELD(temp_a1, s32 *, 0x18)) * 4));
        if (arg2 == 0) {
            var_f0 = M2C_FIELD(temp_v0, s16 *, 0x10);
        } else {
            var_f0 = M2C_FIELD(temp_v0, s16 *, 0x12);
        }
        return (f32) var_f0;
    }
block_3:
    return 0.0f;
}
