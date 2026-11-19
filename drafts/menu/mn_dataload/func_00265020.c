/* Draft (not built): func_00265020 at 0x00265020, size 0x3F8, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 120 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3FC, original 0x3F8
 * Original: asm/nonmatchings/menu/mn_dataload/func_00265020.s */

// src/menu/mn_dataload.c func_00265020 size diff=120/255
extern void func_00229800(void *, void *, s32, f32);
extern f32 gFrameDelta;
s32 func_00227830(s32, s32);
s32 func_00227880(f32 *);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_0022C060(f32 *, s32);
f32 *func_0022D670(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_00265020(u8 *arg0) {
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
    f32 spFC;
    s32 sp110;
    f32 *sp130;
    f32 *sp134;
    f32 *sp138;
    f32 **var_s1;
    f32 **var_v1;
    f32 *temp_v0;
    f32 *temp_v0_2;
    f32 *temp_v0_3;
    f32 *temp_v0_4;
    f32 *var_fp;
    f32 *var_s0;
    f32 *var_s3;
    f32 *var_s5;
    f32 *var_s6;
    f32 *var_s7;
    f32 temp_f2;
    f32 var_f0;
    s32 var_s2;
    s32 var_v0;
    s64 var_v0_2;
    s64 var_v0_3;
    s64 var_v0_4;
    u8 *temp_a0;
    u8 *var_s4;

    var_v0 = 0xC;
    var_v1 = &sp130;
    var_s4 = arg0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp130 = *(f32 **)((u8 *)var_s4 + 0x1C);
    sp134 = *(f32 **)((u8 *)var_s4 + 0x20);
    sp138 = *(f32 **)((u8 *)var_s4 + 0x24);
    temp_a0 = *(u8 **)((u8 *)var_s4 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s2 = 0;
    if ((s32) *(u8 *)((u8 *)var_s4 + 0x31) > 0) {
        var_s1 = &sp130;
        var_s6 = &spA4;
        var_s7 = &spE4;
        var_fp = &spA8;
        var_s0 = &spF0;
        var_s5 = &spFC;
        do {
            var_s3 = *var_s1;
            func_002284D0(&spE0);
            if (var_s3 == NULL) {
                switch (var_s2) {                   /* irregular */
                case 0:
                    var_v0_2 = 0x3F;
                    if (*(u8 *)((u8 *)var_s4 + 0x31) == 2) {
                        var_v0_2 = 0x6E;
                    }
                    temp_v0 = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C) + (((s64) (var_v0_2 << 0x30) >> 0x30) * 4)), 0);
                    *(f32 **)((u8 *)var_s4 + 0x1C) = temp_v0;
                    var_s3 = temp_v0;
                    break;
                case 1:
                    var_v0_3 = 0x40;
                    if (*(u8 *)((u8 *)var_s4 + 0x31) == 2) {
                        var_v0_3 = 0x6F;
                    }
                    temp_v0_2 = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C) + (((s64) (var_v0_3 << 0x30) >> 0x30) * 4)), 0);
                    *(f32 **)((u8 *)var_s4 + 0x20) = temp_v0_2;
                    var_s3 = temp_v0_2;
                    break;
                case 2:
                    temp_v0_3 = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C)) + 0x104), 0);
                    *(f32 **)((u8 *)var_s4 + 0x24) = temp_v0_3;
                    var_s3 = temp_v0_3;
                    break;
                }
            }
            if (!(*(u16 *)((u8 *)var_s4 + 0x32) & 8)) {
                func_00229800((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C)) + 0xF4)), (void *)(&spA0), -1, *(f32 *)((u8 *)var_s4 + 0x3C));
                spE0 = spA0;
                *var_s7 = *var_s6;
                spE8 = *var_fp;
                spEC = spAC;
                func_00228AC0(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C)) + 0xF4), var_s0, -1, *(f32 *)((u8 *)var_s4 + 0x3C));
                func_002285A0(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C)) + 0xF4), &sp110, -1, *(f32 *)((u8 *)var_s4 + 0x3C));
            }
            if (*(u8 *)((u8 *)var_s4 + 0x30) == var_s2) {
                var_f0 = 1.0f;
            } else {
                var_f0 = 0.5f;
            }
            spF8 = var_f0;
            spF4 = var_f0;
            *var_s0 = var_f0;
            temp_f2 = *var_s5;
            if ((temp_f2 < 0.0f) && !(temp_f2 <= 1.0f)) {
                *var_s5 = 0.0f;
            }
            func_00228430(0);
            func_00227830(0, -1);
            func_00227880(var_s0);
            func_0022C060(var_s3, 0x3F800000);
            *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x30)) + 8) = 1;
            func_0022CD00(var_s3);
            func_00228410();
            Title_StepCounters();
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < (s32) *(u8 *)((u8 *)var_s4 + 0x31));
    }
    *(f32 *)((u8 *)var_s4 + 0x3C) = (f32) (*(f32 *)((u8 *)var_s4 + 0x3C) + gFrameDelta);
    var_s0 = *(f32 **)((u8 *)var_s4 + 0x18);
    if (var_s0 == NULL) {
        temp_v0_4 = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C)) + 0x110), 0);
        *(f32 **)((u8 *)var_s4 + 0x18) = temp_v0_4;
        var_s0 = temp_v0_4;
    }
    func_002284D0(&spE0);
    func_00228430(0);
    var_v0_4 = 0x3F;
    if (*(u8 *)((u8 *)var_s4 + 0x31) == 2) {
        var_v0_4 = 0x6E;
    }
    func_00229800((void *)(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s4 + 0)) + 0x1C) + ((((s64) (var_v0_4 << 0x30) >> 0x30) + *(u8 *)((u8 *)var_s4 + 0x30)) * 4))), (void *)(&spC0), -1, 0.0f);
    spE0 = spC0;
    spE4 = spC4;
    spE8 = spC8;
    spEC = spCC;
    func_00228240(&spE0);
    func_0022C060(var_s0, 0x3F800000);
    func_0022CD00(var_s0);
    func_00228410();
}
