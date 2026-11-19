/* Draft (not built): func_0027A370 at 0x0027A370, size 0x148, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x15C, original 0x148
 * Original: asm/nonmatchings/menu/ess_trade/func_0027A370.s */

// src/menu/ess_trade.c func_0027A370 size diff=23/87
s32 Smsg_Start(s32, s32, s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32, void *);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_0026D530(s32, s32, s32, s32);
extern s32 D_0046B550;
void func_0027A370(void) {
    if ((s32)(gEssTrade) != 0) {
        amHeap_Free((void *)(gEssTrade));
    }
    gEssTrade = (int)(amHeap_Alloc(0x1AF80, 0, &D_0046B550, 0x7D));
    memset(gEssTrade, 0, 0x1AF80);
    Smsg_Start(0x3210, 0, 0x11403000, 0);
    *(s32 *)((u8 *)gEssTrade + 0) = amCdFs_ReadFileId(0x107F9, 0, 1, 0);
    *(s32 *)((u8 *)gEssTrade + 4) = (int)((void *)amCdFs_ReadFileId(0x107FA, 0, 1, (void *)(gEssTrade)));
    *(s32 *)((u8 *)gEssTrade + 8) = (int)((void *)amCdFs_ReadFileId(0x10A9C, 0, 1, (void *)(gEssTrade)));
    *(s32 *)((u8 *)gEssTrade + 0xC) = (int)((void *)amCdFs_ReadFileId(0x10851, 0, 1, (void *)(gEssTrade)));
    *(s32 *)((u8 *)gEssTrade + 0x98) = 0;
    *(s32 *)((u8 *)gEssTrade + 0xF8) = 2;
    *(s32 *)((u8 *)gEssTrade + 0x108) = 6;
    *(s32 *)((u8 *)gEssTrade + 0x128) = 3;
    *(s32 *)((u8 *)gEssTrade + 0x138) = 7;
    *(s32 *)((u8 *)gEssTrade + 0xC8) = 8;
    *(s32 *)((u8 *)gEssTrade + 0xD8) = -1;
    func_0026D530(2, -1, 7, 3);
    *(s32 *)((u8 *)gEssTrade + 0x164) = 1;
    *(s32 *)((u8 *)gEssTrade + 0x1C4) = 1;
}
