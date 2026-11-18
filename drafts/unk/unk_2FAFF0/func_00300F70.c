/* Draft (not built): func_00300F70 at 0x00300F70, size 0x5B4, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 188 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x56C, original 0x5B4
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_00300F70.s */

// src/unk/unk_2FAFF0.c func_00300F70 size diff=188/347
void *A2d_AllocObj(s32, f32, s32);
s32 amCamera_SetScreen(s32 *, s32 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133780(s32, s32);
s32 func_00133B50(s32, s32);
s32 func_0013B110(s32);
s32 func_0013B500(s32);
s32 func_0013B750(s32);
s32 func_0013BC00(f32, f32, f32);
s32 func_0013BC30(f32, f32, f32);
s32 func_00227A30(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
s32 func_0029D740(s32 *);
s32 func_0029DB00(s32, s32);
s32 func_002F9710(void *, void *, s16, s32);
extern s32 D_004580B0;
extern f32 D_00458A90;
extern s32 D_0046FD80;
extern f32 D_004701A8;
extern s32 D_004701B0;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_005D0080;
extern s8 D_005D0082;
extern void func_00228410(void);
extern void amMtxStack_Init(void);
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amCamera_Init(void *);
extern void func_0029D8B0(int, int);
extern void func_0013B620(void *);
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void func_0013AFA0(void *);
extern void amModel_SetCurrent();
extern void func_0029D8E0(void);
void func_00300F70(void) {
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 spE0;
    f32 sp120;
    f32 sp124;
    s32 sp128;
    s32 var_a3;
    f32 temp_f12;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s8 temp_a1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s2 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_s1 = *(u8 **)((u8 *)gTourMap + 0x24);
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    sp120 = *(f32 *)((u8 *)temp_v0 + 0x30);
    sp124 = *(f32 *)((u8 *)temp_v0 + 0x34);
    sp128 = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    D_00470704 = temp_s1;
    D_0047070C = 0x11405000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_s1, 0x11405000);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    func_00227A30(&D_00458A90);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0x7C) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0x84) * gFrameDelta);
    func_002FF610();
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)gTourMap + 0xDC) * 4)), (f32) *(s32 *)((u8 *)gTourMap + 0xE4) * gFrameDelta);
    func_002FEED0(D_005D0082);
    func_002FDF70(1);
    func_002FE1B0(1);
    func_00228430(0);
    func_002284D0(0);
    func_00227A30(&sp120);
    var_s0 = 0;
    goto loop_4;
block_1:
    temp_v0_2 = (u8 *)(gTourMap + (var_s0 * 0x14));
    if (*(u8 *)((u8 *)temp_v0_2 + 0x2F2) == 0) {
        goto block_3;
    }
    func_002FE7A0(temp_v0_2 + 0x2EC);
block_3:
    var_s0 += 1;
loop_4:
    if (var_s0 < (1 << D_005D0082)) {
        goto block_1;
    }
    func_00228410();
    func_002FE5A0();
    func_00228410();
    func_00228430(0);
    func_002284D0(0);
    func_00227A30(&D_00458A90);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x298), 0.0f);
    temp_s0 = (u8 *)(gTourMap + 0x16C);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x24C), (f32) *(s32 *)((u8 *)gTourMap + 0x174) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x258), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x264), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x270), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x274), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x278), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x27C), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_00133780(0, 0);
    amMtxStack_Init();
    func_0013AFA0(NULL);
    amCamera_Init(&spE0);
    func_00131B90(&sp80);
    func_00131F00(&sp80, 0, 0);
    amCamera_SetScreen(&sp80, &spE0, 0x43F00000);
    func_00132DF0(NULL);
    func_0029D8E0();
    sp78 = 0x3F800000;
    sp7C = 0x3F800000;
    sp70 = 0;
    sp74 = 0;
    func_0029D740(&sp70);
    D_0046FD80 = 0x3DA3D70A;
    func_0029D8B0(-1, 4);
    var_s4 = 0;
    goto loop_7;
block_6:
    temp_s3 = (u8 *)((var_s4 * 0x1C) + (&D_004580B0 + (*(s32 *)((u8 *)(**(u8 ***)((u8 *)((var_s4 * 4) + gTourMap) + 0x74)) + 0xC) * 0x38)));
    func_0013B0B0(NULL);
    func_0013BC00(*(f32 *)((u8 *)temp_s3 + 0) * *(&D_004701B0 + (var_s4 * 4)), *(f32 *)((u8 *)temp_s3 + 4) + D_004701A8, *(f32 *)((u8 *)temp_s3 + 8));
    temp_f12 = *(f32 *)((u8 *)temp_s3 + 0xC);
    func_0013BC30(temp_f12, temp_f12, temp_f12);
    func_0013B500(*(s32 *)((u8 *)temp_s3 + 0x10));
    func_0013B620(*(u8 **)((u8 *)temp_s3 + 0x14));
    func_0013B750(*(s32 *)((u8 *)temp_s3 + 0x18));
    func_0029DB00(*(s32 *)((u8 *)((var_s4 * 4) + gTourMap) + 0x74), 0x3F800000);
    func_0013B110(1);
    var_s4 += 1;
loop_7:
    if (var_s4 < 2) {
        goto block_6;
    }
    func_0029D8E0();
    func_00133B50(0, 0);
    D_00470704 = temp_s1;
    D_0047070C = 0x11405000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_s1, 0x11405000);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x280), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x28C), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    var_s3 = 0;
    goto loop_17;
block_10:
    var_v0 = 0x69;
    if (var_s3 == 0) {
        goto block_12;
    }
    goto block_13;
block_12:
    var_v0 = 0x67;
block_13:
    temp_s5 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (var_v0 * 4)), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta, 0);
    temp_a1 = *(&D_005D0080 + var_s3);
    temp_v0_3 = A2d_AllocObj(*(s32 *)((u8 *)((*(s16 *)((u8 *)((temp_a1 * 0x14) + gTourMap) + 0x2F4) * 4) + *(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x1B4), M2C_BITWISE(f32, temp_a1), 0);
    *(s16 *)((u8 *)temp_s5 + 0x18) = (s16) *(s16 *)((u8 *)temp_v0_3 + 0x18);
    if (var_s3 == 0) {
        goto block_15;
    }
    var_a3 = 0x14;
    goto block_16;
block_15:
    var_a3 = 0xC;
block_16:
    func_002F9710(temp_s5, temp_s1, *(s16 *)((u8 *)temp_s5 + 0x18), var_a3);
    func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
    func_0022D4B0(temp_v0_3, 1);
    func_0022D4B0(temp_s5, 1);
    var_s3 += 1;
loop_17:
    if (var_s3 < 2) {
        goto block_10;
    }
    func_00228410();
    func_00133780(0, 0);
    return;
}
