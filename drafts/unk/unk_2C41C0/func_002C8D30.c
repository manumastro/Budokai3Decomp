/* Draft (not built): func_002C8D30 at 0x002C8D30, size 0x3E4, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 168 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2AC, original 0x3E4
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C8D30.s */

// src/unk/unk_2C41C0.c func_002C8D30 size diff=168/171
s32 func_00133780(s32, s32);
s32 func_00134690(s32, s32, s128 *, s32);
s32 func_001351F0(s32, s32, s32, s128 *);
s32 func_00136230(s32 *, f32 *);
s32 func_00146ED0(s32 *, s32 *, f32);
s32 func_0020AD30(s32, s16, s16);
extern s128 D_00456460;
extern void amDraw_FlushPacket(void);
extern void func_00146F30(void *);
extern void amModel_SetCurrent();
void func_002C8D30(u8 *arg0) {
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    f32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    f32 spE0;
    s32 spE4;
    s32 spE8;
    s32 spEC;
    f32 spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    f32 sp100;
    s32 sp104;
    s32 sp108;
    s32 sp10C;
    s32 sp110;
    s32 sp120;
    s32 sp130;
    s32 sp140;
    s128 sp150;
    f32 sp15C;
    s128 sp160;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f20;
    f32 var_f21;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *var_s4;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0);
    temp_s2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x14)) + 0x1350);
    temp_a0 = (u8 *)(gEffWork + (*(s16 *)((u8 *)arg0 + 0x3E) * 0xF80));
    temp_s4 = *(u8 **)((u8 *)temp_a0 + 0xF78);
    temp_s5 = temp_a0 + 0xF00;
    var_s1 = 0;
    if (*(u8 **)((u8 *)temp_s4 + 0x38) == temp_s5) {
        goto block_15;
    }
    sp160 = D_00456460;
    sp150 = *(s128 *)((u8 *)temp_s3 + 0x10);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x20);
    if (temp_f1 <= 0.0f) {
        goto block_15;
    }
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x28);
    var_f21 = 1.0f;
    var_f20 = 1.0f;
    if (!(temp_f1 < temp_f0)) {
        goto block_4;
    }
    temp_f20 = temp_f1 / temp_f0;
    var_f21 = temp_f20;
    var_f20 = temp_f20 * temp_f20;
block_4:
    *(f32 *)((u8 *)arg0 + 0x2C) = var_f20;
    sp15C = *(f32 *)((u8 *)temp_s3 + 0x50);
    temp_s2_2 = (s32)(func_0020B020(temp_s2, *(s16 *)((u8 *)temp_s3 + 0x88), *(s16 *)((u8 *)temp_s3 + 0x8A)));
    amModel_SetCurrent(temp_s2_2, func_0020AD30(temp_s2, *(s16 *)((u8 *)temp_s3 + 0x88), *(s16 *)((u8 *)temp_s3 + 0x8A)));
    func_00133780(0, 1);
    if (*(s16 *)((u8 *)temp_s3 + 0x80) == 0) {
        goto block_6;
    }
    func_001351F0(1, 0xC21, 0, &sp160);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s4) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00146ED0(&sp90, &sp90, *(f32 *)((u8 *)temp_s3 + 0x3C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp80 = *(f32 *)((u8 *)temp_s3 + 0x38) * var_f21;
    sp88 = 0.0f;
    sp8C = 1.0f;
    sp84 = *(f32 *)((u8 *)temp_s3 + 0x38) * var_f21;
    func_00136230(&spC0, &sp80);
    amDraw_FlushPacket();
block_6:
    if (*(s32 *)((u8 *)arg0 + 0x40) >= 3) {
        goto block_8;
    }
    func_00133780(0, 0);
    return;
block_8:
    func_00134690(1, 0x836, &sp150, *(s32 *)((u8 *)arg0 + 0x4C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F30(&spA0);
    if (*(f32 *)((u8 *)temp_s3 + 0xA4) == 0.0f) {
        goto block_10;
    }
    sp15C = 0.0f;
block_10:
    spD0 = 0.0f;
    spD4 = 0;
    spE0 = 0.0f;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    spF0 = 1.0f;
    spE4 = 0x3F800000;
    sp100 = 1.0f;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spF4 = 0;
    spF8 = 0x3F800000;
    spFC = 0x3F800000;
    sp104 = 0x3F800000;
    sp108 = 0x3F800000;
    sp10C = 0x3F800000;
    func_00146ED0(&sp90, &spA0, *(f32 *)((u8 *)temp_s3 + 0x44) * var_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00135D40(&sp110, &sp150, &spD0);
    func_00135D40(&sp120, &sp150, &spE0);
    func_00135D40(&sp130, &sp150, &spF0);
    func_00135D40(&sp140, &sp150, &sp100);
    var_s4 = *(u8 **)((u8 *)temp_s4 + 0x38);
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    goto loop_13;
block_12:
    *(s32 *)((u8 *)arg0 + 0x44) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) - (var_s1 + 2));
    func_002C8A80(var_s4, arg0, &sp150);
    var_s4 = *(u8 **)((u8 *)var_s4 + 0x38);
    var_s1 += 1;
loop_13:
    if (var_s4 != temp_s5) {
        goto block_12;
    }
    amDraw_FlushPacket();
    func_00133780(0, 0);
block_15:
    return;
}
