/* Draft (not built): func_00267E00 at 0x00267E00, size 0x370, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 111 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x318, original 0x370
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00267E00.s */

// src/menu/mn_vsmode.c func_00267E00 size diff=111/198
extern void *D_004707DC;
s32 func_00227830(s32, s32);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern f32 gFrameDelta;
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_00267E00(u8 *arg0) {
    s32 spCC;
    s32 spC8;
    s32 spC4;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spC0;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spEC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    s32 sp110;
    f32 *var_fp;
    f32 *var_s6;
    f32 *var_s7;
    f32 var_f0;
    s32 var_a1;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    u8 temp_a0;
    u8 temp_v1_2;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s4;

    var_s3 = 0;
    var_s1 = arg0;
    var_s0 = D_004707DC;
    var_s2 = var_s1;
    do {
        var_s4 = *(u8 **)((u8 *)var_s2 + 0x34);
        if (var_s4 != NULL) {
            func_0022C060(var_s4, 0x3F800000);
            func_0022CD00(var_s4);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 2);
    var_s2 = *(u8 **)((u8 *)var_s1 + 0x3C);
    if (var_s2 != NULL) {
        func_002284D0(&spE0);
        func_00228430(0);
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C) + ((*(u8 *)((u8 *)var_s1 + 0x53) + 0x18) * 4)), &spC0, -1, 0.0f);
        spE0 = spC0;
        spE4 = spC4;
        spE8 = spC8;
        spEC = spCC;
        func_00228240(&spE0);
        func_0022C060(var_s2, 0x3F800000);
        func_0022CD00(var_s2);
        func_00228410();
    }
    var_s2 = *(u8 **)((u8 *)var_s1 + 0x40);
    if (var_s2 != NULL) {
        func_0022C060(var_s2, 0x3F800000);
        func_0022CD00(var_s2);
    }
    temp_a0 = *(u8 *)((u8 *)var_s1 + 0x51);
    if (temp_a0 != *(u8 *)((u8 *)var_s1 + 0x52)) {
        *(u8 *)((u8 *)var_s1 + 0x52) = temp_a0;
        var_a1 = 0;
        var_a0 = var_s1;
        do {
            temp_v1 = *(u8 **)((u8 *)var_a0 + 0x1C);
            if (temp_v1 != NULL) {
                *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) gFrameDelta;
            }
            var_a1 += 1;
            var_a0 += 4;
        } while (var_a1 < 4);
    }
    var_s5 = 0;
    var_s4 = var_s1;
    var_s7 = &spA4;
    var_fp = &spE4;
    var_s6 = &spF0;
    do {
        var_s2 = *(u8 **)((u8 *)var_s4 + 0x1C);
        if (var_s2 != NULL) {
            func_002284D0(&spE0);
            func_00228430(0);
            temp_v1_2 = *(u8 *)((u8 *)var_s1 + 0x51);
            switch (temp_v1_2) {                    /* irregular */
            case 2:
            case 1:
                var_v0 = 0x15;
                break;
            case 4:
                var_v0 = 0x16;
                break;
            case 3:
                var_v0 = 0x17;
                if (*(u8 *)((u8 *)var_s1 + 0x53) == var_s5) {

                } else {
                    var_v0 = 0x16;
                }
                break;
            default:
                var_v0 = -1;
                break;
            }
            var_s3 = var_v0 * 4;
            if (var_v0 != -1) {
                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C) + var_s3), &spA0, -1, *(f32 *)((u8 *)var_s2 + 0x10));
                spE0 = spA0;
                *var_fp = *var_s7;
                spE8 = spA8;
                spEC = spAC;
                func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C) + var_s3), var_s6, -1, *(f32 *)((u8 *)var_s2 + 0x10));
                func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C) + var_s3), &sp110, -1, *(f32 *)((u8 *)var_s2 + 0x10));
            }
            if (*(u8 *)((u8 *)var_s1 + 0x53) == var_s5) {
                var_f0 = 1.0f;
            } else {
                var_f0 = 0.5f;
            }
            spF8 = var_f0;
            spF4 = var_f0;
            *var_s6 = var_f0;
            func_00228240(&spE0);
            func_00227830(0, -1);
            func_0022C060(var_s2, 0x3F800000);
            *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x30)) + 8) = 1;
            func_0022CD00(var_s2);
            func_00228410();
            Title_StepCounters();
        }
        var_s5 += 1;
        var_s4 += 4;
    } while (var_s5 < 4);
}
