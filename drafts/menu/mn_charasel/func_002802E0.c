/* Draft (not built): func_002802E0 at 0x002802E0, size 0x188, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

s32 DataErase_IsReady(s16);                         /* extern */
M2C_UNK Fade_Request(M2C_UNK, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK amCdFs_Close(void *, M2C_UNK);              /* extern */
M2C_UNK amFile_Load(s32);                           /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
s32 amTask_Create(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0022E0B0(s32);                         /* extern */
M2C_UNK func_002800F0(void *);                      /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern M2C_UNK func_0027F890;
extern M2C_UNK func_0027F8A0;
extern M2C_UNK func_0027FEB0;
extern void *gVsCharasel;

void func_002802E0(void *arg0) {
    M2C_UNK *var_v1;
    s16 temp_a0;
    s32 temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x38);
    temp_s0 = gVsCharasel;
    temp_a0 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s16 *, 4);
    if ((temp_a0 == 3) && (DataErase_IsReady(temp_a0) == 1)) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 0), 0);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
        M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x54);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x54) = 0;
        amCdFs_Close(M2C_FIELD(temp_s0, void **, 4), 0);
        M2C_FIELD(temp_s0, void **, 4) = NULL;
        func_0022E0B0(M2C_FIELD(temp_s0, s32 *, 8));
        amFile_Load(M2C_FIELD(temp_s0, s32 *, 0xC));
        Fade_Request(-1, 0, 0);
        M2C_FIELD(temp_s0, s32 *, 0x10) = amTask_Create(&func_0027F8A0, 0, 0x1001, 8);
        M2C_FIELD(temp_s0, s32 *, 0x18) = amTask_Create(&func_0027F890, 0, 0x3000, 8);
        temp_s0_2 = gVsCharasel;
        temp_a0_2 = M2C_FIELD(temp_s0_2, s32 *, 0xC);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x2000);
        D_00470238 = 0;
        M2C_FIELD(temp_s1, s32 *, 0xC) = func_0022D670(*M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 8), s32 **, 0x1C), 0);
        M2C_FIELD(temp_s1, s32 *, 0x10) = func_0022D860(*M2C_FIELD(M2C_FIELD(temp_s0_2, void **, 8), s32 **, 0x14), 0);
        func_002800F0(arg0);
        var_v1 = &func_0027FEB0;
        if (&func_0027FEB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
    }
}
