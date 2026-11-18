/* Draft (not built): func_002D0530 at 0x002D0530, size 0x300, segment unk/unk_2D04B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + temp_s2), &spC0, -1, *(f32 *)((u8 *)temp_s1 + 0x10)); @ 81: var_s5 = saved_reg_s5;
 * Original: asm/nonmatchings/unk/unk_2D04B0/func_002D0530.s */

// src/unk/unk_2D04B0.c func_002D0530 cerr diff=-1/0
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_002D0530(u8 *arg0) {
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
    s32 temp_s2;
    s32 var_a1;
    s32 var_s4;
    s64 temp_v0;
    s64 var_s5;
    u8 temp_a1;
    u8 temp_v1_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_s3;

    var_s5 = saved_reg_s5;
    var_a0 = arg0;
    temp_a1 = *(u8 *)((u8 *)var_a0 + 0x37);
    temp_s0 = var_a0;
    if (temp_a1 != *(u8 *)((u8 *)var_a0 + 0x38)) {
        *(u8 *)((u8 *)temp_s0 + 0x38) = temp_a1;
        var_a1 = 0;
        do {
            temp_v1 = *(u8 **)((u8 *)var_a0 + 0x18);
            if (temp_v1 != NULL) {
                *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) gFrameDelta;
            }
            var_a1 += 1;
            var_a0 += 4;
        } while (var_a1 < 3);
    }
    temp_v1_2 = *(u8 *)((u8 *)temp_s0 + 0x37);
    switch (temp_v1_2) {
    case -1:
    case 0:
    case 1:
    case 2:
        return;
    case 3:
        var_s5 = 0x1B;
    default:
    case 5:
block_11:
        var_s4 = 0;
        var_s3 = temp_s0;
        do {
            temp_s1 = *(u8 **)((u8 *)var_s3 + 0x18);
            if (temp_s1 != NULL) {
                func_002284D0(&spE0);
                func_00228430(0);
                if (*(u8 *)((u8 *)temp_s0 + 0x37) == 5) {
                    var_s5 = 0x1C;
                    if (*(u8 *)((u8 *)temp_s0 + 0x35) == var_s4) {

                    } else {
                        var_s5 = 0x1D;
                    }
                }
                temp_v0 = (s64) (var_s5 << 0x30) >> 0x30;
                temp_s2 = temp_v0 * 4;
                if (temp_v0 != -1) {
                    func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + temp_s2), &spC0, -1, *(f32 *)((u8 *)temp_s1 + 0x10));
                    spE0 = spC0;
                    spE4 = spC4;
                    spE8 = spC8;
                    spEC = spCC;
                    func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + temp_s2), &spF0, -1, *(f32 *)((u8 *)temp_s1 + 0x10));
                    func_002285A0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + temp_s2), &sp110, -1, *(f32 *)((u8 *)temp_s1 + 0x10));
                }
                if (*(u8 *)((u8 *)temp_s0 + 0x35) == var_s4) {
                    var_f0 = 1.0f;
                } else {
                    var_f0 = 0.5f;
                }
                spF8 = var_f0;
                spF4 = var_f0;
                spF0 = var_f0;
                func_00228240(&spE0);
                func_0022C060(temp_s1, 0x3F800000);
                func_0022CD00(temp_s1);
                func_00228410();
            }
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < 3);
        if ((s32) *(u8 *)((u8 *)temp_s0 + 0x37) >= 4) {
            temp_s1_2 = *(u8 **)((u8 *)temp_s0 + 0x28);
            if (temp_s1_2 != NULL) {
                func_002284D0(&spE0);
                func_00228430(0);
                func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)temp_s0 + 0x35) + 0x1E) * 4)), &spA0, -1, 0.0f);
                spE0 = spA0;
                spE4 = spA4;
                spE8 = spA8;
                spEC = spAC;
                func_00228240(&spE0);
                func_0022C060(temp_s1_2, 0x3F800000);
                func_0022CD00(temp_s1_2);
                func_00228410();
            }
        }
        return;
    case 4:
    case 6:
        var_s5 = -1;
        goto block_11;
    }
}
