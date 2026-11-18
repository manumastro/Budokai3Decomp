/* Draft (not built): func_00286A30 at 0x00286A30, size 0x220, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK A2d_SetMode(M2C_UNK);                       /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
M2C_UNK func_001484A0(M2C_UNK);                     /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00286C50(void *);                      /* extern */
extern M2C_UNK D_0046B860;
extern M2C_UNK D_0046B861;
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s16 D_004E05F8;

void func_00286A30(void *arg0) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;

    if (D_004E05F8 != 0) {
        func_001484A0(3);
        A2d_SetMode(1);
    } else {
        func_001484A0(0);
        A2d_SetMode(0);
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x7000);
    D_00470238 = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0022D860(*M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x14), 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0022D860(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x14), s32 *, 0x30), 0);
    M2C_FIELD(arg0, s32 *, 0x20) = func_0022D670(*M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), 0);
    M2C_FIELD(arg0, s32 *, 0x24) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), s32 *, 0xC), 0);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), s32 *, 0x34), 0);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), s32 *, 0x40), 0);
    M2C_FIELD(arg0, s32 *, 0x34) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), s32 *, 0x4C), 0);
    M2C_FIELD(arg0, s32 *, 0x38) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), s32 *, 0x58), 0);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C), s32 *, 0x64), 0);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x25C);
    if (M2C_FIELD(arg0, s16 *, 0x25E) != temp_v1) {
        M2C_FIELD(arg0, s16 *, 0x25E) = temp_v1;
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x7000);
        D_00470238 = 0;
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = func_0022D670(*(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C) + (*(&D_0046B860 + (M2C_FIELD(arg0, s16 *, 0x25C) * 2)) * 4)), 0);
        temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        M2C_FIELD(arg0, s32 *, 0x28) = func_0022D670(*(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 0x1C) + (*(&D_0046B861 + (M2C_FIELD(arg0, s16 *, 0x25C) * 2)) * 4)), 0);
    }
    func_00286C50(arg0);
}
