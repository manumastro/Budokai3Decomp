/* Draft (not built): func_001C09A0 at 0x001C09A0, size 0x1814, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 894 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17CC, original 0x1814
 * Original: asm/nonmatchings/battle/btl_main/func_001C09A0.s */

// src/battle/btl_main.c func_001C09A0 size diff=894/1523
extern s32 func_0012EAE0(s32);
extern s32 func_001DFA90(Fighter *c, s32 idx);
s32 func_001C2A00(Fighter *f);
s32 func_001C3D10(Fighter *f);
s32 PlyVib_Start(void *, s32, s32, s32);
s32 dpmul(s32, s32);
s32 func_001214F8(f32);
s32 func_00121C78(s32, s32);
f32 func_001220B0(s32);
s32 func_001D7BC0(void *);
f32 func_001D7DF0(void *);
s32 func_001D7E50(void *, void *, u16);
s32 func_001D7FB0(void *, void *, s8, u16);
s32 func_001D9B30(void *);
s32 func_001DBFC0(void *);
s32 func_001DC080(void *);
s32 func_001DDA30(void *);
s32 func_001DFC80(void *, s32, s32);
s32 func_001E0200(void *, f32, s32);
s32 func_001E8D90(void *, s32);
s32 func_001E8E70(void *);
s32 func_001E8F20(void *);
extern s32 D_004686D0;
extern s32 D_00468708;
extern void func_00146F30(void *);
extern void func_001B0B10(void);
extern void func_001B0810(void);
s32 func_001C09A0(u8 *arg0) {
    s32 spB0;
    s32 spC0;
    s32 spDC;
    u16 spE0;
    u8 *spF0;
    u8 *spF4;
    s32 spF8;
    s32 spFC;
    void (*sp100)();
    void (*sp104)();
    s32 sp110;
    u8 *sp120;
    f32 *sp124;
    s32 sp128;
    f32 sp150;
    f32 sp154;
    f32 sp158;
    s32 sp15C;
    u8 *sp160;
    f32 *sp164;
    s32 sp168;
    f32 sp190;
    f32 sp194;
    f32 sp198;
    s32 sp19C;
    s32 sp1A0;
    s32 sp1B0;
    u8 *sp1C0;
    s32 *sp1C4;
    s32 sp1C8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f12_4;
    f32 var_f12_5;
    f32 var_f12_6;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f20;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_s7;
    s16 temp_v1;
    s16 temp_v1_4;
    s16 var_v0_6;
    s16 var_v0_8;
    s16 var_v0_9;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s32 var_fp;
    s32 var_fp_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_7;
    s8 var_s0;
    u8 *temp_s1;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_v0;
    u8 *temp_v1_3;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x17F0);
    temp_s7 = *(s16 *)((u8 *)arg0 + 0x17F8);
    temp_s6 = (unsigned char *)(gBattle);
    spE0 = *(u16 *)((u8 *)arg0 + 0x17FC);
    *(s8 *)((u8 *)arg0 + 0x2008) = 0;
    *(u16 *)((u8 *)arg0 + 0x17FC) = 0U;
    if (func_001C3D10(0) != 0) {
        return 0;
    }
    if (temp_s1 == NULL) {
        return 0;
    }
    *(u8 **)((u8 *)arg0 + 0x17F0) = NULL;
    if (temp_s7 == 0) {
        return 0;
    }
    *(s16 *)((u8 *)arg0 + 0x17F8) = 0;
    if (*(s16 *)((u8 *)temp_s6 + 0x8944) != 0) {
        return 0;
    }
    *(s8 *)((u8 *)temp_s6 + 0x8AAD) = 0;
    var_f20 = 1.0f;
    spC0 = 0;
    var_s4 = 0;
    var_s3 = 0;
    if (*(s8 *)((u8 *)temp_s1 + 0x201B) != 0) {
        var_s4 = 4;
    }
    var_fp = func_001D7BC0(arg0);
    if (*(s8 *)((u8 *)arg0 + 0x2004) != 0) {
        var_s0 = *(&D_004686D0 + *(s16 *)((u8 *)arg0 + 0xCAC));
    } else {
        var_s0 = -1;
    }
    if (func_001D7E50(arg0, temp_s1, spE0) != 0) {
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_v0 = func_001C2A00((Fighter *)(arg0));
        } else {
            var_v0 = func_001E8D90(arg0, 0);
        }
        if (var_v0 != 0) {
            func_001DFE60((Fighter *)(arg0), 8, func_001D7DF0(arg0));
            func_001DFC80(arg0, 0, 0x42C80000);
            func_001DFE60((Fighter *)(temp_s1), 0, -200.0f);
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_004684FC(arg0);
            func_002CBFF0(1, arg0);
            return 0;
        }
        goto block_21;
    }
