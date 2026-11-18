/* Draft (not built): func_00307C00 at 0x00307C00, size 0xF0, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: relaxmatch
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); identical code, but it only compiles with -relax_pointers: add the pointer casts
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307C00.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_00307C00 relaxmatch diff=0/60
s32 func_0022D0E0(s32, s32);
void func_00307C00(u8 **arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s2;
    u8 *var_s0;
    u8 *var_s1;

    var_s0 = *arg0;
    temp_a0 = *(s32 *)((u8 *)var_s0 + 0x58);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x5C);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        temp_a0_3 = *(s32 *)((u8 *)var_s1 + 0x60);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        temp_a0_4 = *(s32 *)((u8 *)var_s1 + 0x68);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    var_s1 = NULL;
    do {
        temp_a0_5 = *(s32 *)((u8 *)var_s0 + 0x70);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while ((s32) var_s1 < 7);
}
