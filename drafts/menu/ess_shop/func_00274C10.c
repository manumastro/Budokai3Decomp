/* Draft (not built): func_00274C10 at 0x00274C10, size 0x25C, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 68: BC30(*(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x2FC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x2
 * Original: asm/nonmatchings/menu/ess_shop/func_00274C10.s */

// src/menu/ess_shop.c func_00274C10 cerr diff=-1/0
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
s32 SklSheet_SetIndex(s32, s32);
s32 func_00283D00(s32, s32, s32, s32);
extern s32 D_0059CA9D;
void func_00274C10(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s1;
    u8 *temp_s2;

    *(s32 *)((u8 *)gEssShop + 0x1D4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x1D4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x204) = (s32) (*(s32 *)((u8 *)gEssShop + 0x204) + 1);
    *(s32 *)((u8 *)gEssShop + 0x234) = (s32) (*(s32 *)((u8 *)gEssShop + 0x234) + 1);
    *(s32 *)((u8 *)gEssShop + 0x264) = (s32) (*(s32 *)((u8 *)gEssShop + 0x264) + 1);
    *(s32 *)((u8 *)gEssShop + 0x294) = (s32) (*(s32 *)((u8 *)gEssShop + 0x294) + 1);
    *(s32 *)((u8 *)gEssShop + 0x2C4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2C4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x3B4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x3B4) + 1);
    func_00274120();
    *(s32 *)((u8 *)gEssShop + 0x2F4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2F4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x324) = (s32) (*(s32 *)((u8 *)gEssShop + 0x324) + 1);
    *(s32 *)((u8 *)gEssShop + 0x354) = (s32) (*(s32 *)((u8 *)gEssShop + 0x354) + 1);
    *(s32 *)((u8 *)gEssShop + 0x384) = (s32) (*(s32 *)((u8 *)gEssShop + 0x384) + 1);
    func_00273E20();
    temp_s2 = *(u8 **)((u8 *)gEssShop + 0x28);
    temp_s1 = (u8 *)(gEssShop + 0x2EC);
    temp_s0 = -1 & func_0022BC30(*(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x2FC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x2F4) * gFrameDelta);
    temp_s0_2 = temp_s0 & func_0022BC30(*(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)temp_s1 + 0x14) * 4)), (f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta);
    temp_s0_3 = temp_s0_2 & func_0022BC30(*(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x31C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x324) * gFrameDelta);
    if ((temp_s0_3 & func_0022BC30(*(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x34C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x354) * gFrameDelta)) == 0xFF) {
        temp_s0_4 = *(u8 **)((u8 *)((*(s32 *)((u8 *)gEssShop + 0x68) * 4) + gEssShop) + 0x1B8);
        func_00283D00(0x3220, *(s32 *)((u8 *)temp_s0_4 + 4), 0, 0x11403000);
        temp_a1 = *(s32 *)((u8 *)gEssShop + 0x50);
        SklSheet_SetIndex(*(*(s32 *)((u8 *)temp_s0_4 + 4) + (&D_0059CA9D + (temp_a1 * 0xD680))) == 1, temp_a1);
        func_002730B0(temp_s0_4, func_00273330(7, *(s32 *)((u8 *)gEssShop + 0x58), 1));
        var_v1 = (s32 *)(&func_00274B40);
        if (&func_00274B40 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
