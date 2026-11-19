/* Draft (not built): func_001B42D0 at 0x001B42D0, size 0x3EC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 2793: *(((u8 *)&D_00468460) + (var_v0_2 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001B42D0.s */

// src/battle/btl_main.c func_001B42D0 cerr diff=-1/0
s32 func_001E8D10(void *);
void func_001B42D0(u8 *arg0) {
    s32 sp30;
    s32 sp3C;
    s32 sp40;
    s32 sp60;
    s32 sp6C;
    s32 sp70;
    f32 temp_f1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 *temp_s0;

    Fighter_ResetMotion(0, 0);
    if ((*(s16 *)((u8 *)arg0 + 0xCB4) == 0) && (*(s8 *)((u8 *)arg0 + 0xCBD) == 1) && !(*(f32 *)((u8 *)arg0 + 0xCB8) <= 5.0f)) {
        *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x2003) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
        sp70 = *(s32 *)((u8 *)arg0 + 0x1350);
        sp6C = 1;
        func_00218440(0xE, &sp60);
        func_001E9B00(1, 0x53, 0, 0, 0, 0x3F800000);
    } else if (!(*(f32 *)((u8 *)arg0 + 0xCB8) <= 10.0f)) {
        *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
        }
    }
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        temp_f1 = *(f32 *)((u8 *)arg0 + 0xCB8);
        if (temp_f1 < 10.0f) {
            temp_s0 = arg0 + 0x1360;
            if (gBattle != NULL) {
                var_v1 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x20;
            } else {
                var_v1 = 0;
            }
            if (var_v1 != 0) {
                var_v1_2 = 1;
            } else {
                var_v1_3 = 0;
                if (gBattle != NULL) {
                    var_v1_3 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x10;
                }
                if (var_v1_3 != 0) {
                    var_v1_2 = 0;
                } else if (*(s8 *)((u8 *)arg0 + 0x2013) == 0) {
                    if (*(s16 *)((u8 *)temp_s0 + 0x44) >= 0) {
                        var_v1_2 = 1;
                        if (!((f32) *(s32 *)((u8 *)arg0 + 0x13B0) < temp_f1)) {
                            var_v1_2 = 0;
                        }
                    } else {
                        var_v1_2 = func_001E8D10(arg0);
                    }
                } else {
                    var_v1_2 = 1;
                }
            }
            if (var_v1_2 != 0) {
                if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
                    *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
                    *(s32 *)((u8 *)arg0 + 0x1864) = 4;
                    func_001E5040(arg0);
                }
                var_v0 = 0xFC;
                if (!((*(f32 *)((u8 *)temp_s0 + 0x30) - *(f32 *)((u8 *)temp_s0 + 0x38)) <= 0.0f)) {
                    var_v0 = 0xFE;
                }
                *(s32 *)((u8 *)arg0 + 0xB70) = var_v0;
                *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                sp40 = *(s32 *)((u8 *)arg0 + 0x1350);
                sp3C = 1;
                func_00218440(0xE, &sp30);
                func_001E9B00(1, 0x53, 0, 0, 0, 0x3F800000);
                func_001ABD30((struct Fighter *)(temp_s0));
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_0046849C[0](arg0);
                func_002CBFF0(1, arg0);
                *(s8 *)((u8 *)arg0 + 0x201B) = 1;
                return;
            }
            goto block_37;
        }
    }
block_37:
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if ((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) && (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f)) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0x1864) = (s32) (*(s32 *)((u8 *)arg0 + 0x1864) | 8);
            *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3DCCCCCD;
            *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
        }
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_v0_2 = func_001C2B10(arg0);
        } else {
            var_v0_2 = func_001E94C0(arg0);
        }
        func_001E5040(arg0);
        if (var_v0_2 == 0) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        } else {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_v0_2 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        *(((u8 *)&D_00468460) + (var_v0_2 * 4))(arg0);
        func_002CBFF0(1, arg0);
    }
}
