/* Draft (not built): func_002CF3B0 at 0x002CF3B0, size 0x144, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CF3B0.s */

s32 func_002CF3B0(u8 *arg0) {
    f32 var_f0;
    f32 var_f2;
    s32 *temp_v1;
    s32 temp_v0;
    u32 temp_v0_2;
    temp_v1 = (int *)((u8 *)&D_005C2064 + *(s32 *)((u8 *)arg0 + 0) * 0x28);
    temp_v0 = *temp_v1;
    if (temp_v0 != 0) {
        return 0;
    }
    *temp_v1 = temp_v0 + 1;
    temp_v0_2 = func_0012EAE0(0x20) % 10U + 1;
    if (temp_v0_2 >= 0) {
        var_f2 = (f32)temp_v0_2;
    } else {
        var_f2 = 2.0f * (f32)((u32)temp_v0_2 >> 1 | temp_v0_2 & 1);
    }
    *((u8 *)&D_005C2074 + *(s32 *)((u8 *)arg0 + 0) * 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 1;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    var_f0 = D_00470154 / func_00146E30(*(s32 *)((u8 *)gBattle + 0x264), *(s32 *)((u8 *)arg0 + 4));
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    if (!(var_f0 <= 1.0f)) {
        var_f0 = 1.0f;
    }
    *(f32 *)((u8 *)arg0 + 0x14) = (f32)((0.1f + var_f2 / 20.0f) * var_f0);
    return 1;
}

/* Similar function already in C: func_002CF2B0 (src/unk/unk_2CD5F0.c), similarity 0.70.
 * It is the template below (not built). */
#if 0
s32 func_002CF2B0(u8 *s0) {
    f32 f20 = 1.0f;
    s32 k = *(s32 *)s0;
    u8 *p = D_005C2068 + k * 40;
    f32 f0;
    if (*(s32 *)p != 0) {
        f20 = 0.3f;
    } else {
        *(s32 *)p += 1;
    }
    k = *(s32 *)s0;
    *(s32 *)(D_005C2074 + k * 40) = 0;
    *(s32 *)(s0 + 8) = 3;
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)(s0 + 0x10) = 0;
    f0 = func_00146E30(*(s32 *)(gBattle + 0x264), *(s32 *)(s0 + 4));
    f0 = D_00470154 / f0;
    f0 = (f0 > 1.0f) ? 1.0f : f0;
    *(f32 *)(s0 + 0x14) = f20 * f0;
    return 1;
}
#endif
