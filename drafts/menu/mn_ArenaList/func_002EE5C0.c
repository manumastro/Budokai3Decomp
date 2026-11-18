/* Draft (not built): func_002EE5C0 at 0x002EE5C0, size 0x1D8, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 73 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x158, original 0x1D8
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EE5C0.s */

// src/menu/mn_ArenaList.c func_002EE5C0 size diff=73/86
void func_002EE5C0(u8 *arg0) {
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
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

    var_v1 = 0x20;
    var_s5 = arg0;
    var_a0 = &spC0;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    var_s1 = 0;
    var_s0 = &spC0;
    spC0 = *(s32 *)((u8 *)var_s5 + 0x5C);
    spC4 = *(s32 *)((u8 *)var_s5 + 0x60);
    spC8 = *(s32 *)((u8 *)var_s5 + 0x78);
    spCC = *(s32 *)((u8 *)var_s5 + 0x74);
    spD0 = *(s32 *)((u8 *)var_s5 + 0x64);
    spD4 = *(s32 *)((u8 *)var_s5 + 0x68);
    spD8 = *(s32 *)((u8 *)var_s5 + 0x6C);
    spDC = *(s32 *)((u8 *)var_s5 + 0x70);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 8);
    var_s4 = 0;
    do {
        var_a0_2 = &spA0;
        var_s3 = var_s5 + 0x7C;
        var_v1_2 = 0x14;
        if (var_a0_2 != NULL) {
            do {
                *var_a0_2 = 0;
                var_v1_2 -= 1;
                var_a0_2 += 1;
            } while (var_v1_2 != 0);
        }
        var_s2 = 0;
        var_s0_2 = &spA0;
        spA0 = *(s32 *)((u8 *)var_s3 + 4);
        spA4 = *(s32 *)((u8 *)var_s3 + 8);
        spA8 = *(s32 *)((u8 *)var_s3 + 0xC);
        spAC = *(s32 *)((u8 *)var_s3 + 0x10);
        spB0 = *(s32 *)((u8 *)var_s3 + 0x14);
loop_10:
        temp_a0_2 = *var_s0_2;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        var_s2 += 1;
        var_s0_2 += 4;
        if (var_s2 < 5) {
            goto loop_10;
        }
        var_s0_3 = 0;
loop_14:
        temp_a0_3 = *(s32 *)((u8 *)var_s3 + 0x18);
        if (temp_a0_3 != 0) {
            func_0022D4B0(temp_a0_3, 1);
        }
        var_s0_3 += 1;
        var_s3 += 4;
        if (var_s0_3 < 8) {
            goto loop_14;
        }
        var_s4 += 1;
        var_s5 += 0x38;
    } while (var_s4 < 8);
}
