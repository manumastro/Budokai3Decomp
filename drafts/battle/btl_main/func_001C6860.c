/* Draft (not built): func_001C6860 at 0x001C6860, size 0x8D0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 252 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x878, original 0x8D0
 * Original: asm/nonmatchings/battle/btl_main/func_001C6860.s */

// src/battle/btl_main.c func_001C6860 size diff=252/542
extern void func_001E4800(void *f);
extern void func_001E4F40(void *f);
s32 amMotion_LoadPose(s32);
s32 func_001AAA60(void *);
s32 func_001AB000(void *);
s32 func_001DA170(void *);
s32 func_001DB660(void *);
s32 func_001DB790(void *);
s32 func_001DB7C0(void *);
s32 func_001DBB30(void *, void *);
s32 func_001DC150(s32);
s32 func_001DE4B0(void *);
s32 func_001DF170(void *);
s32 func_001E09E0(void *);
s32 func_001E2C50(void *);
s32 func_001E3100(void *);
s32 func_001E3950(void *);
s32 func_001E39B0(s32);
s32 func_001E3DD0(void *);
s32 func_001E7180(void *);
f32 func_001FD800(f32, f32);
extern s32 D_004E0660;
extern void func_001E3550();
extern void Fighter_CreateHitEffect(void *, int);
extern void func_001EA300(void);
extern void func_001E8B80(void *);
void func_001C6860(void) {
    u8 *sp60;
    s32 sp64;
    u8 *sp68;
    s32 sp6C;
    f32 temp_f1;
    f32 temp_f2;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v1_2;
    s16 temp_v1_4;
    s32 (*temp_v0_4)(s32, s32, s32);
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2_5;
    s32 var_s2_8;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s4;
    s8 var_t1;
    u8 var_v0_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s4;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *var_a0;
    u8 *var_a2_2;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s2_2;
    u8 *var_s2_3;
    u8 *var_s2_4;
    u8 *var_s2_6;
    u8 *var_s2_7;
    u8 *var_s3_4;
    u8 *var_t0;
    u8 *var_v0;

    var_s3 = 0;
    temp_s1 = (u8 *)(gBattle);
    var_s0 = temp_s1 + 0x830;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_4;
    }
    var_s2 = var_s0;
loop_2:
    func_001E4F40(var_s2);
    func_001E4800(var_s2);
    func_001DB660(var_s2);
    func_001E7180(var_s2 + 0x650);
    func_001E7180(var_s2 + 0xCD0);
    var_s3 += 1;
    var_s2 += 0x2020;
    if (var_s3 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_2;
    }
block_4:
    if (*(s32 *)((u8 *)temp_s1 + 0x88EC) != 0) {
        goto block_101;
    }
    var_t1 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_16;
    }
    var_t0 = var_s0;
loop_7:
    temp_v0 = *(s16 *)((u8 *)var_t0 + 0xCAC);
    if (temp_v0 == 0x1B) {
        goto block_10;
    }
    if (temp_v0 != 0x1D) {
        goto block_11;
    }
block_10:
    *(s8 *)((u8 *)temp_s1 + 0x8976) = func_001C3500(9, 0x1D, 0x1B, *(s32 *)((u8 *)temp_s1 + 0x88D8));
    goto block_16;
block_11:
    if (temp_v0 != 9) {
        goto block_15;
    }
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)var_t0 + 0x1354)) + 0xCAC) != 0xB) {
        goto block_15;
    }
    *(s8 *)((u8 *)temp_s1 + 0x8976) = var_t1;
    goto block_16;
block_15:
    var_t1 += 1;
    var_t0 += 0x2020;
    if (var_t1 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_7;
    }
block_16:
    var_s3_2 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_20;
    }
    var_s2_2 = temp_s1;
