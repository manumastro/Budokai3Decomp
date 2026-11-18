/* Draft (not built): func_00274120 at 0x00274120, size 0x8D4, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'void *' mwccps2.exe Compiler: @ 307: EssShop + 0x1CC) * 4)), 1, (f32) *(s32 *)((u8 *)gEssShop + 0x1D4) * gFrameDelta);
 * Original: asm/nonmatchings/menu/ess_shop/func_00274120.s */

// src/menu/ess_shop.c func_00274120 cerr diff=-1/0
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
void *A2d_AllocObj(void *, f32);
s32 func_00133780(s32, s32);
s32 func_00227A30(f32 *);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_00229800(s32, s32 *, s32, s32);
s32 func_00229840(s32, f32 *, s32, s32);
s32 func_0022C1D0(void *, s32, f32);
s32 func_0022C430(void *, f32);
s32 func_0022D4B0(void *, s32);
s32 func_0026D480(s32);
extern s32 D_00453210;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00274120(void) {
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 sp9C;
    f32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spC0;
    f32 spE0;
    f32 spE4;
    s32 spE8;
    s32 sp100;
    f32 temp_f20;
    s32 temp_s6;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_7;
    u8 *temp_v0_8;
    u8 *temp_v0_9;
    u8 *temp_v1;
    u8 *var_s0;

    func_002735D0();
    temp_a0 = *(u8 **)((u8 *)gEssShop + 0x2C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401200;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401200);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s2 = *(u8 **)((u8 *)gEssShop + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(*(u8 **)((u8 *)temp_s2 + 0x14) + (*(s32 *)((u8 *)gEssShop + 0x1CC) * 4)), 1, (f32) *(s32 *)((u8 *)gEssShop + 0x1D4) * gFrameDelta);
    temp_s0 = (u8 *)(gEssShop + 0x1FC);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x1FC) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x204) * gFrameDelta);
    if (func_0022BC30(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta) == 0xFF) {
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x144), &sp100, 0, 0);
        Obj_CopyVec4F50(*(u8 **)((u8 *)gEssShop + 0x24), &sp100);
        Obj_SetF3C(*(u8 **)((u8 *)gEssShop + 0x24), *(s16 *)((u8 *)temp_s0 + 0x10));
    } else {
        Obj_SetF3C(*(u8 **)((u8 *)gEssShop + 0x24), -1);
    }
    temp_s0_2 = (u8 *)(gEssShop + 0x22C);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x22C) * 4)), (f32) *(s32 *)((u8 *)gEssShop + 0x234) * gFrameDelta);
    func_00228430(0);
    func_00229840(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x5C)) + 0xC), &spE0, 0, 0);
    spE0 = -spE0;
    spE4 = -spE4;
    spE8 = 0;
    func_00227A30(&spE0);
    func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)temp_s0_2 + 0) * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0_2 + 8) * gFrameDelta);
    if (*(s32 *)((u8 *)gEssShop + 0x60) == 0) {
        var_s0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x14)) + 0xC)) + 4);
        if (var_s0 != NULL) {
            do {
                temp_v0 = A2d_AllocObj(*(u8 **)((u8 *)var_s0 + 0x10), 0.0f);
                *(s32 *)((u8 *)temp_v0 + 0x50) = 0x3F800000;
                *(s32 *)((u8 *)temp_v0 + 0x54) = 0x3F800000;
                *(s32 *)((u8 *)temp_v0 + 0x58) = 0x3F800000;
                *(f32 *)((u8 *)temp_v0 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v0 + 0x5C);
                func_0022C6B0(temp_v0);
                func_0022D4B0(temp_v0, 1);
                var_s0 = *(u8 **)((u8 *)var_s0 + 8);
            } while (var_s0 != NULL);
        }
    } else {
        func_0022C1D0(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x14)) + 0xC), 1, 0.0f);
    }
    if (*(s32 *)((u8 *)gEssShop + 0x60) == 1) {
        temp_v0_2 = A2d_AllocObj(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x20), 0.0f);
        *(s32 *)((u8 *)temp_v0_2 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_2 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_2 + 0x58) = 0x3F800000;
        *(f32 *)((u8 *)temp_v0_2 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x5C);
        func_0022C6B0(temp_v0_2);
        func_0022D4B0(temp_v0_2, 1);
    } else {
        func_0022C430(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x20), 0.0f);
    }
    if (*(s32 *)((u8 *)gEssShop + 0x60) == 2) {
        temp_v0_3 = A2d_AllocObj(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x24), 0.0f);
        *(s32 *)((u8 *)temp_v0_3 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_3 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_3 + 0x58) = 0x3F800000;
        *(f32 *)((u8 *)temp_v0_3 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v0_3 + 0x5C);
        func_0022C6B0(temp_v0_3);
        func_0022D4B0(temp_v0_3, 1);
    } else {
        func_0022C430(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x24), 0.0f);
    }
    if (*(s32 *)((u8 *)gEssShop + 0x60) == 3) {
        temp_v0_4 = A2d_AllocObj(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x28), 0.0f);
        *(s32 *)((u8 *)temp_v0_4 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_4 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_4 + 0x58) = 0x3F800000;
        *(f32 *)((u8 *)temp_v0_4 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v0_4 + 0x5C);
        func_0022C6B0(temp_v0_4);
        func_0022D4B0(temp_v0_4, 1);
    } else {
        func_0022C430(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x28), 0.0f);
    }
    if (*(s32 *)((u8 *)gEssShop + 0x60) == 4) {
        temp_v0_5 = A2d_AllocObj(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x2C), 0.0f);
        *(s32 *)((u8 *)temp_v0_5 + 0x50) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_5 + 0x54) = 0x3F800000;
        *(s32 *)((u8 *)temp_v0_5 + 0x58) = 0x3F800000;
        *(f32 *)((u8 *)temp_v0_5 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v0_5 + 0x5C);
        func_0022C6B0(temp_v0_5);
        func_0022D4B0(temp_v0_5, 1);
    } else {
        func_0022C430(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x2C), 0.0f);
    }
    func_0022C430(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x54), (f32) *(s32 *)((u8 *)gEssShop + 0x60));
    *(s128 *)((u8 *)(&spC0) + 0) = (s128) *(s128 *)((u8 *)(&D_00453210) + 0);
    *(f32 *)((u8 *)(&spC0) + 0x10) = (f32) *(f32 *)((u8 *)(&D_00453210) + 0x10);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)((*(s32 *)((u8 *)gEssShop + 0x60) * 4) + sp) + 0xC0) * 4)), 0.0f);
    if (*(s32 *)((u8 *)gEssShop + 0x268) == 0) {
        func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x25C) * 4)), (f32) *(s32 *)((u8 *)(gEssShop + 0x25C) + 8) * gFrameDelta);
    }
    if (*(s32 *)((u8 *)gEssShop + 0x298) == 0) {
        func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gEssShop + 0x28C) * 4)), (f32) *(s32 *)((u8 *)(gEssShop + 0x28C) + 8) * gFrameDelta);
    }
    func_00228430(0);
    temp_v1 = *(u8 **)((u8 *)((*(s32 *)((u8 *)gEssShop + 0x68) * 4) + gEssShop) + 0x1B8);
    var_a0 = 0;
    if (temp_v1 != NULL) {
        if (*(s32 *)((u8 *)temp_v1 + 0x10) & 1) {
            var_a0 = 1;
        }
        if (*(s32 *)((u8 *)temp_v1 + 8) < 0) {
            var_a0 = 1;
        }
    }
    func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x78)) + 0xC), 0, 0, 0, (f32) var_a0);
    func_0022C430(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x74), (f32) *(s32 *)((u8 *)gEssShop + 0x68));
    func_00228410();
    var_s4 = 1;
    var_s3 = 4;
