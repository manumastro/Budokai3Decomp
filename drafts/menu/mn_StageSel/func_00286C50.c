/* Draft (not built): func_00286C50 at 0x00286C50, size 0x148, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x184, original 0x148
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00286C50.s */

// src/menu/mn_StageSel.c func_00286C50 size diff=41/97
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
void func_00286C50(u8 *arg0) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_s7;
    s64 var_s3;
    s64 var_s5;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s4;
    u8 *var_s6;

    var_s6 = arg0;
    var_s5 = 0;
    var_s1 = 0;
    var_s0 = var_s6;
    var_s7 = 0x10000 / (s32) *(u8 *)((u8 *)arg0 + 0x261);
    do {
        temp_a0 = *(s32 *)((u8 *)var_s0 + 0x44);
        var_s2 = var_s0 + 0x44;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            *(s32 *)((u8 *)var_s0 + 0x44) = 0;
        }
        var_s1 += 1;
        var_s0 += 0xC;
    } while (var_s1 < 0xD);
    var_s3 = 0;
    if ((s32) *(u8 *)((u8 *)var_s6 + 0x261) > 0) {
        var_s2 = var_s6;
        var_s1 = 0;
        var_s0 = var_s6;
        do {
            var_s4 = var_s2 + 0x44;
            *(s32 *)((u8 *)var_s2 + 0x44) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s6 + 0)) + 0x1C)) + 0x30), 0);
            *(s32 *)((u8 *)var_s4 + 4) = var_s1;
            *(s16 *)((u8 *)var_s4 + 8) = (s16) *(s16 *)((u8 *)var_s0 + 0x242);
            if (*(s16 *)((u8 *)var_s4 + 8) == *(s16 *)((u8 *)var_s6 + 0x25C)) {
                var_s5 = var_s3 << 0x30;
                var_s5 = var_s5 >> 0x30;
            }
            var_s3 += 1;
            var_s2 += 0xC;
            var_s1 += var_s7;
            var_s0 += 2;
        } while (var_s3 < (s32) *(u8 *)((u8 *)var_s6 + 0x261));
    }
    *(s8 *)((u8 *)var_s6 + 0x260) = (s8) var_s5;
    *(s32 *)((u8 *)var_s6 + 0x26C) = (s32) *(u16 *)((u8 *)(var_s6 + (((s64) (var_s5 << 0x30) >> 0x30) * 0xC)) + 0x48);
}