loop_18:
    *(u8 **)((u8 *)var_s2_2 + 0x88DC) = (u8 *) (temp_s1 + (((s32) (*(s8 *)((u8 *)temp_s1 + 0x8976) + var_s3_2) % (s32) *(s32 *)((u8 *)gBattle + 0x88D8)) * 0x2020) + 0x830);
    amMotion_LoadPose(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2_2 + 0x88DC)) + 0xB88));
    var_s3_2 += 1;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2_2 + 0x88DC)) + 0x18A0) = 0x3F800000;
    var_s2_2 += 4;
    if (var_s3_2 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_18;
    }
block_20:
    func_001E09E0(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001E09E0(*(u8 **)((u8 *)gBattle + 0x88E0));
    temp_v0_2 = *(u8 **)((u8 *)gBattle + 0x88DC);
    *(f32 *)((u8 *)temp_v0_2 + 0x17CC) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x17C0);
    temp_v0_3 = *(u8 **)((u8 *)gBattle + 0x88E0);
    *(f32 *)((u8 *)temp_v0_3 + 0x17CC) = (f32) *(f32 *)((u8 *)temp_v0_3 + 0x17C0);
    var_s2_3 = func_001EA230();
    if (*(s8 *)((u8 *)gBattle + 0x8AB9) == 0) {
        goto loop_28;
    }
    goto block_29;
block_22:
    if (*(s32 *)((u8 *)var_s2_3 + 0x38) & 0xA) {
        goto block_27;
    }
    if ((func_001FD800(*(f32 *)((u8 *)var_s2_3 + 0), *(f32 *)((u8 *)var_s2_3 + 8)) + (0.25f * *(f32 *)((u8 *)var_s2_3 + 0x20))) <= *(f32 *)((u8 *)var_s2_3 + 4)) {
        goto block_27;
    }
    temp_v0_4 = *(s32 (**)(s32, s32, s32))((u8 *)var_s2_3 + 0x28);
    if (temp_v0_4 == NULL) {
        goto block_27;
    }
    if (temp_v0_4(*(s32 *)((u8 *)var_s2_3 + 0x2C), 4, 0) == 0) {
        goto block_27;
    }
    *(s32 *)((u8 *)var_s2_3 + 0x38) = (s32) (*(s32 *)((u8 *)var_s2_3 + 0x38) | 2);
block_27:
    var_s2_3 = *(u8 **)((u8 *)var_s2_3 + 0x3C);
loop_28:
    if (var_s2_3 != NULL) {
        goto block_22;
    }
block_29:
    func_001C3E10();
    if (*(s16 *)((u8 *)temp_s1 + 0x8944) != 0) {
        goto block_62;
    }
    var_s4 = 0;
    var_s3_3 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_36;
    }
    var_s2_4 = temp_s1;
loop_32:
    if (func_001DC150(*(s32 *)((u8 *)var_s2_4 + 0x88DC)) == 0) {
        goto block_34;
    }
    var_s4 = 1;
    goto block_36;
block_34:
    var_s3_3 += 1;
    var_s2_4 += 4;
    if (var_s3_3 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_32;
    }
block_36:
    if (var_s4 != 0) {
        goto block_62;
    }
    temp_s2 = *(u8 **)((u8 *)gBattle + 0x88DC);
    *(s8 *)((u8 *)temp_s2 + 0x2007) = 0;
    temp_v1 = *(s32 *)((u8 *)gBattle + 0x88F8);
    if (temp_v1 == 4) {
        goto block_40;
    }
    if (temp_v1 != 5) {
        goto block_44;
    }
block_40:
    temp_v1_2 = *(s16 *)((u8 *)temp_s2 + 0xCAC);
    if (temp_v1_2 == 0x1B) {
        goto block_44;
    }
    if (temp_v1_2 == 0x1D) {
        goto block_44;
    }
    if (func_001DB7C0(temp_s2) == 0) {
        goto block_44;
    }
    sp68 = temp_s2;
    sp6C = *(s32 *)((u8 *)temp_s2 + 0x1354);
    func_00237000(0, &sp68);
