/* Draft (not built): func_00276610 at 0x00276610, size 0x230, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x230
 * Original: asm/nonmatchings/menu/ess_shop/func_00276610.s */

// src/menu/ess_shop.c func_00276610 size diff=52/144
s32 func_0012EAE0(s32);
s32 func_0026D530(s32, s32);
extern s32 D_00452FB0;
extern s32 D_00452FF0;
void func_00276610(u8 *arg0) {
    s32 temp_a1;
    s32 var_s0;
    void (*var_v1)();
    u8 *temp_a1_2;
    u8 *var_s1;
    u8 *var_s2;

    var_s2 = arg0;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x1D4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x204) = (s32) (*(s32 *)((u8 *)gEssShop + 0x204) + 1);
    *(s32 *)((u8 *)gEssShop + 0x234) = (s32) (*(s32 *)((u8 *)gEssShop + 0x234) + 1);
    *(s32 *)((u8 *)gEssShop + 0x264) = (s32) (*(s32 *)((u8 *)gEssShop + 0x264) + 1);
    *(s32 *)((u8 *)gEssShop + 0x294) = (s32) (*(s32 *)((u8 *)gEssShop + 0x294) + 1);
    *(s32 *)((u8 *)gEssShop + 0x2C4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2C4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x3B4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x3B4) + 1);
    func_00274120();
    var_s0 = -1;
    var_s1 = *(u8 **)((u8 *)gEssShop + 0x28);
    var_s0 = -1 & func_0022BC30(*(s32 *)(*(s32 *)((u8 *)var_s1 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x1CC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x1D4) * gFrameDelta);
    var_s0 &= func_0022BC30(*(s32 *)(*(s32 *)((u8 *)var_s1 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x22C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x234) * gFrameDelta);
    if (var_s0 == 0xFF) {
        var_s0 = func_0012EAE0(0x20) & 3;
        var_s1 = (unsigned char *)(gEssShop + 0x1FC);
        *(s32 *)((u8 *)var_s1 + 0x10) = (s32) *(var_s0 + (&D_00452FB0 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
        func_0026D530(1, 0);
        temp_a1 = (EssMain_GetFlag() & 0xFF) * 0x70;
        var_s0 = *((var_s0 * 4) + (&D_00452FF0 + temp_a1));
        amAdx_SetVolume(1, temp_a1);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, var_s0 | 0x20000, 0);
        *(s32 *)((u8 *)gEssShop + 0x25C) = 0x2D;
        *(s32 *)((u8 *)gEssShop + 0x268) = 0;
        *(s32 *)((u8 *)gEssShop + 0x264) = 0x2710;
        *(s32 *)((u8 *)gEssShop + 0x298) = 0;
        temp_a1_2 = (unsigned char *)(gEssShop + 0x28C);
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
        *(void (**)())((u8 *)var_s2 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_00276470 (src/menu/ess_shop.c), similarity 0.71.
 * It is the template below (not built). */
#if 0
void func_00276470(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    void *fp;
    s3 = a0;
    s2 = a0 + 0x30;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = *(s32 *)((u8 *)gEssShop + 0x1D4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x204) = *(s32 *)((u8 *)gEssShop + 0x204) + 1;
    *(s32 *)((u8 *)gEssShop + 0x234) = *(s32 *)((u8 *)gEssShop + 0x234) + 1;
    *(s32 *)((u8 *)gEssShop + 0x264) = *(s32 *)((u8 *)gEssShop + 0x264) + 1;
    *(s32 *)((u8 *)gEssShop + 0x294) = *(s32 *)((u8 *)gEssShop + 0x294) + 1;
    *(s32 *)((u8 *)gEssShop + 0x2C4) = *(s32 *)((u8 *)gEssShop + 0x2C4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x3B4) = *(s32 *)((u8 *)gEssShop + 0x3B4) + 1;
    func_00274120();
    s0 = -1;
    s1 = *(u8 **)((u8 *)gEssShop + 0x28);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x1CC) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x1D4) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x22C) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x234) * gFrameDelta);
    if (s0 == 0xFF) {
        if (EssMain_GetFlag() != 0) {
            *(s32 *)s2 = 0;
            fp = (void *)EssShop_TaskWaitVoice;
            *(void **)(s3 + 0x1C) = (fp == 0) ? 0 : fp;
            amAdx_SetVolume(1, D_004E0618[0]);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x210D8, 0);
        } else {
            func_0026D6A0();
            *(s32 *)(s3 + 0x1C) = 0;
        }
    }
}
#endif
