/* Draft (not built): func_001F6690 at 0x001F6690, size 0x634, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 199 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4EC, original 0x634
 * Original: asm/nonmatchings/battle/btb_draw/func_001F6690.s */

// src/battle/btb_draw.c func_001F6690 size diff=199/315
s32 amCamera_SetScreen(void *, s32 *, s32);
s32 amDma_Request(s32, s32, s32, s32);
s32 amDraw3d_Flip(s32 *, s32, s128 *);
s64 amDraw3d_SetTexFrame(s32, s32, s32, s64 *);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_0012E100(s32 *, void *, s32, f32);
s32 func_0012FBF0(void *, s32, s32, s32);
s32 func_0012FFC0(void *, s32, s32);
s32 func_00133B50(s32, s32);
s32 func_002CF910(s128 *, s32, s32);
extern s128 D_0044B520;
extern s32 D_0044B530;
extern s32 D_00469878;
extern f32 D_0047040C;
extern f32 D_00470410;
extern f32 D_0047042C;
extern f32 D_00470430;
extern u32 D_00470478;
extern u32 D_00470494;
extern void func_0012F2C0(void);
extern void * func_001F9A20(void);
extern void func_001A87A0(void);
extern void func_0011F4C0(void);
extern void func_001A8770(int, void *);
void func_001F6690(void *arg0) {
    s32 sp50;
    s16 sp54;
    s16 sp56;
    s16 sp58;
    s16 sp5A;
    u32 sp5C;
    u32 sp60;
    s32 sp70;
    s128 spB0;
    f32 spBC;
    s32 spC0;
    s32 sp100;
    s32 sp110;
    s32 sp120;
    s32 sp124;
    s32 sp130;
    s32 sp134;
    s32 sp138;
    f32 sp13C;
    s32 sp144;
    s64 sp158;
    s32 (*temp_v1)(s8 *);
    s32 (*temp_v1_2)(s8 *);
    s32 (*temp_v1_3)(s8 *);
    s32 (*temp_v1_4)(s8 *);
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_a0;
    s32 temp_s0;
    s64 temp_s1_2;
    s8 *var_s1;
    s8 *var_s1_2;
    s8 *var_s1_3;
    s8 *var_s1_4;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;

    *(s32 *)((u8 *)arg0 + 0x48) = (s32) (*(s32 *)((u8 *)arg0 + 0x48) + 1);
    temp_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    temp_f20 = (f32) *(s32 *)((u8 *)arg0 + 0x48) * temp_f2;
    temp_s2 = ((u8 *)arg0) + 0x30;
    if (temp_f20 < *(f32 *)((u8 *)arg0 + 0x40)) {
        goto block_36;
    }
    if (*(f32 *)((u8 *)temp_s2 + 8) != 0.0f) {
        goto block_3;
    }
    *(f32 *)((u8 *)temp_s2 + 8) = (f32) (*(f32 *)((u8 *)gBattle + 0x1DC) - temp_f2);
    sp124 = 7;
    sp120 = 1;
    sp138 = *(s32 *)((u8 *)temp_s2 + 4);
    sp13C = 0.0f;
    sp144 = 0x3F800000;
    sp130 = 0;
    sp134 = *(s32 *)((u8 *)gBattle + 0x234);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a1) */);
    func_001A8770(1, &sp100);
block_3:
    *(s8 *)((u8 *)gBattle + 0x8975) = 1;
    if (temp_f20 <= (*(f32 *)((u8 *)temp_s2 + 0x10) + *(f32 *)((u8 *)temp_s2 + 0x14))) {
        goto block_5;
    }
    amTask_Kill((s32)(arg0));
block_5:
    temp_s1 = (unsigned char *)(gBattle + 0x200);
    *(u8 **)((u8 *)temp_s1 + 0x34) = func_001F9A20();
    func_0011F4C0();
    spB0 = D_0044B520;
    *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B530) + 0);
    *(f32 *)((u8 *)(&sp50) + 0x10) = (f32) *(f32 *)((u8 *)(&D_0044B530) + 0x10);
    sp60 = (u32) D_00470478 >> 0xD;
    sp5C = (u32) D_00470494 >> 0xD;
    sp54 = M2C_BITWISE(s16, D_0047040C);
    sp56 = M2C_BITWISE(s16, D_00470410);
    sp58 = (s16) D_0047042C;
    sp5A = (s16) D_00470430;
    amDraw3d_Flip(&sp50, 0, &spB0);
    func_00133B50(0, 0);
    amDraw3d_Flip(NULL, 0, 0);
    func_00133B50(0, 0);
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    temp_f1 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x30) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x14)) + 8) - 1.0f;
    if (*(f32 *)((u8 *)temp_s2 + 8) <= temp_f1) {
        goto block_7;
    }
    *(f32 *)((u8 *)temp_s2 + 8) = temp_f1;
