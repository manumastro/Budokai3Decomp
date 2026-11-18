/* Draft (not built): func_002A11F0 at 0x002A11F0, size 0xE8, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

M2C_UNK amHeap_Free(void *);                        /* extern */
M2C_UNK func_0029EA20();                            /* extern */
M2C_UNK func_0029EC40();                            /* extern */
extern void *D_004708CC;

void func_002A11F0(void) {
    s32 var_s0;
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s2;

    temp_s2 = D_004708CC;
    if (temp_s2 != NULL) {
        if (M2C_FIELD(temp_s2, s32 *, 0x44) != 0) {
            var_s1 = 0;
            if (M2C_FIELD(temp_s2, s32 *, 0) > 0) {
                var_s0 = 0;
                do {
                    temp_a0 = *(M2C_FIELD(temp_s2, void **, 0x44) + var_s0);
                    if (temp_a0 != NULL) {
                        amHeap_Free(temp_a0);
                        *(M2C_FIELD(temp_s2, void **, 0x44) + var_s0) = 0;
                    }
                    var_s1 += 1;
                    var_s0 += 4;
                } while (var_s1 < M2C_FIELD(temp_s2, s32 *, 0));
            }
            amHeap_Free(M2C_FIELD(temp_s2, void **, 0x44));
            M2C_FIELD(temp_s2, void **, 0x44) = NULL;
            temp_a0_2 = M2C_FIELD(temp_s2, void **, 0x50);
            if (temp_a0_2 != NULL) {
                amHeap_Free(temp_a0_2);
                M2C_FIELD(temp_s2, void **, 0x50) = NULL;
            }
        }
        func_0029EC40();
        func_0029EA20();
        if (D_004708CC != NULL) {
            amHeap_Free(D_004708CC);
            D_004708CC = NULL;
        }
    }
}
