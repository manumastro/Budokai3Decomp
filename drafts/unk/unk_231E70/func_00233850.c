/* Draft (not built): func_00233850 at 0x00233850, size 0x2C8, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 89 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2B4, original 0x2C8
 * Original: asm/nonmatchings/unk/unk_231E70/func_00233850.s */

// src/unk/unk_231E70.c func_00233850 size diff=89/173
s32 func_00233850(u8 *arg0, u8 *arg1) {
    f32 var_f2;
    s16 temp_a0;
    s16 temp_v0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    u8 *temp_s2;

    temp_a1 = *(s32 *)((u8 *)arg1 + 4);
    temp_s2 = ((u8 *)&D_0058BBB0) + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_v0 = *(s16 *)((u8 *)temp_s2 + 0x3C);
    if (temp_v0 < temp_a1) {
        *(s16 *)((u8 *)temp_s2 + 0x3C) = (s16) temp_a1;
        *(s16 *)((u8 *)temp_s2 + 0x3E) = -1;
        return 0;
    }
    temp_a0 = *(s16 *)((u8 *)temp_s2 + 0x3E);
    if (temp_a0 >= 0) {
        temp_v1 = *(s32 *)((u8 *)arg1 + 0xC);
        var_a1 = temp_v1;
        if (*(s16 *)((u8 *)temp_s2 + 0x40) >= temp_v1) {
            var_a1 = temp_v1 + 0x64;
        }
        if (var_a1 >= temp_a0) {
            *(s16 *)((u8 *)temp_s2 + 0x3C) = 0;
            return 1;
        }
        *(s16 *)((u8 *)temp_s2 + 0x40) = (s16) temp_v1;
        return 0;
    }
    if ((temp_v0 - temp_a1) < 0x1E) {
        return 0;
    }
    *(s16 *)((u8 *)temp_s2 + 0x3C) = (s16) temp_a1;
    if ((*(s32 *)((u8 *)arg1 + 0x10) >= *(s32 *)((u8 *)arg1 + 0x18)) && ((u32) ((u32) (func_0012EAE0(0x20, temp_a1) / 10) % 100U) < 0x32U)) {
        return 0;
    }
    var_s1 = 0x4B;
    var_f2 = *(f32 *)((u8 *)arg0 + 0x17E4) / *(f32 *)((u8 *)arg0 + 0x17E8);
    temp_v0_2 = *(s32 *)((u8 *)arg1 + 8) * 0x64;
    temp_a1_2 = *(s32 *)((u8 *)arg1 + 0x10) + temp_v0_2;
    temp_a0_2 = *(s32 *)((u8 *)arg1 + 0x18) + temp_v0_2;
    if (!(var_f2 <= 0.5f)) {

    } else {
        var_f2 = 0.5f;
    }
    var_v1 = temp_a1_2 - temp_a0_2;
    var_s0 = M2C_BITWISE(s32, (50.0f * (var_f2 - 0.5f))) + 0x64;
    if (var_v1 < 0) {
        var_v1 = -var_v1;
    }
    if (temp_a1_2 < temp_a0_2) {
        temp_v0_3 = ((var_v1 >= var_s0) ? var_s0 : var_v1) + 0x4B;
        var_s1 = temp_v0_3 >> 1;
        if (temp_v0_3 < 0) {
            var_s1 = (s32) (temp_v0_3 + 1) >> 1;
        }
    } else if (temp_a0_2 < temp_a1_2) {
        var_s0 = 0x64 - var_v1;
        if (var_s0 >= 0x4C) {

        } else {
            var_s0 = 0x4B;
        }
    }
    if (var_s0 < var_s1) {
        temp_v0_4 = var_s1;
        var_s1 = var_s0;
        var_s0 = temp_v0_4;
    }
    *(s16 *)((u8 *)temp_s2 + 0x3E) = (s16) (var_s1 + ((u32) (func_0012EAE0(0x20, temp_a1_2) / 10) % (u32) ((var_s0 - var_s1) + 1)));
    *(s16 *)((u8 *)temp_s2 + 0x3E) = (s16) ((s16) *(s16 *)((u8 *)temp_s2 + 0x3E) % 101);
    *(s16 *)((u8 *)temp_s2 + 0x40) = (s16) *(s32 *)((u8 *)arg1 + 0xC);
    return 0;
}