block_7:
    func_0012E100(&spC0, *(u8 **)((u8 *)temp_s1 + 0x34), *(s32 *)((u8 *)arg0 + 0x30), *(f32 *)((u8 *)temp_s2 + 8));
    *(f32 *)((u8 *)temp_s2 + 8) = (f32) (*(f32 *)((u8 *)temp_s2 + 8) + *(f32 *)((u8 *)gBattle + 0x88F0));
    func_0013B160((s32)(NULL));
    amCamera_SetScreen((void *)(gBattle), (s32 *)(&spC0), 0x43F00000);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00131F00((void *)(gBattle), 0, 0);
    func_00132DF0(&sp70);
    var_s1 = (signed char *)(*D_0051CB94);
    func_00133780(2, 0);
    goto loop_13;
block_9:
    temp_v1 = *(s32 (**)(s8 *))((u8 *)var_s1 + 0x14);
    if (temp_v1 == NULL) {
        goto block_12;
    }
    if (*(s32 *)((u8 *)var_s1 + 0x20) & 0x880F) {
        goto block_12;
    }
    temp_v1(var_s1);
block_12:
    var_s1 = *(s8 **)((u8 *)var_s1 + 0x24);
loop_13:
    if ((s32)(var_s1) != (s32)(D_0051CC20)) {
        goto block_9;
    }
    func_0012F2C0();
    func_00133780(2, 1);
    var_s1_2 = (signed char *)(*D_0051CB94);
    goto loop_19;
block_15:
    temp_v1_2 = *(s32 (**)(s8 *))((u8 *)var_s1_2 + 0x14);
    if (temp_v1_2 == NULL) {
        goto block_18;
    }
    if (!(*(s32 *)((u8 *)var_s1_2 + 0x20) & 0x800)) {
        goto block_18;
    }
    temp_v1_2(var_s1_2);
block_18:
    var_s1_2 = *(s8 **)((u8 *)var_s1_2 + 0x24);
loop_19:
    if ((s32)(var_s1_2) != (s32)(D_0051CC20)) {
        goto block_15;
    }
    func_00133780(2, 0);
    temp_f1_2 = 4.0f * (D_0047040C * D_00470410);
    if (temp_f1_2 >= 2.1474836e9f) {
        goto block_22;
    }
    var_a0 = temp_f1_2;
    goto block_23;
block_22:
    var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_2 - 2.1474836e9f)) | 0x80000000));
block_23:
    temp_v0 = amHeap_Alloc(M2C_BITWISE(s32, var_a0), 0, &D_00469878, 0x39D);
    func_0012FBF0(temp_v0, 0, 0, 1);
    func_00133B50(0, 0);
    amDraw3d_Flip(&sp50, 0, 0);
    func_00133B50(0, 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    func_001A87A0();
    func_00131F00((void *)(gBattle), 0, 0);
    func_00132DF0((void *)(gBattle + 0x60));
    var_s1_3 = (signed char *)(*D_0051CB94);
    func_00133780(2, 0);
    goto loop_28;
block_24:
    temp_v1_3 = *(s32 (**)(s8 *))((u8 *)var_s1_3 + 0x14);
    if (temp_v1_3 == NULL) {
        goto block_27;
    }
    if (*(s32 *)((u8 *)var_s1_3 + 0x20) & 0x880F) {
        goto block_27;
    }
    temp_v1_3(var_s1_3);
block_27:
    var_s1_3 = *(s8 **)((u8 *)var_s1_3 + 0x24);
loop_28:
    if ((s32)(var_s1_3) != (s32)(D_0051CC20)) {
        goto block_24;
    }
    func_0012F2C0();
    func_00133780(2, 1);
    var_s1_4 = (signed char *)(*D_0051CB94);
    goto loop_34;
block_30:
    temp_v1_4 = *(s32 (**)(s8 *))((u8 *)var_s1_4 + 0x14);
    if (temp_v1_4 == NULL) {
        goto block_33;
    }
    if (!(*(s32 *)((u8 *)var_s1_4 + 0x20) & 0x800)) {
        goto block_33;
    }
    temp_v1_4(var_s1_4);
block_33:
    var_s1_4 = *(s8 **)((u8 *)var_s1_4 + 0x24);
loop_34:
    if ((s32)(var_s1_4) != (s32)(D_0051CC20)) {
        goto block_30;
    }
    func_00133780(2, 0);
    func_0013B110(1);
    sp158 = 0x80;
    temp_s1_2 = amDraw3d_SetTexFrame(0, 0, 0, &sp158);
    amDraw3d_Flip(NULL, 0, 0);
    func_0012FFC0(temp_v0, 0, 0);
    temp_s0 = amGs_SetReg32(2, 0x30000);
    func_00133780(2, 1);
    spBC = M2C_ERROR(/* Read from unset register $f0 */);
    amDma_Request(0, 1, 1, 0);
    func_002CF910(&spB0, 0, 0);
    amGs_SetReg32(2, temp_s0);
    func_00133780(2, 0);
    amHeap_Free(temp_v0);
block_36:
    return;
}
