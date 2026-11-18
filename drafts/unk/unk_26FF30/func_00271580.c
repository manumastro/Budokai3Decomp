/* Draft (not built): func_00271580 at 0x00271580, size 0x444, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 110 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x41C, original 0x444
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00271580.s */

// src/unk/unk_26FF30.c func_00271580 size diff=110/263
void *A2d_AllocObj(s32, f32);
s32 amDraw_SetScissor(s32 *, s32);
s32 func_00133780(s32, s32);
s32 func_00227A30(s32 *);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
extern f32 D_00470018;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00271580(void) {
    s32 sp60;
    f32 sp64;
    s32 sp68;
    f32 sp6C;
    s32 sp70;
    f32 sp74;
    s32 var_s0;
    s32 var_s0_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s4_3;
    u8 *temp_s4_4;
    u8 *temp_v0;
    u8 *temp_v0_2;

    func_00270390();
    temp_a0 = *(u8 **)((u8 *)D_004707FC + 0x24);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401300;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401300);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s3 = *(u8 **)((u8 *)D_004707FC + 0x20);
    func_00228430(0);
    func_002284D0(0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    temp_s4 = (u8 *)(D_004707FC + 0x74);
    temp_s0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 4), 0.0f);
    func_00228430(0);
    *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) -*(f32 *)((u8 *)temp_s0 + 0x20);
    *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) -*(f32 *)((u8 *)temp_s0 + 0x24);
    *(s32 *)((u8 *)temp_s0 + 0x28) = 0;
    func_00227A30((s32 *)(temp_s0 + 0x20));
    func_0022D4B0(temp_s0, 1);
    func_00228430(0);
    func_002284D0(0);
    temp_s2 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_s4 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s4 + 8) * gFrameDelta);
    *(s32 *)((u8 *)temp_s4 + 8) = (s32) (*(s32 *)((u8 *)temp_s4 + 8) + 1);
    func_00228410();
    func_00227A30((s32 *)(temp_s2 + 0x20));
    temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xE4), 0.0f);
    sp60 = 0;
    sp68 = 0x44480000;
    sp64 = *(f32 *)((u8 *)temp_v0 + 0x24) + *(f32 *)((u8 *)temp_v0 + 0x34);
    sp6C = *(f32 *)((u8 *)temp_v0 + 0x24) + *(f32 *)((u8 *)temp_v0 + 0x3C);
    amDraw_SetScissor(&sp60, 0);
    func_0022D4B0(temp_v0, 1);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xE4), 0.0f);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xE8), 0.0f);
    func_00270660();
    var_s0 = 0;
    temp_s4_2 = (u8 *)(D_004707FC + 0x104);
    temp_s1 = (u8 *)(D_004707FC + ((*(s32 *)((u8 *)D_004707FC + 0x48) + 1) * 8) + 0x75C);
    func_00228430(0);
    sp74 = D_00470018 * (f32) *(s32 *)((u8 *)D_004707FC + 0x48);
    func_00227A30(&sp70);
    if (*(u8 *)((u8 *)temp_s1 + 7) == 0) {
        goto block_2;
    }
    var_s0 = 1;
block_2:
    func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x28)) + 0xC), 0, 0, 0, (f32) var_s0);
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_s4_2 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s4_2 + 8) * gFrameDelta);
    func_00228410();
    *(s32 *)((u8 *)temp_s4_2 + 8) = (s32) (*(s32 *)((u8 *)temp_s4_2 + 8) + 1);
    sp74 = D_00470018;
    func_00228430(0);
    var_s0_2 = 1;
    goto loop_4;
block_3:
    func_00270EC0(D_004707FC + (var_s0_2 * 8) + 0x75C);
    func_00227A30(&sp70);
    var_s0_2 += 1;
loop_4:
    if (var_s0_2 < 0xA) {
        goto block_3;
    }
    func_00228410();
    func_00270CA0();
    func_00270870();
    amDraw_SetScissor(NULL, 0);
    func_0022C6B0(temp_s2);
    func_0022D4B0(temp_s2, 1);
    temp_s4_3 = (u8 *)(D_004707FC + 0xA4);
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)D_004707FC + 0xA4) * 4)), (f32) *(s32 *)((u8 *)D_004707FC + 0xAC) * gFrameDelta);
    *(s32 *)((u8 *)temp_s4_3 + 8) = (s32) (*(s32 *)((u8 *)temp_s4_3 + 8) + 1);
    temp_s4_4 = (u8 *)(D_004707FC + 0xD4);
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)D_004707FC + 0xD4) * 4)), (f32) *(s32 *)((u8 *)D_004707FC + 0xDC) * gFrameDelta);
    *(s32 *)((u8 *)temp_s4_4 + 8) = (s32) (*(s32 *)((u8 *)temp_s4_4 + 8) + 1);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xEC), 0.0f);
    if (*(s32 *)((u8 *)D_004707FC + 0x58) < 0xA) {
        goto block_7;
    }
    func_00228430(0);
    temp_v0_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x20)) + 0x1C)) + 0x3C), 0.0f);
    *(f32 *)((u8 *)temp_v0_2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x24) + ((*(f32 *)((u8 *)temp_v0_2 + 0x3C) / (f32) *(s32 *)((u8 *)D_004707FC + 0x58)) * (f32) *(s32 *)((u8 *)D_004707FC + 0x4C)));
    *(f32 *)((u8 *)temp_v0_2 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x3C) / ((f32) *(s32 *)((u8 *)D_004707FC + 0x58) / 9.0f));
    func_0022C6B0(temp_v0_2);
    func_0022D4B0(temp_v0_2, 1);
    func_00228410();
block_7:
    func_00228410();
    func_00228410();
    func_00133780(0, 0);
    return;
}
