/* Draft (not built): func_00276B50 at 0x00276B50, size 0x184, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); r: 595: mHeap_Alloc(0x3E0, 0, (s32)((s32 *)((s32)((s32 *)((s32)(&D_0046B520))))), 0x168); @ 592: if (gEssShop != NULL) {
 * Original: asm/nonmatchings/menu/ess_shop/func_00276B50.s */

// src/menu/ess_shop.c func_00276B50 cerr diff=-1/0
s32 Zenie_Create(s32, s32, s32, s32);
s32 Zenie_SetValue(s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32, void *);
void *amHeap_Alloc(s32, s32, s32 *, s32);
extern s32 D_0046B520;
extern s32 D_0058F680;
extern s32 D_0058F718;
void func_00276B50(s32 arg0) {
    s32 temp_a0;
    s32 temp_t3;

    if (gEssShop != NULL) {
        amHeap_Free(gEssShop);
    }
    gEssShop = amHeap_Alloc(0x3E0, 0, (s32 *)((s32)((s32 *)((s32)((s32 *)((s32)(&D_0046B520)))))), 0x168);
    memset(gEssShop, 0, 0x3E0);
    *(s32 *)((u8 *)gEssShop + 0x50) = arg0;
    *(s32 *)((u8 *)gEssShop + 0) = amCdFs_ReadFileId(0x107F7, 0, 1, 0);
    *(s32 *)((u8 *)gEssShop + 4) = amCdFs_ReadFileId(0x107F8, 0, 1, (void *)(gEssShop));
    *(s32 *)((u8 *)gEssShop + 8) = amCdFs_ReadFileId(0x10AB1, 0, 1, (void *)(gEssShop));
    temp_t3 = arg0 * 0xD680;
    *(s32 *)((u8 *)gEssShop + 0xC) = amCdFs_ReadFileId(0x10850, 0, 1, (void *)(gEssShop));
    *(u8 **)((u8 *)gEssShop + 0x54) = (u8 *) (&D_0058F680 + temp_t3 + 0xD41D);
    *(s32 *)((u8 *)gEssShop + 0x70) = (s32) *(&D_0058F718 + temp_t3);
    Zenie_Create(0x3210, 1, 0x114012A0, 0);
    func_002737C0();
    temp_a0 = *(s32 *)((u8 *)gEssShop + 0x70);
    Zenie_SetValue(temp_a0, temp_a0);
    *(s32 *)((u8 *)gEssShop + 0x1CC) = 0;
    *(s32 *)((u8 *)gEssShop + 0x22C) = 0x16;
    *(s32 *)((u8 *)gEssShop + 0x1FC) = 0x13;
    *(s32 *)((u8 *)gEssShop + 0x3AC) = 0;
    *(s32 *)((u8 *)gEssShop + 0x268) = 1;
    *(s32 *)((u8 *)gEssShop + 0x298) = 1;
}
