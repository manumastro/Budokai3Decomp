/* Draft (not built): func_00271080 at 0x00271080, size 0x4F4, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 145 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x444, original 0x4F4
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00271080.s */

// src/unk/unk_26FF30.c func_00271080 size diff=145/273
void *A2d_AllocObj(s32, s32);
s32 amDraw_SetScissor(s32 *, s32);
s32 amGs_SetReg32(s32, s32);
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
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022C6B0(void *);
void func_00271080(u8 *arg0) {
    s32 sp70;
    f32 sp74;
    s32 sp78;
    f32 sp7C;
    s32 sp80;
    f32 sp84;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s0_2;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *temp_s3_3;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *temp_v0_2;

    func_00270390();
    temp_a0 = *(u8 **)((u8 *)D_004707FC + 0x24);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401300;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401300);
    D_00470238 = 0;
    temp_s4 = amGs_SetReg32(0, 0x30000);
    func_00133780(0, 1);
    temp_s2 = *(u8 **)((u8 *)D_004707FC + 0x20);
    func_00228430(0);
    func_002284D0(0);
    temp_s1 = arg0 + 0x30;
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xE4), 0);
    sp70 = 0;
    sp78 = 0x44480000;
    sp74 = *(f32 *)((u8 *)temp_v0 + 0x24) + *(f32 *)((u8 *)temp_v0 + 0x34);
    sp7C = *(f32 *)((u8 *)temp_v0 + 0x24) + *(f32 *)((u8 *)temp_v0 + 0x3C);
    amDraw_SetScissor(&sp70, 0);
    func_0022D4B0(temp_v0, 1);
    func_00228430(0);
    if (*(s32 *)((u8 *)temp_s1 + 4) <= 0) {
        goto block_3;
    }
    sp84 = (-D_00470018 * ((f32) *(s32 *)((u8 *)arg0 + 0x30) * gFrameDelta)) / D_0047001C;
    func_00227A30(&sp80);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xE8), 0.0f);
    goto block_4;
block_3:
    sp84 = (D_00470018 * ((f32) *(s32 *)((u8 *)arg0 + 0x30) * gFrameDelta)) / D_0047001C;
    func_00227A30(&sp80);
    func_00228430(0);
    sp84 = -D_00470018;
    func_00227A30(&sp80);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xE8), 0.0f);
    func_00228410();
block_4:
    func_00228430(0);
    func_002284D0(0);
    var_s0 = 0;
    temp_s3 = (unsigned char *)(D_004707FC + 0x104);
    temp_s5 = (unsigned char *)(D_004707FC + ((*(s32 *)((u8 *)D_004707FC + 0x48) + 1) * 8) + 0x75C);
    func_00228430(0);
    sp84 = D_00470018 * (f32) *(s32 *)((u8 *)D_004707FC + 0x48);
    func_00227A30(&sp80);
    if (*(u8 *)((u8 *)temp_s5 + 7) == 0) {
        goto block_6;
    }
    var_s0 = 1;
block_6:
    func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0x28)) + 0xC), 0, 0, 0, (f32) var_s0);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)temp_s3 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
    func_00228410();
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xE4), 0.0f);
    func_00228410();
    func_00228430(0);
    sp84 = D_00470018;
    if (*(s32 *)((u8 *)temp_s1 + 4) >= 0) {
        goto block_8;
    }
    sp84 = -D_00470018;
    func_00227A30(&sp80);
    sp84 = D_00470018;
block_8:
    var_s0_2 = 0;
    goto loop_17;
block_9:
    if (*(s32 *)((u8 *)temp_s1 + 4) <= 0) {
        goto block_13;
    }
    if (var_s0_2 != 0) {
        goto block_15;
    }
    goto block_16;
block_13:
    if (var_s0_2 == 0xA) {
        goto block_16;
    }
block_15:
    func_00270EC0(D_004707FC + (var_s0_2 * 8) + 0x75C);
    func_00227A30(&sp80);
block_16:
    var_s0_2 += 1;
loop_17:
    if (var_s0_2 < 0xB) {
        goto block_9;
    }
    func_00228410();
    func_00270CA0();
    func_00270660();
    func_00270870();
    func_00228410();
    amDraw_SetScissor(NULL, 0);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 4), 0.0f);
    temp_s3_2 = (unsigned char *)(D_004707FC + 0xA4);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)D_004707FC + 0xA4) * 4)), (f32) *(s32 *)((u8 *)D_004707FC + 0xAC) * gFrameDelta);
    *(s32 *)((u8 *)temp_s3_2 + 8) = (s32) (*(s32 *)((u8 *)temp_s3_2 + 8) + 1);
    temp_s3_3 = (unsigned char *)(D_004707FC + 0xD4);
    func_0022C430(*(*(u8 **)((u8 *)temp_s2 + 0x1C) + (*(s32 *)((u8 *)D_004707FC + 0xD4) * 4)), (f32) *(s32 *)((u8 *)D_004707FC + 0xDC) * gFrameDelta);
    *(s32 *)((u8 *)temp_s3_3 + 8) = (s32) (*(s32 *)((u8 *)temp_s3_3 + 8) + 1);
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1C)) + 0xEC), 0.0f);
    if (*(s32 *)((u8 *)D_004707FC + 0x58) < 0xA) {
        goto block_20;
    }
    func_00228430(0);
    temp_v0_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x20)) + 0x1C)) + 0x3C), 0);
    *(f32 *)((u8 *)temp_v0_2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x24) + ((*(f32 *)((u8 *)temp_v0_2 + 0x3C) / (f32) *(s32 *)((u8 *)D_004707FC + 0x58)) * (f32) *(s32 *)((u8 *)D_004707FC + 0x4C)));
    *(f32 *)((u8 *)temp_v0_2 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x3C) / ((f32) *(s32 *)((u8 *)D_004707FC + 0x58) / 9.0f));
    func_0022C6B0(temp_v0_2);
    func_0022D4B0(temp_v0_2, 1);
    func_00228410();
block_20:
    func_00228410();
    func_00133780(0, 0);
    amGs_SetReg32(0, temp_s4);
    return;
}
