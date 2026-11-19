/* Draft (not built): func_002350A0 at 0x002350A0, size 0x3D8, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3C8, original 0x3D8
 * Original: asm/nonmatchings/unk/unk_231E70/func_002350A0.s */

// src/unk/unk_231E70.c func_002350A0 size diff=99/242
s32 func_001D9220(s32, s32, s32 *);
s32 func_001E3D60(s32, s32);
s32 func_002350A0(u8 *arg0, s8 arg1) {
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s32 *spD0;
    u8 *spE0;
    s32 temp_a2;
    s32 temp_f0;
    s32 temp_v1_2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v1;
    u8 *var_s6;
    u8 *var_s7;

    var_s7 = NULL;
    var_s6 = NULL;
    var_s1 = 0x100;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1354);
    spD0 = NULL;
    spC0 = 0;
    temp_s2 = ((u8 *)&D_0058BBB0) + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_a2 = *(s32 *)((u8 *)temp_s3 + 0x1350);
    spA0 = (s32) *(s8 *)((u8 *)temp_s2 + 0xB5);
    spE0 = ((u8 *)&D_0058BBB0) + (temp_a2 * 0xC0);
    spB0 = (s32) *(u16 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x12A);
    var_s0 = func_001D9220((s32)(temp_a2 * 2), (s32)(temp_a2), (s32 *)(&D_0058BBB0)) == 0;
    if (var_s0 == 0) {
        var_s0 = *(s16 *)((u8 *)temp_s2 + 0x1C) != 1;
    }
    var_fp = 0;
    if (!(*(f32 *)((u8 *)temp_s2 + 0xAC) < 0.0f)) {
        *(f32 *)((u8 *)temp_s2 + 0xAC) = -1.0f;
        return 1;
    }
    temp_v1 = *(u8 **)((u8 *)temp_s3 + 0x17A0);
    if (temp_v1 != NULL) {
        var_s6 = temp_v1;
        spD0 = (int *)(temp_v1 + 0x20);
        temp_v1_2 = *(s32 *)((u8 *)temp_v1 + 0x20);
        var_s7 = temp_s3 + 0x1360;
        if (temp_v1_2 & 0x200) {
            var_fp = 1;
        }
        if (temp_v1_2 & 0x100) {
            var_s0 = 1;
        }
    }
    if (*(s8 *)((u8 *)spE0 + 0xA4) >= *(s8 *)((u8 *)temp_s2 + 0xA4)) {
        var_s1 = 0x100 >> 1;
    }
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
        var_s1 *= 2;
    }
    switch (arg1) {                                 /* irregular */
    case 1:
        if (*(s16 *)((u8 *)temp_s2 + 0x1C) == 1) {
            spB0 = 0;
        }
        var_fp = 1;
        break;
    case 2:
        temp_f0 = *(s32 *)((u8 *)arg0 + 0x17C0);
        var_v0 = ((0x3E8 - temp_f0) / 333) + ((u32) (0x3E8 - temp_f0) >> 0x1F);
        if (var_v0 > 0) {

        } else {
            var_v0 = 0;
        }
        var_s0 = 1;
        var_s1 <<= var_v0;
        var_fp = 1;
        break;
    case 0:
        if (var_s6 != NULL) {
            if (*spD0 & 0x40) {
                if (*(s16 *)((u8 *)arg0 + 0xCAC) == 0x10) {
                    var_s1 *= 4;
                } else {
                    var_s1 = (s32) (var_s1 * 3) >> 1;
                }
            } else if (*(s32 *)((u8 *)var_s7 + 0x1EC) == *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s7 + 0x1E4)) + 8)) {
                if (*(s16 *)((u8 *)var_s6 + 0xE) > 0) {
                    spB0 = 0;
                } else {
                    var_s1 = var_s1 >> 1;
                }
            } else if (*(s16 *)((u8 *)var_s6 + 0xE) <= 0) {
                var_s1 = var_s1 >> 1;
            } else {
                var_s1 = var_s1 >> 2;
            }
            if ((*(s16 *)((u8 *)arg0 + 0xCAC) == 0x10) && (*(s16 *)((u8 *)arg0 + 0xCAE) >= 2)) {
                var_s1 *= 8;
            }
        } else if (*(s8 *)((u8 *)temp_s3 + 0x2019) != 0) {
            var_s1 *= 4;
        }
        break;
    }
    if ((*(s16 *)((u8 *)temp_s2 + 0x1C) == 1) && (var_s0 == 0)) {
        var_s1 = var_s1 >> 4;
    }
    if (var_s0 != 0) {
        var_s1 <<= spA0 + 1;
    }
    if (var_fp != 0) {
        var_s1 <<= (spA0 * 2) + 1;
    }
    if (*(s16 *)((u8 *)temp_s2 + 0xBE) > 0) {
        var_s1 = var_s1 >> 2;
    }
    if ((u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U) < (u32) ((s32) (((s32) (spB0 * var_s1) >> 8) * 0x64) >> 8)) {
        *(s8 *)((u8 *)temp_s2 + 0xAB) = arg1;
        spC0 = 1;
    }
    return spC0;
}