block_44:
    temp_s2_2 = *(u8 **)((u8 *)gBattle + 0x88E0);
    *(s8 *)((u8 *)temp_s2_2 + 0x2007) = 0;
    temp_v1_3 = *(s32 *)((u8 *)gBattle + 0x88F8);
    if (temp_v1_3 == 4) {
        goto block_47;
    }
    if (temp_v1_3 != 5) {
        goto block_51;
    }
block_47:
    temp_v1_4 = *(s16 *)((u8 *)temp_s2_2 + 0xCAC);
    if (temp_v1_4 == 0x1B) {
        goto block_51;
    }
    if (temp_v1_4 == 0x1D) {
        goto block_51;
    }
    if (func_001DB7C0(temp_s2_2) == 0) {
        goto block_51;
    }
    sp60 = temp_s2_2;
    sp64 = *(s32 *)((u8 *)temp_s2_2 + 0x1354);
    func_00237000(0, &sp60);
block_51:
    temp_a0 = *(u8 **)((u8 *)gBattle + 0x88DC);
    temp_v1_5 = *(s32 *)((u8 *)gBattle + 0x88F8);
    if (temp_v1_5 == 4) {
        goto block_53;
    }
    if (temp_v1_5 != 5) {
        goto block_56;
    }
block_53:
    if (*(s8 *)((u8 *)gBattle + 0x8AB2) == 0) {
        goto block_55;
    }
    if (*(s8 *)((u8 *)gBattle + 0x8AB3) == *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x1354)) + 0x1350)) {
        goto block_56;
    }
block_55:
    func_001DBB30(temp_a0, gBattle);
block_56:
    temp_a0_2 = *(u8 **)((u8 *)gBattle + 0x88E0);
    temp_v1_6 = *(s32 *)((u8 *)gBattle + 0x88F8);
    if (temp_v1_6 == 4) {
        goto block_58;
    }
    if (temp_v1_6 != 5) {
        goto block_61;
    }
block_58:
    if (*(s8 *)((u8 *)gBattle + 0x8AB2) == 0) {
        goto block_60;
    }
    if (*(s8 *)((u8 *)gBattle + 0x8AB3) == *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0_2 + 0x1354)) + 0x1350)) {
        goto block_61;
    }
block_60:
    func_001DBB30(temp_a0_2, gBattle);
block_61:
    func_001C4000(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001C4000(*(u8 **)((u8 *)gBattle + 0x88E0));
    func_001C4710(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001C4710(*(u8 **)((u8 *)gBattle + 0x88E0));
block_62:
    func_001DA170(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001DA170(*(u8 **)((u8 *)gBattle + 0x88E0));
    func_001EA300();
    func_001DE4B0(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001DE4B0(*(u8 **)((u8 *)gBattle + 0x88E0));
    func_001E3DD0(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001E3DD0(*(u8 **)((u8 *)gBattle + 0x88E0));
    var_a2 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_65;
    }
    var_a0 = var_s0;
loop_64:
    var_a2 += 1;
    *(f32 *)((u8 *)var_a0 + 0x1398) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)var_a0 + 0x1354)) + 0x1390);
    *(f32 *)((u8 *)var_a0 + 0x139C) = (f32) *(f32 *)((u8 *)(*(u8 **)((u8 *)var_a0 + 0x1354)) + 0x1394);
    *(s32 *)((u8 *)var_a0 + 0x13A0) = 0xBF800000;
    var_a0 += 0x2020;
    if (var_a2 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_64;
    }
block_65:
    var_a3 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_77;
    }
    var_a2_2 = var_s0;
loop_67:
    temp_a1 = *(s16 *)((u8 *)var_a2_2 + 0x1FF0);
    if (temp_a1 != 0) {
        goto block_69;
    }
    var_v0 = NULL;
    goto block_70;
block_69:
    var_v0 = (u8 *)(&D_004E0660 + (temp_a1 * 0x28));
