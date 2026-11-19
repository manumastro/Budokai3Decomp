/* Draft (not built): func_00307C00 at 0x00307C00, size 0xF0, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal use of type 'void' @ 67: var_s0 = *arg0;
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307C00.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_00307C00 cerr diff=-1/0
s32 func_0022D0E0(s32, s32);
void func_00307C00(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s1_2;

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
    var_s2_2 = 0;
    var_s1_2 = var_s0;
    do {
        temp_a0_4 = *(s32 *)((u8 *)var_s1_2 + 0x68);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        var_s2_2 += 1;
        var_s1_2 += 4;
    } while (var_s2_2 < 2);
    var_s1_3 = 0;
    do {
        temp_a0_5 = *(s32 *)((u8 *)var_s0 + 0x70);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1);
        }
        var_s1_3 += 1;
        var_s0 += 4;
    } while (var_s1_3 < 7);
}

/* Similar function already in C: func_002B7DC0 (src/menu/mn_csmodel.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
void func_002B7DC0(u8 *s0) {
    s32 s2;
    u8 *s1;

    if (*(void **)s0 != 0) {
        func_0022D0E0(*(void **)s0, 1);
    }
    s2 = 0;
    s1 = s0;
    do {
        if (*(void **)(s1 + 0x4) != 0) {
            func_0022D0E0(*(void **)(s1 + 0x4), 1);
        }
        s2++;
        s1 += 4;
    } while (s2 < 2);
    if (*(void **)(s0 + 0xC) != 0) {
        func_0022D0E0(*(void **)(s0 + 0xC), 1);
    }
    s2 = 0;
    s1 = s0;
    do {
        if (*(void **)(s1 + 0x10) != 0) {
            func_0022D0E0(*(void **)(s1 + 0x10), 1);
        }
        s2++;
        s1 += 4;
    } while (s2 < 0xC);
    s2 = 0;
    s1 = s0;
    do {
        if (*(void **)(s1 + 0x40) != 0) {
            func_0022D0E0(*(void **)(s1 + 0x40), 1);
        }
        s2++;
        s1 += 4;
    } while (s2 < 2);
    if (*(void **)(s0 + 0x48) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x48), 1);
    }
    if (*(void **)(s0 + 0x4C) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x4C), 1);
    }
    if (*(void **)(s0 + 0x50) != 0) {
        func_0022D0E0(*(void **)(s0 + 0x50), 1);
    }
}
#endif
