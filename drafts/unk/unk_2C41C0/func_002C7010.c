/* Draft (not built): func_002C7010 at 0x002C7010, size 0x2C4, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 116 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x258, original 0x2C4
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C7010.s */

// src/unk/unk_2C41C0.c func_002C7010 size diff=116/150
s32 func_00133780(s32, s32);
s32 func_00134690(s32, s32, s128 *, s32);
s32 func_001351F0(s32, s32, s32, s128 *);
s32 func_00136230(s32 *, f32 *);
s32 func_00146ED0(s32 *, s32 *, f32);
s32 func_0020AD30(s32, s16, s16);
extern s128 D_00456480;
extern void amDraw_FlushPacket(void);
extern void amModel_SetCurrent();
void func_002C7010(u8 *arg0) {
    s32 sp70;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    s32 sp90;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    s128 spE0;
    f32 spEC;
    s128 spF0;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f2;
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
    temp_a0 = (unsigned char *)(gEffWork + (*(s16 *)((u8 *)arg0 + 0x3E) * 0xF80));
    temp_s4 = *(u8 **)((u8 *)temp_a0 + 0xF78);
    temp_s5 = temp_a0 + 0xF00;
    var_s1 = 0;
    if (*(u8 **)((u8 *)temp_s4 + 0x38) == temp_s5) {
        goto block_10;
    }
    temp_s2_2 = (int)(func_0020B020(temp_s2, *(s16 *)((u8 *)temp_s3 + 0x88), *(s16 *)((u8 *)temp_s3 + 0x8A)));
    amModel_SetCurrent(temp_s2_2, func_0020AD30(temp_s2, *(s16 *)((u8 *)temp_s3 + 0x88), *(s16 *)((u8 *)temp_s3 + 0x8A)));
    spF0 = D_00456480;
    spE0 = *(s128 *)((u8 *)temp_s3 + 0x10);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x20);
    if (temp_f1 <= 0.0f) {
        goto block_10;
    }
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x28);
    var_f2 = 1.0f;
    if (!(temp_f1 < temp_f0)) {
        goto block_4;
    }
    temp_f2 = temp_f1 / temp_f0;
    var_f2 = temp_f2 * temp_f2;
block_4:
    *(f32 *)((u8 *)arg0 + 0x2C) = var_f2;
    spEC = *(f32 *)((u8 *)temp_s3 + 0x50) * var_f2;
    func_00133780(0, 1);
    if (*(s16 *)((u8 *)temp_s3 + 0x80) == 0) {
        goto block_6;
    }
    func_001351F0(1, 0xC21, 0, &spF0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s4) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00146ED0(&sp70, &sp70, *(f32 *)((u8 *)temp_s3 + 0x3C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp80 = *(f32 *)((u8 *)temp_s3 + 0x38);
    sp84 = *(f32 *)((u8 *)temp_s3 + 0x38);
    sp88 = 0.0f;
    sp8C = 1.0f;
    func_00136230(&sp90, &sp80);
    amDraw_FlushPacket();
block_6:
    func_00134690(1, 0x836, &spE0, *(s32 *)((u8 *)arg0 + 0x4C));
    spA8 = 0x3F800000;
    spAC = 0x3F800000;
    spB4 = 0x3F800000;
    spB8 = 0x3F800000;
    spBC = 0x3F800000;
    spC0 = 0x3F800000;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD0 = 0x3F800000;
    spD4 = 0x3F800000;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    spA0 = 0;
    spA4 = 0;
    spB0 = 0;
    spC4 = 0;
    func_00135D40(temp_s4, &spE0, &spA0);
    func_00135D40(temp_s4 + 0x10, &spE0, &spB0);
    func_00135D40(temp_s4, &spE0, &spC0);
    func_00135D40(temp_s4 + 0x10, &spE0, &spD0);
    var_s4 = *(u8 **)((u8 *)temp_s4 + 0x38);
    spEC = *(f32 *)((u8 *)temp_s3 + 0x50);
    goto loop_8;
block_7:
    *(s32 *)((u8 *)arg0 + 0x44) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) - (var_s1 + 2));
    func_002C6EF0(var_s4, arg0,(char *)(&spE0));
    var_s4 = *(u8 **)((u8 *)var_s4 + 0x38);
    var_s1 += 1;
loop_8:
    if (var_s4 != temp_s5) {
        goto block_7;
    }
    amDraw_FlushPacket();
    func_00133780(0, 0);
block_10:
    return;
}
