/* Draft (not built): StrSelect_Draw at 0x002EBBD0, size 0x2CC, segment story/str_select (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x32C, original 0x2CC
 * Original: asm/nonmatchings/story/str_select/StrSelect_Draw.s */

// src/story/str_select.c StrSelect_Draw size diff=52/203
void StrSelect_Draw(StrSelectWork *arg0) {
    f32 var_f12;
    f32 var_f12_2;
    s32 temp_a0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s2;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 *var_s1;
    u8 *var_s3;

    var_s3 = (unsigned char *)(arg0);
    temp_a0 = *(s32 *)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    var_s0 = *(s32 *)((u8 *)var_s3 + 0x10);
    if (var_s0 != 0) {
        func_0022C060(var_s0, 1.0f);
        func_0022CD00(var_s0);
    }
    var_s2 = 0;
    var_s1 = var_s3;
    do {
        var_s0 = *(s32 *)((u8 *)var_s1 + 0x28);
        if (var_s0 != 0) {
            temp_v0 = *(u8 *)((u8 *)(var_s3 + var_s2) + 0x58);
            if ((s32) temp_v0 >= 0) {
                var_f12 = (f32) temp_v0;
            } else {
                var_f12 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
            }
            func_0022C7D0(var_s0, 1, var_f12);
            func_0022C060(var_s0, 0.0f);
            func_0022CD00(var_s0);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 7);
    var_s0 = *(s32 *)((u8 *)var_s3 + 0x14);
    if (var_s0 != 0) {
        temp_v0_2 = *(u8 *)((u8 *)var_s3 + 0x5F);
        if ((s32) temp_v0_2 >= 0) {
            var_f12_2 = (f32) temp_v0_2;
        } else {
            var_f12_2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        func_0022C7D0(var_s0, 1, var_f12_2);
        func_0022C060(var_s0, 0.0f);
        func_0022CD00(var_s0);
    }
    var_s1 = *(u8 **)((u8 *)var_s3 + 0x18);
    if (var_s1 != NULL) {
        temp_v1 = *(u32 *)((u8 *)var_s3 + 0x60);
        var_a0 = 0x2710;
        var_s0 = (s32) (temp_v1 % 10000U);
        var_s2 = *(u32 *)((u8 *)var_s3 + 0x60) / 10000;
        if (temp_v1 < 0x2710U) {
            var_a0 = 0;
        }
        var_s0 += var_a0;
        func_0022C7D0((s32) var_s1, 1, (f32) var_s0);
        func_0022C060((s32) var_s1, 0.0f);
        func_0022CD00((s32) var_s1);
        if (var_s0 >= 0x2710) {
            var_s0 = *(s32 *)((u8 *)var_s3 + 0x1C);
            func_0022C7D0(var_s0, 1, (f32) var_s2);
            func_0022C060(var_s0, 0.0f);
            func_0022CD00(var_s0);
        }
    }
    var_s1 = *(u8 **)((u8 *)var_s3 + 0x20);
    if (var_s1 != NULL) {
        temp_v1_2 = *(u32 *)((u8 *)var_s3 + 0x64);
        var_a0_2 = 0x2710;
        var_s0 = (s32) (temp_v1_2 % 10000U);
        var_s2 = *(u32 *)((u8 *)var_s3 + 0x64) / 10000;
        if (temp_v1_2 < 0x2710U) {
            var_a0_2 = 0;
        }
        var_s0 += var_a0_2;
        func_0022C7D0((s32) var_s1, 1, (f32) var_s0);
        func_0022C060((s32) var_s1, 0.0f);
        func_0022CD00((s32) var_s1);
        if (var_s0 >= 0x2710) {
            var_s0 = *(s32 *)((u8 *)var_s3 + 0x24);
            func_0022C7D0(var_s0, 1, (f32) var_s2);
            func_0022C060(var_s0, 0.0f);
            func_0022CD00(var_s0);
        }
    }
    A2d_FlushList();
    StrSelect_DrawRadar((struct StrSelectWork *)(var_s3));
}
