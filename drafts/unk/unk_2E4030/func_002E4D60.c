/* Draft (not built): func_002E4D60 at 0x002E4D60, size 0x2DC, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ')' expected mwccps2.exe Compiler: 175: s32 var_v1; @ 174: void func_002E4D60(Sub57 *arg0) {
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E4D60.s */

// src/unk/unk_2E4030.c func_002E4D60 cerr diff=-1/0
s32 func_00133B50(s32, s32);
s32 func_00227830(s32, s32);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, s32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_002E4D60(Sub57 *arg0) {
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v0;
    s32 var_s1;
    s32 var_s0_2;
    s32 var_s0;
    s32 temp_s3;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    f32 sp50;
    u8 *sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    s32 sp90;
    s32 spB0;
    s32 temp_s1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s64 var_s0_2;
    u8 temp_a0_3;
    u8 temp_v0;
    u8 **var_s0;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s3;

    var_v0 = 0x10;
    var_v1 = &sp70;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp70 = *(u8 **)((u8 *)arg0 + 0x14);
    sp74 = *(s32 *)((u8 *)arg0 + 0x18);
    sp78 = *(s32 *)((u8 *)arg0 + 0x1C);
    sp7C = *(s32 *)((u8 *)arg0 + 0x24);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x7000);
    D_00470238 = 0;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x10);
    if (temp_s0 != NULL) {
        func_0022C060(temp_s0, 0x3F800000);
        func_0022CD00(temp_s0);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = (int)(temp_a0_2);
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x7000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp70;
    do {
        temp_s3 = *var_s0;
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
    temp_a0_3 = *(u8 *)((u8 *)arg0 + 0xF4);
    temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x20);
    if (temp_a0_3 != *(u8 *)((u8 *)arg0 + 0xF5)) {
        *(u8 *)((u8 *)arg0 + 0xF5) = temp_a0_3;
        if (temp_s0_2 != NULL) {
            *(f32 *)((u8 *)temp_s0_2 + 0x10) = (f32) gFrameDelta;
        }
    }
    if (temp_s0_2 != NULL) {
        func_002284D0(&sp80);
        func_00228430(0);
        temp_v0 = *(u8 *)((u8 *)arg0 + 0xF4);
        switch (temp_v0) {
        case 1:
            var_v0_2 = 0x17;
            break;
        case 2:
        case 3:
        case 4:
            var_v0_2 = 0x18;
            break;
        case 5:
            var_v0_2 = 0x19;
            break;
        case 6:
            var_v0_2 = 0x1A;
            break;
        default:
            var_v0_2 = -1;
            break;
        }
        temp_s1 = var_v0_2 * 4;
        if (var_v0_2 != -1) {
            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &sp50, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            sp80 = sp50;
            sp84 = sp54;
            sp88 = sp58;
            sp8C = sp5C;
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &sp90, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &spB0, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
        }
        func_00228240(&sp80);
        func_00227830(0, -1);
        func_0022C060(temp_s0_2, 0x3F800000);
        func_0022CD00(temp_s0_2);
        func_00228410();
        Title_StepCounters();
    }
    if ((s32) *(u8 *)((u8 *)arg0 + 0xF4) < 5) {
        amModel_SetCurrent((s32)(*(u8 **)((u8 *)arg0 + 4)), 0x7000);
        var_s0_2 = 0;
        if ((s32) *(u8 *)((u8 *)arg0 + 0xF3) > 0) {
            do {
                func_002E4BF0(arg0, (s64) (var_s0_2 << 0x30) >> 0x30);
                var_s0_2 += 1;
            } while (var_s0_2 < (s32) *(u8 *)((u8 *)arg0 + 0xF3));
        }
        func_002E44A0(arg0);
    }
}
