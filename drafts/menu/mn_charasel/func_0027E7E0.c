/* Draft (not built): func_0027E7E0 at 0x0027E7E0, size 0x98, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

s32 amCdFs_ReadFileId(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_0046B6D0;
extern void *D_00470810;

void func_0027E7E0(void) {
    void *temp_v0;

    if (D_00470810 != NULL) {
        M2C_FIELD(D_00470810, s8 *, 0x10) = (s8) (M2C_FIELD(D_00470810, s8 *, 0x10) + 1);
        return;
    }
    temp_v0 = amHeap_Alloc(0x14, 0, &D_0046B6D0, 0x123);
    D_00470810 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0) = amCdFs_ReadFileId(0x10820, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 4) = amCdFs_ReadFileId(0x10821, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x10) = 1;
}
