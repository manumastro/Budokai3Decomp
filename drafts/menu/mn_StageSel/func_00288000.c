/* Draft (not built): func_00288000 at 0x00288000, size 0xAC, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

s32 amCdFs_ReadFileId(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_0046B8D8;
extern void *D_0047082C;

void func_00288000(void) {
    void *temp_v0;

    temp_v0 = amHeap_Alloc(0x18, 0, &D_0046B8D8, 0xF6);
    D_0047082C = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 8) = amCdFs_ReadFileId(0xF53, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 0xC) = amCdFs_ReadFileId(0xF54, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 0x10) = amCdFs_ReadFileId(0xF52, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 0) = amCdFs_ReadFileId(0x10830, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 4) = amCdFs_ReadFileId(0x10831, 0, 0);
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
}
