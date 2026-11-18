/* Draft (not built): func_002009B0 at 0x002009B0, size 0x7A0, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 328: s32 sp1A0; @ 327: s3232 sp19C;
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002009B0.s */

// src/unk/unk_1FB760.c func_002009B0 cerr diff=-1/0
extern void func_0013B190(s32);
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw_ClosePacket(s32);
s32 func_0012EF80(void *, s32, s32);
s32 func_00132D20(s32, s32 *, f32);
s32 func_00134690(s32, s32, s32 *, s32);
s32 func_00135F10(s32 *, f32 *);
s32 func_0013B110(s32);
extern s32 D_00470280;
extern s32 D_00470284;
extern s32 D_0047064C;
extern void func_0013B0B0(void *);
extern void amDraw_FlushPacket(void);
extern void func_0013B060(void *);
void func_002009B0(u8 *arg0) {
    s32 spB0;
    s32 spC0;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spEC;
    s32 spF0;
    f32 sp100;
    f32 sp104;
    f32 sp108;
    f32 sp10C;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    f32 sp11C;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    f32 sp12C;
    f32 sp130;
    f32 sp134;
    f32 sp138;
    f32 sp13C;
    s32 sp140;
    s32 sp150;
    s32 sp160;
    s32 sp170;
    f32 sp180;
    f32 sp190;
    f32 sp194;
    f32 sp198;
    s3232 sp19C;
    s32 sp1A0;
    s32 *var_a2;
    s32 *var_s3;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 var_a0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_s0;
    f32 var_s1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s6;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_s2;
    s64 temp_s7;
    s64 var_s1_2;
    u8 *temp_s1_2;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_s5 = arg0 + 0x44;
    var_s3 = *(s32 **)((u8 *)arg0 + 0x3C);
    temp_s4 = *(u8 **)((u8 *)arg0 + 0x14);
    if (var_s3 != temp_s5) {
        var_s2 = 0;
        temp_s7 = amPkt_Alloc(0x1000);
        temp_f23 = *(f32 *)((u8 *)temp_s4 + 0x50);
        temp_f22 = 0.5f * temp_f23;
        temp_s6 = (*(s32 *)((u8 *)temp_s4 + 0x58) * 2) + 1;
        temp_f21 = -1.73f * temp_f22;
        temp_f20 = temp_f23 * (f32) *(s32 *)((u8 *)temp_s4 + 0x5C);
        func_0013B160(*(u8 **)((u8 *)temp_s4 + 0x64));
        func_0013B190(0);
        M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        var_s1 = 0.5f + (fabsf(sp180) / temp_f23);
        if (sp180 < 0.0f) {
            var_s1 = M2C_BITWISE(f32, -M2C_BITWISE(s32, var_s1));
        }
        var_a0 = 0.5f + (fabsf(sp184) / temp_f23);
        temp_s1 = M2C_BITWISE(s32, var_s1) - *(s32 *)((u8 *)temp_s4 + 0x58);
        if (sp184 < 0.0f) {
            var_a0 = M2C_BITWISE(f32, -M2C_BITWISE(s32, var_a0));
        }
        var_s0 = 0.5f + (fabsf(sp188) / temp_f23);
        if (sp188 < 0.0f) {
            var_s0 = M2C_BITWISE(f32, -M2C_BITWISE(s32, var_s0));
        }
        sp19C = 0x3F800000;
        temp_s0 = M2C_BITWISE(s32, var_s0) - *(s32 *)((u8 *)temp_s4 + 0x58);
        sp190 = 0.0f;
        sp198 = 0.0f;
        sp194 = (f32) (M2C_BITWISE(s32, var_a0) - *(s32 *)((u8 *)temp_s4 + 0x58)) * temp_f23;
        func_0013B0B0(NULL);
        func_0013B160(*(u8 **)((u8 *)temp_s4 + 0x64));
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */);
        var_fp = 0;
loop_29:
        if (var_fp >= temp_s6) {

        } else {
            if (sp194 < -temp_f22) {
                sp194 += temp_f23;
                goto block_28;
            }
            spC0 = 0;
            var_f0 = (f32) temp_s1 * temp_f23;
loop_26:
            sp190 = var_f0;
            if (spC0 >= temp_s6) {
                sp194 += temp_f23;
block_28:
                var_fp += 1;
                goto loop_29;
            }
            spB0 = 0;
            var_f0_2 = (f32) temp_s0 * temp_f23;
loop_24:
            sp198 = var_f0_2;
            if (spB0 >= temp_s6) {
                var_f0 = sp190 + temp_f23;
                spC0 += 1;
                goto loop_26;
            }
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf1, $vf28 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf2, $vf29 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf3, $vf30 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf4, $vf31 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf24, $vf1 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf25, $vf2 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf26, $vf3 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf27, $vf4 */);
            if ((temp_f21 < sp1A8) && (sp1A8 < temp_f20) && (func_00132D20(*(s32 *)((u8 *)temp_s4 + 0x60), &sp1A0, *(f32 *)((u8 *)temp_s4 + 0x54)) == 0)) {
                temp_v0 = temp_s7 + (var_s2 * 0x10);
                var_s2 += 1;
                *(f32 *)((u8 *)temp_v0 + 0) = sp190;
                *(f32 *)((u8 *)temp_v0 + 4) = sp194;
                *(f32 *)((u8 *)temp_v0 + 8) = sp198;
                *(s3232 *)((u8 *)temp_v0 + 0xC) = sp19C;
                if (var_s2 < 0x100) {
                    goto block_23;
                }
            } else {
block_23:
                var_f0_2 = sp198 + temp_f23;
                spB0 += 1;
                goto loop_24;
            }
        }
        func_00133780(0, 1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s7) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        if (D_0047064C != 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
            M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            var_a2 = &spF0;
        } else {
            var_a2 = var_s3 + 0x30;
        }
        func_00134690(1, 0x100924, var_a2, *(s32 *)((u8 *)temp_s4 + 0x4C));
