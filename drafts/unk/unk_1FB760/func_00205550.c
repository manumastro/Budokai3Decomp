/* Draft (not built): func_00205550 at 0x00205550, size 0x664, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 688: if (var_s2 != temp_fp) { @ 601: if (var_s2 != temp_fp) {
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00205550.s */

// src/unk/unk_1FB760.c func_00205550 cerr diff=-1/0
s32 amDraw_ClosePacket(s32);
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 amMath_SinCosI(s64, f32 *, f32 *);
s32 func_00134690(s32, s32, s32, s32);
s32 func_00135E20(s32 *, s32 *, s32 *, s32 *);
extern s32 D_0046FD18;
extern s32 D_0047064C;
extern void amDraw_FlushPacket(void);
extern void func_00135D40(void *, void *, void *);
void func_00205550(u8 *arg0) {
    u8 *spB0;
    u8 *spC0;
    s32 spD0;
    s32 *spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    f32 sp12C;
    f32 sp130;
    f32 sp134;
    f32 sp138;
    f32 sp13C;
    f32 sp140;
    f32 sp144;
    f32 sp148;
    f32 sp14C;
    f32 sp150;
    f32 sp154;
    f32 sp158;
    f32 sp15C;
    s32 sp160;
    s32 sp170;
    s32 sp180;
    s32 sp190;
    f32 sp1A0;
    f32 sp1A4;
    f32 sp1A8;
    f32 sp1AC;
    f32 sp1B0;
    f32 sp1B4;
    f32 sp1B8;
    f32 sp1BC;
    s32 *var_s4;
    s32 *var_s4_2;
    s32 var_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    s32 temp_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    u8 *temp_s3;
    u8 *var_s2;

    temp_fp = (s32)(arg0 + 0x44);
    var_s5 = 1;
    var_s1 = 0;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s2 = *(u8 **)((u8 *)arg0 + 0x3C);
    spF0 = D_0046FD18;
    spE0 = (s32 *)(&D_0051D9C0);
    var_s0 = 2;
    if (*(s32 *)((u8 *)temp_s3 + 8) & 1) {
        var_s0 = 2 | 0x800;
    }
    if (*(s32 *)((u8 *)temp_s3 + 8) & 2) {
        var_s0 |= 0x1000;
    }
    if (*(s32 *)((u8 *)temp_s3 + 8) & 0x02000000) {
        var_a1 = 1;
    } else {
        var_a1 = 0;
    }
    func_00133780(0, var_a1);
    if (!(*(s32 *)((u8 *)temp_s3 + 8) & 0x01000000)) {
        amGs_SetReg32(0, (D_0046FD18 & 0xFFF9FFFF) | 0x20000);
    }
    amDraw_SetPacketMode(1);
    if (*(s32 *)((u8 *)temp_s3 + 8) & 0x1000) {
        spD0 = *(s32 *)((u8 *)temp_s3 + 0xA4);
loop_24:
        if (var_s2 != temp_fp) {
            if (!(*(s32 *)((u8 *)var_s2 + 0xC) & 1)) {
                spC0 = var_s2 + 0x10;
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_s4 = &sp110;
                } else {
                    var_s4 = (s32 *)(var_s2 + 0x30);
                }
                temp_f20 = 1.0f + *(f32 *)((u8 *)temp_s3 + 0x64);
                temp_f21 = *(f32 *)((u8 *)var_s2 + 0x50) * *(f32 *)((u8 *)var_s2 + 0x54);
                amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)var_s2 + 0x58)) / 180.0f)) << 0x30) >> 0x30, &sp1B0, &sp1B8);
                temp_f1 = sp1B0 * temp_f21;
                sp1B0 = temp_f1;
                temp_f0 = sp1B8 * temp_f21;
                sp1B8 = temp_f0;
                sp1B4 = -temp_f1 * temp_f20;
                sp1BC = temp_f0 * temp_f20;
                M2C_ERROR(/* unknown instruction: lqc2 $vf6, ($s6) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf7, ($s6) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf2 */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf3 */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf4 */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf5 */);
                M2C_ERROR(/* unknown instruction: vmulax.xyz ACC, $vf6, $vf2x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf6, $vf1, $vf3x */);
                M2C_ERROR(/* unknown instruction: vmulax.xyz ACC, $vf7, $vf4x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf7, $vf1, $vf5x */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf1 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf1 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf8, $vf6, $vf7 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf6 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf4, $vf4, $vf6 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf2, $vf2, $vf8 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf3, $vf3, $vf8 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf7 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf4, $vf4, $vf7 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($v1) */);
                sp120 = *(f32 *)((u8 *)var_s2 + 0x40);
                sp124 = *(f32 *)((u8 *)var_s2 + 0x44);
                sp128 = 1.0f;
                sp12C = 1.0f;
                sp130 = *(f32 *)((u8 *)var_s2 + 0x48);
                sp134 = *(f32 *)((u8 *)var_s2 + 0x44);
                sp138 = 1.0f;
                sp13C = 1.0f;
                sp140 = *(f32 *)((u8 *)var_s2 + 0x40);
                sp144 = *(f32 *)((u8 *)var_s2 + 0x4C);
                sp148 = 1.0f;
                sp14C = 1.0f;
                sp150 = *(f32 *)((u8 *)var_s2 + 0x48);
                sp154 = *(f32 *)((u8 *)var_s2 + 0x4C);
                sp158 = 1.0f;
                sp15C = 1.0f;
                if (var_s1 == 0x80) {
                    var_s5 = 1;
                    var_s1 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s5 != 0) {
                    func_00134690(1, var_s0 | 0x24, 0, spD0);
                    var_s5 = 0;
                    spD0 = -1;
                } else {
                    amDraw_ClosePacket(-1);
                }
                func_00135D40(&sp160, var_s4, &sp120);
                func_00135D40(&sp170, var_s4, &sp130);
                func_00135D40(&sp180, var_s4, &sp140);
                func_00135D40(&sp190, var_s4, &sp150);
                var_s1 += 1;
            }
            var_s2 = *(u8 **)((u8 *)var_s2 + 0);
            goto loop_24;
        }
    } else {
loop_38:
        if (var_s2 != temp_fp) {
            if (!(*(s32 *)((u8 *)var_s2 + 0xC) & 1)) {
                spB0 = var_s2 + 0x10;
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_s4_2 = &sp100;
                } else {
                    var_s4_2 = (s32 *)(var_s2 + 0x30);
                }
                temp_f20_2 = 1.0f + *(f32 *)((u8 *)temp_s3 + 0x64);
                temp_f21_2 = *(f32 *)((u8 *)var_s2 + 0x50) * *(f32 *)((u8 *)var_s2 + 0x54);
                amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)var_s2 + 0x58)) / 180.0f)) << 0x30) >> 0x30, &sp1A0, &sp1A8);
                temp_f1_2 = sp1A0 * temp_f21_2;
                sp1A0 = temp_f1_2;
                temp_f0_2 = sp1A8 * temp_f21_2;
                sp1A8 = temp_f0_2;
                sp1A4 = -temp_f1_2 * temp_f20_2;
                sp1AC = temp_f0_2 * temp_f20_2;
                M2C_ERROR(/* unknown instruction: lqc2 $vf6, ($s6) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf7, ($s6) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf2 */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf3 */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf4 */);
                M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf5 */);
                M2C_ERROR(/* unknown instruction: vmulax.xyz ACC, $vf6, $vf2x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf6, $vf1, $vf3x */);
                M2C_ERROR(/* unknown instruction: vmulax.xyz ACC, $vf7, $vf4x */);
                M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf7, $vf1, $vf5x */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf1 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf1 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf8, $vf6, $vf7 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf6 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf4, $vf4, $vf6 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf2, $vf2, $vf8 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf3, $vf3, $vf8 */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf7 */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf4, $vf4, $vf7 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($v1) */);
                if (var_s1 == 0x80) {
                    var_s5 = 1;
                    var_s1 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s5 != 0) {
                    func_00134690(1, var_s0, 0, -1);
                    var_s5 = 0;
                } else {
                    amDraw_ClosePacket(-1);
                }
                func_00135E20(&sp160, var_s4_2, &sp170, var_s4_2);
                func_00135E20(&sp180, var_s4_2, &sp190, var_s4_2);
                var_s1 += 1;
            }
            var_s2 = *(u8 **)((u8 *)var_s2 + 0);
            goto loop_38;
        }
    }
    amDraw_FlushPacket();
    amDraw_SetPacketMode(0);
    amGs_SetReg32(0, spF0);
}
