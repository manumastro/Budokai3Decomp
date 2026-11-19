/* Draft (not built): func_00288000 at 0x00288000, size 0xAC, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 5 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA8, original 0xAC
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00288000.s */

// src/menu/mn_StageSel.c func_00288000 size diff=5/42
s32 amCdFs_ReadFileId(s32, s32, s32);
void *amHeap_Alloc(s32, s32, s32 *, s32);
extern s32 D_0046B8D8;
extern void *D_0047082C;
void func_00288000(void) {
    u8 *temp_v0;

    temp_v0 = amHeap_Alloc(0x18, 0, &D_0046B8D8, 0xF6);
    D_0047082C = temp_v0;
    *(s32 *)((u8 *)temp_v0 + 8) = amCdFs_ReadFileId(0xF53, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0xC) = amCdFs_ReadFileId(0xF54, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0x10) = amCdFs_ReadFileId(0xF52, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0) = amCdFs_ReadFileId(0x10830, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 4) = amCdFs_ReadFileId(0x10831, 0, 0);
    *(s32 *)((u8 *)temp_v0 + 0x14) = 0;
}

/* Similar function already in C: VsMode_Load (src/menu/mn_vsmode.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
void VsMode_Load(void) {
    u8 *s0;
    s0 = D_004707DC = amHeap_Alloc(0x14, 0, D_0046B430, 0x84);
    *(s32 *)(s0 + 0x10) = 0;
    *(s32 *)s0 = amCdFs_ReadFileId(0x1083C, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1083D, 0, 0);
    *(s32 *)(s0 + 0x8) = 0;
    *(s32 *)(s0 + 0xC) = 0;
}
#endif
