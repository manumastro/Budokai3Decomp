/* Draft (not built): func_002A1430 at 0x002A1430, size 0xD8, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

void *amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0029FE20();                            /* extern */
M2C_UNK func_002A0060();                            /* extern */
M2C_UNK func_002A02B0();                            /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_0046EA58;
extern void *D_004708CC;

void func_002A1430(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s0;

    D_004708CC = amHeap_Alloc(0x60, 0, &D_0046EA58, 0x99);
    memset(D_004708CC, 0, 0x60);
    temp_s0 = D_004708CC;
    M2C_FIELD(temp_s0, s32 *, 0) = arg0;
    M2C_FIELD(temp_s0, s32 *, 4) = arg1;
    M2C_FIELD(temp_s0, s32 *, 8) = arg2;
    M2C_FIELD(temp_s0, s32 *, 0xC) = arg3;
    M2C_FIELD(temp_s0, s32 *, 0x10) = 0;
    if (M2C_FIELD(temp_s0, s32 *, 0) <= 0) {
        M2C_FIELD(temp_s0, s32 *, 0) = 1;
    }
    func_002A02B0();
    func_002A0060();
    func_0029FE20();
    M2C_FIELD(temp_s0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x38) = 0x3F800000;
    M2C_FIELD(temp_s0, s32 *, 0x1C) = -1;
    M2C_FIELD(temp_s0, s32 *, 0x20) = -1;
    M2C_FIELD(temp_s0, s32 *, 0x40) = -1;
}
