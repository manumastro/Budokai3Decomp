/* Draft (not built): func_002E2290 at 0x002E2290, size 0x3A0, segment unk/unk_2E2290 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &spC0, -1, *(f32 *)((u8 *)temp_s2_2 + 0x10)); @ 145: var_s4 = saved_reg_s4;
 * Original: asm/nonmatchings/unk/unk_2E2290/func_002E2290.s */

// src/unk/unk_2E2290.c func_002E2290 cerr diff=-1/0
s32 func_00133B50(s32, s32);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern void func_00228410(void);
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
void func_002E2290(u8 *arg0) {
    f32 spA0;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spEC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    s32 sp110;
    f32 var_f0;
    s32 temp_s3;
    s32 var_a0;
    s32 var_s5;
    s64 temp_s3_2;
    s64 temp_v0_2;
    s64 var_s4;
    s64 var_s4_2;
    s8 temp_a0_2;
    s8 temp_v1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_v0;
    u8 *var_s6;
    u8 *var_v1;

    var_s4 = saved_reg_s4;
    temp_s0 = (u8 *)(gCsSubArena);
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x6000);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x10);
    if (temp_s2 != NULL) {
        func_0022C060(temp_s2, 0x3F800000);
        func_0022CD00(temp_s2);
    }
    temp_v1 = *(s8 *)((u8 *)arg0 + 4);
    if (temp_v1 != *(s8 *)((u8 *)arg0 + 5)) {
        *(s8 *)((u8 *)arg0 + 5) = temp_v1;
        var_a0 = 0;
        var_v1 = arg0;
        do {
            temp_v0 = *(u8 **)((u8 *)var_v1 + 0x14);
            if (temp_v0 != NULL) {
                *(f32 *)((u8 *)temp_v0 + 0x10) = (f32) gFrameDelta;
            }
            var_a0 += 1;
            var_v1 += 4;
        } while (var_a0 < 2);
    }
    func_002284D0(&spE0);
    func_00228430(0);
    var_s5 = 0;
    var_s6 = arg0;
loop_8:
    temp_s2_2 = *(u8 **)((u8 *)var_s6 + 0x14);
    if (temp_s2_2 != NULL) {
        temp_a0_2 = *(s8 *)((u8 *)arg0 + 4);
        switch (temp_a0_2) {                        /* irregular */
            return;
        case 1:
            var_s4_2 = ((*(s8 *)((u8 *)arg0 + 2) == 0) ? 0x1F : 0x25) << 0x30;
block_22:
            var_s4 = var_s4_2 >> 0x30;
        default:
block_23:
            temp_v0_2 = (s64) (var_s4 << 0x30) >> 0x30;
            temp_s3 = temp_v0_2 * 4;
            if (temp_v0_2 != -1) {
                func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &spC0, -1, *(f32 *)((u8 *)temp_s2_2 + 0x10));
                spE0 = spC0;
                spE4 = spC4;
                spE8 = spC8;
                spEC = spCC;
                func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &spF0, -1, *(f32 *)((u8 *)temp_s2_2 + 0x10));
                func_002285A0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + temp_s3), &sp110, -1, *(f32 *)((u8 *)temp_s2_2 + 0x10));
            }
            func_00228430(0);
            if (*(s8 *)((u8 *)arg0 + 0) == var_s5) {
                var_f0 = 1.0f;
            } else {
                var_f0 = 0.5f;
            }
            spF8 = var_f0;
            spF4 = var_f0;
            spF0 = var_f0;
            func_00228240(&spE0);
            func_0022C060(temp_s2_2, 0x3F800000);
            func_00228410();
            func_0022CD00(temp_s2_2);
            goto block_29;
        case 2:
            var_s4 = -1;
            goto block_23;
        case 3:
            var_s4_2 = ((*(s8 *)((u8 *)arg0 + 2) == 0) ? 0x20 : 0x27) << 0x30;
            goto block_22;
        case 4:
            var_s4_2 = ((*(s8 *)((u8 *)arg0 + 2) == 0) ? 0x1E : 0x26) << 0x30;
            goto block_22;
        }
    } else {
block_29:
        var_s5 += 1;
        var_s6 += 4;
        if (var_s5 >= 2) {
            temp_s2_3 = *(u8 **)((u8 *)arg0 + 0x1C);
            if (temp_s2_3 != NULL) {
                temp_s3_2 = (*(s8 *)((u8 *)arg0 + 2) == 0) ? 0x42 : 0x46;
                func_002284D0(&spE0);
                func_00228430(0);
                func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + ((((s64) (temp_s3_2 << 0x30) >> 0x30) + *(s8 *)((u8 *)arg0 + 0)) * 4)), &spA0, -1, 0.0f);
                spE0 = spA0;
                spE4 = spA4;
                spE8 = spA8;
                spEC = spAC;
                func_00228240(&spE0);
                func_0022C060(temp_s2_3, 0x3F800000);
                func_0022CD00(temp_s2_3);
                func_00228410();
            }
            func_00228410();
            return;
        }
        goto loop_8;
    }
}
