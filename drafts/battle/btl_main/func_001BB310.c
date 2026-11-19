/* Draft (not built): func_001BB310 at 0x001BB310, size 0x948, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 382 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x82C, original 0x948
 * Original: asm/nonmatchings/battle/btl_main/func_001BB310.s */

// src/battle/btl_main.c func_001BB310 size diff=382/523
extern s32 func_001DFE60(Fighter *c, s32 a, f32 v);
s32 func_001D0990(void *, void *, s32, f32);
s32 func_001D9AB0(void *, s32);
s32 func_001DF420(s16, s32);
s32 func_001E3010(void *);
s32 func_001E3100(void *);
s32 func_001E80B0(void *);
s32 func_001E9190(void *);
s32 func_001E91D0(void *);
s32 func_00247090(void *, s32);
extern s32 D_004E0660;
void func_001BB310(u8 *arg0) {
    s32 sp60;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 var_f3;
    s16 temp_a0;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v1_4;

    temp_s1 = arg0 + 0x1360;
    temp_s2 = (unsigned char *)(gBattle);
    temp_f20 = *(f32 *)((u8 *)temp_s2 + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        temp_a1 = *(u8 **)((u8 *)arg0 + 0x17A0);
        if (temp_a1 != NULL) {
            if ((*(s32 *)((u8 *)temp_s1 + 0x1F4) == 0) && (*(s16 *)((u8 *)arg0 + 0x1A5C) == 0)) {
                temp_v1 = *(s32 *)((u8 *)temp_a1 + 8);
                if (temp_v1 & 1) {
                    func_001DFE60(0, (f32) *(s16 *)((u8 *)temp_a1 + 0x12), 0);
                } else if (temp_v1 & 2) {
                    func_001DF420(*(s16 *)((u8 *)temp_a1 + 0x10), 0);
                    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 8) & 8) {
                        *(s16 *)((u8 *)arg0 + 0x1A5A) = 1;
                    }
                    *(s16 *)((u8 *)arg0 + 0x1A58) = (s16) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 0x10);
                    temp_a0 = *(s16 *)((u8 *)arg0 + 0x1A58);
                    if ((temp_a0 > 0) && (*(s16 *)((u8 *)(&D_004E0660 + (temp_a0 * 0x28)) + 0x1C) == 0)) {
                        func_001E9B00(1, 0x16, 0, 0, 0, 0x3F800000);
                    }
                }
                if (*(s16 *)((u8 *)arg0 + 0x13A4) < 0) {
                    func_001D9AB0(arg0, -1);
                }
                *(s16 *)((u8 *)arg0 + 0x1A5C) = 1;
            }
        } else {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        }
    }
    temp_v1_2 = *(s16 *)((u8 *)arg0 + 0xCB4);
    switch (temp_v1_2) {                            /* irregular */
    case 2:
        var_f3 = 0.0f;
        temp_f0 = 1.0f - (0.2f * *(f32 *)((u8 *)arg0 + 0xCB8));
        if (!(temp_f0 >= 0.0f)) {

        } else {
            var_f3 = temp_f0;
        }
        func_00146F10(&sp60, arg0 + 0xD0, temp_f20 * var_f3);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        break;
    case 3:
        temp_f1 = *(f32 *)((u8 *)arg0 + 0xCB8) / *(f32 *)((u8 *)arg0 + 0x182C);
        if (!(temp_f1 <= 1.0f)) {

        } else if (temp_f1 < 0.0f) {

        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        break;
    }
    var_s0 = *(s32 *)((u8 *)temp_s1 + 0x3F8);
    if (!(*(f32 *)((u8 *)arg0 + 0x1848) < 0.0f) && (temp_v1_3 = *(s32 *)((u8 *)temp_s1 + 0x3FC), temp_v0 = *(u8 **)((u8 *)((temp_v1_3 * 0x10) + temp_s1) + 0x204), (temp_v0 != NULL))) {
        var_s0 = (temp_v1_3 + 1) & 0x1F;
        if (*(s16 *)((u8 *)temp_v0 + 0xE) <= 0) {
            var_s0 = (var_s0 + 1) & 0x1F;
        }
        temp_a0_2 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x3FC) * 0x10) + temp_s1) + 0x204);
        if (temp_a0_2 == NULL) {
            func_001E3100(arg0);
        } else if (*(s16 *)((u8 *)temp_s1 + 0x44) >= 0) {
            var_v1 = 0;
            if ((*(s16 *)((u8 *)temp_a0_2 + 2) & 1) && !(((f32) *(s32 *)((u8 *)temp_s1 + 0x48) * *(f32 *)((u8 *)temp_s2 + 0x88F0)) < *(f32 *)((u8 *)arg0 + 0x1848))) {
                var_v1 = 1;
            }
            if ((*(s16 *)((u8 *)temp_a0_2 + 2) & 2) && !(((f32) *(s32 *)((u8 *)temp_s1 + 0x4C) * *(f32 *)((u8 *)temp_s2 + 0x88F0)) < *(f32 *)((u8 *)arg0 + 0x1848))) {
                var_v1 = 1;
            }
            if ((*(s16 *)((u8 *)temp_a0_2 + 2) & 8) && !(((f32) *(s32 *)((u8 *)temp_s1 + 0x54) * *(f32 *)((u8 *)temp_s2 + 0x88F0)) < *(f32 *)((u8 *)arg0 + 0x1848))) {
                var_v1 = 1;
            }
            if (var_v1 == 0) {
                func_001E3100(arg0);
            }
        } else if (func_001E91D0(arg0) == 0) {
            func_001E3100(arg0);
        }
    } else if (!(*(f32 *)((u8 *)arg0 + 0x1848) < 0.0f)) {
        func_001E3100(arg0);
        *(f32 *)((u8 *)arg0 + 0x1848) = -1.0f;
    }
    temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x1848);
    if (!(temp_f1_2 < 0.0f)) {
        *(s8 *)((u8 *)arg0 + 0x2003) = 1;
        if (var_s0 != *(s32 *)((u8 *)temp_s1 + 0x3F8)) {
            *(s32 *)((u8 *)temp_s1 + 0x3F8) = var_s0;
            *(s32 *)((u8 *)temp_s1 + 0x1E8) = (s32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s1 + 0x3FC) * 0x10) + temp_s1) + 0x204);
        }
        if (!((*(f32 *)((u8 *)arg0 + 0xCB8) - temp_f1_2) < 30.0f)) {
            func_001E3010(arg0);
        } else {
            var_s0_2 = 0;
            if (*(s16 *)((u8 *)temp_s1 + 0x44) >= 0) {
                if (*(s32 *)((u8 *)temp_s1 + 0x50) == 1) {
                    var_s0_2 = 1;
                }
            } else if (func_001E9190(arg0) != 0) {
                var_s0_2 = 1;
            }
            if (var_s0_2 != 0) {
                func_001E3100(arg0);
                *(s8 *)((u8 *)arg0 + 0x2002) = 1;
                *(s32 *)((u8 *)arg0 + 0x1864) = 1;
                func_001E5040(arg0);
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_00468460[0](arg0);
                func_002CBFF0(1, arg0);
                *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F400000;
                *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3CF5C28F;
                *(s8 *)((u8 *)arg0 + 0x2002) = 0;
                func_001ABD30((struct Fighter *)(temp_s1));
                func_001D9AB0(arg0, -3);
            }
            *(s32 *)((u8 *)arg0 + 0x184C) = 0x3DCCCCCD;
        }
    }
    Fighter_ResetMotion(arg0, 1);
    temp_v1_4 = *(u8 **)((u8 *)arg0 + 0x17A0);
    if ((temp_v1_4 != NULL) && (*(s16 *)((u8 *)temp_v1_4 + 0x1E) != 0)) {
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
            if (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FF9) == 0) {
                if (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f) {
                    var_v1_2 = 1;
                } else {
                    var_v1_2 = 0;
                }
                if (var_v1_2 != 0) {
                    *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
                    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 0x18);
                    func_00247090(arg0, *(s32 *)((u8 *)arg0 + 0xB70));
                    func_001E80B0(arg0 + 0x650);
                    *(u8 **)((u8 *)arg0 + 0xAE0) = (u8 *) *(u8 **)((u8 *)arg0 + 0xB74);
                    func_001D0990(arg0 + 0x920, *(u8 **)((u8 *)arg0 + 0xB74), 5, *(f32 *)((u8 *)arg0 + 0xC58));
                    *(s32 *)((u8 *)arg0 + 0x1864) = 8;
                    func_001E5040(arg0);
                    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3ECCCCCD;
                    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E99999A;
                }
            }
        } else {
            temp_a0_3 = *(u8 **)((u8 *)arg0 + 0x1354);
            if (*(s8 *)((u8 *)temp_a0_3 + 0x1FF9) != 0) {
                if (((*(f32 *)((u8 *)temp_a0_3 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a0_3 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)temp_a0_3 + 0x1844)) <= 0.0f) {
                    var_v1_3 = 1;
                } else {
                    var_v1_3 = 0;
                }
                if ((var_v1_3 == 0) && (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) == 0)) {
                    temp_a0_4 = *(u8 **)((u8 *)arg0 + 0x1354);
                    temp_f3 = *(f32 *)((u8 *)arg0 + 0x64) - *(f32 *)((u8 *)temp_a0_4 + 0x64);
                    temp_f5 = *(f32 *)((u8 *)arg0 + 0x60) - *(f32 *)((u8 *)temp_a0_4 + 0x60);
                    temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x68) - *(f32 *)((u8 *)temp_a0_4 + 0x68);
                    temp_f3_2 = temp_f3 * temp_f3;
                    if (!(temp_f3_2 <= 4.0f) && ((((temp_f5 * temp_f5) + (temp_f1_3 * temp_f1_3)) / temp_f3_2) < 5.0f)) {
                        *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
                        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 0x1E);
                        func_00247090(arg0, *(s32 *)((u8 *)arg0 + 0xB70));
                        func_001E80B0(arg0 + 0x650);
                        *(u8 **)((u8 *)arg0 + 0xAE0) = (u8 *) *(u8 **)((u8 *)arg0 + 0xB74);
                        func_001D0990(arg0 + 0x920, *(u8 **)((u8 *)arg0 + 0xB74), 5, *(f32 *)((u8 *)arg0 + 0xC58));
                        *(s32 *)((u8 *)arg0 + 0x1864) = 4;
                        func_001E5040(arg0);
                        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3ECCCCCD;
                        *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E99999A;
                    }
                }
            }
        }
    }
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        if (*(s16 *)((u8 *)arg0 + 0xCB6) <= 0) {
            var_v1_4 = 1;
            *(s32 *)((u8 *)arg0 + 0x1864) = 1;
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                if (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f) {

                } else {
                    var_v1_4 = 0;
                }
                if (var_v1_4 != 0) {
                    *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
                    *(s32 *)((u8 *)arg0 + 0x1864) = (s32) (*(s32 *)((u8 *)arg0 + 0x1864) | 8);
                    *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
                    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
                }
            }
            temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10);
            func_001E5040(arg0);
            if (temp_s0 & 1) {
                *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                var_v0 = 0x12;
            } else if (temp_s0 & 2) {
                var_v0 = 0x12;
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            } else {
                if (*(s16 *)((u8 *)temp_s1 + 0x44) >= 0) {
                    var_v0 = func_001C2B10(arg0);
                } else {
                    var_v0 = func_001E94C0(arg0);
                }
                if (var_v0 == 0) {
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                } else {
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                }
            }
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            if (var_v0 != 0xF) {
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            }
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            (&D_00468460)[var_v0](arg0);
            func_002CBFF0(1, arg0);
            func_001ABD30((struct Fighter *)(temp_s1));
            func_001D9AB0(arg0, -2);
        }
    } else {
        func_001BFD60(arg0);
    }
}
