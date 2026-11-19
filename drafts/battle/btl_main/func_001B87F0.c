/* Draft (not built): func_001B87F0 at 0x001B87F0, size 0x658, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 225 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x588, original 0x658
 * Original: asm/nonmatchings/battle/btl_main/func_001B87F0.s */

// src/battle/btl_main.c func_001B87F0 size diff=225/354
s32 func_00146F60(s32 *, void *);
f32 func_00146F90(s32 *, s32 *);
s32 func_001D8B50(void *, s32);
s32 func_001E0200(void *, s32, s32);
s32 func_001E8C10(void *, s32);
s32 func_001F9CD0(s32, s32, void *, void *);
extern void BtbBg_ClearFlag8(void);
extern void Fighter_CreateHitEffect(void *, int);
extern void func_001B0B10(void);
extern void func_001B0810(void);
void func_001B87F0(u8 *arg0) {
    s32 sp44;
    s32 sp40;
    s32 sp50;
    s32 sp60;
    u8 *sp70;
    u8 *sp74;
    s32 sp78;
    s32 sp7C;
    void (*sp80)();
    void (*sp84)();
    s32 sp90;
    BattleWork *temp_s0;
    f32 temp_f0;
    f32 temp_f20;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 var_v0_2;
    s16 var_v1;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;

    temp_s0 = gBattle;
    temp_f20 = temp_s0->unk88F0 * *(f32 *)((u8 *)arg0 + 0xC9C);
    Fighter_ResetMotion(arg0, 0);
    if (*(f32 *)((u8 *)arg0 + 0xCB8) <= 0.0f) {
        goto block_2;
    }
    func_00146F10(&sp90, arg0 + 0xD0, temp_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E4FA0(arg0, -1);
block_2:
    func_001E4E20(arg0, 0);
    temp_a0 = *(s16 *)((u8 *)arg0 + 0xCB4);
    if (temp_a0 == 2) {
        goto block_34;
    }
    if (temp_a0 == 1) {
        goto block_15;
    }
    if (temp_a0 == 0) {
        goto block_7;
    }
    goto block_36;
block_7:
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
        goto block_12;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2013) > 0) {
        goto block_12;
    }
    temp_a0_2 = *(s16 *)((u8 *)arg0 + 0xCAE);
    if (temp_a0_2 == 0x2B) {
        goto block_12;
    }
    if (temp_a0_2 != 0x33) {
        goto block_14;
    }
block_12:
    *(s16 *)((u8 *)arg0 + 0xCB4) = -1;
    goto block_36;
block_14:
    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
block_15:
    if (!((*(f32 *)((u8 *)arg0 + 0x182C) - *(f32 *)((u8 *)arg0 + 0xCB8)) < 5.0f)) {
        goto block_18;
    }
    *(s16 *)((u8 *)arg0 + 0xCB4) = -1;
    goto block_36;
block_18:
    if (*(s16 *)((u8 *)arg0 + 0x13A4) < 0) {
        goto block_30;
    }
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x13B0);
    var_a0 = 0;
    if (temp_v1 != 0) {
        goto block_22;
    }
    goto block_29;
block_22:
    var_a0 = 0;
    if (temp_v1 >= -5) {
        goto block_25;
    }
    goto block_29;
block_25:
    var_a0 = 0;
    if (temp_v1 < 0xB) {
        goto block_28;
    }
    goto block_29;
block_28:
    var_a0 = 1;
block_29:
    goto block_32;
block_30:
    var_a0 = func_001E8C10(arg0, 1);
    if (var_a0 != 0) {
        goto block_32;
    }
    *(s16 *)((u8 *)arg0 + 0xCB4) = -1;
block_32:
    if (var_a0 == 0) {
        goto block_36;
    }
    *(s16 *)((u8 *)arg0 + 0xCB4) = 2;
    goto block_36;
block_34:
    if (!((*(f32 *)((u8 *)arg0 + 0x182C) - *(f32 *)((u8 *)arg0 + 0xCB8)) < 5.0f)) {
        goto block_36;
    }
    *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
    *(s8 *)((u8 *)arg0 + 0x183C) = (s8) (*(s8 *)((u8 *)arg0 + 0x183C) + 0x12);
    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
    D_004684B4(arg0, 1);
    func_002CBFF0(1, arg0);
    *(s8 *)((u8 *)arg0 + 0x183C) = (s8) (*(s8 *)((u8 *)arg0 + 0x183C) - 0x12);
    func_001D8B50(arg0, 0);
    return;
block_36:
    if (!(*(f32 *)((u8 *)arg0 + 0x182C) < *(f32 *)((u8 *)arg0 + 0xCB8))) {
        goto block_79;
    }
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x88FC);
    var_a1 = 0;
    if (temp_a0_3 == 3) {
        goto block_40;
    }
    if (temp_a0_3 != 1) {
        goto block_42;
    }
