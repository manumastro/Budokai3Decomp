/* Draft (not built): func_001F6690 at 0x001F6690, size 0x634, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'void *' @ 7163: amCamera_SetScreen(gBattle, &spC0, 0x43F00000);
 * Original: asm/nonmatchings/battle/btb_draw/func_001F6690.s */

// src/battle/btb_draw.c func_001F6690 cerr diff=-1/0
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
void func_001F6690(u8 *arg0) {
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
    temp_s2 = arg0 + 0x30;
    if (!(temp_f20 < *(f32 *)((u8 *)arg0 + 0x40))) {
        if (*(f32 *)((u8 *)temp_s2 + 8) == 0.0f) {
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
        }
        *(s8 *)((u8 *)gBattle + 0x8975) = 1;
        if (!(temp_f20 <= (*(f32 *)((u8 *)temp_s2 + 0x10) + *(f32 *)((u8 *)temp_s2 + 0x14)))) {
            amTask_Kill((s32)((void *)(arg0)));
        }
        temp_s1 = (u8 *)(gBattle + 0x200);
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
        if (!(*(f32 *)((u8 *)temp_s2 + 8) <= temp_f1)) {
            *(f32 *)((u8 *)temp_s2 + 8) = temp_f1;
        }
        func_0012E100(&spC0, *(u8 **)((u8 *)temp_s1 + 0x34), *(s32 *)((u8 *)arg0 + 0x30), *(f32 *)((u8 *)temp_s2 + 8));
        *(f32 *)((u8 *)temp_s2 + 8) = (f32) (*(f32 *)((u8 *)temp_s2 + 8) + *(f32 *)((u8 *)gBattle + 0x88F0));
        func_0013B160((s32)((void *)(NULL)));
        amCamera_SetScreen(gBattle, &spC0, 0x43F00000);
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
        var_s1 = (s8 *)(*D_0051CB94);
        func_00133780(2, 0);
loop_13:
        if (var_s1 != D_0051CC20) {
            temp_v1 = *(s32 (**)(s8 *))((u8 *)var_s1 + 0x14);
            if ((temp_v1 != NULL) && !(*(s32 *)((u8 *)var_s1 + 0x20) & 0x880F)) {
                temp_v1(var_s1);
            }
            var_s1 = *(s8 **)((u8 *)var_s1 + 0x24);
            goto loop_13;
        }
        func_0012F2C0();
        func_00133780(2, 1);
        var_s1_2 = (s8 *)(*D_0051CB94);
loop_19:
        if (var_s1_2 != D_0051CC20) {
            temp_v1_2 = *(s32 (**)(s8 *))((u8 *)var_s1_2 + 0x14);
            if ((temp_v1_2 != NULL) && (*(s32 *)((u8 *)var_s1_2 + 0x20) & 0x800)) {
                temp_v1_2(var_s1_2);
            }
            var_s1_2 = *(s8 **)((u8 *)var_s1_2 + 0x24);
            goto loop_19;
        }
        func_00133780(2, 0);
        temp_f1_2 = 4.0f * (D_0047040C * D_00470410);
        if (!(temp_f1_2 >= 2.1474836e9f)) {
            var_a0 = temp_f1_2;
        } else {
            var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_2 - 2.1474836e9f)) | 0x80000000));
        }
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
        var_s1_3 = (s8 *)(*D_0051CB94);
        func_00133780(2, 0);
loop_28:
        if (var_s1_3 != D_0051CC20) {
            temp_v1_3 = *(s32 (**)(s8 *))((u8 *)var_s1_3 + 0x14);
            if ((temp_v1_3 != NULL) && !(*(s32 *)((u8 *)var_s1_3 + 0x20) & 0x880F)) {
                temp_v1_3(var_s1_3);
            }
            var_s1_3 = *(s8 **)((u8 *)var_s1_3 + 0x24);
            goto loop_28;
        }
        func_0012F2C0();
        func_00133780(2, 1);
        var_s1_4 = (s8 *)(*D_0051CB94);
loop_34:
        if (var_s1_4 != D_0051CC20) {
            temp_v1_4 = *(s32 (**)(s8 *))((u8 *)var_s1_4 + 0x14);
            if ((temp_v1_4 != NULL) && (*(s32 *)((u8 *)var_s1_4 + 0x20) & 0x800)) {
                temp_v1_4(var_s1_4);
            }
            var_s1_4 = *(s8 **)((u8 *)var_s1_4 + 0x24);
            goto loop_34;
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
    }
}
