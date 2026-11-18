/* Draft (not built): func_002E5260 at 0x002E5260, size 0x148, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x184, original 0x148
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E5260.s */

// src/unk/unk_2E4030.c func_002E5260 size diff=40/97
void func_002E5260(u8 *arg0) {
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
    var_s7 = 0x10000 / (s32) *(u8 *)((u8 *)arg0 + 0xF3);
    do {
        temp_a0 = *(s32 *)((u8 *)var_s0 + 0x30);
        var_s2 = var_s0 + 0x30;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 0);
            *(s32 *)((u8 *)var_s0 + 0x30) = 0;
        }
        var_s1 += 1;
        var_s0 += 0xC;
    } while (var_s1 < 0xD);
    var_s3 = 0;
    if ((s32) *(u8 *)((u8 *)var_s6 + 0xF3) > 0) {
        var_s2 = var_s6;
        var_s1 = 0;
        var_s0 = var_s6;
        do {
            var_s4 = var_s2 + 0x30;
            *(s32 *)((u8 *)var_s2 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s6 + 0)) + 0x1C)) + 0x130), 0);
            *(s32 *)((u8 *)var_s4 + 4) = var_s1;
            *(s16 *)((u8 *)var_s4 + 8) = (s16) *(s16 *)((u8 *)var_s0 + 0xD6);
            if (*(s16 *)((u8 *)var_s4 + 8) == *(s16 *)((u8 *)var_s6 + 0xF0)) {
                var_s5 = var_s3 << 0x30;
                var_s5 = var_s5 >> 0x30;
            }
            var_s3 += 1;
            var_s2 += 0xC;
            var_s1 += var_s7;
            var_s0 += 2;
        } while (var_s3 < (s32) *(u8 *)((u8 *)var_s6 + 0xF3));
    }
    *(s8 *)((u8 *)var_s6 + 0xF2) = (s8) var_s5;
    *(s32 *)((u8 *)var_s6 + 0xF8) = (s32) *(u16 *)((u8 *)(var_s6 + (((s64) (var_s5 << 0x30) >> 0x30) * 0xC)) + 0x34);
}
