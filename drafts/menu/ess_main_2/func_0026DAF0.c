/* Draft (not built): func_0026DAF0 at 0x0026DAF0, size 0x190, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x188, original 0x190
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026DAF0.s */

// src/menu/ess_main_2.c func_0026DAF0 size diff=52/98
extern s64 D_004B4B48;
extern s32 D_004B4B50;
extern char D_004B4B40[];
void func_0026DAF0(u8 *arg0, s32 arg1) {
    if (arg1 == 0x203) {
        goto block_13;
    }
    if (arg1 == 0x202) {
        goto block_11;
    }
    if (arg1 == 0x201) {
        goto block_8;
    }
    if (arg1 == 0x200) {
        goto block_5;
    }
    goto block_15;
block_5:
    if (*(s8 *)((u8 *)arg0 + 0xA4) >= 0) {
        goto block_27;
    }
    *(s8 *)((u8 *)arg0 + 0xA4) = 0;
    return;
block_8:
    if (*(s8 *)((u8 *)arg0 + 0xA4) > 0) {
        goto block_27;
    }
    *(s8 *)((u8 *)arg0 + 0xA4) = 1;
    return;
block_11:
    if (*(s8 *)((u8 *)arg0 + 0xA4) >= 2) {
        goto block_27;
    }
    *(s8 *)((u8 *)arg0 + 0xA4) = 2;
    return;
block_13:
    if (*(s8 *)((u8 *)arg0 + 0xA4) >= 3) {
        goto block_27;
    }
    *(s8 *)((u8 *)arg0 + 0xA4) = 3;
    return;
block_15:
    if (arg1 < 0x1C9) {
        goto block_19;
    }
    if (arg1 >= 0x1EF) {
        goto block_19;
    }
    *(s64 *)((u8 *)arg0 + 0xB8) = (s64) (*(s64 *)((u8 *)arg0 + 0xB8) | (1 << (s64) D_0046B1CE[arg1]));
    if ((s32)(arg0) != (s32)(D_004B4B40)) {
        goto block_27;
    }
    D_004B4B48 |= *(s64 *)((u8 *)arg0 + 0xB8);
    return;
block_19:
    if (arg1 < 0x205) {
        goto block_24;
    }
    if (arg1 >= 0x211) {
        goto block_24;
    }
    *(s32 *)((u8 *)arg0 + 0xAC) = (s32) (*(s32 *)((u8 *)arg0 + 0xAC) | (1 << (arg1 - 0x205)));
    if ((s32)(arg0) != (s32)(D_004B4B40)) {
        goto block_27;
    }
    D_004B4B50 |= *(s32 *)((u8 *)arg0 + 0xAC);
    return;
block_24:
    if (arg1 != 0x204) {
        goto block_27;
    }
    *(s32 *)((u8 *)arg0 + 0xAC) = (s32) (*(s32 *)((u8 *)arg0 + 0xAC) | 0x800);
    if ((s32)(arg0) != (s32)(D_004B4B40)) {
        goto block_27;
    }
    D_004B4B50 |= *(s32 *)((u8 *)arg0 + 0xAC);
block_27:
    return;
}

/* Similar function already in C: func_0026D9C0 (src/menu/ess_main_2.c), similarity 0.69.
 * It is the template below (not built). */
#if 0
void func_0026D9C0(u8 *a0, s32 a1) {
    switch (a1) {
    case 0x200:
        if (*(s8 *)(a0 + 0xA0) < 0) {
            *(s8 *)(a0 + 0xA0) = 0;
        }
        break;
    case 0x201:
        if (*(s8 *)(a0 + 0xA0) <= 0) {
            *(s8 *)(a0 + 0xA0) = 1;
        }
        break;
    case 0x202:
        if (*(s8 *)(a0 + 0xA0) < 2) {
            *(s8 *)(a0 + 0xA0) = 2;
        }
        break;
    case 0x203:
        if (*(s8 *)(a0 + 0xA0) < 3) {
            *(s8 *)(a0 + 0xA0) = 3;
        }
        break;
    default:
        if (a1 >= 0x1C9 && a1 < 0x1EF) {
            *(u64 *)(a0 + 0x90) |= (u64)1 << D_0046B1CE[a1];
        } else if (a1 >= 0x205 && a1 < 0x211) {
            *(u16 *)(a0 + 0xA4) |= (u16)(1 << (a1 - 0x205));
        } else if (a1 == 0x204) {
            *(u16 *)(a0 + 0xA4) |= 0x800;
        }
        break;
    }
}
#endif
