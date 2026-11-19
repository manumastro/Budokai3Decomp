/* Draft (not built): func_002B7340 at 0x002B7340, size 0x348, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 119 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x310, original 0x348
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B7340.s */

// src/menu/mn_csmodel.c func_002B7340 size diff=119/196
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_002285A0(s32, s32 *, s32, f32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C060(void *, s32);
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_002B7340(u8 *arg0) {
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s16 spA0;
    f32 spB0;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    s32 sp120;
    f32 *var_fp;
    f32 *var_s7;
    f32 var_f0;
    s16 var_s3;
    s32 var_a1;
    s32 var_s5;
    s64 var_a0_2;
    s64 var_s6;
    u8 temp_a1;
    u8 temp_v1_2;
    u8 *temp_v1;
    u8 *var_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s4;

    var_a0 = arg0;
    spA0 = -1;
    temp_a1 = *(u8 *)((u8 *)var_a0 + 0x61);
    var_s0 = gPracMode;
    var_s1 = var_a0;
    if (temp_a1 != *(u8 *)((u8 *)var_a0 + 0x62)) {
        *(u8 *)((u8 *)var_s1 + 0x62) = temp_a1;
        var_a1 = 0;
        if ((s32) *(u8 *)((u8 *)var_s1 + 0x5F) > 0) {
            do {
                temp_v1 = *(u8 **)((u8 *)var_a0 + 0x10);
                if (temp_v1 != NULL) {
                    *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) gFrameDelta;
                }
                var_a1 += 1;
                var_a0 += 4;
            } while (var_a1 < (s32) *(u8 *)((u8 *)var_s1 + 0x5F));
        }
    }
    temp_v1_2 = *(u8 *)((u8 *)var_s1 + 0x61);
    switch (temp_v1_2) {
        return;
    case 1:
    case 2:
        var_a0_2 = 0xF;
block_19:
        var_s5 = 0;
        if ((s32) *(u8 *)((u8 *)var_s1 + 0x5F) > 0) {
            var_s6 = var_a0_2 << 0x30;
            var_s4 = var_s1;
            var_s6 = var_s6 >> 0x30;
            var_fp = &spD4;
            var_s3 = var_s6 * 4;
            var_s7 = &sp100;
            do {
                var_s2 = *(u8 **)((u8 *)var_s4 + 0x10);
                if (var_s2 != NULL) {
                    func_002284D0(&spF0);
                    func_00228430(0);
                    if (var_s6 != -1) {
                        func_00229800(*(s32 *)(var_s3 + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)), &spD0, -1, *(f32 *)((u8 *)var_s2 + 0x10));
                        spF0 = spD0;
                        spF4 = *var_fp;
                        spF8 = spD8;
                        spFC = spDC;
                        func_00228AC0(*(s32 *)(var_s3 + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)), var_s7, -1, *(f32 *)((u8 *)var_s2 + 0x10));
                        func_002285A0(*(s32 *)(var_s3 + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)), &sp120, -1, *(f32 *)((u8 *)var_s2 + 0x10));
                    }
                    if (*(u8 *)((u8 *)var_s1 + 0x5E) == var_s5) {
                        var_f0 = 1.0f;
                    } else {
                        var_f0 = 0.5f;
                    }
                    sp108 = var_f0;
                    sp104 = var_f0;
                    *var_s7 = var_f0;
                    func_00228240(&spF0);
                    func_0022C060(var_s2, 0x3F800000);
                    func_0022CD00(var_s2);
                    func_00228410();
                }
                var_s5 += 1;
                var_s4 += 4;
            } while (var_s5 < (s32) *(u8 *)((u8 *)var_s1 + 0x5F));
        }
        var_s2 = *(u8 **)((u8 *)var_s1 + 0x4C);
        if (var_s2 != NULL) {
            var_s3 = spA0;
            if (var_s3 != -1) {
                func_002284D0(&spF0);
                func_00228430(0);
                func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C) + ((var_s3 + *(u8 *)((u8 *)var_s1 + 0x5E)) * 4)), &spB0, -1, 0.0f);
                spF0 = spB0;
                spF4 = spB4;
                spF8 = spB8;
                spFC = spBC;
                func_00228240(&spF0);
                func_0022C060(var_s2, 0x3F800000);
                func_0022CD00(var_s2);
                func_00228410();
            }
        }
        return;
    case 3:
        var_a0_2 = -1;
        spA0 = 0x13;
        goto block_19;
    case 4:
        var_a0_2 = 0x10;
        goto block_19;
    case 5:
    case 6:
        var_a0_2 = 0x11;
        goto block_19;
    case 7:
        var_a0_2 = 0x15;
        goto block_19;
    case 8:
        var_a0_2 = -1;
        spA0 = 0x19;
        goto block_19;
    case 9:
        var_a0_2 = 0x16;
        goto block_19;
    case 10:
        var_a0_2 = 0x16;
        goto block_19;
    default:
        return;
    }
}
