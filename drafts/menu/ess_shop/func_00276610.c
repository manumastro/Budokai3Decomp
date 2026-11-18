/* Draft (not built): func_00276610 at 0x00276610, size 0x230, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 16: BC30(*(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x1CC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x1
 * Original: asm/nonmatchings/menu/ess_shop/func_00276610.s */

// src/menu/ess_shop.c func_00276610 cerr diff=-1/0
s32 func_0012EAE0(s32);
s32 func_0026D530(s32, s32);
extern s32 D_00452FB0;
extern s32 D_00452FF0;
void func_00276610(u8 *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    void (*var_v1)();
    u8 *temp_a1_2;
    u8 *temp_s1;
    u8 *temp_s1_2;

    *(s32 *)((u8 *)gEssShop + 0x1D4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x1D4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x204) = (s32) (*(s32 *)((u8 *)gEssShop + 0x204) + 1);
    *(s32 *)((u8 *)gEssShop + 0x234) = (s32) (*(s32 *)((u8 *)gEssShop + 0x234) + 1);
    *(s32 *)((u8 *)gEssShop + 0x264) = (s32) (*(s32 *)((u8 *)gEssShop + 0x264) + 1);
    *(s32 *)((u8 *)gEssShop + 0x294) = (s32) (*(s32 *)((u8 *)gEssShop + 0x294) + 1);
    *(s32 *)((u8 *)gEssShop + 0x2C4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2C4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x3B4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x3B4) + 1);
    func_00274120();
    temp_s1 = *(u8 **)((u8 *)gEssShop + 0x28);
    temp_s0 = -1 & func_0022BC30(*(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x1CC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x1D4) * gFrameDelta);
    if ((temp_s0 & func_0022BC30(*(*(s32 *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x22C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x234) * gFrameDelta)) == 0xFF) {
        temp_s0_2 = func_0012EAE0(0x20) & 3;
        temp_s1_2 = (u8 *)(gEssShop + 0x1FC);
        *(s32 *)((u8 *)temp_s1_2 + 0x10) = (s32) *(temp_s0_2 + (&D_00452FB0 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
        func_0026D530(1, 0);
        temp_a1 = (EssMain_GetFlag() & 0xFF) * 0x70;
        temp_s0_3 = *((temp_s0_2 * 4) + (&D_00452FF0 + temp_a1));
        amAdx_SetVolume(1, temp_a1);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s0_3 | 0x20000, 0);
        *(s32 *)((u8 *)gEssShop + 0x25C) = 0x2D;
        *(s32 *)((u8 *)gEssShop + 0x268) = 0;
        *(s32 *)((u8 *)gEssShop + 0x264) = 0x2710;
        *(s32 *)((u8 *)gEssShop + 0x298) = 0;
        temp_a1_2 = (u8 *)(gEssShop + 0x28C);
        if (*(s32 *)((u8 *)gEssShop + 0x6C) >= 5) {
            *(s32 *)((u8 *)gEssShop + 0x28C) = 0x2C;
            *(s32 *)((u8 *)temp_a1_2 + 8) = 0;
        } else {
            *(s32 *)((u8 *)gEssShop + 0x28C) = 0x2E;
            *(s32 *)((u8 *)temp_a1_2 + 8) = 0x2710;
        }
        var_v1 = func_002759F0;
        if (func_002759F0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
