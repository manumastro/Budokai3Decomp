/* Draft (not built): func_0020F970 at 0x0020F970, size 0x8C4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); func_0020D7C0(...)' redeclared was declared as: 'int (...)' now declared as: 'void ()' @ 2600: void func_0020D7C0(void);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020F970.s */

// src/unk/unk_20A4D0.c func_0020F970 cerr diff=-1/0
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw_ClosePacket(s32);
s32 amGs_SetReg32(s32, s32);
s32 amVram_Apply(s32);
s32 func_00133780(s32, s32);
s32 func_00134690(s32, s32, f32 *, s32);
s32 func_00135F10(f32 *, f32 *);
extern s128 D_0044B9F0;
extern s32 D_0046FD18;
extern f32 D_0047040C;
extern f32 D_00470410;
extern char D_00459390[];
void func_0020F970(u8 *arg0) {
    s32 spB8;
    s32 spA8;
    s32 sp98;
    u8 sp[0x400];
    f32 sp90;
    f32 spA0;
    f32 spB0;
    s32 spC0;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 sp1E0;
    f32 sp1E4;
    s32 sp1F0;
    s32 sp200;
    f32 sp210;
    f32 sp214;
    f32 sp218;
    f32 sp21C;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s8 var_v0_3;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s3 = arg0 + 0x20;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x2C);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x20) * 0xC0;
    temp_s2 = ((u8 *)&D_0058A090) + temp_a2;
    if ((temp_a0 & 2) && !(*(f32 *)((u8 *)arg0 + 0x14) < *(f32 *)((u8 *)temp_s3 + 0x24))) {
        *(s32 *)((u8 *)temp_s3 + 0xC) = (s32) (temp_a0 & ~2);
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) (*(f32 *)((u8 *)arg0 + 0x18) - *(f32 *)((u8 *)temp_s3 + 0x24));
    }
    if (*(s32 *)((u8 *)gWave + 0x70) != 0) {
        func_0020D7C0(temp_a0, &D_0058A090, temp_a2);
        amDma_Request(0, 1, 1, 0);
        if (!(*(s32 *)((u8 *)temp_s3 + 0xC) & 2)) {
            var_s5 = 0;
            sp1E0 = (s128) D_0044B9F0;
            temp_s6 = D_0046FD18;
            temp_f20 = *(f32 *)((u8 *)temp_s3 + 0x48) / 7.0f;
            spD0 = *(f32 *)((u8 *)temp_s2 + 0x40);
            spD4 = *(f32 *)((u8 *)temp_s2 + 0x44);
            spD8 = *(f32 *)((u8 *)temp_s2 + 0x48);
            spDC = *(f32 *)((u8 *)temp_s2 + 0x90);
            func_0020B360(arg0, &sp1E0);
            func_0013B0B0(NULL);
            func_0013B960(temp_s2 + 0x50);
            func_00133780(2, 1);
            if (*(s32 *)((u8 *)temp_s3 + 0xC) & 8) {
                amGs_SetReg32(2, (D_0046FD18 & 0xFFF9FFFF) | 0x20000);
            }
            func_00134690(1, 0x924, &spD0, -1);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            var_s0 = 0;
            temp_f1 = (7.0f * temp_f20) / 2.0f;
            sp214 = temp_f1;
            sp210 = -temp_f1;
            sp21C = 1.0f;
            sp218 = 0.0f;
loop_24:
            if (var_s0 < 8) {
                var_s1 = 0;
loop_19:
                if (var_s1 < 8) {
                    if (var_s0 == 0) {
                        func_0020B1C0(&sp200, &sp210, arg0);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_0013B160(D_00459390);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                        if (spB8 != 0.0f) {

                        }
                        M2C_ERROR(/* unknown instruction: mula.s $f8, $f6 */);
                        M2C_ERROR(/* unknown instruction: mula.s $f8, $f1 */);
                        sp1E0 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f3, $f5, $f4 */) / D_0047040C);
                        sp1E4 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f3, $f5, $f0 */) / D_00470410);
                        func_00135F10(&sp210, &sp1E0);
                        sp214 -= temp_f20;
                        func_0020B1C0(&sp200, &sp210, arg0);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_0013B160(D_00459390);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                        if (spA8 != 0.0f) {

                        }
                        M2C_ERROR(/* unknown instruction: mula.s $f8, $f6 */);
                        M2C_ERROR(/* unknown instruction: mula.s $f8, $f1 */);
                        sp1E0 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f3, $f5, $f4 */) / D_0047040C);
                        sp1E4 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f3, $f5, $f0 */) / D_00470410);
                        func_00135F10(&sp210, &sp1E0);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                        sp210 += temp_f20;
                        sp214 += temp_f20;
                    } else {
                        temp_v0 = (var_s1 * 0x10) + sp;
                        func_00135F10((f32 *)(temp_v0 + 0x160), (f32 *)(temp_v0 + 0xE0));
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        sp214 -= temp_f20;
                        func_0020B1C0(&sp200, &sp210, arg0);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        func_0013B160(D_00459390);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                        if (sp98 != 0.0f) {

                        }
                        M2C_ERROR(/* unknown instruction: mula.s $f8, $f6 */);
                        M2C_ERROR(/* unknown instruction: mula.s $f8, $f1 */);
                        sp1E0 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f3, $f5, $f4 */) / D_0047040C);
                        sp1E4 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f3, $f5, $f0 */) / D_00470410);
                        func_00135F10(&sp210, &sp1E0);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                    }
                    var_s1 += 1;
                    goto loop_19;
                }
                if (var_s5 != 7) {
                    amDraw_ClosePacket(1);
                    var_s5 += 1;
                } else {
                    amDraw_FlushPacket();
                }
                var_s0 += 1;
                goto loop_24;
            }
            func_0013B110(1);
            func_00133780(2, 0);
            amGs_SetReg32(2, temp_s6);
            if (gBattle != NULL) {
                var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
            } else {
                var_v0 = 0;
            }
            if (var_v0 == 0) {
                if (gBattle != NULL) {
                    var_a0 = 0;
                    if ((*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) && !(*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f)) {
                        var_a0 = 1;
                    }
                    if (var_a0 != 0) {
                        var_v0_2 = 1;
                    } else {
                        var_v0_2 = 0;
                    }
                } else {
                    var_v0_2 = 0;
                }
                if (var_v0_2 != 0) {
                    if (gBattle != NULL) {
                        var_a0_2 = 0;
                        if ((*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) && !(*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f)) {
                            var_a0_2 = 1;
                        }
                        if (var_a0_2 != 0) {
                            var_v0_3 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                        } else {
                            var_v0_3 = -1;
                        }
                    } else {
                        var_v0_3 = -1;
                    }
                    if (*(s16 *)((u8 *)arg0 + 0x1C) == var_v0_3) {
                        var_v0_4 = 1;
                    } else {
                        goto block_51;
                    }
                } else {
block_51:
                    var_v0_4 = 0;
                }
                if (var_v0_4 == 0) {
                    if ((*(f32 *)((u8 *)arg0 + 0x14) / *(f32 *)((u8 *)arg0 + 0x18)) <= 0.5f) {
                        M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                        var_f0 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f3, $f0 */);
                    } else {
                        M2C_ERROR(/* unknown instruction: mula.s $f2, $f3 */);
                        var_f0 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f1 */);
                    }
                    *(f32 *)((u8 *)temp_s2 + 0x90) = var_f0;
                    func_00146ED0(&spC0, temp_s2 + 0x20, *(f32 *)((u8 *)temp_s3 + 0x2C));
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
                    func_0013B160(((u8 *)&D_0058A090) + (*(s32 *)((u8 *)arg0 + 0x20) * 0xC0) + 0x50);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s2) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s0) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s0) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s0) */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s0) */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                }
            }
        }
        amVram_Apply(0);
    }
}
