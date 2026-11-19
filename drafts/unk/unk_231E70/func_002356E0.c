/* Draft (not built): func_002356E0 at 0x002356E0, size 0xDC, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x138, original 0xDC
 * Original: asm/nonmatchings/unk/unk_231E70/func_002356E0.s */

// src/unk/unk_231E70.c func_002356E0 size diff=20/78
s32 func_002356E0(u8 *arg0) {
    s32 temp_a1;
    u8 var_s0;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_v1 = ((u8 *)&D_0058BBB0) + (temp_a1 * 0xC0);
    temp_v0 = *(u8 **)((u8 *)temp_v1 + 8);
    if (*(f32 *)((u8 *)arg0 + 0x17C0) < (0.2f * *(f32 *)((u8 *)arg0 + 0x17C4))) {
        var_s0 = *(u8 *)((u8 *)temp_v0 + 0x121);
    } else {
        var_s0 = *(u8 *)((u8 *)temp_v0 + 0x120);
    }
    if (*(s16 *)((u8 *)temp_v1 + 0x1C) >= 2) {
        var_s0 = M2C_BITWISE(u8, (0.8f * (f32) var_s0));
    }
    return (u32) ((u32) (func_0012EAE0(0x20, temp_a1) / 10) % 100U) < var_s0;
}
