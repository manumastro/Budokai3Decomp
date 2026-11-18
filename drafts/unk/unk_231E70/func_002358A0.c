/* Draft (not built): func_002358A0 at 0x002358A0, size 0x148, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )((u8 *)((var_s0 * 2) + sp) + 0x48); @ 98: var_v1 = (u32) (func_0012EAE0(0x20, sp48) / 10) % (u32) (sp48 + sp4A + sp4C);
 * Original: asm/nonmatchings/unk/unk_231E70/func_002358A0.s */

// src/unk/unk_231E70.c func_002358A0 cerr diff=-1/0
f32 func_001E52B0(s32, void *, s32, s32);
extern f32 D_0046FE38;
extern s16 D_0046FE3C;
s32 func_002358A0(u8 *arg0) {
    u16 sp48;
    u16 sp4C;
    f32 temp_f0;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_s0;
    u32 var_v1;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_a2 = temp_a3 * 0xC0;
    temp_a1 = &D_0058BBB0 + temp_a2;
    temp_s1 = *(u8 **)((u8 *)temp_a1 + 8);
    temp_s0 = *(u8 **)((u8 *)temp_a1 + 0xC);
    *(f32 *)((u8 *)(&sp48) + 0) = (f32) D_0046FE38;
    *(s16 *)((u8 *)(&sp48) + 4) = (s16) D_0046FE3C;
    temp_f0 = func_001E52B0(0, temp_a1, temp_a2, temp_a3);
    if (*(f32 *)((u8 *)arg0 + 0x17C0) < (0.2f * *(f32 *)((u8 *)arg0 + 0x17C4))) {
        sp48 = (u16) ((s32) (sp48 * *(u16 *)((u8 *)temp_s1 + 0x11A)) >> 8);
    }
    if (!(temp_f0 < (f32) *(s16 *)((u8 *)temp_s0 + 2))) {
        sp4C = (u16) ((s32) (sp4C * *(u16 *)((u8 *)temp_s1 + 0x11C)) >> 8);
    }
    var_s0 = -1;
    var_v1 = (u32) (func_0012EAE0(0x20, sp48) / 10) % (u32) (sp48 + sp4A + sp4C);
    do {
        var_s0 += 1;
        var_v1 -= *(u16 *)((u8 *)((var_s0 * 2) + sp) + 0x48);
    } while ((s32) var_v1 >= 0);
    return var_s0;
}
