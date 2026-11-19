/* Draft (not built): func_0026DC80 at 0x0026DC80, size 0x1A8, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026DC80.s */

// src/menu/ess_main_2.c func_0026DC80 diff diff=99/106
extern s32 D_0046B8F2;
extern s64 D_004B4B48;
extern s32 D_004B4B50;
extern char D_004B4B40[];
void func_0026DC80(u8 *arg0, u8 *arg1) {
    s32 *var_t0;
    s32 var_a2;
    s32 var_t0_2;
    s32 var_t1;

    *(s8 *)((u8 *)arg0 + 0xA4) = 0;
    *(s64 *)((u8 *)arg0 + 0xB8) = 0;
    *(s32 *)((u8 *)arg0 + 0xAC) = 0;
    *(s8 *)((u8 *)arg0 + 0xAA) = 0;
    *(s8 *)((u8 *)arg0 + 0xA9) = 0;
    if ((*(u8 *)((u8 *)arg1 + 0x200) != 0) && (*(s8 *)((u8 *)arg0 + 0xA4) < 0)) {
        *(s8 *)((u8 *)arg0 + 0xA4) = 0;
    }
    if ((*(u8 *)((u8 *)arg1 + 0x201) != 0) && (*(s8 *)((u8 *)arg0 + 0xA4) <= 0)) {
        *(s8 *)((u8 *)arg0 + 0xA4) = 1;
    }
    if ((*(u8 *)((u8 *)arg1 + 0x202) != 0) && (*(s8 *)((u8 *)arg0 + 0xA4) < 2)) {
        *(s8 *)((u8 *)arg0 + 0xA4) = 2;
    }
    if ((*(u8 *)((u8 *)arg1 + 0x203) != 0) && (*(s8 *)((u8 *)arg0 + 0xA4) < 3)) {
        *(s8 *)((u8 *)arg0 + 0xA4) = 3;
    }
    var_a2 = 0x1F0;
loop_13:
    if (*(arg1 + var_a2) != 0) {
        var_a2 += 1;
        *(s8 *)((u8 *)arg0 + 0xAA) = (s8) (*(s8 *)((u8 *)arg0 + 0xAA) + 1);
        if (var_a2 < 0x1FC) {
            goto loop_13;
        }
    }
    var_t1 = 0x1C9;
    var_t0 = &D_0046B8F2;
    do {
        if (*(arg1 + var_t1) != 0) {
            *(s64 *)((u8 *)arg0 + 0xB8) = (s64) (*(s64 *)((u8 *)arg0 + 0xB8) | (1 << (s64) *(s16 *)((u8 *)var_t0 + -0x392)));
        }
        var_t1 += 1;
        var_t0 += 2;
    } while (var_t1 < 0x1EF);
    if ((s32)(arg0) == (s32)(D_004B4B40)) {
        D_004B4B48 |= *(s64 *)((u8 *)arg0 + 0xB8);
    }
    if (*(u8 *)((u8 *)arg1 + 0x204) != 0) {
        *(s8 *)((u8 *)arg0 + 0xA9) = 1;
        *(s8 *)((u8 *)arg1 + 0x210) = 1;
    }
    var_t0_2 = 0x205;
    do {
        if (*(arg1 + var_t0_2) != 0) {
            *(s32 *)((u8 *)arg0 + 0xAC) = (s32) (*(s32 *)((u8 *)arg0 + 0xAC) | (1 << (var_t0_2 - 0x205)));
            if ((s32)(arg0) == (s32)(D_004B4B40)) {
                D_004B4B50 |= *(s32 *)((u8 *)arg0 + 0xAC);
            }
        }
        var_t0_2 += 1;
    } while (var_t0_2 < 0x211);
}
