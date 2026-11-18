/* Draft (not built): func_00235480 at 0x00235480, size 0x25C, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 44 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x264, original 0x25C
 * Original: asm/nonmatchings/unk/unk_231E70/func_00235480.s */

// src/unk/unk_231E70.c func_00235480 size diff=44/153
s32 func_001D9220(s32);
s32 func_00235480(u8 *arg0) {
    s32 spA0;
    f32 var_f1;
    s32 *var_fp;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s7;
    s8 var_s6;
    u8 *temp_v0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;

    var_fp = NULL;
    var_s7 = 0;
    var_s5 = arg0;
    var_s2 = NULL;
    var_s1 = NULL;
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x1350);
    var_s0 = 0x100;
    var_s4 = *(u8 **)((u8 *)arg0 + 0x1354);
    var_s3 = &D_0058BBB0 + (temp_a1 * 0xC0);
    var_s6 = *(s8 *)((u8 *)var_s3 + 0xB5);
    spA0 = (s32) *(u16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 8)) + 0x128);
    var_a0 = func_001D9220(temp_a1) == 0;
    if (var_a0 == 0) {
        var_a0 = *(s16 *)((u8 *)var_s3 + 0x1C) != 1;
    }
    temp_v0 = *(u8 **)((u8 *)var_s4 + 0x17A0);
    if (temp_v0 != NULL) {
        var_s2 = var_s4 + 0x1360;
        var_s1 = temp_v0;
        var_fp = (s32 *)(temp_v0 + 0x20);
    }
    if (var_s1 != NULL) {
        temp_v1 = *var_fp;
        if (temp_v1 & 0x100) {
            var_a0 = 1;
        }
        if (temp_v1 & 0x40) {
            if (var_s6 != 0) {
                var_s0 = 0x100 * 4;
            } else {
                var_s0 = 0x180;
            }
        } else if (*(s16 *)((u8 *)var_s1 + 0xE) <= 0) {
            var_s0 = 0x180;
        } else if (*(s32 *)((u8 *)var_s2 + 0x1EC) == *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x1E4)) + 8)) {
            var_s0 = 0x100 >> 1;
        }
    }
    if (var_a0 != 0) {
        var_s0 <<= var_s6 + 1;
    } else if (*(s16 *)((u8 *)var_s3 + 0x1C) == 1) {
        if (!(*(f32 *)((u8 *)var_s5 + 0x1A40) <= 0.0f)) {
            var_f1 = *(f32 *)((u8 *)var_s5 + 0x17D4);
        } else {
            var_f1 = *(f32 *)((u8 *)var_s5 + 0x17D0);
        }
        if (var_f1 < 1000.0f) {
            var_s0 = 0;
        }
        if (var_f1 < 2000.0f) {
            var_s0 = var_s0 >> 4;
        }
    }
    if (*(s16 *)((u8 *)var_s3 + 0xBE) > 0) {
        var_s0 = var_s0 >> 2;
    }
    var_s0 = (s32) (((s32) (spA0 * var_s0) >> 8) * 0x64) >> 8;
    if ((u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U) < (u32) var_s0) {
        var_s7 = 1;
    }
    return var_s7;
}
