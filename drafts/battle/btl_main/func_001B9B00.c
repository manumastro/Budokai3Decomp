/* Draft (not built): func_001B9B00 at 0x001B9B00, size 0x19C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 3325: *(&D_00468460 + (var_s0 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001B9B00.s */

// src/battle/btl_main.c func_001B9B00 cerr diff=-1/0
void func_001B9B00(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    Fighter_ResetMotion(0, 0);
    if (*(f32 *)((u8 *)arg0 + 0xC60) <= 20.0f) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
        }
        *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_s0 = func_001C2B10(arg0);
        } else {
            var_s0 = func_001E94C0(arg0);
        }
        if ((var_s0 != 8) && (var_s0 != 7) && (var_s0 != 0xB) && (var_s0 != 6)) {
            var_s0 = 0;
        }
    }
    if (*(s32 *)((u8 *)arg0 + 0xC64) == 0) {
        if (var_s0 != 0) {
            goto block_17;
        }
    } else {
block_17:
        func_001D9BF0(arg0);
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        func_001E5040(arg0);
        if (var_s0 == 0) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        } else {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_s0 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        *(&D_00468460 + (var_s0 * 4))(arg0);
        func_002CBFF0(1, arg0);
        func_001ABD30((void *)(arg0 + 0x1360));
    }
}
