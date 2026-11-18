/* Draft (not built): func_00287A70 at 0x00287A70, size 0x1C0, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK amCdFs_Close(void *, M2C_UNK);              /* extern */
M2C_UNK amFile_Load(s32);                           /* extern */
M2C_UNK func_00131B90(M2C_UNK *);                   /* extern */
M2C_UNK func_00131D00(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00131F00(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00132DF0(M2C_UNK);                     /* extern */
M2C_UNK func_0013B0B0(M2C_UNK *, u8);               /* extern */
M2C_UNK func_0013B110(M2C_UNK);                     /* extern */
M2C_UNK func_0022E0B0(s32);                         /* extern */
M2C_UNK func_00284CB0(void *);                      /* extern */
M2C_UNK func_00286A30(void *);                      /* extern */
extern M2C_UNK D_003F0800;
extern void *D_0047082C;
extern M2C_UNK func_002878B0;

void func_00287A70(void *arg0) {
    M2C_UNK sp40;
    M2C_UNK *var_v1;
    u8 temp_a1;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x30);
    temp_s0 = D_0047082C;
    if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s16 *, 4) == 3) {
        M2C_FIELD(temp_s1, s32 *, 8) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 8), 0);
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s1, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0xC), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 0xC), 0);
        M2C_FIELD(temp_s0, void **, 0xC) = NULL;
        M2C_FIELD(temp_s1, s32 *, 0x10) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x10), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x10), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 0x10), 0);
        M2C_FIELD(temp_s0, void **, 0x10) = NULL;
        M2C_FIELD(temp_s1, s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 0), 0);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
        M2C_FIELD(temp_s1, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 4), 0);
        M2C_FIELD(temp_s0, void **, 4) = NULL;
        amFile_Load(M2C_FIELD(temp_s1, s32 *, 8));
        amFile_Load(M2C_FIELD(temp_s1, s32 *, 0xC));
        amFile_Load(M2C_FIELD(temp_s1, s32 *, 0x10));
        func_0022E0B0(M2C_FIELD(temp_s1, s32 *, 0));
        amFile_Load(M2C_FIELD(temp_s1, s32 *, 4));
        func_00284CB0(temp_s1);
        func_00286A30(temp_s1);
        temp_a1 = M2C_FIELD(temp_s1, u8 *, 0x260);
        M2C_FIELD(temp_s1, s16 *, 0x25C) = (s16) M2C_FIELD(((temp_a1 * 0xC) + temp_s1), s16 *, 0x4C);
        M2C_FIELD(temp_s1, s32 *, 0x28C) = 0x42700000;
        func_0013B0B0(&D_003F0800, temp_a1);
        func_00131B90(&sp40);
        func_00131D00(&sp40, 0, 0, 0);
        func_00131F00(&sp40, 0, 0);
        func_00132DF0(0);
        func_0013B110(1);
        var_v1 = &func_002878B0;
        if (&func_002878B0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
