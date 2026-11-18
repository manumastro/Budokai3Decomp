/* Draft (not built): func_002F8860 at 0x002F8860, size 0x1DC, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

f32 amMath_CosI(s32);                               /* extern */
f32 amMath_SinI(s32);                               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_002F8860(void *arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_v1;
    s32 temp_a0;
    s64 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_v1 = (s64) ((temp_a0 & 0xFFFF) << 0x30) >> 0x30;
    if ((temp_v1 >= -0x3FFF) && (temp_v1 < 0x4000)) {
        if (arg1 != 0) {
            var_f0 = 578.0f - (194.0f * amMath_CosI(temp_a0));
        } else {
            var_f0 = 22.0f + (194.0f * amMath_CosI(temp_a0));
        }
        M2C_FIELD(arg0, f32 *, 0x14) = var_f0;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (224.0f + (194.0f * amMath_SinI(M2C_FIELD(arg0, s32 *, 0x10))));
        return;
    }
    if (temp_v1 < 0) {
        if (arg1 != 0) {
            M2C_FIELD(arg0, f32 *, 0x14) = (f32) (578.0f + (f32) -((s64) ((s64) ((temp_v1 + 0x4000) << 0x30) >> 0x30) >> 6));
        } else {
            M2C_FIELD(arg0, f32 *, 0x14) = (f32) (22.0f + (f32) ((s64) ((s64) ((temp_v1 + 0x4000) << 0x30) >> 0x30) >> 6));
        }
        var_v1 = 30.0f;
    } else {
        if (arg1 != 0) {
            var_f0_2 = 578.0f + (f32) ((s64) ((s64) ((temp_v1 - 0x4000) << 0x30) >> 0x30) >> 6);
        } else {
            var_f0_2 = 22.0f + (f32) -((s64) ((s64) ((temp_v1 - 0x4000) << 0x30) >> 0x30) >> 6);
        }
        M2C_FIELD(arg0, f32 *, 0x14) = var_f0_2;
        var_v1 = 418.0f;
    }
    M2C_FIELD(arg0, f32 *, 0x18) = var_v1;
}
