/* Draft (not built): func_00234D50 at 0x00234D50, size 0x148, segment unk/unk_231E70 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 32) ((u32) (func_0012EAE0(0x20, var_a1, temp_a2, temp_a3) / 10) % 100U) < (u32) ((s32) (((s32) (var_a1 * var_v1) >> 8) *
 * Original: asm/nonmatchings/unk/unk_231E70/func_00234D50.s */

// src/unk/unk_231E70.c func_00234D50 cerr diff=-1/0
s32 func_00234D50(u8 *arg0) {
    s32 var_s1;
    s64 var_v1;
    u16 var_a1;
    u8 *temp_a2;
    u8 *temp_a3;

    var_s1 = 0;
    temp_a3 = &D_0058BBB0 + (*(s32 *)((u8 *)arg0 + 0x1350) * 0xC0);
    temp_a2 = *(u8 **)((u8 *)temp_a3 + 8);
    if (*(s8 *)((u8 *)temp_a3 + 0xB5) != 0) {
        var_a1 = *(u16 *)((u8 *)temp_a2 + 0x132);
    } else {
        var_a1 = *(u16 *)((u8 *)temp_a2 + 0x12E);
    }
    if (*(s8 *)((u8 *)(&D_0058BBB0 + (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350) * 0xC0)) + 0xA4) == 0) {
        var_v1 = 0x140;
    } else {
        var_v1 = (s64) ((s64) *(u16 *)((u8 *)temp_a2 + 0x130) << 0x28) >> 0x28;
        if (*(s8 *)((u8 *)temp_a3 + 0xA4) == 0) {
            var_v1 = (s64) (var_v1 >> 1);
        }
    }
    if (*(s16 *)((u8 *)temp_a3 + 0xBE) > 0) {
        var_v1 = (s64) (var_v1 >> 2);
    }
    if ((u32) ((u32) (func_0012EAE0(0x20, var_a1, temp_a2, temp_a3) / 10) % 100U) < (u32) ((s32) (((s32) (var_a1 * var_v1) >> 8) * 0x64) >> 8)) {
        var_s1 = ((func_0012EAE0(0x20, 0) / 10) & 1) + 1;
    }
    return var_s1;
}
