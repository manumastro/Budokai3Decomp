/* Draft (not built): func_00273E20 at 0x00273E20, size 0x300, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x314, original 0x300
 * Original: asm/nonmatchings/menu/ess_shop/func_00273E20.s */

// src/menu/ess_shop.c func_00273E20 size diff=66/197
extern f32 gFrameDelta;
void *A2d_AllocObj(s32, f32);
s32 func_00133780(s32, s32);
s32 func_00227A30(void *);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_0022C560(void *);
s32 func_0022D0E0(void *, s32);
s32 func_0022D4B0(void *, s32);
void *func_0022D860(s32, f32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022C6B0(void *);
void func_00273E20(void) {
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_s0;
    u8 *var_s1;

    temp_a0 = *(u8 **)((u8 *)gEssShop + 0x2C);
    temp_s0 = (unsigned char *)(*(s32 *)((u8 *)gEssShop + 0x20) + 0x30);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401200;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401200);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s2 = *(u8 **)((u8 *)gEssShop + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C430(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x2FC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x2F4) * gFrameDelta);
    if (*(s32 *)((u8 *)temp_s0 + 8) != 0) {
        func_0022C430(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x31C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x324) * gFrameDelta);
        var_s1 = A2d_AllocObj(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x34C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x354) * gFrameDelta);
        func_00228430(0);
        func_00227A30(var_s1 + 0x20);
        temp_v0 = func_0022D860(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x14) + (*(s32 *)((u8 *)gEssShop + 0x37C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x384) * gFrameDelta);
        temp_v1 = *(u8 **)((u8 *)temp_v0 + 0x30);
        var_s0 = temp_v0;
        *(f32 *)((u8 *)temp_v1 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x5C) * *(f32 *)((u8 *)var_s1 + 0x5C));
        temp_v0_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x2C)) + 0x30);
        *(f32 *)((u8 *)temp_v0_2 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x5C) * *(f32 *)((u8 *)var_s1 + 0x5C));
        func_00228410();
        func_0022C560(var_s0);
        *(s32 *)((u8 *)var_s1 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)var_s1 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)var_s1 + 0x58) = 0x3F800000;
        *(f32 *)((u8 *)var_s1 + 0x5C) = (f32) *(f32 *)((u8 *)var_s1 + 0x5C);
        func_0022C6B0(var_s1);
    } else {
        var_s1 = A2d_AllocObj(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x31C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x324) * gFrameDelta);
        func_0022C430(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x34C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x354) * gFrameDelta);
        func_00228430(0);
        func_00227A30(var_s1 + 0x20);
        temp_v0_3 = func_0022D860(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x14) + (*(s32 *)((u8 *)gEssShop + 0x37C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x384) * gFrameDelta);
        temp_v1_2 = *(u8 **)((u8 *)temp_v0_3 + 0x30);
        var_s0 = temp_v0_3;
        *(f32 *)((u8 *)temp_v1_2 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v1_2 + 0x5C) * *(f32 *)((u8 *)var_s1 + 0x5C));
        temp_v0_4 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0_3 + 0x2C)) + 0x30);
        *(f32 *)((u8 *)temp_v0_4 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v0_4 + 0x5C) * *(f32 *)((u8 *)var_s1 + 0x5C));
        func_00228410();
        func_0022C560(var_s0);
        *(s32 *)((u8 *)var_s1 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)var_s1 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)var_s1 + 0x58) = 0x3F800000;
        *(f32 *)((u8 *)var_s1 + 0x5C) = (f32) *(f32 *)((u8 *)var_s1 + 0x5C);
        func_0022C6B0(var_s1);
    }
    func_0022D4B0(var_s1, 1);
    func_0022D0E0(var_s0, 1);
    func_0022C430(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x300) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x2F4) * gFrameDelta);
    func_00228410();
    func_00133780(0, 0);
}
