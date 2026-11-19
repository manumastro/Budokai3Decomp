/* Draft (not built): func_00210C20 at 0x00210C20, size 0x880, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 397 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5CC, original 0x880
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00210C20.s */

// src/unk/unk_20A4D0.c func_00210C20 size diff=397/371
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw_ClosePacket(s32);
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 amMath_SinCosI(s32, f32 *, s32);
f32 *amPkt_Alloc(s32);
s32 amVram_Apply(s32);
s32 func_00133780(s32, s32);
s32 func_00134690(s32, s32, f32 *, s32);
s32 func_00135F10(f32 *, f32 *);
extern s128 D_0044B930;
extern s128 D_0044B940;
extern s128 D_0044B950;
extern s128 D_0044B960;
extern s128 D_0044B970;
extern s128 D_0044B980;
extern s32 D_0046FD18;
extern f32 D_0047040C;
extern f32 D_00470410;
extern char D_00459390[];
void func_00210C20(u8 *arg0) {
    s32 spC8;
    s32 spB8;
    u8 sp[0x400];
    f32 spB0;
    f32 spC0;
    s32 spD0;
    s32 spE0;
    f32 spE4;
    f32 spE8;
    s32 spEC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    f32 sp10C;
    f32 sp110;
    f32 sp114;
    f32 sp120;
    f32 sp124;
    s128 sp130;
    s128 sp140;
    f32 sp150;
    f32 sp154;
    f32 sp160;
    f32 sp164;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_fp;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s64 temp_s7;
    s8 var_v0_3;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0_2;
    u8 *temp_v1;

    temp_s3 = arg0 + 0x20;
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x2C);
    temp_s2 = ((u8 *)&D_0058A090) + (*(s32 *)((u8 *)arg0 + 0x20) * 0xC0);
    if ((temp_a1 & 2) && !(*(f32 *)((u8 *)arg0 + 0x14) < *(f32 *)((u8 *)temp_s3 + 0x24))) {
        *(s32 *)((u8 *)temp_s3 + 0xC) = (s32) (temp_a1 & ~2);
        *(f32 *)((u8 *)arg0 + 0x14) = 1.0f;
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) (*(f32 *)((u8 *)arg0 + 0x18) - *(f32 *)((u8 *)temp_s3 + 0x24));
    }
    if (*(s32 *)((u8 *)gWave + 0x70) != 0) {
        amDma_Request(0, 1, 1, 0);
        if (!(*(s32 *)((u8 *)temp_s3 + 0xC) & 2)) {
            sp160 = (s128) D_0044B930;
            sp150 = (s128) D_0044B940;
            sp140 = D_0044B950;
            sp130 = D_0044B960;
            sp120 = (s128) D_0044B970;
            sp110 = (s128) D_0044B980;
            temp_fp = D_0046FD18;
            sp100 = *(f32 *)((u8 *)temp_s2 + 0x40);
            sp104 = *(f32 *)((u8 *)temp_s2 + 0x44);
            sp108 = *(f32 *)((u8 *)temp_s2 + 0x48);
            sp10C = *(f32 *)((u8 *)temp_s2 + 0x90);
            func_0020B360(arg0, D_0044B970, &sp120, D_0044B960);
            func_0013B0B0(NULL);
            func_0013B960(temp_s2 + 0x50);
            func_00133780(2, 1);
            if (*(s32 *)((u8 *)temp_s3 + 0xC) & 8) {
                amGs_SetReg32(2, (D_0046FD18 & 0xFFF9FFFF) | 0x20000);
            }
            temp_v0 = amPkt_Alloc((*(s32 *)((u8 *)temp_s3 + 0x14) + 1) * 8);
            temp_a0 = *(s32 *)((u8 *)temp_s3 + 0x14);
            temp_s5 = temp_v0;
            var_s0 = 0;
            var_s1 = 0;
            temp_s6 = temp_v0 + (temp_a0 * 4) + 4;
            temp_s7 = (s64) (M2C_BITWISE(s64, ((32768.0f * (360.0f / (f32) temp_a0)) / 180.0f)) << 0x30) >> 0x30;
loop_9:
            if (var_s1 < *(s32 *)((u8 *)temp_s3 + 0x14)) {
                amMath_SinCosI((s32)(var_s0), (f32 *)(&temp_s5[var_s1]), (s32)(temp_s6 + (var_s1 * 4)));
                var_s0 += temp_s7;
                var_s1 += 1;
                goto loop_9;
            }
            temp_s5[var_s1] = *temp_s5;
            *(temp_s6 + (var_s1 * 4)) = *temp_s6;
            temp_f0 = *(f32 *)((u8 *)temp_s3 + 0x28);
            spF0 = temp_f0;
            temp_f0_2 = temp_f0 + *(f32 *)((u8 *)temp_s3 + 0x34);
            spF4 = temp_f0_2;
            temp_f0_3 = temp_f0_2 + *(f32 *)((u8 *)temp_s3 + 0x38);
            spF8 = temp_f0_3;
            spE0 = 0;
            spFC = temp_f0_3 + *(f32 *)((u8 *)temp_s3 + 0x3C);
            spE4 = *(f32 *)((u8 *)temp_s3 + 0x40);
            spE8 = *(f32 *)((u8 *)temp_s3 + 0x44);
            spEC = 0;
            amDraw_SetPacketMode(1);
            var_s0_2 = 0;
loop_23:
            if (var_s0_2 < 3) {
                if (var_s0_2 != 0) {
                    amDraw_ClosePacket(1);
                } else {
                    func_00134690(1, 0x924, &sp100, -1);
                }
                var_s1_2 = 0;
loop_21:
                if (var_s1_2 < (*(s32 *)((u8 *)temp_s3 + 0x14) + 1)) {
                    temp_f21 = temp_s5[var_s1_2];
                    temp_f20 = *(temp_s6 + (var_s1_2 * 4));
                    temp_v0_2 = (var_s0_2 * 4) + sp;
                    sp160 = temp_f21 * *(f32 *)((u8 *)temp_v0_2 + 0xF0);
                    sp164 = temp_f20 * *(f32 *)((u8 *)temp_v0_2 + 0xF0);
                    sp150 = temp_f21 * *(f32 *)((u8 *)temp_v0_2 + 0xF4);
                    sp154 = temp_f20 * *(f32 *)((u8 *)temp_v0_2 + 0xF4);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
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
                    if (spC8 != 0.0f) {

                    }
                    M2C_ERROR(/* unknown instruction: mula.s $f7, $f5 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f7, $f1 */);
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
                    temp_v1 = (var_s0_2 * 4) + sp;
                    M2C_ERROR(/* unknown instruction: mula.s $f8, $f4 */);
                    sp120 = 0.003f + ((M2C_ERROR(/* unknown instruction: madd.s $f23, $f4, $f3 */) + (temp_f21 * *(f32 *)((u8 *)temp_v1 + 0xE0))) / D_0047040C);
                    sp124 = 0.003f + ((M2C_ERROR(/* unknown instruction: madd.s $f22, $f4, $f0 */) + (temp_f20 * *(f32 *)((u8 *)temp_v1 + 0xE0))) / D_00470410);
                    M2C_ERROR(/* unknown instruction: adda.s $f2, $f4 */);
                    sp110 = 0.003f + ((M2C_ERROR(/* unknown instruction: madd.s $f7, $f6, $f5 */) + (temp_f21 * *(f32 *)((u8 *)temp_v1 + 0xE4))) / D_0047040C);
                    sp114 = 0.003f + (M2C_ERROR(/* unknown instruction: madd.s $f0, $f20, $f0 */) / D_00470410);
                    func_00135F10(&sp160, &sp120);
                    func_00135F10(&sp150, &sp110);
                    var_s1_2 += 1;
                    goto loop_21;
                }
                var_s0_2 += 1;
                goto loop_23;
            }
            amDraw_FlushPacket();
            amDraw_SetPacketMode(0);
            func_0013B110(1);
            func_00133780(2, 0);
            amGs_SetReg32(2, temp_fp);
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
                    var_v0_2 = 1;
                    if (var_a0 != 0) {

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
                    temp_f6 = *(f32 *)((u8 *)arg0 + 0x14) / *(f32 *)((u8 *)arg0 + 0x18);
                    temp_f4 = 1.0f - temp_f6;
                    M2C_ERROR(/* unknown instruction: mula.s $f2, $f4 */);
                    *(f32 *)((u8 *)temp_s3 + 0x28) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f1, $f6 */);
                    *(f32 *)((u8 *)temp_s3 + 0x40) = (f32) (*(f32 *)((u8 *)temp_s2 + 0xAC) * temp_f4);
                    *(f32 *)((u8 *)temp_s3 + 0x44) = (f32) (*(f32 *)((u8 *)temp_s2 + 0xB0) * temp_f4);
                    if (temp_f6 <= 0.5f) {
                        M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                        var_f0 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f3, $f0 */);
                    } else {
                        M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                        var_f0 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f1 */);
                    }
                    *(f32 *)((u8 *)temp_s2 + 0x90) = var_f0;
                    func_00146ED0(&spD0, temp_s2 + 0x20, *(f32 *)((u8 *)temp_s3 + 0x2C));
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
