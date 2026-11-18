/* Draft (not built): func_0030C0E0 at 0x0030C0E0, size 0x19C, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x19C
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030C0E0.s */

// src/unk/unk_30B130.c func_0030C0E0 size diff=59/86
void func_0030C0E0(u8 *arg0) {
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_s3;
    u8 *var_s5;

    var_v1 = 0xC;
    var_s5 = arg0;
    var_a0 = &spA0;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    var_s1 = 0;
    var_s0 = &spA0;
    spA0 = *(s32 *)((u8 *)var_s5 + 0x5C);
    spA4 = *(s32 *)((u8 *)var_s5 + 0x64);
    spA8 = *(s32 *)((u8 *)var_s5 + 0x60);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    var_s4 = 0;
    do {
        var_a0_2 = &sp90;
        var_s3 = var_s5 + 0x68;
        var_v1_2 = 0x10;
        if (var_a0_2 != NULL) {
            do {
                *var_a0_2 = 0;
                var_v1_2 -= 1;
                var_a0_2 += 1;
            } while (var_v1_2 != 0);
        }
        var_s2 = 0;
        var_s0_2 = &sp90;
        sp90 = *(s32 *)((u8 *)var_s3 + 4);
        sp94 = *(s32 *)((u8 *)var_s3 + 8);
        sp98 = *(s32 *)((u8 *)var_s3 + 0xC);
        sp9C = *(s32 *)((u8 *)var_s3 + 0x10);
loop_10:
        temp_a0_2 = *var_s0_2;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        var_s2 += 1;
        var_s0_2 += 4;
        if (var_s2 < 4) {
            goto loop_10;
        }
        var_s0_3 = 0;
loop_14:
        temp_a0_3 = *(s32 *)((u8 *)var_s3 + 0x14);
        if (temp_a0_3 != 0) {
            func_0022D4B0(temp_a0_3, 1);
        }
        var_s0_3 += 1;
        var_s3 += 4;
        if (var_s0_3 < 8) {
            goto loop_14;
        }
        var_s4 += 1;
        var_s5 += 0x34;
    } while (var_s4 < 8);
}
