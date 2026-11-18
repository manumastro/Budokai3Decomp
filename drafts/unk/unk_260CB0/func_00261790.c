/* Draft (not built): func_00261790 at 0x00261790, size 0x9F0, segment unk/unk_260CB0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); Compiler: 9: extern void func_00137B60(FadeVec *); @ 6: extern void func_00139620(s32, FadeColor *, s32, s32, s32, f32);
 * Original: asm/nonmatchings/unk/unk_260CB0/func_00261790.s */

// src/unk/unk_260CB0.c func_00261790 cerr diff=-1/0
extern void func_00139620(s32, FadeColor *, s32, s32, s32, f32);
extern f32 D_0047042C;
extern f32 D_00470430;
extern void func_00137B60(FadeVec *);
extern void amDraw_FlushPacket(void);
extern s32 gFadeMode;
s32 amDraw_ClosePacket(s32);
s32 func_00133B50(s32, s32);
s32 func_00136870(s32, s32, f32 *, s32);
s32 func_001377E0(f32 *, f32 *);
extern s32 D_00452B3C;
extern s128 D_00452E10;
extern s128 D_00452E20;
extern f32 D_004707D0;
extern void func_0011F4C0(void);
extern void func_0011F220(void);
void func_00261790(f32 fparg0) {
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    f32 *var_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f21_3;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f23_2;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f29_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f22;
    f32 var_f23;
    f32 var_f25;
    f32 var_f26;
    f32 var_f27;
    f32 var_f29;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;

    sp90 = (s128) D_00452E10;
    sp90 = D_0047042C / 2.0f;
    sp94 = D_00470430 / 2.0f;
    sp80 = (s128) D_00452E20;
    var_s3 = gFadeMode;
    D_004707D0 -= 0.008726644f;
    if (fparg0 != 0.0f) {
        if (var_s3 >= 0xC) {
            var_s3 -= 0xB;
            temp_f29 = 224.0f * (1.0f - fparg0);
            func_0011F4C0();
            var_f27 = 320.0f + (temp_f29 * M2C_ERROR(/* Read from unset register $f0 */));
            func_0011F220();
            var_f25 = 1.4f;
            var_f26 = 224.0f + (0.94f * (temp_f29 * M2C_ERROR(/* Read from unset register $f0 */)));
        } else {
            var_f27 = 320.0f;
            var_f26 = 224.0f;
            var_f25 = 1.0f;
        }
        func_00133B50(0, 0);
        if (fparg0 != 1.0f) {
            var_s0 = *(&D_00452B3C + (var_s3 * 4));
            if (var_s3 == 8) {
                sp88 = 0.0f;
                sp84 = 0.5f;
                sp80 = 1.0f;
                temp_f0 = 2.0f * fparg0;
                sp8C = temp_f0;
                if (!(temp_f0 <= 1.0f)) {
                    sp8C = 1.0f;
                }
                func_00136870(1, 0x900, &sp80, -1);
                var_s2 = 0;
loop_11:
                if (var_s2 < 0x10) {
                    temp_f21 = 1.5f * (*(f32 *)((u8 *)var_s0 + 0) * var_f25);
                    temp_f2 = *(f32 *)((u8 *)var_s0 + 4) * var_f25;
                    sp98 = 0x3F800000;
                    var_s0 = var_s0 + 4 + 4;
                    temp_f2_2 = 1.0f - fparg0;
                    sp90 = var_f27 + (temp_f21 * temp_f2_2);
                    sp94 = var_f26 + (0.94f * (1.5f * temp_f2 * temp_f2_2));
                    func_00137B60(&sp90);
                    var_s2 += 1;
                    goto loop_11;
                }
                amDraw_FlushPacket();
            } else {
                var_s1 = 0;
                var_f29 = 1.5f * (var_f25 * (*var_s0 * (1.0f - fparg0)));
loop_25:
                if (var_s1 < var_s3) {
                    sp84 = 0.5f;
                    sp88 = 0.0f;
                    sp80 = 1.0f;
                    temp_f0_2 = 2.0f * fparg0;
                    sp8C = temp_f0_2;
                    if (!(temp_f0_2 <= 1.0f)) {
                        sp8C = 1.0f;
                    }
                    if (var_s1 != 0) {
                        amDraw_ClosePacket(2);
                    } else {
                        func_00136870(2, 0x900, &sp80, -1);
                    }
                    func_0011F4C0();
                    func_0011F220();
                    sp98 = 0x3F800000;
                    M2C_ERROR(/* unknown instruction: mula.s $f23, $f0 */);
                    temp_f2_3 = 1.0f - fparg0;
                    temp_f21_2 = var_f27 + (M2C_ERROR(/* unknown instruction: msub.s $f21, $f22, $f24 */) * temp_f2_3);
                    M2C_ERROR(/* unknown instruction: mula.s $f23, $f24 */);
                    sp90 = temp_f21_2;
                    temp_f20 = var_f26 + (0.94f * (M2C_ERROR(/* unknown instruction: madd.s $f20, $f22, $f0 */) * temp_f2_3));
                    sp94 = temp_f20;
                    func_00137B60(&sp90);
                    var_s2_2 = 0;
                    var_f23 = var_f29;
                    var_f22 = 0.381966f * var_f29;
loop_23:
                    if (var_s2_2 < 0xB) {
                        func_0011F4C0();
                        func_0011F220();
                        sp90 = temp_f21_2 + (M2C_ERROR(/* Read from unset register $f0 */) * var_f23);
                        sp94 = temp_f20 + (0.94f * (M2C_ERROR(/* Read from unset register $f0 */) * var_f23));
                        func_00137B60(&sp90);
                        var_f29 = var_f23;
                        var_s2_2 += 1;
                        var_f23 = var_f22;
                        var_f22 = var_f29;
                        goto loop_23;
                    }
                    var_s1 += 1;
                    goto loop_25;
                }
                amDraw_FlushPacket();
            }
            temp_f29_2 = 551.0f * (1.0f - fparg0);
            func_00136870(2, 0xC12, NULL, -1);
            sp80 = 1.0f;
            sp88 = 0.0f;
            sp84 = 0.5f;
            sp8C = fparg0;
            sp98 = 0x40000000;
            sp90 = var_f27;
            sp94 = var_f26;
            func_001377E0(&sp90, &sp80);
            sp84 = 0.5f;
            sp80 = 1.0f;
            sp88 = 0.1f;
            temp_f0_3 = 2.0f * fparg0;
            sp8C = temp_f0_3;
            if (!(temp_f0_3 <= 1.0f)) {
                sp8C = 1.0f;
            }
            var_s2_3 = 0;
            sp90 += temp_f29_2;
loop_32:
            if (var_s2_3 < 0x41) {
                func_0011F4C0();
                func_0011F220();
                sp90 = var_f27 + (M2C_ERROR(/* Read from unset register $f0 */) * temp_f29_2);
                sp94 = var_f26 + (0.94f * (M2C_ERROR(/* Read from unset register $f0 */) * temp_f29_2));
                func_0011F220();
                temp_f23 = 0.75f + (1.5f * (0.5f + (0.5f * M2C_ERROR(/* Read from unset register $f0 */))));
                sp88 = 0.1f * temp_f23;
                sp80 = temp_f23;
                sp84 = 0.5f * temp_f23;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf2 */);
                M2C_ERROR(/* unknown instruction: vminix.xyzw $vf1, $vf1, $vf2x */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
                func_001377E0(&sp90, &sp80);
                var_s2_3 += 1;
                goto loop_32;
            }
            amDraw_FlushPacket();
            temp_f29_3 = 60.0f * (1.0f - fparg0) * var_f25;
            func_00136870(2, 0xC12, NULL, -1);
            sp80 = 1.0f;
            sp84 = 1.0f;
            temp_f21_3 = 1.0f - fparg0;
            sp88 = 1.0f;
            temp_f2_4 = 100.0f * (temp_f21_3 + (temp_f21_3 * temp_f21_3)) * var_f25;
            temp_f0_4 = 2.0f * fparg0;
            temp_f23_2 = var_f27 - temp_f2_4;
            temp_f22 = var_f26 - (0.94f * temp_f2_4);
            sp8C = temp_f0_4;
            if (!(temp_f0_4 <= 1.0f)) {
                sp8C = 1.0f;
            }
            sp98 = 0x3F800000;
            sp90 = temp_f23_2;
            sp94 = temp_f22;
            func_001377E0(&sp90, &sp80);
            var_s2_4 = 0;
            sp8C = 0.5f * fparg0;
loop_37:
            if (var_s2_4 < 0x21) {
                func_0011F4C0();
                func_0011F220();
                sp90 = temp_f23_2 + (M2C_ERROR(/* Read from unset register $f0 */) * temp_f29_3);
                sp94 = temp_f22 + (0.94f * (M2C_ERROR(/* Read from unset register $f0 */) * temp_f29_3));
                func_001377E0(&sp90, &sp80);
                var_s2_4 += 1;
                goto loop_37;
            }
            amDraw_FlushPacket();
        }
        if (gFadeMode >= 0xC) {
            sp80 = 1.0f;
            sp84 = 1.0f;
            sp88 = 1.0f;
        } else {
            sp80 = 0.0f;
            sp84 = 0.0f;
            sp88 = 0.0f;
        }
        sp8C = 1.0f;
        func_00139620(0x900, &sp80, -1, 0x44, 0x40400000);
    }
}
