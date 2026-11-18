/* Draft (not built): func_001B2820 at 0x001B2820, size 0x280, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 2269: *(&D_00468460 + (var_v0 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001B2820.s */

// src/battle/btl_main.c func_001B2820 cerr diff=-1/0
extern s32 func_001DFE60(Fighter *c, s32 a, f32 v);
s32 func_001D9AB0(void *, s32);
void func_001B2820(u8 *arg0) {
    s32 temp_v1_2;
    s32 var_v0;
    s64 temp_v1;
    u8 *temp_a0;

    Fighter_ResetMotion(0, 0);
    if ((*(s16 *)((u8 *)arg0 + 0x1A5C) == 0) && (*(s32 *)((u8 *)arg0 + 0x1554) == 0)) {
        temp_a0 = *(u8 **)((u8 *)arg0 + 0x17A0);
        if (*(s32 *)((u8 *)temp_a0 + 8) & 1) {
            func_001DFE60(arg0, 0, (f32) *(s16 *)((u8 *)temp_a0 + 0x12));
        }
        *(s16 *)((u8 *)arg0 + 0x1A5C) = 1;
    }
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        temp_v1 = *(s16 *)((u8 *)arg0 + 0xCB4) + 1;
        *(s16 *)((u8 *)arg0 + 0xCB4) = (s16) temp_v1;
        if (((s64) (temp_v1 << 0x30) >> 0x30) < *(s8 *)((u8 *)arg0 + 0x2014)) {
            if (func_001DFE60(arg0, 2, 10.0f) != 0) {
                *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB78) + (!(*(s16 *)((u8 *)arg0 + 0xCB4) & 1) ? 1 : 2));
                func_001E3460(arg0);
                *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3DCCCCCD;
                *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E99999A;
                return;
            }
            *(s16 *)((u8 *)arg0 + 0xCB4) = (s16) *(s8 *)((u8 *)arg0 + 0x2014);
            goto block_10;
        }
block_10:
        *(f32 *)((u8 *)arg0 + 0xC58) = (f32) *(s32 *)((u8 *)arg0 + 0xC5C);
        temp_v1_2 = *(s32 *)((u8 *)arg0 + 0xC54);
        *(s32 *)((u8 *)arg0 + 0xC5C) = (s32) *(s32 *)((u8 *)(((temp_v1_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1_2 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)arg0 + 0xB88)) + 0x46C)) + 0x14)) + 8);
        if (*(f32 *)((u8 *)arg0 + 0xC58) < (f32) *(s32 *)((u8 *)arg0 + 0xC5C)) {
            *(s32 *)((u8 *)arg0 + 0xC64) = 0;
        }
        goto block_12;
    }
block_12:
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if ((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) && (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f)) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0x1864) = (s32) (*(s32 *)((u8 *)arg0 + 0x1864) | 8);
            *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F000000;
            *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E4CCCCD;
        }
        func_001E5040(arg0);
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
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
        *(&D_00468460 + (var_v0 * 4))(arg0);
        func_002CBFF0(1, arg0);
        func_001ABD30((void *)(arg0 + 0x1360));
        func_001D9AB0(arg0, -2);
    }
}
