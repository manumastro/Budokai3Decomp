/* Draft (not built): func_002804A0 at 0x002804A0, size 0x104, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK amCdFs_Close(s32, M2C_UNK);                 /* extern */
M2C_UNK amHeap_Free(void *);                        /* extern */
M2C_UNK amTask_Kill(s32);                           /* extern */
M2C_UNK func_0027E070();                            /* extern */
M2C_UNK func_0027E880(void *);                      /* extern */
M2C_UNK func_0028DF20();                            /* extern */
extern void *gVsCharasel;

void func_002804A0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_5;
    s32 temp_a0_6;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_s0 = gVsCharasel;
    temp_v0 = M2C_FIELD(temp_s0, void **, 0x14);
    if (temp_v0 != NULL) {
        temp_s1 = M2C_FIELD(temp_v0, void **, 0x38);
        func_0027E880(temp_s1);
        amHeap_Free(temp_s1);
        amTask_Kill(M2C_FIELD(temp_s0, s32 *, 0x14));
    }
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x10);
    if (temp_a0 != 0) {
        amTask_Kill(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
    if (temp_a0_2 != 0) {
        amTask_Kill(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(temp_s0, void **, 8);
    if (temp_a0_3 != NULL) {
        amHeap_Free(temp_a0_3);
    }
    temp_a0_4 = M2C_FIELD(temp_s0, void **, 0xC);
    if (temp_a0_4 != NULL) {
        amHeap_Free(temp_a0_4);
    }
    temp_a0_5 = M2C_FIELD(temp_s0, s32 *, 0);
    if (temp_a0_5 != 0) {
        amCdFs_Close(temp_a0_5, 0);
    }
    temp_a0_6 = M2C_FIELD(temp_s0, s32 *, 4);
    if (temp_a0_6 != 0) {
        amCdFs_Close(temp_a0_6, 0);
    }
    amHeap_Free(temp_s0);
    gVsCharasel = NULL;
    func_0027E070();
    func_0027E070();
    func_0028DF20();
}
