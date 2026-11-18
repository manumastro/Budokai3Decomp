/* Draft (not built): func_0027D1D0 at 0x0027D1D0, size 0x158, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK amCdFs_Close(void *, M2C_UNK);              /* extern */
M2C_UNK amFile_Load(s32);                           /* extern */
M2C_UNK func_00229800(s32, f32 *, M2C_UNK, f32);    /* extern */
M2C_UNK func_0022E0B0(s32);                         /* extern */
M2C_UNK func_0027AAE0(void *);                      /* extern */
M2C_UNK func_002F9500(s32, f32, M2C_UNK);           /* extern */
s32 func_002F95E0(s8, s64, s64, s8, s64);           /* extern */
extern void *D_00470810;
extern M2C_UNK func_0027CF80;

void func_0027D1D0(void *arg0) {
    f32 sp50;
    M2C_UNK *var_v1;
    s32 temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;

    temp_s0 = D_00470810;
    temp_s1 = M2C_FIELD(arg0, void **, 0x30);
    if (M2C_FIELD(temp_s0, s32 *, 0xC) == 0) {
        if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s16 *, 4) == 3) {
            M2C_FIELD(temp_s0, s32 *, 8) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x54);
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x54) = 0;
            amCdFs_Close(M2C_FIELD(temp_s0, void **, 0), 0);
            M2C_FIELD(temp_s0, s32 *, 0) = 0;
            M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x54);
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x54) = 0;
            amCdFs_Close(M2C_FIELD(temp_s0, void **, 4), 0);
            M2C_FIELD(temp_s0, void **, 4) = NULL;
            func_0022E0B0(M2C_FIELD(temp_s0, s32 *, 8));
            amFile_Load(M2C_FIELD(temp_s0, s32 *, 0xC));
            goto block_3;
        }
    } else {
block_3:
        func_0027AAE0(temp_s1);
        M2C_FIELD(temp_s1, s32 *, 0x28) = func_002F95E0(M2C_FIELD(temp_s1, s8 *, 0xA), (s64) (((M2C_FIELD(temp_s1, u8 *, 7) == 0) ? 0 : 1) << 0x38) >> 0x38, M2C_FIELD(temp_s1, s64 *, 0x10), M2C_FIELD(temp_s1, s8 *, 4), (s64) M2C_FIELD(temp_s0, s32 *, 0xC));
        temp_v1 = M2C_FIELD(temp_s1, void **, 0x38);
        if (temp_v1 != NULL) {
            func_00229800(M2C_FIELD(temp_v1, s32 *, 0), &sp50, -1, M2C_FIELD(temp_v1, f32 *, 0x10));
            temp_a0 = M2C_FIELD(temp_s1, s32 *, 0x28);
            if (temp_a0 != 0) {
                func_002F9500(temp_a0, sp50, 0);
            }
        }
        M2C_FIELD(temp_s1, s8 *, 0) = 3;
        M2C_FIELD(temp_s1, s32 *, 0x54) = 0x42700000;
        var_v1 = &func_0027CF80;
        M2C_FIELD(temp_s1, s32 *, 0x68) = 0;
        if (&func_0027CF80 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