loop_39:
        if (var_s3 != temp_s5) {
            spE0 = *(f32 *)((u8 *)temp_s4 + 0x44);
            spE4 = 0.0f;
            spE8 = 0.0f;
            spEC = 1.0f;
            spD0 = 0.0f;
            spD4 = *(f32 *)((u8 *)temp_s4 + 0x48);
            spD8 = 0.0f;
            spDC = 1.0f;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            sp100 = 0.0f;
            sp104 = 0.0f;
            sp10C = 1.0f;
            sp114 = 0.0f;
            sp118 = 1.0f;
            sp11C = 1.0f;
            sp120 = 0.0f;
            sp108 = 1.0f;
            sp124 = 1.0f;
            sp12C = 1.0f;
            sp128 = 1.0f;
            sp130 = 1.0f;
            sp110 = 1.0f;
            sp134 = 1.0f;
            sp138 = 1.0f;
            sp13C = 1.0f;
            func_00135F10(&sp140, &sp100);
            func_00135F10(&sp150, &sp110);
            func_00135F10(&sp160, &sp120);
            func_00135F10(&sp170, &sp130);
            if (*var_s3 != temp_s5) {
                amDraw_ClosePacket(-1);
            }
            var_s3 = *var_s3;
            goto loop_39;
        }
        amDraw_FlushPacket();
        func_0013B060(NULL);
        if (var_s2 >= 2) {
            var_s0_2 = 1;
            var_s1_2 = amPkt_Alloc(0x20010);
loop_44:
            if (var_s0_2 < var_s2) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
                func_0012EF80((u8 *) var_s1_2, D_00470284, 0x1F);
                temp_v1 = var_s1_2 + 0x10;
                M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
                temp_s1_2 = temp_v1 + 0x1E0;
                *(s32 *)((u8 *)temp_v1 + 0x1E0) = 0x50000000;
                *(s32 *)((u8 *)temp_s1_2 + 4) = (s32) ((u64) ((s64) D_00470280 << 0x24) >> 0x24);
                *(s32 *)((u8 *)temp_s1_2 + 8) = 0;
                *(s32 *)((u8 *)temp_s1_2 + 0xC) = 0;
                var_s1_2 = (s64) (temp_s1_2 + 0x10);
                func_0013B060(NULL);
                var_s0_2 += 1;
                goto loop_44;
            }
            *(s32 *)((u8 *)var_s1_2 + 0) = 0x70000000;
            *(s32 *)((u8 *)var_s1_2 + 4) = 0;
            *(s32 *)((u8 *)var_s1_2 + 8) = 0;
            *(s32 *)((u8 *)var_s1_2 + 0xC) = 0;
            amDma_Request(0, 1, 1, 1);
        }
        func_0013B110(1);
    }
}
