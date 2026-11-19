/* Draft (not built): func_00277310 at 0x00277310, size 0x5B4, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 207 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x58C, original 0x5B4
 * Original: asm/nonmatchings/menu/ess_shop/func_00277310.s */

// src/menu/ess_shop.c func_00277310 size diff=207/355
void *A2d_AllocObj(s32, s32);
s32 func_00133780(s32, s32);
s32 func_00227880(s32 *);
s32 func_00227A30(f32 *);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0022C430(s32, s32, s32, f32);
s32 func_0022D4B0(void *, s32);
s32 func_0026D320(void *, void *, s16, s32);
extern s32 D_00453290;
extern f32 D_00470020;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gEssTrade;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
extern void func_0022C6B0(void *);
void func_00277310(void) {
    u8 *spA0;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    f32 spF0;
    f32 sp110;
    f32 sp114;
    s32 sp118;
    s32 sp130;
    s32 *temp_fp;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_s7;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    spE0 = 0x11401480;
    temp_s5 = *(u8 **)((u8 *)gEssTrade + 0x2C);
    temp_s7 = *(u8 **)((u8 *)gEssTrade + 0x30);
    D_00470704 = temp_s5;
    D_00470708 = 0;
    D_0047070C = 0x11401400;
    amModel_SetCurrent(temp_s5, 0x11401400);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s3 = *(u8 **)((u8 *)gEssTrade + 0x28);
    func_00228430(0);
    func_002284D0(0);
    func_00228430(0);
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)temp_s3 + 0x14) + (*(s32 *)((u8 *)gEssTrade + 0x98) * 4)), 1, (f32) *(s32 *)((u8 *)gEssTrade + 0xA0) * gFrameDelta);
    func_00228410();
    var_s1 = 0;
    temp_s2 = ((u8 *)gEssTrade) + 0xF8;
    goto loop_33;
block_1:
    if (var_s1 == 0) {
        goto block_3;
    }
    var_s0 = 0x1E;
    goto block_4;
block_3:
    var_s0 = 0x1D;
block_4:
    if (var_s1 == 0) {
        goto block_7;
    }
    var_v0 = 0x20;
    goto block_8;
block_7:
    var_v0 = 0x1F;
block_8:
    spD0 = var_v0;
    if (var_s1 == 0) {
        goto block_11;
    }
    var_v0_2 = 0x11;
    goto block_12;
block_11:
    var_v0_2 = 0x10;
block_12:
    spC0 = var_v0_2;
    if (var_s1 == 0) {
        goto block_15;
    }
    var_v0_3 = 0x22;
    goto block_16;
block_15:
    var_v0_3 = 0x21;
block_16:
    spB0 = var_v0_3;
    func_00228430(0);
    *(s128 *)((u8 *)(&sp130) + 0) = (s128) *(s128 *)((u8 *)(&D_00453290) + 0);
    *(s128 *)((u8 *)(&sp130) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00453290) + 0x10);
    if (var_s1 == *(s32 *)((u8 *)gEssTrade + 0x50)) {
        goto block_19;
    }
    if (*(s32 *)((u8 *)gEssTrade + 0x54) == 1) {
        goto block_19;
    }
    func_00227880(&sp130);
block_19:
    temp_a1 = var_s1 << 5;
    temp_v1 = (var_s1 * 0x30) + temp_s2;
    temp_a2 = *(s32 *)((u8 *)temp_v1 + 0);
    temp_fp = (int *)(((u8 *)gEssTrade) + temp_a1 + 0x58);
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (temp_a2 * 4)), temp_a1, temp_a2, (f32) *(s32 *)((u8 *)temp_v1 + 8) * gFrameDelta);
    func_00229800(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)((var_s1 * 0x30) + temp_s2) + 0x10) * 4)), &sp110, 0, 0.0f);
    sp118 = 0;
    sp110 *= -1.0f;
    sp114 *= -1.0f;
    func_00227A30(&sp110);
    temp_v1_2 = (var_s1 * 0x30) + temp_s2;
    func_00229800(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_v1_2 + 0) * 4)), &sp110, -1, (f32) *(s32 *)((u8 *)temp_v1_2 + 8) * gFrameDelta);
    func_00227A30(&sp110);
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (var_s0 * 4)), 0, 0, 0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    var_s0_2 = 0;
    sp114 = D_00470020;
    goto loop_31;
block_20:
    if (var_s1 != *(s32 *)((u8 *)gEssTrade + 0x50)) {
        goto block_24;
    }
    if (var_s0_2 != *temp_fp) {
        goto block_24;
    }
    if (*(s32 *)((u8 *)gEssTrade + 0x54) == 1) {
        goto block_24;
    }
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (spD0 * 4)), 0, 0, 0);
block_24:
    temp_s4 = *(s32 *)((u8 *)((var_s0_2 * 4) + temp_fp) + 8);
    if (temp_s4 <= 0) {
        goto block_30;
    }
    D_00470704 = temp_s7;
    D_00470708 = 0;
    D_0047070C = spE0;
    spA0 = ((u8 *)&D_004E0660) + (temp_s4 * 0x28);
    amModel_SetCurrent(temp_s7, spE0);
    D_00470238 = 0;
    temp_v0 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (spB0 * 4)), 0);
    *(s16 *)((u8 *)temp_v0 + 0x18) = (s16) temp_s4;
    func_0026D320(temp_v0, temp_s7, *(s16 *)((u8 *)temp_v0 + 0x18), 9);
    *(f32 *)((u8 *)temp_v0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x38) * 0.8f);
    func_0022C6B0(temp_v0);
    func_0022D4B0(temp_v0, 1);
    D_00470704 = temp_s5;
    D_00470708 = 0;
    D_0047070C = 0x11401400;
    amModel_SetCurrent(temp_s5, 0x11401400);
    D_00470238 = 0;
    func_00228430(0);
    if (var_s1 != *(s32 *)((u8 *)gEssTrade + 0x50)) {
        goto block_29;
    }
    if (var_s0_2 != *temp_fp) {
        goto block_29;
    }
    if (*(s32 *)((u8 *)gEssTrade + 0x54) == 1) {
        goto block_29;
    }
    func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x48)) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)gEssTrade + 0x190) * gFrameDelta);
block_29:
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (spC0 * 4)), M2C_BITWISE(s32, (f32) (*(u8 *)((u8 *)spA0 + 0xA) & 3)), 0, 0);
    func_00228410();
block_30:
    func_00227A30(&sp110);
    var_s0_2 += 1;
loop_31:
    if (var_s0_2 < 4) {
        goto block_20;
    }
    func_00228410();
    var_s1 += 1;
loop_33:
    if (var_s1 < 2) {
        goto block_1;
    }
    func_00228430(0);
    temp_s2_2 = ((u8 *)gEssTrade) + 0xC8;
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)gEssTrade + 0xC8) * 4)), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)gEssTrade + 0xD0) * gFrameDelta)), 0, 0);
    if (func_0022BC30(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_s2_2 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s2_2 + 8) * gFrameDelta) != 0xFF) {
        goto block_36;
    }
    func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x94), &spF0, 0, 0.0f);
    Obj_CopyVec4F50(*(u8 **)((u8 *)gEssTrade + 0x24), &spF0);
    Obj_SetF3C(*(u8 **)((u8 *)gEssTrade + 0x24), *(s16 *)((u8 *)temp_s2_2 + 0x10));
    goto block_37;
block_36:
    Obj_SetF3C(*(u8 **)((u8 *)gEssTrade + 0x24), -1);
block_37:
    func_00228410();
    func_00228410();
    func_00133780(0, 0);
    return;
}
