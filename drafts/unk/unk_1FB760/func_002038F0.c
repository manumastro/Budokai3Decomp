/* Draft (not built): func_002038F0 at 0x002038F0, size 0x620, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); legal operand mwccps2.exe Compiler: 620: func_00141CF0(0, var_s4 + 0x30, var_s4 + 0x10); @ 592: if (var_s4 != temp_s6) {
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002038F0.s */

// src/unk/unk_1FB760.c func_002038F0 cerr diff=-1/0
s32 amDraw_ClosePacket(s32);
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 amMtxStack_Pop(s32);
s32 func_00134690(s32, s32, s32, s32);
s32 func_00135E20(f32 *, s32 *, f32 *, s32 *);
extern s32 D_0046FD18;
extern s32 D_0047064C;
extern void func_0013B0B0(void *);
extern void amDraw_FlushPacket(void);
extern void func_0013B060(void *);
extern void func_00135D40(void *, void *, void *);
void func_002038F0(u8 *arg0) {
    s32 spB0;
    s32 spC0;
    f32 spD0;
    f32 spD4;
    s32 spD8;
    s32 spDC;
    f32 spE0;
    f32 spE4;
    s32 spE8;
    s32 spEC;
    f32 spF0;
    f32 spF4;
    s32 spF8;
    s32 spFC;
    f32 sp100;
    f32 sp104;
    s32 sp108;
    s32 sp10C;
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
    f32 sp140;
    f32 sp144;
    f32 sp148;
    f32 sp14C;
    s32 *var_s0;
    s32 *var_s0_2;
    s32 var_a1;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_fp;
    s32 temp_s6;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    u8 *temp_s0;
    u8 *var_s4;

    temp_s6 = (s32)(arg0 + 0x44);
    var_s3 = 0;
    var_s2 = 1;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s4 = *(u8 **)((u8 *)arg0 + 0x3C);
    temp_fp = D_0046FD18;
    var_s1 = 2;
    if (*(s32 *)((u8 *)temp_s0 + 8) & 1) {
        var_s1 = 2 | 0x800;
    }
    if (*(s32 *)((u8 *)temp_s0 + 8) & 2) {
        var_s1 |= 0x1000;
    }
    if (*(s32 *)((u8 *)temp_s0 + 8) & 0x02000000) {
        var_a1 = 1;
    } else {
        var_a1 = 0;
    }
    func_00133780(0, var_a1);
    if (!(*(s32 *)((u8 *)temp_s0 + 8) & 0x01000000)) {
        amGs_SetReg32(0, (D_0046FD18 & 0xFFF9FFFF) | 0x20000);
    }
    amDraw_SetPacketMode(1);
    func_0013B0B0(NULL);
    if (*(s32 *)((u8 *)temp_s0 + 8) & 0x1000) {
        var_s7 = *(s32 *)((u8 *)temp_s0 + 0xA4);
loop_25:
        if (var_s4 != temp_s6) {
            if (!(*(s32 *)((u8 *)var_s4 + 0xC) & 1)) {
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_s0 = &spC0;
                } else {
                    var_s0 = (s32 *)(var_s4 + 0x50);
                }
                temp_f20 = *(f32 *)((u8 *)var_s4 + 0x70) * *(f32 *)((u8 *)var_s4 + 0x74);
                spD0 = *(f32 *)((u8 *)var_s4 + 0x60);
                spD4 = *(f32 *)((u8 *)var_s4 + 0x64);
                spD8 = 0x3F800000;
                spDC = 0x3F800000;
                spE0 = *(f32 *)((u8 *)var_s4 + 0x68);
                spE4 = *(f32 *)((u8 *)var_s4 + 0x64);
                spE8 = 0x3F800000;
                spEC = 0x3F800000;
                spF0 = *(f32 *)((u8 *)var_s4 + 0x60);
                spF4 = *(f32 *)((u8 *)var_s4 + 0x6C);
                spF8 = 0x3F800000;
                spFC = 0x3F800000;
                sp100 = *(f32 *)((u8 *)var_s4 + 0x68);
                sp104 = *(f32 *)((u8 *)var_s4 + 0x6C);
                sp108 = 0x3F800000;
                sp10C = 0x3F800000;
                func_00141CF0(0, var_s4 + 0x30, var_s4 + 0x10);
                sp110 = -temp_f20;
                sp118 = 0.0f;
                sp11C = 1.0f;
                sp128 = 0.0f;
                sp12C = 1.0f;
                sp130 = -temp_f20;
                sp134 = -temp_f20;
                sp144 = -temp_f20;
                sp138 = 0.0f;
                sp13C = 1.0f;
                sp114 = temp_f20;
                sp120 = temp_f20;
                sp124 = temp_f20;
                sp140 = temp_f20;
                sp148 = 0.0f;
                sp14C = 1.0f;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                func_0013B060(NULL);
                if (var_s3 == 0x80) {
                    var_s2 = 1;
                    var_s3 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s2 != 0) {
                    func_00134690(1, var_s1 | 0x24, 0, var_s7);
                    var_s7 = -1;
                    var_s2 = 0;
                } else {
                    amDraw_ClosePacket(-1);
                }
                func_00135D40(&sp110, var_s0, &spD0);
                func_00135D40(&sp120, var_s0, &spE0);
                func_00135D40(&sp130, var_s0, &spF0);
                func_00135D40(&sp140, var_s0, &sp100);
                var_s3 += 1;
            }
            var_s4 = *(u8 **)((u8 *)var_s4 + 0);
            goto loop_25;
        }
    } else {
loop_39:
        if (var_s4 != temp_s6) {
            if (!(*(s32 *)((u8 *)var_s4 + 0xC) & 1)) {
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_s0_2 = &spB0;
                } else {
                    var_s0_2 = (s32 *)(var_s4 + 0x50);
                }
                temp_f20_2 = *(f32 *)((u8 *)var_s4 + 0x70) * *(f32 *)((u8 *)var_s4 + 0x74);
                func_00141CF0(0, var_s4 + 0x30, var_s4 + 0x10);
                sp110 = -temp_f20_2;
                sp114 = -temp_f20_2;
                sp118 = 0.0f;
                sp124 = -temp_f20_2;
                sp11C = 1.0f;
                sp128 = 0.0f;
                sp130 = -temp_f20_2;
                sp12C = 1.0f;
                sp138 = 0.0f;
                sp120 = temp_f20_2;
                sp13C = 1.0f;
                sp134 = temp_f20_2;
                sp140 = temp_f20_2;
                sp144 = temp_f20_2;
                sp148 = 0.0f;
                sp14C = 1.0f;
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                func_0013B060(NULL);
                if (var_s3 == 0x80) {
                    var_s2 = 1;
                    var_s3 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s2 != 0) {
                    func_00134690(1, var_s1, 0, -1);
                    var_s2 = 0;
                } else {
                    amDraw_ClosePacket(-1);
                }
                func_00135E20(&sp110, var_s0_2, &sp120, var_s0_2);
                func_00135E20(&sp130, var_s0_2, &sp140, var_s0_2);
                var_s3 += 1;
            }
            var_s4 = *(u8 **)((u8 *)var_s4 + 0);
            goto loop_39;
        }
    }
    amMtxStack_Pop(1);
    amDraw_FlushPacket();
    amDraw_SetPacketMode(0);
    amGs_SetReg32(0, temp_fp);
}
