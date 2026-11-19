/* Draft (not built): func_001B91B0 at 0x00468CA0, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x178, original 0x17C
 * Original: asm/nonmatchings/battle/btl_main/func_001B91B0.s */

// src/battle/btl_main.c func_001B91B0 size diff=29/94
void func_001B91B0(u8 *arg0) {
    s16 temp_v0;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x15;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    temp_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    switch (temp_v0) {
    case 0:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
        break;
    case 4:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
        break;
    case 5:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
        break;
    case 6:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
        break;
    case 7:
    case 8:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
        break;
    case 9:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
        break;
    case 11:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
        break;
    default:
        *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
        break;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s8 *)((u8 *)arg0 + 0x183C) + 0xA0);
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0x2004) = 0;
    func_001DD680(arg0);
}

/* Similar function already in C: func_001B8380 (src/battle/btl_main.c), similarity 0.97.
 * It is the template below (not built). */
#if 0
void func_001B8380(FighterSt *f) {
    f->fCAE = f->fCAC;
    f->fCAC = 0x18;
    if (f->fCAE == f->fCAC) {
        f->fCB0 = f->fCB0 + 1;
    } else {
        f->fCB0 = 0;
    }
    switch (f->fCAC) {
    case 0:
        f->fCB2 = 1;
        break;
    case 1:
        f->fCB2 = 2;
        break;
    case 4:
        f->fCB2 = 4;
        break;
    case 5:
        f->fCB2 = 8;
        break;
    case 6:
        f->fCB2 = 0x10;
        break;
    case 7:
    case 8:
        f->fCB2 = 0x20;
        break;
    case 9:
        f->fCB2 = 0x40;
        break;
    case 11:
        f->fCB2 = 0x80;
        break;
    default:
        f->fCB2 = 0;
        break;
    }
    if (f->f2010 != 0) {
        f->fCB2 |= 0x8000;
    }
    if (f->f2011 != 0) {
        f->fCB2 |= 0x4000;
    }
    f->fB70 = f->f183C + 0xAC;
    func_001E3460(f);
    f->fCA4 = 1.0f;
    f->fCA8 = 0.0f;
    f->fCB8 = 0;
    f->f2003 = 0;
    f->f1FFD = 0;
}
#endif
