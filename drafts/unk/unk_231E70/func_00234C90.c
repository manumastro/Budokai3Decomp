/* Draft (not built): func_00234C90 at 0x00234C90, size 0xB8, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 14 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC0, original 0xB8
 * Original: asm/nonmatchings/unk/unk_231E70/func_00234C90.s */

// src/unk/unk_231E70.c func_00234C90 size diff=14/48
s32 func_00234C90(u8 *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 0;
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_s0 = (s32) (((s64) ((s64) *(u16 *)((u8 *)(*(u8 **)((u8 *)(&D_0058BBB0 + (temp_a1 * 0xC0)) + 8)) + 0x134) << 0x28) >> 0x28) * 0x64) >> 8;
    if ((u32) ((u32) (func_0012EAE0(0x20, temp_a1) / 10) % 100U) < (u32) temp_s0) {
        var_s1 = 1;
    }
    return var_s1;
}
