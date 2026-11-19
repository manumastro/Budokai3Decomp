/* Draft (not built): func_001B5630 at 0x001B5630, size 0x168, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x174, original 0x168
 * Original: asm/nonmatchings/battle/btl_main/func_001B5630.s */

// src/battle/btl_main.c func_001B5630 size diff=43/93
void func_001B5630(u8 *arg0) {
    f32 var_f12;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0x24;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
    if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
    }
    if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) ((*(s16 *)((u8 *)arg0 + 0xCB4) == 0) ? 0x2E : 0x28);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
    }
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 180.0f) != 0) {
        var_f12 = -1.0f;
    } else {
        var_f12 = 1.0f;
    }
    func_001E4820(var_f12, arg0, 0);
    func_001E3460(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3DCCCCCD;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0x2004) = 0;
    func_001DD680(arg0);
    if ((*(s16 *)((u8 *)arg0 + 0xCAE) != 0x12) || (*(s8 *)((u8 *)arg0 + 0x1FFA) != 1)) {
        func_001D9900(arg0, 0x12, 1);
    }
}

/* Similar function already in C: func_001BC110 (src/battle/btl_main.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_001BC110(Fighter *f) {
    FighterV *fv = (FighterV *)f;

    fv->unkCAE = fv->unkCAC;
    fv->unkCAC = 0xD;
    if (fv->unkCAE == fv->unkCAC) {
        fv->unkCB0 = fv->unkCB0 + 1;
    } else {
        fv->unkCB0 = 0;
    }
    fv->unkCB2 = 1;
    if (fv->unk2010 != 0) {
        fv->unkCB2 |= 0x8000;
    }
    if (fv->unk2011 != 0) {
        fv->unkCB2 |= 0x4000;
    }
    fv->unkB70 = (f32)fv->unk17AC > 3.1415927f ? 0x13 : 0x12;
    if (fv->unk1FF9 != 0) {
        fv->unkB70 += 0x100;
    }
    func_001E3460(f);
    FIGHTER_FIELD(f, s32, 0xCA4) = 0x3DCCCCCD;
    FIGHTER_FIELD(f, s32, 0xCA8) = 0x3CA3D70A;
    FIGHTER_FIELD(f, s32, 0xCB8) = 0;
    FIGHTER_FIELD(f, s8, 0x2003) = 1;
    FIGHTER_FIELD(f, s8, 0x1FFD) = 0;
    FIGHTER_FIELD(f, s16, 0x181C) = 0;
}
#endif
