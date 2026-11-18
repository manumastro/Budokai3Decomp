/* Draft (not built): func_001BC7C0 at 0x001BC7C0, size 0x2C0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 3754: *(&D_00468460 + (var_a1 * 4))(arg0, var_a1);
 * Original: asm/nonmatchings/battle/btl_main/func_001BC7C0.s */

// src/battle/btl_main.c func_001BC7C0 cerr diff=-1/0
void func_001BC7C0(u8 *arg0) {
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;

    Fighter_ResetMotion(0, 0);
    if ((*(s16 *)((u8 *)arg0 + 0xCB4) == 0) && (*(s32 *)((u8 *)arg0 + 0xC64) != 0)) {
        *(s32 *)((u8 *)arg0 + 0xB70) = 0xD;
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
            *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
        }
        func_001E3460(arg0);
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3DCCCCCD;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E99999A;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        if (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0xB70) = 0xD;
            func_001E3460(arg0);
            *(s32 *)((u8 *)arg0 + 0x1864) = 8;
            func_001E5040(arg0);
            *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
            var_v0 = 0x3CA3D70A;
            goto block_16;
        }
    } else if ((*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) && !(func_001E52B0(0) < 15.0f) && (*(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x13C0) * 4) + arg0) + 0x14C4) == -1) && (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) == 0)) {
        *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
        *(s32 *)((u8 *)arg0 + 0xB70) = 0xD;
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
            *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
        }
        func_001E3460(arg0);
        *(s32 *)((u8 *)arg0 + 0x1864) = 4;
        func_001E5040(arg0);
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
        var_v0 = 0x3C23D70A;
block_16:
        *(s32 *)((u8 *)arg0 + 0xCA8) = var_v0;
    }
    if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
        var_v0_2 = func_001C2B10(arg0);
    } else {
        var_v0_2 = func_001E94C0(arg0);
    }
    var_a1 = var_v0_2;
    if ((*(s16 *)((u8 *)arg0 + 0xCB4) == 1) && !(*(f32 *)((u8 *)arg0 + 0xCB8) < 60.0f) && (var_a1 == 0xB)) {
        var_a1 = 0xC;
    }
    if ((var_a1 >= 0) && (var_a1 != *(s16 *)((u8 *)arg0 + 0xCAC))) {
        *(s32 *)((u8 *)arg0 + 0x1770) = 0;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        if ((var_a1 == 7) || (var_a1 == 8)) {
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            if (var_a1 != 0xF) {
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            }
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            *(&D_00468460 + (var_a1 * 4))(arg0, var_a1);
            func_002CBFF0(1, arg0);
            return;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_00468490(arg0);
        func_002CBFF0(1, arg0);
    }
}
