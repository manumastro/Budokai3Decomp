/* Draft (not built): func_001B24E0 at 0x001B24E0, size 0x120, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 10 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001B24E0.s */

void func_001B24E0(u8 *arg0) {
    s32 var_v0;
    Fighter_ResetMotion(arg0, 0);
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        func_001DDD50(arg0);
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0 && *(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)*(u8 **)((u8 *)arg0 + 0xBB4) + 0xC) - *(f32 *)((u8 *)arg0 + 0x1844) <= 0.0f) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0x1864) = (s32)(*(s32 *)((u8 *)arg0 + 0x1864) | 8);
        }
        func_001E5040(arg0);
        if (0 <= *(s16 *)((u8 *)arg0 + 0x13A4)) {
            var_v0 = func_001C2B10(arg0);
        } else {
            var_v0 = func_001E94C0(arg0);
        }
        if (var_v0 == 0) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        } else {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_v0 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_00468460[var_v0](arg0);
        func_002CBFF0(1, arg0);
        func_001ABD30((struct Fighter *)(arg0 + 0x1360));
    }
}

/* Similar function already in C: func_001B1900 (src/battle/btl_main.c), similarity 0.96.
 * It is the template below (not built). */
#if 0
void func_001B1900(Fighter *f) {
    s32 r;
    void *p;
    Fighter_ResetMotion(f, 0);
    if (FT_FIELD(f, s32, 0xC64) != 0) {
        ((FighterMain2 *)f)->unk1864 = 1;
        if (((FighterMain2 *)f)->unk1FF9 != 0) {
            p = FT_FIELD(f, void *, 0xBB4);
            if (FT_FIELD(f, f32, 0x44) - FT_FIELD(p, f32, 0xC) - FT_FIELD(f, f32, 0x1844) <= 0.0f) {
                FT_FIELD(f, s8, 0x1FF9) = 0;
                FT_FIELD(f, s32, 0x1864) |= 8;
            }
        }
        func_001E5040(f);
        if (FT_FIELD(f, s16, 0x13A4) > -1) {
            r = func_001C2B10(f);
        } else {
            r = func_001E94C0(f);
        }
        if (r == 0) {
            FT_FIELD(f, s16, 0xCB4) = 1;
        } else {
            FT_FIELD(f, s16, 0xCB4) = 0;
        }
        FT_FIELD(f, s8, 0x2004) = 1;
        FT_FIELD(f, s8, 0x1FFB) = 1;
        if (r != 0xF) {
            FT_FIELD(f, s16, 0xCB6) = 0;
        }
        FT_FIELD(f, s8, 0x2006) = 0;
        D_00468460[r](f);
        func_002CBFF0(1, f);
    }
}
#endif
