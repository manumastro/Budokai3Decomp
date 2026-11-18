/* Draft (not built): func_00273AF0 at 0x00273AF0, size 0x328, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tifier 'sp' @ 310: *)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)((*(s16 *)((u8 *)arg0 + 0xC) * 4) + sp) + 0x80) * 4)), 0);
 * Original: asm/nonmatchings/menu/ess_shop/func_00273AF0.s */

// src/menu/ess_shop.c func_00273AF0 cerr diff=-1/0
extern f32 gFrameDelta;
void *A2d_AllocObj(s32, s32);
s32 func_00227880(s32 *);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0022C430(s32, s32);
s32 func_0022D4B0(void *, s32);
s32 func_0026D320(void *, void *, s16, s32);
extern s32 D_00453230;
extern s128 D_00453250;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00273AF0(u8 *arg0, s32 arg1) {
    s128 sp80;
    s32 sp90;
    s32 temp_a2;
    s32 temp_hi;
    s32 var_s2;
    s32 var_s3;
    u32 temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s1;
    u8 *temp_v0;

    func_00228430(0);
    temp_a2 = *(s32 *)((u8 *)arg0 + 8);
    temp_a0 = (u32) temp_a2 >> 0x1F;
    var_s3 = temp_a2 % 1000;
    var_s2 = (s32) ((*(s32 *)((u8 *)arg0 + 8) / 1000) + temp_a0) % 1000;
    temp_hi = (s32) ((*(s32 *)((u8 *)arg0 + 8) / 1000000) + temp_a0) % 1000;
    if (temp_hi != 0) {
        var_s2 += 0x3E8;
    }
    if (var_s2 != 0) {
        var_s3 += 0x3E8;
    }
    temp_s1 = *(u8 **)((u8 *)gEssShop + 0x28);
    temp_a0_2 = *(u8 **)((u8 *)gEssShop + 0x30);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x11401280;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x11401280, temp_a2);
    D_00470238 = 0;
    func_00228430(0);
    if (*(s32 *)((u8 *)arg0 + 0x10) & 1) {
        *(s128 *)((u8 *)(&sp90) + 0) = (s128) *(s128 *)((u8 *)(&D_00453230) + 0);
        *(s128 *)((u8 *)(&sp90) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453230) + 0x10);
        func_00227880(&sp90);
    }
    temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x138), 0);
    *(s16 *)((u8 *)temp_v0 + 0x18) = (s16) *(s32 *)((u8 *)arg0 + 0);
    func_0026D320(temp_v0, *(u8 **)((u8 *)gEssShop + 0x30), *(s16 *)((u8 *)temp_v0 + 0x18), 9);
    *(f32 *)((u8 *)temp_v0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x38) * 0.8f);
    func_0022C6B0(temp_v0);
    func_0022D4B0(temp_v0, 1);
    temp_a0_3 = *(u8 **)((u8 *)gEssShop + 0x2C);
    D_00470704 = temp_a0_3;
    D_0047070C = 0x11401200;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, 0x11401200);
    D_00470238 = 0;
    func_0022C1D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 0x10), 1, (f32) var_s3);
    func_0022C1D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 0x14), 1, (f32) var_s2);
    func_0022C1D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 0x18), 1, (f32) temp_hi);
    sp80 = D_00453250;
    func_00228430(0);
    if (arg1 != 0) {
        func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x30)) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)gEssShop + 0x2C4) * gFrameDelta);
    }
    if (*(s32 *)((u8 *)arg0 + 0) == 0x242) {
        func_0022C1D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x14)) + 8), 1, 0.0f);
    } else {
        func_0022C430(*(*(u8 **)((u8 *)temp_s1 + 0x1C) + (*(s32 *)((u8 *)((*(s16 *)((u8 *)arg0 + 0xC) * 4) + sp) + 0x80) * 4)), 0);
    }
    func_00228410();
    func_00228410();
    if (*(s32 *)((u8 *)arg0 + 0x10) & 2) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0xA4), 0);
    }
    if (*(s32 *)((u8 *)arg0 + 0x10) & 4) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0xA8), 0);
    }
    func_00228410();
}
