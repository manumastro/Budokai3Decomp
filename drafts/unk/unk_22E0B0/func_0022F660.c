/* Draft (not built): func_0022F660 at 0x0022F660, size 0x2A0, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 85 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2AC, original 0x2A0
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022F660.s */

// src/unk/unk_22E0B0.c func_0022F660 size diff=85/171
s32 func_0012EAE0(s32, s32);
s32 func_001E3D60(s32, s16, s32);
f32 func_001E52B0(s32);
s32 func_002CC450(s32);
extern s32 D_0044FAB0;
extern s32 D_0058BBB0;
s32 func_0022F660(u8 *arg0) {
    f32 temp_f0;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a1;
    u16 var_s0;
    u32 temp_s0_2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s4 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_s3 = (u8 *)(&D_0058BBB0 + (temp_a0 * 0xC0));
    temp_s0 = *(u8 **)((u8 *)temp_s3 + 0xC);
    temp_s2 = *(u8 **)((u8 *)temp_s3 + 8);
    if (func_002CC450(temp_a0) & 0x80) {
        return 0;
    }
    temp_f0 = func_001E52B0(0);
    var_a1 = 0;
    if (M2C_BITWISE(s32, temp_f0) < *(s16 *)((u8 *)temp_s0 + 0)) {

    } else {
        var_a1 = 1;
        if ((f32) temp_f0 < (1.2f * (f32) *(s16 *)((u8 *)temp_s0 + 2))) {

        } else {
            var_a1 = 2;
        }
    }
    if (*(s16 *)((u8 *)temp_s3 + 0x1C) == 7) {
        if (!((*(f32 *)((u8 *)arg0 + 0xCB8) - *(f32 *)((u8 *)arg0 + 0x1848)) < 10.0f)) {
            temp_v1 = *(s16 *)((u8 *)temp_s4 + 0xCAC);
            if (temp_v1 != 0xF) {
                if ((temp_v1 >= 6) && (temp_v1 < 9)) {
                    goto block_14;
                }
                goto block_16;
            }
block_14:
            if ((u32) ((u32) (func_0012EAE0(0x20, var_a1) / 10) % 100U) < (u8) *(u8 *)((u8 *)temp_s2 + 0x10E)) {
                *(s16 *)((u8 *)temp_s3 + 0x1C) = 5;
                return 0;
            }
            goto block_16;
        }
block_16:
        return 1;
    }
    temp_a1 = *(s16 *)((u8 *)temp_s4 + 0xCAC);
    var_s0 = *(u16 *)((u8 *)(temp_s2 + (*(&D_0044FAB0 + *(s16 *)((u8 *)arg0 + 0xCAC)) * 0x12)) + 0x2A);
    if (temp_a1 == 0xF) {
        var_s0 = (u16) ((u32) (var_s0 * *(u16 *)((u8 *)temp_s2 + 0x112)) >> 8);
    }
    if (temp_a1 == 1) {
        var_s0 = (u16) ((u32) (var_s0 * *(u16 *)((u8 *)temp_s2 + 0x116)) >> 8);
    }
    if (temp_a1 == 0x10) {
        var_s0 = (u16) ((u32) (var_s0 * *(u16 *)((u8 *)temp_s2 + 0x118)) >> 8);
    }
    if (func_001E3D60(*(s32 *)((u8 *)temp_s4 + 0x17AC), temp_a1, 0x43340000) != 0) {
        var_s0 = 0;
    }
    temp_s0_2 = (u32) (*(u8 *)((u8 *)(temp_s2 + (var_a1 * 9)) + 7) * var_s0) >> 8;
    temp_v0 = (u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U) < temp_s0_2;
    if (temp_v0 != 0) {
        *(s16 *)((u8 *)temp_s3 + 0x1C) = 7;
    }
    return temp_v0;
}
