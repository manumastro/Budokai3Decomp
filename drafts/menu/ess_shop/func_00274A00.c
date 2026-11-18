/* Draft (not built): func_00274A00 at 0x00274A00, size 0x13C, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0()' redeclared was declared as: 'void ()' now declared as: 'void (unsigned char *)' @ 497: void func_00276470(u8 *a0) {
 * Original: asm/nonmatchings/menu/ess_shop/func_00274A00.s */

// src/menu/ess_shop.c func_00274A00 cerr diff=-1/0
extern void func_0026D570(s32);
extern void amAdx_Pause(s32, s32);
s32 Zenie_Close(s32);
extern u16 D_00493086;
extern char D_00492FCE[];
extern void func_00276470(void);
void func_00274A00(u8 *arg0) {
    s32 *var_v1;

    *(s32 *)((u8 *)gEssShop + 0x1D4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x1D4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x204) = (s32) (*(s32 *)((u8 *)gEssShop + 0x204) + 1);
    *(s32 *)((u8 *)gEssShop + 0x234) = (s32) (*(s32 *)((u8 *)gEssShop + 0x234) + 1);
    *(s32 *)((u8 *)gEssShop + 0x264) = (s32) (*(s32 *)((u8 *)gEssShop + 0x264) + 1);
    *(s32 *)((u8 *)gEssShop + 0x294) = (s32) (*(s32 *)((u8 *)gEssShop + 0x294) + 1);
    *(s32 *)((u8 *)gEssShop + 0x2C4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2C4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x3B4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x3B4) + 1);
    func_00274120();
    if ((*D_00492FCE | D_00493086) != 0) {
        amAdx_Pause(1, 1);
        Zenie_Close(0);
        *(s32 *)((u8 *)arg0 + 0x30) = 0x3C;
        *(s32 *)((u8 *)gEssShop + 0x1CC) = 1;
        *(s32 *)((u8 *)gEssShop + 0x1D4) = 0;
        *(s32 *)((u8 *)gEssShop + 0x22C) = 0x17;
        *(s32 *)((u8 *)gEssShop + 0x234) = 0;
        *(s32 *)((u8 *)gEssShop + 0x1FC) = 0x14;
        *(s32 *)((u8 *)gEssShop + 0x204) = 0;
        *(s32 *)((u8 *)gEssShop + 0x20C) = -1;
        *(s32 *)((u8 *)gEssShop + 0x3AC) = 1;
        *(s32 *)((u8 *)gEssShop + 0x3B4) = 0;
        func_0026D570(0);
        var_v1 = (s32 *)(&func_00276470);
        if (&func_00276470 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
