/* Draft (not built): func_002D6890 at 0x002D6890, size 0x280, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 110 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x280
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D6890.s */

// src/unk/unk_2D2530.c func_002D6890 size diff=110/122
extern s32 D_00456B10;
extern s32 D_00456C00;
extern char D_004B4B40[];
extern void func_002D7050(void);
void func_002D6890(void) {
    s32 sp60;
    s32 spE0;
    s32 spF0;
    s32 spF4;
    s32 spF8;
    f32 spFC;
    s32 *var_a1;
    s32 *var_a2;
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f1;
    s128 temp_v0;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s4 = (u8 *)(gOptionWork);
    temp_s3 = (u8 *)(D_004B4B40 + (*(s32 *)((u8 *)temp_s4 + 0x380) * 0xA) + 0x2BA86);
    if (D_004703F4 == 3) {
        goto block_3;
    }
    var_f1 = 1.0f;
    goto block_4;
block_3:
    var_f1 = 1.2f;
block_4:
    temp_f0 = *(f32 *)((u8 *)temp_s4 + 0x3A0) + var_f1;
    *(f32 *)((u8 *)temp_s4 + 0x3A0) = temp_f0;
    if (temp_f0 < 50.0f) {
        goto block_24;
    }
    *(s32 **)((u8 *)temp_s4 + 0x368) = &func_002D7050;
    spF0 = 0x3F800000;
    spF4 = 0x3F800000;
    spF8 = 0x3F800000;
    spFC = 1.0f;
    temp_f1 = *(f32 *)((u8 *)temp_s4 + 0x3A0);
    if (temp_f1 < 60.0f) {
        goto block_7;
    }
    spFC = 1.0f;
    goto block_8;
block_7:
    spFC = (temp_f1 - 50.0f) / 10.0f;
block_8:
    var_s2 = 0;
    goto loop_22;
block_9:
    var_a2 = &D_00456C00;
    var_a1 = &sp60;
    var_a0 = 4;
loop_10:
    var_a0 -= 1;
    temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
    *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
    var_a2 += 0x20;
    *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
    var_a1 += 0x20;
    if (var_a0 > 0) {
        goto loop_10;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_a1_2 = 0;
    goto loop_15;
block_12:
    if (*(&D_00456B10 + var_a1_2) != ((s64) (((s64) ((s64) *(s8 *)((u8 *)(var_s2 + temp_s3) + 2) << 0x38) >> 0x38) << 0x38) >> 0x38)) {
        goto block_14;
    }
    goto block_17;
block_14:
    var_a1_2 += 1;
loop_15:
    if (var_a1_2 < 0xA) {
        goto block_12;
    }
    var_a1_2 = 0;
block_17:
    temp_s0 = (u8 *)(gOptionWork);
    temp_s1 = *(u8 **)((u8 *)((var_a1_2 * 4) + ((var_s2 * 0x28) + temp_s4)) + 0x110);
    func_00228430(0);
    func_00228430(0);
    if (&spE0 == NULL) {
        goto block_19;
    }
    func_00227A30((struct Vec4 *)(&spE0));
block_19:
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_00470708 = 0;
    D_0047070C = 0;
    amModel_SetCurrent((s32)(temp_a0), 0);
    D_00470238 = 0;
    func_0022C060((struct Model2D2530 *)(temp_s1), 0x3F800000);
    func_00228410();
    if (&spF0 == NULL) {
        goto block_21;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
block_21:
    func_0022CD00((void *)(temp_s1));
    func_00228410();
    var_s2 += 1;
loop_22:
    if (var_s2 < 8) {
        goto block_9;
    }
block_24:
    return;
}
