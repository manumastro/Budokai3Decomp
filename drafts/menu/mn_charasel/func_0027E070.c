/* Draft (not built): func_0027E070 at 0x0027E070, size 0xA8, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK amCdFs_Close(s32, M2C_UNK);                 /* extern */
M2C_UNK amHeap_Free(void *);                        /* extern */
extern void *D_00470810;

void func_0027E070(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;

    temp_s0 = D_00470810;
    M2C_FIELD(temp_s0, s8 *, 0x10) = (s8) (M2C_FIELD(temp_s0, s8 *, 0x10) - 1);
    if (M2C_FIELD(temp_s0, s8 *, 0x10) <= 0) {
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
        if (temp_a0 != 0) {
            amCdFs_Close(temp_a0, 0);
        }
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_a0_2 != 0) {
            amCdFs_Close(temp_a0_2, 0);
        }
        temp_a0_3 = M2C_FIELD(temp_s0, void **, 8);
        if (temp_a0_3 != NULL) {
            amHeap_Free(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_s0, void **, 0xC);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        amHeap_Free(temp_s0);
        D_00470810 = NULL;
    }
}
