/* Draft (not built): func_00234EA0 at 0x00234EA0, size 0x1F8, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x250, original 0x1F8
 * Original: asm/nonmatchings/unk/unk_231E70/func_00234EA0.s */

// src/unk/unk_231E70.c func_00234EA0 size diff=41/148
s32 func_001E3D60(s32, s32, s32 *, void *, s32);
extern void *gBattle;
s32 func_00234EA0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_a1;
    s32 var_s0;
    s32 var_s2;
    u16 var_s1;
    u32 temp_hi;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;

    var_s2 = 0;
    var_s0 = 0x100;
    var_s5 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_a1 = *(s32 *)((u8 *)var_s5 + 0x1350);
    var_s4 = &D_0058BBB0 + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_f2 = *(f32 *)((u8 *)var_s4 + 0xB0);
    var_s1 = *(u16 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 8)) + 0x12C);
    var_s3 = &D_0058BBB0 + (temp_a1 * 0xC0);
    if (!(temp_f2 <= 0.0f)) {
        temp_f0 = temp_f2 - *(f32 *)((u8 *)gBattle + 0x88F0);
        *(f32 *)((u8 *)var_s4 + 0xB0) = temp_f0;
        if (temp_f0 <= 0.0f) {
            var_s2 = 1;
        }
    } else if (*(s8 *)((u8 *)var_s4 + 0xAA) != 0) {
        if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), temp_a1, &D_0058BBB0, gBattle, 0x43340000) != 0) {
            goto block_9;
        }
        if (*(s8 *)((u8 *)var_s3 + 0xA4) != 0) {
block_9:
            var_s0 = 0x100 >> 2;
        }
        if ((*(s32 *)((u8 *)var_s5 + 0x17A0) != 0) && (*(s32 *)((u8 *)var_s5 + 0x1758) != *(s32 *)((u8 *)var_s5 + 0x175C))) {
            var_s0 *= 8;
        }
        var_s0 = (s32) (((s32) (var_s1 * var_s0) >> 8) * 0x64) >> 8;
        if ((u32) ((u32) (func_0012EAE0(0x20, 0) / 10) % 100U) < (u32) var_s0) {
            temp_hi = (u32) (func_0012EAE0(0x20, 0) / 10) % 5U;
            if ((s32) temp_hi >= 0) {
                var_f0 = (f32) temp_hi;
            } else {
                var_f0 = 2.0f * (f32) ((temp_hi >> 1) | (temp_hi & 1));
            }
            *(f32 *)((u8 *)var_s4 + 0xB0) = var_f0;
        }
    }
    return var_s2;
}
