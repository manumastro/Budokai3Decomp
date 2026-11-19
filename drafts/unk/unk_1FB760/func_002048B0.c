/* Draft (not built): func_002048B0 at 0x002048B0, size 0x614, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 314 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x348, original 0x614
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002048B0.s */

// src/unk/unk_1FB760.c func_002048B0 size diff=314/210
s32 amDraw_ClosePacket(s32);
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00134690(s32, s32, s32, s32);
s32 func_00135E20(s32 *, void *, s32 *, void *);
s32 func_00146F60(s32 *, void *);
extern s32 D_0046FD18;
extern s32 D_0047064C;
extern void amDraw_FlushPacket(void);
extern void func_00135D40(void *, void *, void *);
void func_002048B0(u8 *arg0) {
    s32 *spA0;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    s32 sp130;
    s32 sp140;
    s32 sp150;
    s32 sp160;
    s32 sp170;
    f32 sp180;
    f32 sp184;
    f32 sp188;
    f32 sp18C;
    f32 sp190;
    f32 sp194;
    f32 sp198;
    f32 sp19C;
    f32 sp1A0;
    f32 sp1A4;
    f32 sp1A8;
    f32 sp1AC;
    f32 sp1B0;
    f32 sp1B4;
    f32 sp1B8;
    f32 sp1BC;
    s32 sp1C0;
    s32 sp1D0;
    s32 sp1E0;
    s32 sp1F0;
    s32 *var_s0;
    s32 *var_s5;
    s32 var_a1;
    s32 temp_s7;
    s32 var_fp;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s5;
    u8 *var_s4;

    temp_s7 = (int)(arg0 + 0x44);
    var_s3 = 0;
    var_s2 = 1;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x14);
    var_s4 = *(u8 **)((u8 *)arg0 + 0x3C);
    spB0 = D_0046FD18;
    var_s1 = 0x12;
    if (*(s32 *)((u8 *)temp_s0 + 8) & 1) {
        var_s1 = 0x12 | 0x800;
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
    if (*(s32 *)((u8 *)temp_s0 + 8) & 0x1000) {
        var_fp = *(s32 *)((u8 *)temp_s0 + 0xC4);
loop_25:
        if ((s32)(var_s4) != (s32)(temp_s7)) {
            if (!(*(s32 *)((u8 *)var_s4 + 0xC) & 1)) {
                spA0 = (int *)(&D_0051D9B0);
                if (D_0047064C != 0) {
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_s0 = &sp120;
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    var_s5 = &sp110;
                } else {
                    var_s0 = (int *)(var_s4 + 0x30);
                    var_s5 = (int *)(var_s4 + 0x40);
                }
                func_00146F60(&sp170, var_s4 + 0x20);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                func_00146F10(&sp130, &sp170, *(f32 *)((u8 *)var_s4 + 0x60));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                func_00146F30((f32 *)(&sp150));
                func_00146F10(&sp170, &sp150, *(f32 *)((u8 *)var_s4 + 0x68));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                func_00146F10(&sp170, &sp150, *(f32 *)((u8 *)var_s4 + 0x64));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                sp180 = *(f32 *)((u8 *)var_s4 + 0x50);
                sp184 = *(f32 *)((u8 *)var_s4 + 0x54);
                sp188 = 1.0f;
                sp18C = 1.0f;
                sp190 = *(f32 *)((u8 *)var_s4 + 0x58);
                sp194 = *(f32 *)((u8 *)var_s4 + 0x54);
                sp198 = 1.0f;
                sp19C = 1.0f;
                sp1A0 = *(f32 *)((u8 *)var_s4 + 0x50);
                sp1A4 = *(f32 *)((u8 *)var_s4 + 0x5C);
                sp1A8 = 1.0f;
                sp1AC = 1.0f;
                sp1B0 = *(f32 *)((u8 *)var_s4 + 0x58);
                sp1B4 = *(f32 *)((u8 *)var_s4 + 0x5C);
                sp1B8 = 1.0f;
                sp1BC = 1.0f;
                if (var_s3 == 0x80) {
                    var_s2 = 1;
                    var_s3 = 0;
                    amDraw_FlushPacket();
                    amDraw_SetPacketMode(1);
                }
                if (var_s2 != 0) {
                    func_00134690(1, var_s1 | 0x24, 0, var_fp);
                    var_fp = -1;
                    var_s2 = 0;
                } else {
                    amDraw_ClosePacket(-1);
                }
                func_00135D40(&sp1C0, var_s5, &sp180);
                func_00135D40(&sp1D0, var_s5, &sp190);
                func_00135D40(&sp1E0, var_s0, &sp1A0);
                func_00135D40(&sp1F0, var_s0, &sp1B0);
                var_s3 += 1;
            }
            var_s4 = *(u8 **)((u8 *)var_s4 + 0);
            goto loop_25;
        }
    } else {
loop_36:
        if ((s32)(var_s4) != (s32)(temp_s7)) {
            if (!(*(s32 *)((u8 *)var_s4 + 0xC) & 1)) {
                temp_s0_2 = var_s4 + 0x30;
                temp_s5 = var_s4 + 0x40;
                func_00146F60(&sp100, var_s4 + 0x20);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                func_00146F10(&spC0, &sp100, *(f32 *)((u8 *)var_s4 + 0x60));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($fp) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                func_00146ED0((f32 *)(&sp100), (f32 *)(&spF0), *(f32 *)((u8 *)var_s4 + 0x68));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                func_00146ED0((f32 *)(&sp100), (f32 *)(&spF0), *(f32 *)((u8 *)var_s4 + 0x64));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
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
                func_00135E20(&sp1C0, temp_s5, &sp1D0, temp_s5);
                func_00135E20(&sp1E0, temp_s0_2, &sp1F0, temp_s0_2);
                var_s3 += 1;
            }
            var_s4 = *(u8 **)((u8 *)var_s4 + 0);
            goto loop_36;
        }
    }
    amDraw_FlushPacket();
    amDraw_SetPacketMode(0);
    amGs_SetReg32(0, spB0);
}
