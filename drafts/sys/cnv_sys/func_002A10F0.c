/* Draft (not built): func_002A10F0 at 0x002A10F0, size 0xD0, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

extern void *D_004708CC;

void func_002A10F0(s32 arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    void **temp_a2;
    void *temp_a0;
    void *temp_a3;
    void *temp_t0;

    temp_a2 = M2C_FIELD(D_004708CC, s32 *, 0x50) + (arg1 * 8);
    temp_t0 = *(M2C_FIELD(D_004708CC, s32 *, 0x44) + (arg0 * 4)) + (arg1 * 0xE0);
    if (temp_a2 != NULL) {
        temp_a3 = *temp_a2;
        if (temp_a3 == NULL) {

        } else {
            temp_a0 = temp_a3 + *(M2C_FIELD(temp_a3, s32 *, 0x14) + temp_a3 + ((M2C_FIELD(temp_t0, s32 *, 0) - M2C_FIELD(temp_a3, s32 *, 0x18)) * 4));
            temp_f1 = (f32) M2C_FIELD(temp_a0, s16 *, 0x10);
            M2C_FIELD(temp_t0, f32 *, 0x20) = temp_f1;
            temp_f0 = (f32) M2C_FIELD(temp_a0, s16 *, 0x12);
            M2C_FIELD(temp_t0, f32 *, 0x24) = temp_f0;
            M2C_FIELD(temp_t0, s32 *, 0x28) = 0;
            M2C_FIELD(temp_t0, s32 *, 0x2C) = 0x3F800000;
            M2C_FIELD(temp_t0, s32 *, 0x80) = 0;
            M2C_FIELD(temp_t0, s32 *, 0x84) = 0;
            M2C_FIELD(temp_t0, f32 *, 0x88) = temp_f1;
            M2C_FIELD(temp_t0, f32 *, 0x8C) = 1.0f;
            M2C_FIELD(temp_t0, f32 *, 0x8C) = temp_f0;
            M2C_FIELD(temp_t0, s32 *, 0xD0) = 0;
            M2C_FIELD(temp_t0, s32 *, 0xD4) = 0;
            M2C_FIELD(temp_t0, f32 *, 0xD8) = temp_f1;
            M2C_FIELD(temp_t0, f32 *, 0xDC) = 1.0f;
            M2C_FIELD(temp_t0, f32 *, 0xDC) = temp_f0;
        }
    }
}
