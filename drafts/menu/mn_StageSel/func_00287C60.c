/* Draft (not built): func_00287C60 at 0x00287C60, size 0x1F8, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK Help_Exit();                                /* extern */
M2C_UNK amCdFs_Close(s32, M2C_UNK);                 /* extern */
M2C_UNK amHeap_Free(void *);                        /* extern */
M2C_UNK amNode_Free(s32);                           /* extern */
M2C_UNK amSofdec_Destroy(s32);                      /* extern */
M2C_UNK amTask_Kill(void *);                        /* extern */
M2C_UNK func_00285C10(void *);                      /* extern */
extern void *D_0047082C;

void func_00287C60(void) {
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *var_s3;

    temp_s2 = D_0047082C;
    temp_s0 = M2C_FIELD(temp_s2, void **, 0x14);
    if (temp_s0 != NULL) {
        temp_s1 = M2C_FIELD(temp_s0, void **, 0x30);
        func_00285C10(temp_s1);
        temp_a0 = M2C_FIELD(temp_s1, void **, 0);
        if (temp_a0 != NULL) {
            amHeap_Free(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_s1, void **, 4);
        if (temp_a0_2 != NULL) {
            amHeap_Free(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_s1, void **, 8);
        if (temp_a0_3 != NULL) {
            amHeap_Free(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_s1, void **, 0xC);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_s1, void **, 0x10);
        if (temp_a0_5 != NULL) {
            amHeap_Free(temp_a0_5);
        }
        temp_a0_6 = M2C_FIELD(temp_s1, void **, 0xE0);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
        }
        temp_a0_7 = M2C_FIELD(temp_s1, void **, 0xE4);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
        }
        var_s4 = 0;
        var_s3 = temp_s1;
        do {
            amNode_Free(M2C_FIELD(var_s3, s32 *, 0x170));
            var_s4 += 1;
            var_s3 += 0x30;
        } while (var_s4 < 4);
        temp_v0 = M2C_FIELD(temp_s1, void **, 0x230);
        if (temp_v0 != NULL) {
            temp_a0_8 = M2C_FIELD(temp_v0, s32 *, 0x30);
            temp_s3 = temp_v0 + 0x30;
            if (temp_a0_8 >= 0) {
                amSofdec_Destroy(temp_a0_8);
            }
            M2C_FIELD(temp_v0, s32 *, 0x30) = -1;
            M2C_FIELD(temp_s3, s16 *, 4) = -1;
            M2C_FIELD(temp_s3, s16 *, 6) = -1;
            amTask_Kill(M2C_FIELD(temp_s1, void **, 0x230));
        }
        amHeap_Free(temp_s1);
        amTask_Kill(temp_s0);
    }
    temp_a0_9 = M2C_FIELD(temp_s2, s32 *, 8);
    if (temp_a0_9 != 0) {
        amCdFs_Close(temp_a0_9, 0);
    }
    temp_a0_10 = M2C_FIELD(temp_s2, s32 *, 0xC);
    if (temp_a0_10 != 0) {
        amCdFs_Close(temp_a0_10, 0);
    }
    temp_a0_11 = M2C_FIELD(temp_s2, s32 *, 0x10);
    if (temp_a0_11 != 0) {
        amCdFs_Close(temp_a0_11, 0);
    }
    temp_a0_12 = M2C_FIELD(temp_s2, s32 *, 0);
    if (temp_a0_12 != 0) {
        amCdFs_Close(temp_a0_12, 0);
    }
    temp_a0_13 = M2C_FIELD(temp_s2, s32 *, 4);
    if (temp_a0_13 != 0) {
        amCdFs_Close(temp_a0_13, 0);
    }
    amHeap_Free(temp_s2);
    D_0047082C = NULL;
    Help_Exit();
}
