/* Draft (not built): func_00276840 at 0x00276840, size 0x1C4, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); cps2.exe Compiler: 512: amCdFs_Close(*(gEssShop + var_s0), 0); @ 511: *(s32 *)((u8 *)(*(gEssShop + var_s0)) + 0x40) = 0;
 * Original: asm/nonmatchings/menu/ess_shop/func_00276840.s */

// src/menu/ess_shop.c func_00276840 cerr diff=-1/0
extern void amCdFs_Close(void *, s32);
s32 func_0026D610(s32);
void *func_002C0510(s32, s32, s32);
extern void amFile_Load(void *);
void func_00276840(u8 *arg0) {
    s32 var_s0;
    s32 var_s1;
    void (*var_v0)();
    void (*var_v1)();
    u8 *temp_v1;

    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)gEssShop + 0xC)) + 4) == 3) {
        var_s1 = 0;
        var_s0 = 0;
        do {
            temp_v1 = (u8 *)(gEssShop + var_s0);
            *(s32 *)((u8 *)temp_v1 + 0x10) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0)) + 0x40);
            *(s32 *)((u8 *)(*(gEssShop + var_s0)) + 0x40) = 0;
            amCdFs_Close(*(gEssShop + var_s0), 0);
            *(gEssShop + var_s0) = 0;
            amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)(gEssShop + var_s0) + 0x10)) + 0x50));
            func_0026D610(*(s32 *)((u8 *)(gEssShop + var_s0) + 0x10));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
        *(s32 *)((u8 *)gEssShop + 0x28) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssShop + 0x10)) + 0x50);
        *(s32 *)((u8 *)gEssShop + 0x2C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssShop + 0x14)) + 0x50);
        *(s32 *)((u8 *)gEssShop + 0x30) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssShop + 0x18)) + 0x50);
        *(s32 *)((u8 *)gEssShop + 0x34) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gEssShop + 0x1C)) + 0x50);
        *(u8 **)((u8 *)gEssShop + 0x24) = func_002C0510(*(s32 *)((u8 *)gEssShop + 0x34), 0x3010, 0);
        *(s16 *)((u8 *)(*(u8 **)((u8 *)gEssShop + 0x24)) + 0x3A) = 3;
        if (EssMain_GetFlag(gEssShop) != 0) {
            var_v0 = func_00276400;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
            if (func_00276400 == NULL) {
                var_v0 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
            amAdx_SetVolume(1, (f32)(D_004E0618));
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x210BB, 0);
            return;
        }
        func_0026D570(1);
        Zenie_Open(0);
        var_v1 = func_00276610;
        if (func_00276610 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