block_21:
    if (var_s0 < 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp1B0);
        sp1C0 = arg0 + 0x130;
        sp1C8 = 0;
        sp1C4 = &sp1B0;
        func_00218440(8, &sp1C0);
        return 0;
    }
    func_001E1300(0);
    *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
    if (*(s16 *)((u8 *)arg0 + 0x13A4) < 0) {
        if (*(s8 *)((u8 *)gBattle + 0x8977) != 3) {
            if (*(s8 *)((u8 *)gBattle + 0x897A) != 0) {
                if (var_s0 == 0) {
                    var_s0 = 1;
                }
            }
        }
    }
    if (*(s16 *)((u8 *)arg0 + 0xAE4) & 0x40) {
        var_s0 = 2;
    }
    if (var_s0 != -1) {
        if (var_s0 != 4) {
            if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
                if (func_001E3D60(*(s32 *)((u8 *)temp_s1 + 0x17AC), 0x43340000) == 0) {
                    if (var_s0 != 2) {
                        var_s0 = 3;
                    }
                    var_s4 |= 2;
                }
            }
        }
    }
    if (var_s0 == 1) {
        if (*(s16 *)((u8 *)arg0 + 0xCAC) == 0xF) {
            if (*(s8 *)((u8 *)arg0 + 0x2006) != 0) {
                var_s4 |= 1;
            }
        } else {
            var_s4 |= 1;
        }
    }
    temp_v0 = *(u8 **)((u8 *)temp_s1 + 0x17A0);
    if (temp_v0 != NULL) {
        temp_a1 = *(s16 *)((u8 *)temp_v0 + 0x10);
        if (temp_a1 > 0) {
            var_s4 |= 0x8040;
            var_f20 = 1.0f + (0.25f * (f32) (func_001DFA90((Fighter *)(temp_s1), (s32)(temp_a1)) - 1));
            if (!(var_f20 <= 1.0f)) {

            } else {
                var_f20 = 1.0f;
            }
            spC0 = 1;
        }
    }
    if (temp_s7 == 2) {
        if (func_001DBFC0(arg0) <= 0) {
            return 0;
        }
        var_s0 = 0;
        goto block_54;
    }
block_54:
    if (var_s4 & 2) {
        func_001ABCC0((struct Fighter *)(arg0 + 0x1360));
    }
    if (var_s0 == 5) {
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_v0_2 = func_001C2B10(arg0);
        } else {
            var_v0_2 = func_001E94C0(arg0);
        }
        if (var_v0_2 != 1) {
            var_s0 = 0;
        }
    }
    spDC = (s32) var_s0;
    if (*(s8 *)((u8 *)temp_s1 + 0x2001) != 0) {
        var_s3 = 1;
        var_s0 = *(&D_00468708 + var_s0);
        var_f20 *= 1.5f;
        *(s8 *)((u8 *)temp_s1 + 0x2001) = 0;
        spDC = (s32) var_s0;
        func_001D9900(temp_s1, 0x15, 1);
        func_002CBFF0(2, temp_s1);
    } else if (spE0 & 0x20) {
        var_s0 = *(&D_00468708 + var_s0);
    }
    if (var_s3 == 0) {
        if (temp_s7 != 2) {
            if (func_001D7FB0(arg0, temp_s1, var_s0, spE0) != 0) {
                if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
                    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x13B0);
                    if (temp_v0_2 == 0) {
                        var_v0_3 = 0;
                    } else if (temp_v0_2 < -5) {
                        var_v0_3 = 0;
                    } else if (temp_v0_2 >= 0xB) {
                        var_v0_3 = 0;
                    } else {
                        var_v0_3 = 1;
                    }
                } else {
                    var_v0_3 = func_001E8E70(arg0);
                }
                if (var_v0_3 != 0) {
                    func_001DFE60((Fighter *)(arg0), 8, 300.0f);
                    func_001DFE60((Fighter *)(temp_s1), 0, -200.0f);
                    *(s16 *)((u8 *)arg0 + 0xCB4) = (s16) *(s32 *)((u8 *)arg0 + 0x140);
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_004684F8(arg0);
                    func_002CBFF0(1, arg0);
                    return 0;
                }
                sp1A0 = *(s32 *)((u8 *)arg0 + 0x1350);
                A2d_CallHandler(0xD, &sp1A0);
                goto block_85;
            }
            goto block_85;
        }
        goto block_85;
    }
