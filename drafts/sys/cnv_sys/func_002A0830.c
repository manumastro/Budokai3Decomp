/* Draft (not built): func_002A0830 at 0x002A0830, size 0x170, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

M2C_UNK amModel_SetCurrent(s32, s32, s32 *, s32);   /* extern */
M2C_UNK func_0022C7D0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0022D670(s32, M2C_UNK);                    /* extern */
s32 func_0022D860(s32, M2C_UNK);                    /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_004708CC;

void func_002A0830(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_s1_2;
    s32 temp_s4;
    void *temp_s0;
    void *temp_s1;

    if (M2C_FIELD(D_004708CC, s32 *, 0) != 0) {
        if (M2C_FIELD(D_004708CC, s32 *, 0xC) == 0) {

        } else {
            temp_a3 = M2C_FIELD(D_004708CC, s32 *, 0x4C);
            temp_a2 = temp_a3 + (arg0 * 4);
            temp_s0 = M2C_FIELD(D_004708CC, s32 *, 0x58) + (arg1 * 0x30);
            temp_s1 = *temp_a2 + (arg1 * 0x2C);
            M2C_FIELD(temp_s1, s32 *, 0) = arg2;
            M2C_FIELD(temp_s1, s32 *, 4) = arg3;
            M2C_FIELD(temp_s1, s32 *, 0x24) = 0;
            M2C_FIELD(temp_s1, s32 *, 0x28) = 0;
            if (arg2 >= 0) {
                temp_s4 = M2C_FIELD(temp_s0, s32 *, 0x20);
                temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x1C);
                temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x18);
                D_00470704 = temp_a0;
                D_0047070C = temp_a1;
                D_00470708 = temp_s4;
                amModel_SetCurrent(temp_a0, temp_a1, temp_a2, temp_a3);
                D_00470238 = temp_s4;
                M2C_FIELD(temp_s1, s32 *, 0x1C) = func_0022D670(*(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s32 *, 0x1C) + (arg2 * 4)), 0);
                func_0022C7D0(M2C_FIELD(temp_s1, s32 *, 0x1C), 1, 0);
            }
            if (arg3 >= 0) {
                temp_s1_2 = M2C_FIELD(temp_s0, s32 *, 0x20);
                temp_a1_2 = M2C_FIELD(temp_s0, s32 *, 0x1C);
                temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
                D_00470704 = temp_a0_2;
                D_0047070C = temp_a1_2;
                D_00470708 = temp_s1_2;
                amModel_SetCurrent(temp_a0_2, temp_a1_2);
                D_00470238 = temp_s1_2;
                if (M2C_FIELD(temp_s0, s32 *, 0x10) == 0) {
                    M2C_FIELD(temp_s0, s32 *, 0x10) = func_0022D860(*(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s32 *, 0x14) + (arg3 * 4)), 0);
                }
                func_0022C7D0(M2C_FIELD(temp_s0, s32 *, 0x10), 1, 0);
            }
        }
    }
}