loop_34:
    if (*(s32 *)((u8 *)(gEssShop + var_s3) + 0x1B4) != 0) {
        func_00229840(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x74)) + 0xC), &spA0, 0, 0);
        spA0 = -spA0;
        spA4 = -spA4;
        spA8 = 0;
        func_00228430(0);
        func_00227A30(&spA0);
        func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x74)) + 0xC), 0, 0, 0, (f32) (var_s4 - 1));
        func_00273AF0(*(s32 *)((u8 *)(gEssShop + var_s3) + 0x1B4), (var_s4 - 1) == *(s32 *)((u8 *)gEssShop + 0x68));
        func_00228410();
        var_s4 += 1;
        var_s3 += 4;
        if (var_s4 >= 5) {

        } else {
            goto loop_34;
        }
    }
    func_00228410();
    temp_s3 = (u8 *)(gEssShop + 0x3AC);
    if (*(s32 *)((u8 *)gEssShop + 0x3AC) != 0) {
        var_s1 = 0x40;
        if (*(s32 *)((u8 *)gEssShop + 0x50) == 0) {
            var_s0_2 = 0x44;
            var_s5 = 0x42;
            var_s4_2 = 0x47;
        } else {
            var_s1 = 0x40;
            var_s0_2 = 0x4B;
            var_s5 = 0x49;
            var_s4_2 = 0x4D;
        }
    } else {
        var_s1 = 0x3F;
        if (*(s32 *)((u8 *)gEssShop + 0x50) == 0) {
            var_s0_2 = 0x43;
            var_s5 = 0x41;
            var_s4_2 = 0x45;
        } else {
            var_s1 = 0x3F;
            var_s0_2 = 0x4A;
            var_s5 = 0x48;
            var_s4_2 = 0x4C;
        }
    }
    temp_v0_6 = func_0026D480(*(s32 *)((u8 *)gEssShop + 0x50));
    temp_s6 = temp_v0_6;
    temp_f20 = (f32) temp_v0_6 / 100.0f;
    temp_v0_7 = A2d_AllocObj(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x11C), 0.0f);
    sp90 = -*(f32 *)((u8 *)temp_v0_7 + 0x20);
    sp9C = 0x3F800000;
    sp94 = -*(f32 *)((u8 *)temp_v0_7 + 0x24);
    sp98 = 0;
    func_0022D4B0(temp_v0_7, 1);
    temp_v0_8 = (void *)(A2d_AllocObj(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (var_s4_2 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta));
    func_0022C6B0(temp_v0_8);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (var_s1 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    temp_v0_9 = (void *)(A2d_AllocObj(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (var_s0_2 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta));
    *(f32 *)((u8 *)temp_v0_9 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_9 + 0x38) * temp_f20);
    *(f32 *)((u8 *)temp_v0_9 + 0x48) = (f32) (*(f32 *)((u8 *)temp_v0_9 + 0x48) * temp_f20);
    func_0022C6B0(temp_v0_9);
    func_0022D4B0(temp_v0_9, 1);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (var_s5 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_00228430(0);
    func_00227A30(&sp90);
    func_00227A30((f32 *)(temp_v0_8 + 0x20));
    func_0022D4B0(temp_v0_8, 1);
    func_0022C1D0(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x14)) + 0x24), 1, (f32) temp_s6);
    func_00228410();
    func_00228410();
    func_00133780(0, 0);
}