block_85:
    temp_s5 = (unsigned char *)(*(s16 **)((u8 *)arg0 + 0x17F4) + (var_s0 * 0x10));
    if (var_fp != 0) {
        if (var_s3 != 0) {
            var_fp = 0;
        }
        if (spC0 != 0) {
            var_fp = 0;
        }
        if (temp_s7 == 2) {
            var_fp = 0;
        }
        if (spE0 & 0x20) {
            var_fp = 0;
        }
        if (*(s16 *)((u8 *)temp_s5 + 4) == 2) {
            var_fp = 0;
        }
    }
    if (*(s16 *)((u8 *)arg0 + 0xCAC) == 0x12) {
        temp_v1 = *(s16 *)((u8 *)temp_s5 + 0);
        var_v0_4 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0_4 = (s32) (temp_v1 + 1) >> 1;
        }
        func_001E0200(arg0, (f32) var_v0_4 * var_f20, 0x2028);
        PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10) & 1) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10) & 2) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        }
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
            temp_a2 = *(s16 *)((u8 *)arg0 + 0xCB4);
            *(s16 *)((u8 *)arg0 + 0x181E) = temp_a2;
            *(f32 *)((u8 *)arg0 + 0x1814) = 0.25500003f;
            *(f32 *)((u8 *)arg0 + 0x1810) = 0.85499996f;
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_004684A0(arg0, 0x3E828F5D, temp_a2);
            func_002CBFF0(1, arg0);
        } else {
            *(s32 *)((u8 *)arg0 + 0xD0) = 0;
            *(s32 *)((u8 *)arg0 + 0xD4) = 0;
            *(s32 *)((u8 *)arg0 + 0xD8) = 0;
            *(s32 *)((u8 *)arg0 + 0xDC) = 0x3F800000;
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_004684A4[0](arg0);
            func_002CBFF0(1, arg0);
        }
        temp_v0_3 = func_0012EAE0(0x20);
        if (temp_v0_3 >= 0) {
            var_f12 = (f32) temp_v0_3;
        } else {
            var_f12 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
        }
        sp190 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
        temp_v0_4 = func_0012EAE0(0x20);
        if (temp_v0_4 >= 0) {
            var_f12_2 = (f32) temp_v0_4;
        } else {
            var_f12_2 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
        }
        sp194 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_2)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
        temp_v0_5 = func_0012EAE0(0x20);
        if (temp_v0_5 >= 0) {
            var_f12_3 = (f32) temp_v0_5;
        } else {
            var_f12_3 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
        }
        sp198 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_3)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
        sp19C = 0x3F800000;
        func_00146F30(&sp190);
        sp164 = &sp190;
        sp160 = arg0 + 0x130;
        sp168 = M2C_ERROR(/* Read from unset register $f0 */);
        func_00218440(0, &sp160);
        func_001E9B00(1, 2, 0, 0, 0, 0x3F800000);
        return 1;
    }
    spB0 = 0;
    if (*(s16 *)((u8 *)temp_s5 + 4) == 0) {
        if (func_001D9B30(arg0) != 0) {
            if (var_fp != 0) {

            } else {
                spB0 = 1;
            }
        }
    }
    if (*(s16 *)((u8 *)temp_s5 + 4) == 3) {
        if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 0) {
            spB0 = 1;
        }
    }
    if (*(s16 *)((u8 *)temp_s5 + 4) == 3) {
        if (*(s32 *)((u8 *)temp_s6 + 0x88F8) == 5) {
            if (temp_s7 < 2) {
                spB0 = 1;
            }
        }
    }
    if (spB0 != 0) {
        *(f32 *)((u8 *)arg0 + 0x1814) = 0.25500003f;
        *(f32 *)((u8 *)arg0 + 0x1810) = 0.85499996f;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684A0(arg0);
        func_002CBFF0(1, arg0);
        temp_f20 = (f32) func_001E0200(arg0, (f32) *(s16 *)((u8 *)temp_s5 + 0) * var_f20, var_s4 | 0x6028);
        PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
        func_001BF730(arg0, var_s0, var_s3, temp_f20);
        return 1;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2013) == 3) {
        func_001D97D0(arg0);
        func_001ABCC0((struct Fighter *)(arg0 + 0x1360));
    }
    if (var_fp != 0) {
        if (*(s8 *)((u8 *)temp_s1 + 0x2010) == 0) {
            func_001E9B00(1, 2, 0, 0, 0, 0x3F800000);
            func_001E0200(arg0, (f32) *(s16 *)((u8 *)temp_s5 + 0) * var_f20, var_s4 | 0x6028);
            PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
            temp_v0_6 = func_0012EAE0(0x20);
            if (temp_v0_6 >= 0) {
                var_f12_4 = (f32) temp_v0_6;
            } else {
                var_f12_4 = 2.0f * (f32) (((u32) temp_v0_6 >> 1) | (temp_v0_6 & 1));
            }
            sp150 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_4)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
            temp_v0_7 = func_0012EAE0(0x20);
            if (temp_v0_7 >= 0) {
                var_f12_5 = (f32) temp_v0_7;
            } else {
                var_f12_5 = 2.0f * (f32) (((u32) temp_v0_7 >> 1) | (temp_v0_7 & 1));
            }
            sp154 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_5)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
            temp_v0_8 = func_0012EAE0(0x20);
            if (temp_v0_8 >= 0) {
                var_f12_6 = (f32) temp_v0_8;
            } else {
                var_f12_6 = 2.0f * (f32) (((u32) temp_v0_8 >> 1) | (temp_v0_8 & 1));
            }
            sp158 = func_001220B0(func_00121C78(dpmul(0x54442D18 | (0x400921FB << 0x20), func_001214F8(var_f12_6)), (0xFFC0 << 0x10) | (0x41EFFFFF << 0x20)));
            sp15C = 0x3F800000;
            func_00146F30(&sp150);
            sp120 = arg0 + 0x130;
            sp124 = &sp150;
            sp128 = M2C_ERROR(/* Read from unset register $f0 */);
            func_00218440(0, &sp120);
            if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
                *(s32 *)((u8 *)arg0 + 0x1864) = 1;
                func_001E5040(arg0);
                var_v1 = 1;
                if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                    if (*(s16 *)((u8 *)temp_s5 + 6) != 0) {

                    } else {
                        var_v1 = 0;
                    }
                    *(s16 *)((u8 *)arg0 + 0x181E) = var_v1;
                    *(f32 *)((u8 *)arg0 + 0x1814) = 1.2750001f;
                    if (var_s0 == 3) {
                        *(f32 *)((u8 *)arg0 + 0x1814) = (f32) -*(f32 *)((u8 *)arg0 + 0x1814);
                    }
                    *(f32 *)((u8 *)arg0 + 0x1810) = 0.0f;
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_004684A0(arg0);
                    func_002CBFF0(1, arg0);
                } else {
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
                        var_v0_5 = 0x22;
                    } else {
                        var_v0_5 = 0x23;
                    }
                    *(s32 *)((u8 *)arg0 + 0xB70) = var_v0_5;
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_0046849C[0](arg0);
                    func_002CBFF0(1, arg0);
                    *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
                }
            }
            func_001DD680(arg0);
            return 0;
        }
        goto block_158;
    }
