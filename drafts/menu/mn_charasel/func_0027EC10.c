/* Draft (not built): func_0027EC10 at 0x0027EC10, size 0x254, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
M2C_UNK func_0022D0E0(s32, M2C_UNK);                /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gVsCharasel;

void func_0027EC10(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    void *temp_s0;

    temp_s0 = gVsCharasel;
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = func_0022D670(*M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), 0);
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = func_0022D860(*M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x14), 0);
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = func_0022D860(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x14), s32 *, 0xC), 0);
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = func_0022D860(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x14), s32 *, 0x14), 0);
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x40), 0);
    temp_a0_7 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x70), 0);
    temp_a0_8 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x28), 0);
    temp_a0_9 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x34), 0);
    temp_a0_10 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x4C), 0);
    temp_a0_11 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x58), 0);
    temp_a0_12 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_a0_12 != 0) {
        func_0022D0E0(temp_a0_12, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = func_0022D670(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 **, 0x1C), s32 *, 0x64), 0);
}
