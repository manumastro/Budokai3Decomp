/* Draft (not built): func_0027FCA0 at 0x0027FCA0, size 0x164, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

s64 func_0027DAB0(s32);                             /* extern */
M2C_UNK func_0027E120(s32);                         /* extern */
M2C_UNK func_0027EA60(void *);                      /* extern */
s32 func_00287E60(s32, u8);                         /* extern */
extern u8 D_004B4B56;
extern M2C_UNK func_0027FAE0;
extern f32 gFrameDelta;

void func_0027FCA0(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s8 temp_a0_3;
    void *temp_s1;

    var_s0 = saved_reg_s0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x38);
    func_0027EA60(temp_s1);
    temp_f1 = M2C_FIELD(temp_s1, f32 *, 0x40);
    if (!(temp_f1 <= 0.0f)) {
        M2C_FIELD(temp_s1, f32 *, 0x40) = (f32) (temp_f1 - gFrameDelta);
        return;
    }
    if ((((s64) (func_0027DAB0(M2C_FIELD(temp_s1, s32 *, 0)) << 0x38) >> 0x38) == 7) && (((s64) (func_0027DAB0(M2C_FIELD(temp_s1, s32 *, 4)) << 0x38) >> 0x38) == 7)) {
        temp_a0 = M2C_FIELD(temp_s1, s32 *, 0);
        if (temp_a0 != 0) {
            func_0027E120(temp_a0);
            M2C_FIELD(temp_s1, s32 *, 0) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s1, s32 *, 4);
        if (temp_a0_2 != 0) {
            func_0027E120(temp_a0_2);
            M2C_FIELD(temp_s1, s32 *, 4) = 0;
        }
        temp_a0_3 = M2C_FIELD((arg0 + 0x30), s8 *, 5);
        switch (temp_a0_3) {                        /* irregular */
        case 0:
            var_s0 = 2 & 0xFF;
            break;
        case 1:
            var_s0 = 6;
            break;
        case 2:
            var_s0 = 4;
            break;
        case 3:
            var_s0 = 6;
            break;
        }
        M2C_FIELD(temp_s1, s32 *, 8) = func_00287E60(var_s0, D_004B4B56);
        M2C_FIELD(temp_s1, s8 *, 0x3D) = 6;
        var_v1 = &func_0027FAE0;
        if (&func_0027FAE0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