block_158:
    if (*(s16 *)((u8 *)temp_s5 + 4) != 4) {
        temp_v1_2 = *(s32 *)((u8 *)temp_s1 + 0x175C);
        if (temp_v1_2 != *(s32 *)((u8 *)temp_s1 + 0x1758)) {
            temp_v1_3 = (temp_v1_2 * 0x10) + (temp_s1 + 0x1360);
            *(s32 *)((u8 *)temp_v1_3 + 0x1F8) = (s32) (*(s32 *)((u8 *)temp_v1_3 + 0x1F8) | 4);
        }
    }
    *(f32 *)((u8 *)arg0 + 0x1804) = 10000.0f;
    *(f32 *)((u8 *)arg0 + 0x180C) = 5.0f;
    temp_a0 = *(s16 *)((u8 *)temp_s5 + 4);
    switch (temp_a0) {                              /* irregular */
    case 0:
        *(s16 *)((u8 *)arg0 + 0x17FA) = (s16) *(s16 *)((u8 *)temp_s5 + 6);
        var_f1 = *(f32 *)((u8 *)temp_s5 + 8);
        if (var_f1 == 0.0f) {
            var_f1 = 1.0f;
        }
        *(f32 *)((u8 *)arg0 + 0x1800) = var_f1;
        *(f32 *)((u8 *)arg0 + 0x1800) = (f32) (*(f32 *)((u8 *)arg0 + 0x1800) * 0.85f);
        temp_f1 = *(f32 *)((u8 *)temp_s5 + 0xC);
        if (temp_f1 != 0.0f) {
            if (!(temp_f1 <= 0.0f)) {
                *(f32 *)((u8 *)arg0 + 0x1804) = temp_f1;
            } else {
                *(f32 *)((u8 *)arg0 + 0x1804) = (f32) -temp_f1;
                *(f32 *)((u8 *)arg0 + 0x180C) = (f32) -*(f32 *)((u8 *)temp_s5 + 0xC);
            }
        }
        var_v0_6 = 1;
        if (var_s0 == 3) {

        } else {
            var_v0_6 = 0;
        }
        *(s16 *)((u8 *)arg0 + 0xCB4) = var_v0_6;
        if (spDC == 5) {
            *(s8 *)((u8 *)arg0 + 0x2008) = 1;
            sp110 = *(s32 *)((u8 *)temp_s1 + 0x1350);
            A2d_CallHandler(0xF, &sp110);
            func_002CBFF0(3, temp_s1);
            var_s4 |= 0x80;
        }
        temp_f20_2 = (f32) func_001E0200(arg0, (f32) *(s16 *)((u8 *)temp_s5 + 0) * var_f20, var_s4 | 0x6028);
        PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
        if (*(s16 *)((u8 *)temp_s5 + 0) == 0) {
            var_s0 = 5;
            var_s3 = 0;
        }
        if (*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) {
            if (*(s8 *)((u8 *)arg0 + 0x2013) == 1) {
                goto block_183;
            }
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_004684C4(arg0);
            func_002CBFF0(1, arg0);
        } else {
block_183:
            *(s32 *)((u8 *)arg0 + 0x1864) = 1;
            func_001E5040(arg0);
            var_v1_2 = 1;
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                if (*(s16 *)((u8 *)temp_s5 + 6) != 0) {

                } else {
                    var_v1_2 = 0;
                }
                *(s16 *)((u8 *)arg0 + 0x181E) = var_v1_2;
                *(f32 *)((u8 *)arg0 + 0x1814) = 1.2750001f;
                if (var_s0 == 3) {
                    *(f32 *)((u8 *)arg0 + 0x1814) = (f32) -*(f32 *)((u8 *)arg0 + 0x1814);
                }
                *(f32 *)((u8 *)arg0 + 0x1810) = 0.0f;
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_004684A0(arg0);
                func_002CBFF0(1, arg0);
            } else {
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
                    var_v0_7 = 0x22;
                } else {
                    var_v0_7 = 0x23;
                }
                *(s32 *)((u8 *)arg0 + 0xB70) = var_v0_7;
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_0046849C[0](arg0);
                func_002CBFF0(1, arg0);
                *(s8 *)((u8 *)arg0 + 0x1FFD) = 1;
            }
        }
        func_001BF730(arg0, var_s0, var_s3, temp_f20_2);