block_70:
    if (var_v0 == NULL) {
        goto block_72;
    }
    var_v0_2 = *(u8 *)((u8 *)var_v0 + 0x15);
    goto block_73;
block_72:
    var_v0_2 = 0;
block_73:
    if ((var_v0_2 & 0xFF) != 0x6A) {
        goto block_75;
    }
    temp_f2 = *(f32 *)((u8 *)var_a2_2 + 0x1390);
    temp_f1 = *(f32 *)((u8 *)var_a2_2 + 0x1394);
    *(f32 *)((u8 *)var_a2_2 + 0x1390) = (f32) *(f32 *)((u8 *)var_a2_2 + 0x1398);
    *(f32 *)((u8 *)var_a2_2 + 0x1394) = (f32) *(f32 *)((u8 *)var_a2_2 + 0x139C);
    *(f32 *)((u8 *)var_a2_2 + 0x1398) = temp_f2;
    *(f32 *)((u8 *)var_a2_2 + 0x139C) = temp_f1;
    *(f32 *)((u8 *)var_a2_2 + 0x13A0) = (f32) -*(f32 *)((u8 *)var_a2_2 + 0x13A0);
block_75:
    var_a3 += 1;
    var_a2_2 += 0x2020;
    if (var_a3 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_67;
    }
block_77:
    var_s2_5 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_83;
    }
    var_s3_4 = temp_s1;
loop_79:
    temp_s4 = *(u8 **)((u8 *)var_s3_4 + 0x88DC);
    if (func_001C09A0(temp_s4) == 0) {
        goto block_81;
    }
    func_001E3100(temp_s4);
    func_001E2C50(temp_s4);
    func_001E39B0(*(s32 *)((u8 *)temp_s4 + 0x1354));
    func_001D9C00(temp_s4);
    Fighter_CreateHitEffect(temp_s4, 0);
block_81:
    var_s2_5 += 1;
    var_s3_4 += 4;
    if (var_s2_5 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_79;
    }
block_83:
    func_001DF170(*(u8 **)((u8 *)gBattle + 0x88DC));
    func_001DF170(*(u8 **)((u8 *)gBattle + 0x88E0));
    var_s3_5 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_87;
    }
    var_s2_6 = var_s0;
loop_85:
    *(s32 *)((u8 *)var_s2_6 + 0x17F0) = 0;
    *(s16 *)((u8 *)var_s2_6 + 0x17F8) = 0;
    *(s32 *)((u8 *)var_s2_6 + 0x1864) = 0;
    *(s32 *)((u8 *)var_s2_6 + 0x17BC) = 0;
    func_001DB790(var_s2_6);
    func_001E3550(var_s2_6);
    func_001E8B80(var_s2_6);
    var_s3_5 += 1;
    var_s2_6 += 0x2020;
    if (var_s3_5 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_85;
    }
block_87:
    var_s3_6 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_94;
    }
    var_s2_7 = var_s0;
loop_89:
    func_001E3950(var_s2_7);
    if (*(s16 *)((u8 *)var_s2_7 + 0x13A4) >= 0) {
        goto block_91;
    }
    func_001AAA60(var_s2_7 + 0x1360);
    goto block_92;
block_91:
    func_001AB000(var_s2_7 + 0x1360);
block_92:
    var_s3_6 += 1;
    var_s2_7 += 0x2020;
    if (var_s3_6 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_89;
    }
block_94:
    var_s2_8 = 0;
    if (*(s32 *)((u8 *)temp_s1 + 0x88D8) <= 0) {
        goto block_101;
    }
loop_96:
    if (*(s8 *)((u8 *)var_s0 + 0x1FF8) < 2) {
        goto block_98;
    }
    func_001C3120(var_s0);
    goto block_99;
block_98:
    func_001ABD30((void *)(var_s0 + 0x1360));
block_99:
    var_s2_8 += 1;
    var_s0 += 0x2020;
    if (var_s2_8 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        goto loop_96;
    }
block_101:
    return;
}
