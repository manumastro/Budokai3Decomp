/* Draft (not built): func_00266390 at 0x00266390, size 0x440, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 154 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3A0, original 0x440
 * Original: asm/nonmatchings/menu/mn_dataload/func_00266390.s */

// src/menu/mn_dataload.c func_00266390 size diff=154/232
s32 func_00227830(s32, s32);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_00266390(u8 *arg0) {
    u8 *spA0;
    u8 *spB0;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spEC;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    f32 sp10C;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    s32 sp130;
    f32 var_f0;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    u16 temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s6;
    u8 *var_s5;

    var_s2 = -1;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x54);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x58);
    temp_s6 = *(u8 **)((u8 *)arg0 + 0x78);
    spB0 = *(u8 **)((u8 *)arg0 + 0x7C);
    spA0 = *(u8 **)((u8 *)arg0 + 0x88);
    if (temp_s1 != NULL) {
        func_0022C060(temp_s1, 0x3F800000);
        func_0022CD00(temp_s1);
    }
    if (temp_s0 != NULL) {
        func_0022C060(temp_s0, 0x3F800000);
        func_0022CD00(temp_s0);
    }
    temp_a0 = *(u16 *)((u8 *)arg0 + 0x94);
    switch (temp_a0) {                              /* irregular */
    case 3:
    case 2:
        var_s2 = 0x2F;
        break;
    case 4:
        var_s2 = 0x30;
        break;
    case 5:
        var_s2 = 0x31;
        break;
    }
    var_s1 = 0;
    if ((s32) *(u8 *)((u8 *)arg0 + 0x97) > 0) {
        var_s5 = arg0;
        do {
            temp_s0_2 = *(u8 **)((u8 *)var_s5 + 0x5C);
            if (temp_s0_2 != NULL) {
                if (*(u16 *)((u8 *)arg0 + 0x94) == 5) {
                    var_s4 = 0x31;
                    if (var_s1 == *(u8 *)((u8 *)arg0 + 0x96)) {

                    } else {
                        var_s4 = 0x30;
                    }
                } else {
                    var_s4 = var_s2;
                }
                func_002284D0(&sp100);
                func_00228430(0);
                if (var_s2 != -1) {
                    temp_s4 = var_s4 * 4;
                    func_00229800((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s4)), (void *)(&spE0), -1, *(f32 *)((u8 *)arg0 + 0x9C));
                    sp100 = spE0;
                    sp104 = spE4;
                    sp108 = spE8;
                    sp10C = spEC;
                    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s4), &sp110, -1, *(f32 *)((u8 *)arg0 + 0x9C));
                    func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s4), &sp130, -1, *(f32 *)((u8 *)arg0 + 0x9C));
                }
                if (*(u8 *)((u8 *)arg0 + 0x96) == var_s1) {
                    var_f0 = 1.0f;
                } else {
                    var_f0 = 0.5f;
                }
                sp118 = var_f0;
                sp114 = var_f0;
                sp110 = var_f0;
                func_00228240(&sp100);
                func_00227830(0, -1);
                func_0022C060(temp_s0_2, 0x3F800000);
                func_0022CD00(temp_s0_2);
                func_00228410();
                Title_StepCounters();
            }
            var_s1 += 1;
            var_s5 += 4;
        } while (var_s1 < (s32) *(u8 *)((u8 *)arg0 + 0x97));
    }
    *(f32 *)((u8 *)arg0 + 0x9C) = (f32) (*(f32 *)((u8 *)arg0 + 0x9C) + gFrameDelta);
    if (temp_s6 != NULL) {
        func_002284D0(&sp100);
        func_00228430(0);
        func_00229800((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)arg0 + 0x99) + *(u8 *)((u8 *)arg0 + 0x96)) * 4))), (void *)(&spC0), -1, 0.0f);
        sp100 = spC0;
        sp104 = spC4;
        sp108 = spC8;
        sp10C = spCC;
        func_00228240(&sp100);
        temp_s2 = var_s2 * 4;
        func_00229800((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s2)), (void *)(&spC0), -1, *(f32 *)((u8 *)arg0 + 0x9C));
        sp100 = spC0;
        sp104 = spC4;
        sp108 = spC8;
        sp10C = spCC;
        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s2), &sp110, -1, *(f32 *)((u8 *)arg0 + 0x9C));
        func_002285A0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + temp_s2), &sp130, -1, *(f32 *)((u8 *)arg0 + 0x9C));
        func_00228240(&sp100);
        func_0022C060(temp_s6, 0x3F800000);
        func_0022CD00(temp_s6);
        func_00228410();
    }
    if (spB0 != NULL) {
        func_0022C060(spB0, 0x3F800000);
        func_0022CD00(spB0);
    }
    if (spA0 != NULL) {
        func_0022C060(spA0, 0x3F800000);
        func_0022CD00(spA0);
    }
}
