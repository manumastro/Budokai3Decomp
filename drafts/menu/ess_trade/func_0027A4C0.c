/* Draft (not built): func_0027A4C0 at 0x0027A4C0, size 0x614, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 221 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x590, original 0x614
 * Original: asm/nonmatchings/menu/ess_trade/func_0027A4C0.s */

// src/menu/ess_trade.c func_0027A4C0 size diff=221/356
s32 func_00227830(s32, s32);
s32 func_00228240(f32 *);
s32 func_00228430(f32 *);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
s32 func_002F9500(s32, f32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
extern void *D_00470810;
void func_0027A4C0(u8 *arg0) {
    u8 *spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    s32 spF0;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    f32 sp11C;
    s32 var_f20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 var_f1;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 temp_s4;
    u8 **var_s2;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s5;
    u8 *temp_t0;
    u8 *temp_v0;

    var_v0 = 0x10;
    var_v1 = &spB0;
    temp_s4 = *(u8 *)((u8 *)arg0 + 7);
    temp_s0 = D_00470810;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    spB0 = *(u8 **)((u8 *)arg0 + 0x38);
    spB4 = *(s32 *)((u8 *)arg0 + 0x3C);
    spB8 = *(s32 *)((u8 *)arg0 + 0x40);
    spBC = *(s32 *)((u8 *)arg0 + 0x48);
    if (*(s8 *)((u8 *)arg0 + 0) != 5) {
        var_f20 = 0x3F800000;
    } else {
        var_f20 = 0;
    }
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x3000);
    D_00470238 = 0;
    temp_f3 = *(f32 *)((u8 *)arg0 + 0x64);
    if (temp_f3 != 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x5C) = (f32) (*(f32 *)((u8 *)arg0 + 0x5C) + (temp_f3 * gFrameDelta));
        if (!(*(f32 *)((u8 *)arg0 + 0x64) <= 0.0f)) {
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x60);
            if (!(*(f32 *)((u8 *)arg0 + 0x5C) <= temp_f1)) {
                *(f32 *)((u8 *)arg0 + 0x5C) = temp_f1;
                *(f32 *)((u8 *)arg0 + 0x64) = 0.0f;
            }
        } else {
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x60);
            if (*(f32 *)((u8 *)arg0 + 0x5C) < temp_f1_2) {
                *(f32 *)((u8 *)arg0 + 0x5C) = temp_f1_2;
                *(f32 *)((u8 *)arg0 + 0x64) = 0.0f;
            }
        }
    }
    func_002284D0(&spC0);
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x5C);
    spD8 = temp_f0;
    spD4 = temp_f0;
    spD0 = temp_f0;
    func_00228430(&spC0);
    var_s3 = 0;
    var_s2 = &spB0;
    do {
        temp_s5 = *var_s2;
        if (temp_s5 != NULL) {
            func_0022C060(temp_s5, var_f20);
            func_0022CD00(temp_s5);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 4);
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x38);
    func_00229800(*(s32 *)((u8 *)temp_v0 + 0), &sp110, -1, *(f32 *)((u8 *)temp_v0 + 0x10));
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_2 != 0) {
        func_002F9500(temp_a0_2, sp110, 0);
    }
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x44);
    if (temp_s2 != NULL) {
        func_002284D0(&spC0);
        func_00228430(NULL);
        var_v1_2 = (temp_s4 != 0) ? 0x18 : 0xC;
        if (*(s8 *)((u8 *)arg0 + 0) >= 6) {
            var_v1_2 += 2;
        }
        temp_s3 = var_v1_2 * 4;
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &sp110, -1, *(f32 *)((u8 *)temp_s2 + 0x10));
        spC0 = sp110;
        spC4 = sp114;
        spC8 = sp118;
        spCC = sp11C;
        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &spD0, -1, *(f32 *)((u8 *)temp_s2 + 0x10));
        func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &spF0, -1, *(f32 *)((u8 *)temp_s2 + 0x10));
        func_00228240(&spC0);
        func_0022C060(temp_s2, var_f20);
        func_0022CD00(temp_s2);
        func_00228410();
    }
    temp_s2_2 = *(u8 **)((u8 *)arg0 + 0x50);
    if (temp_s2_2 != NULL) {
        func_0022C060(temp_s2_2, 0x3F800000);
        func_0022CD00(temp_s2_2);
    }
    func_00228410();
    temp_s2_3 = *(u8 **)((u8 *)arg0 + 0x4C);
    if (temp_s2_3 != NULL) {
        func_002284D0(&spC0);
        temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x5C);
        spD8 = temp_f0_2;
        spD4 = temp_f0_2;
        spD0 = temp_f0_2;
        func_00228430(&spC0);
        func_002284D0(&spC0);
        func_00228430(NULL);
        temp_s3_2 = ((temp_s4 != 0) ? 0x68 : 0x67) * 4;
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3_2), &sp110, -1, *(f32 *)((u8 *)temp_s2_3 + 0x10));
        spC0 = sp110;
        spC4 = sp114;
        spC8 = sp118;
        spCC = sp11C;
        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3_2), &spD0, -1, *(f32 *)((u8 *)temp_s2_3 + 0x10));
        func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3_2), &spF0, -1, *(f32 *)((u8 *)temp_s2_3 + 0x10));
        if (temp_s4 == 0) {
            var_f1 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x30);
        } else {
            var_f1 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x38);
        }
        spC0 -= var_f1;
        func_00228240(&spC0);
        if (*(s8 *)((u8 *)arg0 + 0) < 6) {
            var_v1_3 = 0x64;
        } else {
            var_v1_3 = (temp_s4 != 0) ? 0x66 : 0x65;
        }
        temp_s1 = var_v1_3 * 4;
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s1), &sp110, -1, *(f32 *)((u8 *)temp_s2_3 + 0x10));
        spC0 = sp110;
        spC4 = sp114;
        spC8 = sp118;
        spCC = sp11C;
        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s1), &spD0, -1, *(f32 *)((u8 *)temp_s2_3 + 0x10));
        func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s1), &spF0, -1, *(f32 *)((u8 *)temp_s2_3 + 0x10));
        func_00228240(&spC0);
        func_00227830(0, -1);
        func_0022C060(temp_s2_3, 0x3F800000);
        temp_a3 = *(u8 **)((u8 *)temp_s2_3 + 0x30);
        temp_t0 = *(u8 **)((u8 *)temp_a3 + 0x10);
        temp_a2 = temp_t0 + *(*(s32 *)((u8 *)temp_t0 + 0x14) + temp_t0 + ((*(s16 *)((u8 *)temp_a3 + 0x18) - *(s32 *)((u8 *)temp_t0 + 0x18)) * 4));
        *(f32 *)((u8 *)temp_a3 + 0x30) = (f32) (-(f32) *(s16 *)((u8 *)temp_a2 + 0x10) / 2.0f);
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x38) = (f32) ((f32) *(s16 *)((u8 *)temp_a2 + 0x10) / 2.0f);
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x34) = (f32) (-(f32) *(s16 *)((u8 *)temp_a2 + 0x12) / 2.0f);
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x3C) = (f32) ((f32) *(s16 *)((u8 *)temp_a2 + 0x12) / 2.0f);
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x40) = 0;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x44) = 0;
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x48) = (f32) *(s16 *)((u8 *)temp_a2 + 0x10);
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 0x4C) = (f32) *(s16 *)((u8 *)temp_a2 + 0x12);
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_3 + 0x30)) + 8) = 1;
        func_0022CD00(temp_s2_3);
        Title_StepCounters();
        func_00228410();
        func_00228410();
    }
}
