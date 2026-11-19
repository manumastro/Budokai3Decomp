/* Draft (not built): func_002861B0 at 0x002861B0, size 0x494, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ')' expected mwccps2.exe Compiler: 23: s32 var_v1; @ 22: func_002861B0(temp_s0 arg0) {
 * Original: asm/nonmatchings/menu/mn_StageSel/func_002861B0.s */

// src/menu/mn_StageSel.c func_002861B0 cerr diff=-1/0
extern f32 gFrameDelta;
s32 func_00227A30(s32 *);
s32 func_00228240(s32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, s32 *, s32, f32);
s32 func_00229800(s32, s32 *, s32, f32);
s32 func_0022C060(void *, s32);
s32 func_00285330(void *);
s32 func_00285AA0(void *, s64);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
 func_002861B0(temp_s0 arg0) {
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
    u8 *sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp80;
    s32 sp90;
    s32 spB0;
    s32 spD0;
    s32 spD4;
    u8 *spF8;
    u8 *spFC;
    f32 temp_f1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s64 var_s0_2;
    u8 temp_a0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 **var_s0;
    u8 **var_v1;
    u8 **var_v1_2;
    u8 **var_v1_3;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s3;
    u8 *temp_v0;

    var_v0 = 0x24;
    var_v1 = &sp50;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp50 = *(u8 **)((u8 *)arg0 + 0x14);
    sp54 = *(s32 *)((u8 *)arg0 + 0x1C);
    sp58 = *(s32 *)((u8 *)arg0 + 0x20);
    sp5C = *(s32 *)((u8 *)arg0 + 0x24);
    sp60 = *(s32 *)((u8 *)arg0 + 0x2C);
    sp64 = *(s32 *)((u8 *)arg0 + 0x30);
    sp68 = *(s32 *)((u8 *)arg0 + 0x34);
    sp6C = *(s32 *)((u8 *)arg0 + 0x38);
    sp70 = *(s32 *)((u8 *)arg0 + 0x3C);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x7000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp50;
    do {
        temp_s3 = *var_s0;
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 9);
    var_v1_2 = &spF8;
    if (*(u8 *)((u8 *)arg0 + 0x264) != *(u8 *)((u8 *)arg0 + 0x265)) {
        var_v0_2 = 8;
        if (var_v1_2 != NULL) {
            do {
                *var_v1_2 = 0;
                var_v0_2 -= 1;
                var_v1_2 += 1;
            } while (var_v0_2 != 0);
        }
        var_a0 = 0;
        var_v1_3 = &spF8;
        spF8 = *(u8 **)((u8 *)arg0 + 0x18);
        spFC = *(u8 **)((u8 *)arg0 + 0x28);
        *(u8 *)((u8 *)arg0 + 0x265) = (u8) *(u8 *)((u8 *)arg0 + 0x264);
        do {
            temp_v0 = *var_v1_3;
            if (temp_v0 != NULL) {
                *(f32 *)((u8 *)temp_v0 + 0x10) = (f32) gFrameDelta;
            }
            var_a0 += 1;
            var_v1_3 += 4;
        } while (var_a0 < 2);
    }
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x18);
    if (temp_s0 != NULL) {
        func_002284D0(&sp80);
        func_00228430(0);
        temp_v1 = *(u8 *)((u8 *)arg0 + 0x264);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            var_v0_3 = 0x5D;
            break;
        case 3:                                     /* switch 1 */
            var_v0_3 = 0x5F;
            break;
        case 5:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
            var_v0_3 = 0x60;
            break;
        default:                                    /* switch 1 */
            var_v0_3 = 0x5E;
            break;
        }
        temp_s1 = var_v0_3 * 4;
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &spD0, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
        spD0 = 0;
        spD4 = 0;
        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &sp90, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
        func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1), &spB0, -1, *(f32 *)((u8 *)temp_s0 + 0x10));
        func_00228240(&sp80);
        func_00227A30(&spD0);
        func_0022C060(temp_s0, 0x3F800000);
        func_0022CD00(temp_s0);
        func_00228410();
    }
    temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x28);
    if (temp_s0_2 != NULL) {
        func_002284D0(&sp80);
        func_00228430(0);
        temp_v1_2 = *(u8 *)((u8 *)arg0 + 0x264);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v0_4 = 0x1D;
            break;
        case 4:                                     /* switch 2 */
            var_v0_4 = 0x20;
            break;
        case 5:                                     /* switch 2 */
            var_v0_4 = 0x1F;
            break;
        default:                                    /* switch 2 */
            var_v0_4 = -1;
            break;
        }
        temp_s1_2 = var_v0_4 * 4;
        if (var_v0_4 != -1) {
            func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1_2), &spD0, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            spD0 = 0;
            spD4 = 0;
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1_2), &sp90, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s1_2), &spB0, -1, *(f32 *)((u8 *)temp_s0_2 + 0x10));
            func_00228240(&sp80);
            func_00227A30(&spD0);
        }
        func_0022C060(temp_s0_2, 0x3F800000);
        func_0022CD00(temp_s0_2);
        func_00228410();
    }
    func_00285330(arg0);
    amModel_SetCurrent(*(u8 **)((u8 *)arg0 + 4), 0x7000);
    temp_a0_2 = *(u8 *)((u8 *)arg0 + 0x264);
    switch (temp_a0_2) {                            /* switch 3; irregular */
    case 1:                                         /* switch 3 */
        *(f32 *)((u8 *)arg0 + 0x284) = (f32) (*(f32 *)((u8 *)arg0 + 0x284) + 0.02f);
        break;
    case 5:                                         /* switch 3 */
    case 4:                                         /* switch 3 */
        *(f32 *)((u8 *)arg0 + 0x284) = (f32) (*(f32 *)((u8 *)arg0 + 0x284) - 0.05f);
        break;
    default:                                        /* switch 3 */
        *(f32 *)((u8 *)arg0 + 0x284) = 1.0f;
        break;
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x284);
    if (temp_f1 < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x284) = 0.0f;
    } else if (!(temp_f1 <= 1.0f)) {
        *(f32 *)((u8 *)arg0 + 0x284) = 1.0f;
    }
    var_s0_2 = 0;
    if ((s32) *(u8 *)((u8 *)arg0 + 0x261) > 0) {
        do {
            func_00285AA0(arg0, (s64) (var_s0_2 << 0x30) >> 0x30);
            var_s0_2 += 1;
        } while (var_s0_2 < (s32) *(u8 *)((u8 *)arg0 + 0x261));
    }
}