block_257:
    default:
        return 1;
    case 1:
        if (var_s0 != 4) {
            var_v0_8 = *(s16 *)((u8 *)temp_s5 + 6);
        } else {
            var_v0_8 = *(s16 *)((u8 *)arg0 + 0xCB4);
        }
        *(s16 *)((u8 *)arg0 + 0x181E) = var_v0_8;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        var_f1_2 = *(f32 *)((u8 *)temp_s5 + 8);
        if (var_f1_2 == 0.0f) {
            var_f1_2 = 0.3f;
        }
        *(f32 *)((u8 *)arg0 + 0x1814) = var_f1_2;
        var_f1_3 = *(f32 *)((u8 *)temp_s5 + 0xC);
        if (var_f1_3 == 0.0f) {
            var_f1_3 = 1.5f;
        }
        *(f32 *)((u8 *)arg0 + 0x1810) = var_f1_3;
        if (var_s0 != 3) {
            if (var_s4 & 2) {
                temp_v1_4 = *(s16 *)((u8 *)arg0 + 0x181E);
                if (temp_v1_4 < 2) {
                    *(s16 *)((u8 *)arg0 + 0x181E) = (s16) (1 - temp_v1_4);
                }
                var_v0_9 = *(s16 *)((u8 *)arg0 + 0x181E);
                if (var_v0_9 >= 6) {
                    var_v0_9 = 5;
                } else if (var_v0_9 < 0) {
                    var_v0_9 = 0;
                }
                *(s16 *)((u8 *)arg0 + 0x181E) = var_v0_9;
            }
        }
        *(f32 *)((u8 *)arg0 + 0x1810) = (f32) (*(f32 *)((u8 *)arg0 + 0x1810) * 0.95f);
        *(f32 *)((u8 *)arg0 + 0x1814) = (f32) (*(f32 *)((u8 *)arg0 + 0x1814) * 0.85f);
        temp_f20_3 = (f32) func_001E0200(arg0, (f32) *(s16 *)((u8 *)temp_s5 + 0) * var_f20, var_s4 | 0x6028);
        PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684A0(arg0);
        func_002CBFF0(1, arg0);
        func_001BF730(arg0, var_s0, var_s3, temp_f20_3);
        goto block_257;
    case 2:
        var_f1_4 = *(f32 *)((u8 *)temp_s5 + 8);
        if (var_f1_4 == 0.0f) {
            var_f1_4 = 60.0f;
        }
        *(f32 *)((u8 *)arg0 + 0x1828) = var_f1_4;
        *(s32 *)((u8 *)arg0 + 0x1834) = (s32) M2C_BITWISE(s16, *(f32 *)((u8 *)temp_s5 + 0xC));
        *(s32 *)((u8 *)arg0 + 0x1838) = (s32) *(s16 *)((u8 *)temp_s5 + 0xE);
        *(s8 *)((u8 *)arg0 + 0x183C) = (s8) *(s16 *)((u8 *)temp_s5 + 6);
        temp_f20_4 = (f32) func_001E0200(arg0, (f32) *(s16 *)((u8 *)temp_s5 + 0) * var_f20, var_s4 | 0x6028);
        PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
        func_001C0130((Fighter *)(arg0), 2);
        func_001BF730(arg0, var_s0, var_s3, temp_f20_4);
        goto block_257;
    case 4:
        *(s16 *)((u8 *)arg0 + 0x17FA) = (s16) *(s16 *)((u8 *)temp_s5 + 6);
        var_f1_5 = *(f32 *)((u8 *)temp_s5 + 8);
        if (var_f1_5 == 0.0f) {
            var_f1_5 = 1.0f;
        }
        *(f32 *)((u8 *)arg0 + 0x1800) = var_f1_5;
        temp_f1_2 = *(f32 *)((u8 *)temp_s5 + 0xC);
        if (temp_f1_2 != 0.0f) {
            if (!(temp_f1_2 <= 0.0f)) {
                *(f32 *)((u8 *)arg0 + 0x1804) = temp_f1_2;
            } else {
                *(f32 *)((u8 *)arg0 + 0x1804) = (f32) -temp_f1_2;
                *(f32 *)((u8 *)arg0 + 0x180C) = (f32) -*(f32 *)((u8 *)temp_s5 + 0xC);
            }
        }
        *(f32 *)((u8 *)arg0 + 0x1800) = (f32) (*(f32 *)((u8 *)arg0 + 0x1800) * 0.85f);
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684C8(arg0);
        func_002CBFF0(1, arg0);
        func_001DFE60((Fighter *)(arg0), 0, -200.0f);
        func_001DFE60((Fighter *)(temp_s1), 0, -200.0f);
        temp_f20_5 = (f32) func_001E0200(arg0, M2C_BITWISE(f32, **(s16 **)((u8 *)arg0 + 0x17F4)), 0x3024);
        PlyVib_Start(temp_s1, 0x80, 0x20, 0x40400000);
        func_001DD680(arg0);
        func_001BF730(arg0, var_s0, var_s3, temp_f20_5);
        goto block_257;
    case 3:
        if (*(s16 *)((u8 *)temp_s6 + 0x8944) == 0) {
            temp_v1_5 = *(s32 *)((u8 *)temp_s6 + 0x88F8);
            if (temp_v1_5 != 4) {
                if (temp_v1_5 == 5) {
                    goto block_233;
                }
                goto block_257;
            }
block_233:
            if (*(s16 *)((u8 *)temp_s1 + 0xCAC) == 0xF) {
                var_fp_2 = -1;
                if (temp_s7 == 2) {
                    var_fp_2 = 0;
                    if (!(var_s4 & 2)) {
                        if (*(s8 *)((u8 *)arg0 + 0x2013) == 0) {
                            if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
                                if (func_001DC080(arg0) != 0) {
                                    var_fp_2 = 1;
                                }
                            } else if (func_001E8F20(arg0) != 0) {
                                var_fp_2 = 1;
                            }
                        }
                    }
                }
                if (var_fp_2 > 0) {
                    *(s32 *)((u8 *)arg0 + 0x1864) = 1;
                    func_001E5040(arg0);
                    *(s32 *)((u8 *)arg0 + 0xB70) = 0x17;
                    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
                    }
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    *(s8 *)((u8 *)arg0 + 0xCBD) = 0;
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_0046849C[0](arg0);
                    func_002CBFF0(1, arg0);
                    func_001ABD30((struct Fighter *)(arg0 + 0x1360));
                    *(s32 *)((u8 *)temp_s1 + 0x1864) = 1;
                    func_001E5040(temp_s1);
                    *(s32 *)((u8 *)temp_s1 + 0xB70) = 0x16;
                    if (*(s8 *)((u8 *)temp_s1 + 0x1FF9) != 0) {
                        *(s32 *)((u8 *)temp_s1 + 0xB70) = (s32) (*(s32 *)((u8 *)temp_s1 + 0xB70) + 0x100);
                    }
                    *(s16 *)((u8 *)temp_s1 + 0xCB4) = 1;
                    *(s16 *)((u8 *)temp_s1 + 0xCB6) = 0;
                    *(s8 *)((u8 *)temp_s1 + 0x2004) = 1;
                    *(s8 *)((u8 *)temp_s1 + 0x1FFB) = 1;
                    *(s8 *)((u8 *)temp_s1 + 0x2006) = 0;
                    D_0046849C[0](temp_s1);
                    func_002CBFF0(1, temp_s1);
                    func_001ABD30((struct Fighter *)(temp_s1 + 0x1360));
                    func_001D9900(arg0, 0x11, 1);
                    return 0;
                }
                if (var_fp_2 == 0) {
                    func_001D9900(temp_s1, 0x10, 1);
                    func_002CBFF0(5, temp_s1);
                }
                func_001E2070(arg0);
                spF0 = temp_s1;
                spF8 = *(s32 *)((u8 *)temp_s1 + 0x1EE8);
                spF4 = arg0;
                spFC = (s32) *(s16 *)((u8 *)temp_s5 + 6);
                sp100 = func_001B0B10;
                sp104 = func_001B0810;
                func_00237000(4, &spF0);
                if (*(s16 *)((u8 *)temp_s6 + 0x8948) >= 0) {
                    if (temp_s7 == 2) {
                        func_001E9B00(1, 0x41, 0, 0, 0, 0x3F800000);
                    } else {
                        func_001DDA30(arg0);
                        func_001BF730(arg0, var_s0, var_s3, 0.0f);
                    }
                } else {
                    *(s16 *)((u8 *)temp_s6 + 0x8944) = 0;
                }
                goto block_257;
            }
            goto block_257;
        }
        goto block_257;
    }
}
