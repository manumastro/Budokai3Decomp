/* Draft (not built): func_00269CC0 at 0x00269CC0, size 0x824, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'void *' mwccps2.exe Compiler: @ 225: )gEssMain + 0x90) * 4)), 1, (f32) *(s32 *)((u8 *)gEssMain + 0x98) * gFrameDelta);
 * Original: asm/nonmatchings/menu/ess_main/func_00269CC0.s */

// src/menu/ess_main.c func_00269CC0 cerr diff=-1/0
extern u8 D_0058F680[];
extern u8 D_004E0660[];
void *A2d_AllocObj(s32, s32, s32, s32 *, s32);
s32 func_00139620(s32, void *, s32, s32, s32);
s32 func_001A5490(s32, s32, f32);
s32 func_00227A30(f32 *);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00229800(s32, s32 *, s32, s32);
s32 func_0022C430(s32, f32);
s32 func_0022D0E0(void *, s32);
s32 func_0022D4B0(void *, s32);
void *func_0022D860(s32, f32);
extern void func_0022CD00(void *);
extern void Obj_CopyVec4F50(void *, void *);
extern void func_0022CF70();
extern void Obj_SetF3C();
extern void func_0022C6B0(void *);
void func_00269CC0(void) {
    f32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    u8 *spD0;
    u8 *spE0;
    s32 *var_a3;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s5_3;
    u8 *var_v1;
    u8 **var_s1;
    u8 **var_s1_2;
    u8 **var_s5_2;
    u8 **var_s7;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v0_7;
    u8 *temp_v0_8;
    u8 *temp_v0_9;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_s5;
    u8 *var_s6;
    u8 *var_s6_2;

    temp_a0 = *(u8 **)((u8 *)gEssMain + 0x28);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x11401000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x11401000);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s4 = *(u8 **)((u8 *)gEssMain + 0x24);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0(*(*(u8 **)((u8 *)temp_s4 + 0x14) + (*(s32 *)((u8 *)gEssMain + 0x90) * 4)), 1, (f32) *(s32 *)((u8 *)gEssMain + 0x98) * gFrameDelta);
    func_00228430(0);
    temp_v0 = func_0022D860(*(*(u8 **)((u8 *)temp_s4 + 0x14) + (*(s32 *)((u8 *)gEssMain + 0x1E0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0x1E8) * gFrameDelta);
    func_0022CD00(temp_v0);
    var_s7 = &spE0;
    var_s2 = 0;
    var_s1 = var_s7;
    var_s6 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x14)) + 0x40);
    temp_s0 = gEssMain + 0x210;
    var_s5 = temp_s0;
    do {
        func_00228430(0);
        temp_v0_2 = *(s32 *)((u8 *)var_s5 + 0x10);
        if (temp_v0_2 != 0) {
            func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (temp_v0_2 * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)var_s5 + 0x1C) * gFrameDelta);
        }
        if ((var_s2 == *(s32 *)((u8 *)gEssMain + 0x54)) && (temp_v0_3 = *(s32 *)((u8 *)temp_s0 + 0x28), (temp_v0_3 != 0))) {
            func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (temp_v0_3 * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        } else {
            func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0x210) * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        }
        *var_s1 = A2d_AllocObj(*(s32 *)((u8 *)var_s6 + 0x10), 0, 0, 0, 0);
        func_0022CF70(*var_s1);
        if (var_s2 == *(s32 *)((u8 *)gEssMain + 0x54)) {
            temp_v1 = *var_s1;
            *(s32 *)((u8 *)temp_v1 + 0x50) = 0x3F800000;
            *(s32 *)((u8 *)temp_v1 + 0x54) = 0x3F800000;
            *(s32 *)((u8 *)temp_v1 + 0x58) = 0x3F800000;
            *(f32 *)((u8 *)temp_v1 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v1 + 0x5C);
        }
        func_00228410();
        var_s6 = *(u8 **)((u8 *)var_s6 + 4);
        var_s2 += 1;
        var_s5 += 4;
        var_s1 += 4;
    } while (var_s2 < 3);
    var_s5_2 = &spD0;
    var_s2_2 = 0;
    var_s1_2 = var_s5_2;
    var_s6_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x14)) + 0x44);
    temp_s0_2 = gEssMain + 0xF0;
    do {
        func_00228430(0);
        if ((var_s2_2 == *(s32 *)((u8 *)gEssMain + 0x54)) && (temp_v0_4 = *(s32 *)((u8 *)temp_s0_2 + 0x10), (temp_v0_4 != 0))) {
            func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (temp_v0_4 * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0_2 + 8) * gFrameDelta);
        } else {
            func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)temp_s0_2 + 0) * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0_2 + 8) * gFrameDelta);
        }
        *var_s1_2 = A2d_AllocObj(*(s32 *)((u8 *)var_s6_2 + 0x10), 0, 0, 0, 0);
        func_0022CF70(*var_s1_2);
        if (var_s2_2 == *(s32 *)((u8 *)gEssMain + 0x54)) {
            temp_v1_2 = *var_s1_2;
            *(s32 *)((u8 *)temp_v1_2 + 0x50) = 0x3F800000;
            *(s32 *)((u8 *)temp_v1_2 + 0x54) = 0x3F800000;
            *(s32 *)((u8 *)temp_v1_2 + 0x58) = 0x3F800000;
            *(f32 *)((u8 *)temp_v1_2 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x5C);
            *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x30)) + 0x24) = (f32) *(f32 *)((u8 *)(*var_s1_2) + 0x24);
            temp_v0_5 = *(u8 **)((u8 *)temp_v0 + 0x30);
            *(f32 *)((u8 *)temp_v0_5 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v0_5 + 0x5C) * *(f32 *)((u8 *)(*var_s1_2) + 0x5C));
            *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x2C)) + 0x30)) + 0x24) = (f32) *(f32 *)((u8 *)(*var_s1_2) + 0x24);
            temp_v0_6 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x2C)) + 0x30);
            *(f32 *)((u8 *)temp_v0_6 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v0_6 + 0x5C) * *(f32 *)((u8 *)(*var_s1_2) + 0x5C));
        }
        func_00228410();
        var_s6_2 = *(u8 **)((u8 *)var_s6_2 + 4);
        var_s2_2 += 1;
        var_s1_2 += 4;
    } while (var_s2_2 < 3);
    func_00228410();
    func_0022C1D0(*(*(u8 **)((u8 *)temp_s4 + 0x14) + (*(s32 *)((u8 *)gEssMain + 0xC0) * 4)), 1, (f32) *(s32 *)((u8 *)gEssMain + 0xC8) * gFrameDelta);
    func_0022D0E0(temp_v0, 1);
    var_s0 = 0;
    do {
        func_0022D4B0(*var_s7, 1);
        func_0022D4B0(*var_s5_2, 1);
        var_s0 += 1;
        var_s7 += 4;
        var_s5_2 += 4;
    } while (var_s0 < 3);
    func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0x120) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0x128) * gFrameDelta);
    temp_a1 = *(s32 *)((u8 *)gEssMain + 0x190);
    if (temp_a1 >= 0) {
        func_001A5490(*(s32 *)((u8 *)gEssMain + 0x2C), temp_a1, (f32) *(s32 *)((u8 *)(gEssMain + 0x180) + 8) * gFrameDelta);
    }
    temp_s0_3 = gEssMain + 0x1B0;
    func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0x1B0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0x1B8) * gFrameDelta);
    if (func_0022BC30(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)temp_s0_3 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s0_3 + 8) * gFrameDelta) == 0xFF) {
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x180), &spB0, 0, 0);
        Obj_CopyVec4F50(*(u8 **)((u8 *)gEssMain + 0x20), &spB0);
        Obj_SetF3C(*(u8 **)((u8 *)gEssMain + 0x20), *(s16 *)((u8 *)temp_s0_3 + 0x10));
    } else {
        Obj_SetF3C(*(u8 **)((u8 *)gEssMain + 0x20), -1);
    }
    temp_s2 = gEssMain + 0x240;
    if (*(s32 *)((u8 *)gEssMain + 0x240) != 0) {
        var_s1_3 = 0x4D;
        if (*(s32 *)((u8 *)gEssMain + 0x50) == 0) {
            var_s0_2 = 0x51;
            var_s5_3 = 0x4F;
            var_s3 = 0x54;
        } else {
            var_s1_3 = 0x4D;
            var_s0_2 = 0x58;
            var_s5_3 = 0x56;
            var_s3 = 0x5B;
        }
    } else {
        var_s1_3 = 0x4C;
        if (*(s32 *)((u8 *)gEssMain + 0x50) == 0) {
            var_s0_2 = 0x50;
            var_s5_3 = 0x4E;
            var_s3 = 0x52;
        } else {
            var_s1_3 = 0x4C;
            var_s0_2 = 0x57;
            var_s5_3 = 0x55;
            var_s3 = 0x59;
        }
    }
    var_a3 = (s32 *)(&D_004E0660);
    var_a2 = 0;
    var_a1 = 0;
    var_a0 = 0;
    var_v1 = &D_0058F680 + (*(s32 *)((u8 *)gEssMain + 0x50) * 0xD680) + 0xD41D;
    do {
        if ((s32) *(u8 *)((u8 *)var_a3 + 0xD) > 0) {
            var_a1 += 1;
            if (*var_v1 != 0) {
                var_a2 += 1;
            }
        }
        var_a0 += 1;
        var_a3 += 0x28;
        var_v1 += 1;
    } while (var_a0 < 0x253);
    temp_lo = (s32) (var_a2 * 0x64) / var_a1;
    temp_f20 = (f32) temp_lo / 100.0f;
    temp_v0_7 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x150), var_a1, var_a2, var_a3, 0);
    spA0 = -*(f32 *)((u8 *)temp_v0_7 + 0x20);
    spAC = 0x3F800000;
    spA4 = -*(f32 *)((u8 *)temp_v0_7 + 0x24);
    spA8 = 0;
    func_0022D4B0(temp_v0_7, 1);
    temp_v0_8 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (var_s3 * 4)), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta)), 0, 0, 0);
    func_0022C6B0(temp_v0_8);
    func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (var_s1_3 * 4)), (f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta);
    temp_v0_9 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (var_s0_2 * 4)), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta)), 0, 0, 0);
    *(f32 *)((u8 *)temp_v0_9 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_9 + 0x38) * temp_f20);
    *(f32 *)((u8 *)temp_v0_9 + 0x48) = (f32) (*(f32 *)((u8 *)temp_v0_9 + 0x48) * temp_f20);
    func_0022C6B0(temp_v0_9);
    func_0022D4B0(temp_v0_9, 1);
    func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (var_s5_3 * 4)), (f32) *(s32 *)((u8 *)temp_s2 + 8) * gFrameDelta);
    func_00228430(0);
    func_00227A30(&spA0);
    func_00227A30((f32 *)(temp_v0_8 + 0x20));
    func_0022D4B0(temp_v0_8, 1);
    func_0022C1D0(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x14)) + 0x38), 1, (f32) temp_lo);
    func_00228410();
    func_00228410();
    if (*(f32 *)((u8 *)gEssMain + 0x4C) != 0.0f) {
        func_00139620(0x902, gEssMain + 0x40, -1, 0x44, 0);
    }
    func_00133780(0, 0);
}
