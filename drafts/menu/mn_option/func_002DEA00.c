/* Draft (not built): func_002DEA00 at 0x002DEA00, size 0x5C4, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 230 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x418, original 0x5C4
 * Original: asm/nonmatchings/menu/mn_option/func_002DEA00.s */

// src/menu/mn_option.c func_002DEA00 size diff=230/262
extern void A2d_SetMode(s32);
extern void A2d_FlushList(void);
s32 func_00228430(s32);
s32 func_0022C060(void *, s32);
s32 func_002D9770(f32 *, f32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void func_0022CD00(void *);
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002DEA00(void) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 sp50;
    s32 (*temp_v0)();
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f12;
    f32 var_f2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_4;
    u8 *temp_s1_5;
    u8 *temp_s1_6;
    u8 *temp_s1_7;
    u8 *temp_s1_8;
    u8 *temp_s1_9;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s2_4;
    u8 *temp_s2_5;
    u8 *temp_s2_6;
    u8 *temp_s2_7;
    u8 *temp_s2_8;

    temp_s0 = gOptionWork;
    A2d_SetMode(*(s16 *)((u8 *)D_004E05DC + 0x1C));
    temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x48);
    temp_s2 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = temp_a0;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1);
    func_00228410();
    temp_s1_2 = *(u8 **)((u8 *)temp_s0 + 0x38);
    temp_s2_2 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_2 = *(u8 **)((u8 *)temp_s2_2 + 0xC);
    D_00470704 = temp_a0_2;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_2, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_2, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_2);
    func_00228410();
    temp_s1_3 = *(u8 **)((u8 *)temp_s0 + 0x3C);
    temp_s2_3 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_3 = *(u8 **)((u8 *)temp_s2_3 + 0xC);
    D_00470704 = temp_a0_3;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_3, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_3, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_3);
    func_00228410();
    temp_s1_4 = *(u8 **)((u8 *)temp_s0 + 0x40);
    temp_s2_4 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_4 = *(u8 **)((u8 *)temp_s2_4 + 0xC);
    D_00470704 = temp_a0_4;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_4, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_4, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_4);
    func_00228410();
    temp_s1_5 = *(u8 **)((u8 *)temp_s0 + 0x44);
    temp_s2_5 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_5 = *(u8 **)((u8 *)temp_s2_5 + 0xC);
    D_00470704 = temp_a0_5;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_5, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_5, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_5);
    func_00228410();
    temp_s1_6 = *(u8 **)((u8 *)temp_s0 + 0x54);
    temp_s2_6 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_6 = *(u8 **)((u8 *)temp_s2_6 + 0xC);
    D_00470704 = temp_a0_6;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_6, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_6, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_6);
    func_00228410();
    temp_s1_7 = *(u8 **)((u8 *)temp_s0 + 0x4C);
    temp_s2_7 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_7 = *(u8 **)((u8 *)temp_s2_7 + 0xC);
    D_00470704 = temp_a0_7;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_7, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_7, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_7);
    func_00228410();
    temp_s1_8 = *(u8 **)((u8 *)temp_s0 + 0x50);
    temp_s2_8 = gOptionWork;
    func_00228430(0);
    func_00228430(0);
    temp_a0_8 = *(u8 **)((u8 *)temp_s2_8 + 0xC);
    D_00470704 = temp_a0_8;
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent(temp_a0_8, 0);
    D_00470238 = 0;
    func_0022C060(temp_s1_8, 0x3F800000);
    func_00228410();
    func_0022CD00(temp_s1_8);
    func_00228410();
    temp_s1_9 = gOptionWork;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    temp_f1 = *(f32 *)((u8 *)temp_s1_9 + 0x38C);
    if (!(temp_f1 < 7.0f)) {
        sp50 = (-380.0f * (temp_f1 - 7.0f)) / 23.0f;
    }
    temp_f1_2 = *(f32 *)((u8 *)temp_s1_9 + 0x38C);
    if (temp_f1_2 < 18.0f) {
        var_f12 = 1.0f - (temp_f1_2 / 18.0f);
    } else {
        var_f12 = 0.0f;
    }
    func_002D9770(&sp50, var_f12);
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1_3 = *(f32 *)((u8 *)temp_s1_9 + 0x38C) + var_f2;
    *(f32 *)((u8 *)temp_s1_9 + 0x38C) = temp_f1_3;
    if (!(temp_f1_3 < 30.0f)) {
        *(s32 *)((u8 *)temp_s1_9 + 0x354) = 0;
    }
    temp_v0 = *(s32 (**)())((u8 *)temp_s0 + 0x34C);
    if (temp_v0 != NULL) {
        temp_v0();
    }
    temp_s0_2 = gOptionWork;
    sp48 = 0;
    sp40 = 0x43CF8000;
    sp44 = 0x43BE0000;
    sp4C = 0x3F800000;
    Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s0_2 + 0x33C), &sp40);
    Obj_SetF3C(*(s32 *)((u8 *)temp_s0_2 + 0x33C), -1);
    A2d_FlushList();
}
