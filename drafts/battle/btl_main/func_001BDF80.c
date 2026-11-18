/* Draft (not built): func_001BDF80 at 0x001BDF80, size 0x2F8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 4033: *(&D_00468460 + (var_s0 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001BDF80.s */

// src/battle/btl_main.c func_001BDF80 cerr diff=-1/0
void func_001BDF80(u8 *arg0) {
    f32 temp_f20;
    s32 var_s0;

    var_s0 = -1;
    temp_f20 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if (!(*(u16 *)((u8 *)arg0 + 0xCB2) & 0x40) && (*(f32 *)((u8 *)arg0 + 0xC60) <= 10.0f)) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
        }
    } else {
        func_001ABD30((void *)(arg0 + 0x1360));
    }
    Fighter_ResetMotion(arg0, 0);
    if (*(u16 *)((u8 *)arg0 + 0xCB2) & 0x40) {
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_s0 = func_001C2B10(arg0);
            if (*(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x13B8) * 4) + (arg0 + 0x1360)) + 0x64) > 0) {
                if (!(*(f32 *)((u8 *)arg0 + 0xCB8) < (15.0f * temp_f20))) {
                    goto block_13;
                }
            } else {
block_13:
                *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
                if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
                    *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
                }
                if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
                    *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
                }
                goto block_26;
            }
        } else {
            var_s0 = func_001E94C0(arg0);
            if ((var_s0 != 2) || !(*(f32 *)((u8 *)arg0 + 0xCB8) < (15.0f * temp_f20))) {
                *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
                if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
                    *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
                }
                if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
                    *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
                }
block_26:
                *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
            }
        }
    }
    if (*(s32 *)((u8 *)arg0 + 0xC64) == 0) {
        if (var_s0 == 9) {
            goto block_30;
        }
    } else {
block_30:
        if (var_s0 < 0) {
            if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
                var_s0 = func_001C2B10(arg0);
            } else {
                var_s0 = func_001E94C0(arg0);
            }
            if (var_s0 == 9) {
                var_s0 = 2;
            }
        }
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if ((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) && (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f)) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0x1864) = (s32) (*(s32 *)((u8 *)arg0 + 0x1864) | 8);
        }
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
    }
}
