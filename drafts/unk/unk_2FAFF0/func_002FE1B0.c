/* Draft (not built): func_002FE1B0 at 0x002FE1B0, size 0x3F0, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 179 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2FC, original 0x3F0
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FE1B0.s */

// src/unk/unk_2FAFF0.c func_002FE1B0 size diff=179/191
void *A2d_AllocObj(s32, s32);
s32 func_00227A30(f32 *, s32, void *);
s32 func_00228430(s32, s32, s32, s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
extern f32 D_004701B8;
extern s8 D_005D0082;
extern void func_00228410(void);
void func_002FE1B0(s32 arg0) {
    f32 sp40;
    f32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 sp50;
    f32 sp54;
    s32 sp58;
    f32 sp68;
    f32 sp6C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 var_a1;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v0;

    var_v0 = 1;
    temp_s1 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_s0 = (unsigned char *)(gTourMap + 0xDC);
    temp_a3 = ((D_005D0082 + 1) * 0x64) + 0x88;
    var_a1 = D_005D0082 * 0x64;
    var_f5 = (f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f;
    sp68 = ((((50.0f + (f32) temp_a3) / 2.0f) - 64.0f) - 50.0f) - (f32) var_a1;
loop_3:
    if (D_005D0082 >= var_v0) {
        temp_a1 = 1 << (var_v0 - 1);
        var_v0 += 1;
        var_a1 = temp_a1 * 5;
        var_f5 += 0.5f * (f32) (temp_a1 * 0x64);
        goto loop_3;
    }
    sp6C = 200.0f + var_f5 + (f32) 0;
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    sp50 = *(f32 *)((u8 *)temp_v0 + 0x30);
    sp54 = *(f32 *)((u8 *)temp_v0 + 0x34);
    sp58 = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00228430(0, var_a1, 1, temp_a3);
    switch (arg0) {                                 /* irregular */
    case 0:
        temp_a2 = *(u8 **)((u8 *)gTourMap + 0x44);
        temp_a1_2 = D_005D0082 + 1;
        temp_f0 = ((50.0f + (f32) ((temp_a1_2 * 0x64) + 0x88)) * ((sp68 - 100.0f) * (1.0f - (*(f32 *)((u8 *)temp_a2 + 0x38) / 100.0f)))) / D_004701B8;
        sp68 = temp_f0;
        sp54 += temp_f0;
        func_00227A30(&sp50, temp_a1_2, temp_a2);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x58), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x40), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x24), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x30), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x54), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x3C), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        break;
    case 1:
        temp_f0_2 = sp68 - 100.0f;
        sp68 = temp_f0_2;
        func_00228430(0, 0, 0, 0);
        func_002284D0(0);
        temp_s0_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x28), 0);
        func_00228410();
        sp40 = sp6C - *(f32 *)((u8 *)temp_s0_2 + 0x20);
        sp4C = 0x3F800000;
        sp48 = 0;
        sp44 = temp_f0_2 - *(f32 *)((u8 *)temp_s0_2 + 0x24);
        func_00227A30(&sp50, 0, 0);
        func_00227A30(&sp40, 0, 0);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x48), 0.0f);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x60), 0.0f);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x28), 0.0f);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x34), 0.0f);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x44), 0.0f);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x5C), 0.0f);
        func_0022D4B0(temp_s0_2, 1);
        break;
    }
    func_00228410();
}
