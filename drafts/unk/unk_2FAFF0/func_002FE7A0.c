/* Draft (not built): func_002FE7A0 at 0x002FE7A0, size 0x430, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 158 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x478, original 0x430
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FE7A0.s */

// src/unk/unk_2FAFF0.c func_002FE7A0 size diff=158/286
void *A2d_AllocObj(s32, s16, f32);
s32 func_00227A30(f32 *);
s32 func_00228430(s32, s128, f32 *, f32 *);
s32 func_002284D0(s32);
s32 func_0022C430(s32, s16, s32);
s32 func_0022D4B0(void *, s32);
extern f32 D_00458A90;
extern f32 D_00458A94;
extern s128 D_00458C00;
extern void func_00228410(void);
extern void func_0022C6B0(void *);
void func_002FE7A0(u8 *arg0) {
    f32 sp80;
    f32 sp84;
    f32 temp_f1;
    f32 temp_f2;
    s16 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s2;
    s32 var_s4;
    s8 temp_v1_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v1;

    sp80 = (s128) D_00458C00;
    sp80 = *(f32 *)((u8 *)arg0 + 0xC);
    sp84 = *(f32 *)((u8 *)arg0 + 0x10);
    temp_s0 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_f2 = sp80 + D_00458A90;
    temp_v1 = *(u8 **)((u8 *)gTourMap + 0x44);
    sp80 = temp_f2;
    sp84 += D_00458A94;
    temp_f1 = temp_f2 - *(f32 *)((u8 *)temp_v1 + 0x30);
    sp80 = temp_f1;
    sp84 -= *(f32 *)((u8 *)temp_v1 + 0x34);
    if (temp_f1 < -100.0f) {
        goto block_3;
    }
    if (temp_f1 <= 1000.0f) {
        goto block_4;
    }
block_3:
    return;
block_4:
    func_00228430(0, D_00458C00, &sp80, &sp84);
    func_002284D0(0);
    func_00227A30(&sp80);
    temp_a1 = *(s16 *)((u8 *)arg0 + 0xA);
    temp_v1_2 = *(s8 *)((u8 *)arg0 + 4);
    temp_s3 = *(s16 *)((u8 *)arg0 + 8) + 0x41;
    temp_s2 = temp_a1 + 0x39;
    if (temp_v1_2 == 5) {
        goto block_22;
    }
    if (temp_v1_2 == 2) {
        goto block_19;
    }
    if (temp_v1_2 == 1) {
        goto block_19;
    }
    if (temp_v1_2 == 3) {
        goto block_18;
    }
    if (temp_v1_2 == 0) {
        goto block_11;
    }
    goto block_27;
block_11:
    if (temp_a1 < 0) {
        goto block_16;
    }
    temp_s5 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), temp_a1, 0.0f);
    var_s4 = 0;
    var_s2 = 0;
loop_13:
    temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C) + var_s2) + 0x310), M2C_BITWISE(s16, ((f32) *(s32 *)((u8 *)arg0 + 0) * gFrameDelta)), 0);
    *(s16 *)((u8 *)temp_v0 + 0x18) = (s16) *(s16 *)((u8 *)temp_s5 + 0x18);
    *(f32 *)((u8 *)temp_v0 + 0x40) = (f32) *(f32 *)((u8 *)temp_s5 + 0x40);
    *(f32 *)((u8 *)temp_v0 + 0x44) = (f32) *(f32 *)((u8 *)temp_s5 + 0x44);
    *(f32 *)((u8 *)temp_v0 + 0x48) = (f32) *(f32 *)((u8 *)temp_s5 + 0x48);
    *(f32 *)((u8 *)temp_v0 + 0x4C) = (f32) *(f32 *)((u8 *)temp_s5 + 0x4C);
    func_0022C6B0(temp_v0);
    func_0022D4B0(temp_v0, 1);
    var_s4 += 1;
    var_s2 += 4;
    if (var_s4 < 3) {
        goto loop_13;
    }
    func_0022D4B0(temp_s5, 1);
    goto block_27;
block_16:
    temp_s1 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x2A4), temp_a1, (f32) *(s32 *)((u8 *)arg0 + 0) * gFrameDelta);
    temp_v0_2 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), 0, 0);
    *(s16 *)((u8 *)temp_s1 + 0x18) = (s16) *(s16 *)((u8 *)temp_v0_2 + 0x18);
    *(f32 *)((u8 *)temp_s1 + 0x40) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x40);
    *(f32 *)((u8 *)temp_s1 + 0x44) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x44);
    *(f32 *)((u8 *)temp_s1 + 0x48) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x48);
    *(f32 *)((u8 *)temp_s1 + 0x4C) = (f32) *(f32 *)((u8 *)temp_v0_2 + 0x4C);
    func_0022C6B0(temp_s1);
    func_0022D4B0(temp_v0_2, 1);
    func_0022D4B0(temp_s1, 1);
    goto block_27;
block_18:
    temp_s1_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x2A8), temp_a1, 0.5f * ((f32) *(s32 *)((u8 *)arg0 + 0) * gFrameDelta));
    temp_v0_3 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), 0, 0);
    *(s16 *)((u8 *)temp_s1_2 + 0x18) = (s16) *(s16 *)((u8 *)temp_v0_3 + 0x18);
    *(f32 *)((u8 *)temp_s1_2 + 0x40) = (f32) *(f32 *)((u8 *)temp_v0_3 + 0x40);
    *(f32 *)((u8 *)temp_s1_2 + 0x44) = (f32) *(f32 *)((u8 *)temp_v0_3 + 0x44);
    *(f32 *)((u8 *)temp_s1_2 + 0x48) = (f32) *(f32 *)((u8 *)temp_v0_3 + 0x48);
    *(f32 *)((u8 *)temp_s1_2 + 0x4C) = (f32) *(f32 *)((u8 *)temp_v0_3 + 0x4C);
    func_0022C6B0(temp_s1_2);
    func_0022D4B0(temp_v0_3, 1);
    func_0022D4B0(temp_s1_2, 1);
    goto block_27;
block_19:
    if (temp_a1 < 0) {
        goto block_21;
    }
    func_0022C430(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), temp_a1, 0);
    func_0022C430(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s2 * 4)), 0, 0);
    goto block_27;
block_21:
    func_0022C430(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), temp_a1, 0);
    goto block_27;
block_22:
    if (temp_a1 < 0) {
        goto block_25;
    }
    func_0022C430(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), temp_a1, 0);
    func_0022C430(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s2 * 4)), 0, 0);
    goto block_26;
block_25:
    func_0022C430(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + (temp_s3 * 4)), temp_a1, 0);
block_26:
    func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x29C), 0, 0);
block_27:
    func_00228410();
    return;
}
