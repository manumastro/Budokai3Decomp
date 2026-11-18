/* Draft (not built): func_0022F520 at 0x0022F520, size 0x140, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x140
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022F520.s */

// src/unk/unk_22E0B0.c func_0022F520 size diff=31/82
s32 func_0012EAE0(s32);
f32 func_001E52B0(s32, s32 *, s32);
extern s32 D_0058BBB0;
s32 func_0022F520(u8 *arg0) {
    f32 temp_f0;
    s32 temp_a2;
    u8 var_s0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_s2 = (u8 *)(&D_0058BBB0 + (temp_a2 * 0xC0));
    temp_s1 = *(u8 **)((u8 *)temp_s2 + 8);
    temp_s0 = (u8 *)(&D_0058BBB0 + (*(s32 *)((u8 *)temp_s3 + 0x1350) * 0xC0));
    temp_f0 = func_001E52B0(0, &D_0058BBB0, temp_a2);
    if ((*(s8 *)((u8 *)temp_s3 + 0x2003) != 0) && (temp_f0 < 20.0f) && !((*(f32 *)((u8 *)arg0 + 0xCB8) - *(f32 *)((u8 *)arg0 + 0x1848)) < 10.0f)) {
        var_s0 = *(u8 *)((u8 *)temp_s1 + 0x10F);
        if (!(*(f32 *)((u8 *)temp_s0 + 0x50) < 90.0f)) {
            var_s0 = *(u8 *)((u8 *)temp_s1 + 0x110);
        }
        if ((u32) ((u32) (func_0012EAE0(0x20) / 10) % 100U) < var_s0) {
            *(s16 *)((u8 *)temp_s2 + 0x1C) = 6;
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
