/* Draft (not built): func_002EF1A0 at 0x002EF1A0, size 0x1F0, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x160, original 0x1F0
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EF1A0.s */

// src/menu/mn_ArenaList.c func_002EF1A0 size diff=93/88
s32 func_0012EAE0(s32, s64, s64, s64);
extern s32 D_00458000;
extern s8 D_004B4BE4;
s64 func_002EF1A0(u8 *arg0, s64 arg1, s64 arg2, s64 arg3) {
    s16 sp60;
    s16 *var_v1;
    s64 temp_a0;
    s64 temp_s0;
    s64 var_a1;
    s64 var_a2;
    s64 var_a3;
    s64 var_s1;
    s64 var_s4;

    var_a2 = arg2;
    var_a3 = arg3;
    var_s1 = -1;
    *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00458000) + 0);
    *(s64 *)((u8 *)(&sp60) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00458000) + 0x10);
    *(f32 *)((u8 *)(&sp60) + 0x18) = (f32) *(f32 *)((u8 *)(&D_00458000) + 0x18);
    *(s16 *)((u8 *)(&sp60) + 0x1C) = (s16) *(s16 *)((u8 *)(&D_00458000) + 0x1C);
    if (((s64) (var_a2 << 0x30) >> 0x30) >= 0x64) {
        var_a2 = 0x63;
    }
    if (((s64) (var_a3 << 0x30) >> 0x30) >= 0x64) {
        var_a3 = 0x63;
    }
    temp_a0 = (s64) (var_a3 << 0x30) >> 0x30;
    var_a1 = 0;
    var_v1 = &sp60;
loop_5:
    if (temp_a0 < *var_v1) {

    } else {
        var_a1 = (s64) ((var_a1 + 1) << 0x30) >> 0x30;
        var_v1 += 2;
        if (var_a1 < 0xF) {
            goto loop_5;
        }
    }
    if (((s64) (M2C_ERROR(/* Read from unset register $t2 */) << 0x30) >> 0x30) >= 0xF) {

    }
    temp_s0 = (s64) (M2C_ERROR(/* Read from unset register $t2 */) << 0x30) >> 0x30;
    if (M2C_ERROR(/* Read from unset register $t0 */) & 0xFFFF & (1 << temp_s0)) {
        return -1;
    }
    if ((temp_s0 == 5) && (D_004B4BE4 < 2)) {
        return -1;
    }
    var_s4 = (s64) ((temp_a0 - ((s64) (var_a2 << 0x30) >> 0x30)) << 0x30) >> 0x30;
    if (var_s4 <= 0) {
        var_s4 = 1;
    } else if (var_s4 >= 0xB) {
        var_s4 = 0xA;
    }
    if ((u32) (func_0012EAE0(0x10, var_a1, var_a2, var_a3) & 0xFF) < (u32) (((s64) (var_s4 << 0x30) >> 0x30) * 3)) {
        var_s1 = (s64) ((temp_s0 * 2) << 0x30) >> 0x30;
        if (*(u16 *)((u8 *)(*(s32 *)((u8 *)arg0 + 0x244) + (var_s1 << 5)) + 0x3048) == ((s64) (arg1 << 0x30) >> 0x30)) {
            var_s1 = (s64) ((var_s1 + 1) << 0x30) >> 0x30;
        }
    }
    return var_s1;
}
