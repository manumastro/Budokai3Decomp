/* Draft (not built): func_001B8E50 at 0x00468C70, size 0x0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 51 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C0, original 0x1F0
 * Original: asm/nonmatchings/battle/btl_main/func_001B8E50.s */

// src/battle/btl_main.c func_001B8E50 size diff=51/112
f32 func_00146E30(void *, void *);
void func_001B8E50(u8 *arg0) {
    s16 var_v0;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x16;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    var_v0 = -1;
    if (-1 == -1) {
        var_v0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    }
    switch (var_v0) {
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
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s8 *)((u8 *)arg0 + 0x183C) + 0x9A);
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0x1864) = 3;
    func_001E5040(arg0);
    *(f32 *)((u8 *)arg0 + 0x182C) = (f32) (1.0f + (func_00146E30(arg0 + 0x650, arg0 + 0x100) / 3.0f));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)arg0 + 0xCA4) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0xCA8) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xCB8) = 0.0f;
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
    *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
    func_001E2070(arg0);
    func_001ABD30((struct Fighter *)(arg0 + 0x1360));
}

/* Similar function already in C: func_001B8380 (src/battle/btl_main.c), similarity 0.81.
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