block_40:
    if (*(s32 *)((u8 *)temp_s0 + 0x8900) >= 0) {
        goto block_42;
    }
    var_a1 = 1;
block_42:
    if (gBtbBg.stage == 0) {
        goto block_45;
    }
    if (*(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1FF8) != -1) {
        goto block_45;
    }
    var_a1 = 1;
block_45:
    if (var_a1 == 0) {
        goto block_47;
    }
    func_001D8B50(arg0, var_a1);
block_47:
    if (*(s8 *)((u8 *)arg0 + 0x183F) < 0) {
        goto block_55;
    }
    if (temp_s0->unk8944 != 0) {
        goto block_55;
    }
    temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x88F8);
    if (temp_a0_4 == 4) {
        goto block_52;
    }
    if (temp_a0_4 != 5) {
        goto block_55;
    }
block_52:
    sp70 = *(u8 **)((u8 *)arg0 + 0x1354);
    sp74 = arg0;
    sp78 = *(s32 *)((u8 *)arg0 + 0x1840);
    sp7C = (s32) *(s8 *)((u8 *)arg0 + 0x183F);
    sp80 = func_001B0B10;
    sp84 = func_001B0810;
    func_00237000(4, &sp70);
    if (*(s16 *)((u8 *)temp_s0 + 0x8948) < 0) {
        goto block_54;
    }
    *(s8 *)((u8 *)arg0 + 0x183F) = -1;
    BtbBg_ClearFlag8();
block_54:
    return;
block_55:
    if (temp_s0->unk8944 != 0) {
        goto block_79;
    }
    if (*(s8 *)((u8 *)arg0 + 0x183F) >= 0) {
        goto block_79;
    }
    *(s32 *)((u8 *)arg0 + 0x1864) = 1;
    func_001E5040(arg0);
    func_001E0200(arg0, 0x64, 0x6020);
    func_00146F60(&sp60, arg0 + 0xD0);
    func_00146F60(&sp50, arg0 + 0x110);
    temp_f0 = func_00146F90(&sp60, &sp50);
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) < 0) {
        goto block_60;
    }
    if (temp_f0 <= -0.7f) {
        goto block_73;
    }
block_60:
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
    *(f32 *)((u8 *)arg0 + 0x1810) = 1.2f;
    *(f32 *)((u8 *)arg0 + 0x1814) = 1.2f;
    *(s16 *)((u8 *)arg0 + 0x181E) = (s16) *(s16 *)((u8 *)arg0 + 0xCB4);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    if (*(s8 *)((u8 *)arg0 + 0x183C) == 0) {
        goto block_62;
    }
    *(f32 *)((u8 *)arg0 + 0x1814) = (f32) -*(f32 *)((u8 *)arg0 + 0x1814);
block_62:
    if (sp44 <= 0.0f) {
        goto block_65;
    }
    var_v0 = (*(s32 *)((u8 *)arg0 + 0x17A4) + 0x2AAA) & 0xFFFF;
    goto block_66;
block_65:
    var_v0 = (*(s32 *)((u8 *)arg0 + 0x17A4) - 0x2AAA) & 0xFFFF;
block_66:
    *(s32 *)((u8 *)arg0 + 0x17A4) = var_v0;
    *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
    if (!(((*(f32 *)((u8 *)arg0 + 0x44) + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 25.0f)) {
        goto block_68;
    }
    *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
block_68:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E4FA0(arg0, -1);
    var_v1 = 1;
    *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
    if (*(s8 *)((u8 *)arg0 + 0x183C) == 0) {
        goto block_70;
    }
    goto block_71;
block_70:
    var_v1 = 0;
block_71:
    *(s16 *)((u8 *)arg0 + 0x181E) = var_v1;
    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
    D_004684A0(arg0);
    func_002CBFF0(1, arg0);
    goto block_78;
block_73:
    var_v0_2 = 1;
    if (*(s8 *)((u8 *)arg0 + 0x183C) == 0) {
        goto block_76;
    }
    goto block_77;
block_76:
    var_v0_2 = 0;
block_77:
    *(s16 *)((u8 *)arg0 + 0xCB4) = var_v0_2;
    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
    D_004684E4(arg0);
    func_002CBFF0(1, arg0);
block_78:
    Fighter_CreateHitEffect(arg0, 0);
    func_001F9CD0(*(s32 *)((u8 *)arg0 + 0x1350), 7, arg0 + 0x100, arg0 + 0x110);
    func_001E9B00(1, 0x2D, 0, 0, 0.0f, 1.0f);
    func_001D9900(arg0, 0x13, 1);
block_79:
    return;
}
