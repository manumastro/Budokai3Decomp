/* Draft (not built): func_0028F930 at 0x0028F930, size 0x9F0, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 484 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x9CC, original 0x9F0
 * Original: asm/nonmatchings/story/str_bg/func_0028F930.s */

// src/story/str_bg.c func_0028F930 size diff=484/627
s32 amMotion_BindAnim(s32, s32, s32);
s32 amMotion_CreateFromObj(s32, s32, s32);
s32 amMotion_FindBone(void *, s8 *);
s32 func_002D02B0(s32, s32, void *, s32);
s32 printf(s32 *, s8 *);
extern s32 D_0046BAD0;
extern s16 D_0047005C;
extern u8 D_0047005E;
extern void *amObject_Create(void *, void *);
extern void amFile_Load(void *);
extern void func_002D01C0(void);
void func_0028F930(void) {
    s8 sp6C;
    s8 sp6D;
    s32 *var_v0_3;
    s32 temp_a0;
    s32 temp_a0_5;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1_11;
    s32 temp_v1_2;
    s32 temp_v1_8;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_10;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s0_9;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_s3;
    s8 var_a2;
    u8 *temp_a0_10;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_6;
    u8 *temp_a0_9;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a3_5;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_4;
    u8 *temp_s1_5;
    u8 *temp_t0;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_t0_4;
    u8 *temp_t0_5;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *temp_v0_5;
    u8 *temp_v0_8;
    u8 *temp_v0_9;
    u8 *temp_v1;
    u8 *temp_v1_10;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
    u8 *temp_v1_7;
    u8 *temp_v1_9;
    u8 *var_s2;
    u8 *var_v1;

    var_s0 = 0;
    *(s16 *)((u8 *)(&sp6C) + 0) = (s16) D_0047005C;
    *(u8 *)((u8 *)(&sp6C) + 2) = (u8) D_0047005E;
    goto loop_4;
block_1:
    temp_a0 = var_s0 * 4;
    temp_v1 = (unsigned char *)(D_004708A4 + temp_a0);
    temp_v0 = *(u8 **)((u8 *)temp_v1 + 0);
    if (temp_v0 == NULL) {
        goto block_3;
    }
    *(s32 *)((u8 *)temp_v1 + 0xF0) = (s32) *(s32 *)((u8 *)temp_v0 + 0x40);
    *(s32 *)((u8 *)(*(s32 *)(D_004708A4 + temp_a0)) + 0x40) = 0;
    amCdFs_Close(*(s32 *)(D_004708A4 + temp_a0), 0);
    temp_v1_2 = var_s0 * 4;
    *(s32 *)(D_004708A4 + temp_v1_2) = 0;
    amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)(temp_v1_2 + D_004708A4) + 0xF0)) + 0x50));
block_3:
    var_s0 += 1;
loop_4:
    if (var_s0 < 0x3C) {
        goto block_1;
    }
    var_v0 = 8;
    var_s0_2 = 0;
    *(u8 **)((u8 *)D_004708A4 + 0x1EC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0xF0)) + 0x50);
    *(s32 *)((u8 *)D_004708A4 + 0x274) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0xF4)) + 0x50);
    *(u8 **)((u8 *)D_004708A4 + 0x1F0) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0xF8)) + 0x50);
    *(s32 *)((u8 *)D_004708A4 + 0x278) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0xFC)) + 0x50);
    *(u8 **)((u8 *)D_004708A4 + 0x1F4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0x100)) + 0x50);
    *(s32 *)((u8 *)D_004708A4 + 0x27C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0x104)) + 0x50);
    *(u8 **)((u8 *)D_004708A4 + 0x1F8) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0x108)) + 0x50);
    *(s32 *)((u8 *)D_004708A4 + 0x280) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0x10C)) + 0x50);
    goto loop_12;
block_6:
    temp_a3 = var_v0 * 4;
    temp_v1_3 = *(u8 **)((u8 *)(temp_a3 + D_004708A4) + 0xF0);
    if (temp_v1_3 == NULL) {
        goto block_11;
    }
    temp_a2 = var_s0_2 * 4;
    *(s32 *)((u8 *)(temp_a2 + D_004708A4) + 0x1FC) = (s32) *(s32 *)((u8 *)temp_v1_3 + 0x50);
    *(s32 *)((u8 *)(temp_a2 + D_004708A4) + 0x284) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)(temp_a3 + D_004708A4) + 0xF4)) + 0x50);
    temp_a0_2 = *(u8 **)((u8 *)(temp_a3 + D_004708A4) + 0xF8);
    if (temp_a0_2 == NULL) {
        goto block_9;
    }
    *(s32 *)((u8 *)(temp_a2 + D_004708A4) + 0x2B8) = (s32) *(s32 *)((u8 *)temp_a0_2 + 0x50);
block_9:
    temp_v1_4 = *(u8 **)((u8 *)((var_v0 * 4) + D_004708A4) + 0xFC);
    if (temp_v1_4 == NULL) {
        goto block_11;
    }
    *(s32 *)((u8 *)((var_s0_2 * 4) + D_004708A4) + 0x2EC) = (s32) *(s32 *)((u8 *)temp_v1_4 + 0x50);
block_11:
    var_s0_2 += 1;
    var_v0 += 4;
loop_12:
    if (var_s0_2 < 5) {
        goto block_6;
    }
    var_v0_2 = 0x1C;
    var_s0_3 = 0;
    goto loop_18;
block_14:
    temp_a3_2 = var_v0_2 * 4;
    temp_v1_5 = *(u8 **)((u8 *)(temp_a3_2 + D_004708A4) + 0xF0);
    if (temp_v1_5 == NULL) {
        goto block_17;
    }
    temp_a2_2 = var_s0_3 * 4;
    *(s32 *)((u8 *)(temp_a2_2 + D_004708A4) + 0x210) = (s32) *(s32 *)((u8 *)temp_v1_5 + 0x50);
    *(s32 *)((u8 *)(temp_a2_2 + D_004708A4) + 0x298) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)(temp_a3_2 + D_004708A4) + 0xF4)) + 0x50);
    *(s32 *)((u8 *)(temp_a2_2 + D_004708A4) + 0x2CC) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)(temp_a3_2 + D_004708A4) + 0xF8)) + 0x50);
    temp_a0_3 = *(u8 **)((u8 *)(temp_a3_2 + D_004708A4) + 0xFC);
    if (temp_a0_3 == NULL) {
        goto block_17;
    }
    *(s32 *)((u8 *)(temp_a2_2 + D_004708A4) + 0x300) = (s32) *(s32 *)((u8 *)temp_a0_3 + 0x50);
block_17:
    var_s0_3 += 1;
    var_v0_2 += 4;
loop_18:
    if (var_s0_3 < 8) {
        goto block_14;
    }
    *(u8 **)((u8 *)D_004708A4 + 0x230) = amObject_Create(*(u8 **)((u8 *)D_004708A4 + 0x1EC), NULL);
    var_s0_4 = 0;
    *(u8 **)((u8 *)D_004708A4 + 0x234) = amObject_Create(*(u8 **)((u8 *)D_004708A4 + 0x1F0), NULL);
    goto loop_28;
block_21:
    temp_a0_4 = *(u8 **)((u8 *)((var_s0_4 * 4) + D_004708A4) + 0x1FC);
    if (temp_a0_4 == NULL) {
        goto block_27;
    }
    temp_a0_5 = var_s0_4 * 4;
    *(u8 **)((u8 *)(temp_a0_5 + D_004708A4) + 0x240) = amObject_Create(temp_a0_4, NULL);
    if (var_s0_4 >= 3) {
        goto block_27;
    }
    var_s4 = 0;
    goto loop_25;
block_24:
    temp_v0_2 = var_s4 * 8;
    var_s4 += 1;
    *(s32 *)((u8 *)(temp_v0_2 + *(s32 *)((u8 *)(temp_a0_5 + D_004708A4) + 0x240)) + 8) = var_s0_4;
loop_25:
    if (var_s4 < *(s32 *)((u8 *)(*(u8 **)((u8 *)(temp_a0_5 + D_004708A4) + 0x240)) + 4)) {
        goto block_24;
    }
block_27:
    var_s0_4 += 1;
loop_28:
    if (var_s0_4 < 5) {
        goto block_21;
    }
    var_s0_5 = 0;
    goto loop_34;
block_31:
    temp_a0_6 = *(u8 **)((u8 *)((var_s0_5 * 4) + D_004708A4) + 0x210);
    if (temp_a0_6 == NULL) {
        goto block_33;
    }
    *(u8 **)((u8 *)((var_s0_5 * 4) + D_004708A4) + 0x254) = amObject_Create(temp_a0_6, NULL);
block_33:
    var_s0_5 += 1;
loop_34:
    if (var_s0_5 < 8) {
        goto block_31;
    }
    var_s0_6 = 0;
    goto loop_45;
block_37:
    temp_v1_6 = (unsigned char *)(D_004708A4 + (var_s0_6 * 0x10));
    *(s32 *)((u8 *)temp_v1_6 + 0x360) = 0;
    temp_s1 = temp_v1_6 + 0x354;
    temp_v1_7 = (unsigned char *)((var_s0_6 * 4) + D_004708A4);
    if (*(s32 *)((u8 *)temp_v1_7 + 0x2B8) == 0) {
        goto block_44;
    }
    temp_a0_7 = var_s0_6 * 4;
    *(s32 *)((u8 *)(temp_a0_7 + D_004708A4) + 0x320) = amMotion_CreateFromObj(*(s32 *)((u8 *)temp_v1_7 + 0x240), 0, 0);
    temp_v0_3 = (unsigned char *)(temp_a0_7 + D_004708A4);
    amMotion_BindAnim(*(s32 *)((u8 *)temp_v0_3 + 0x320), 0, *(s32 *)((u8 *)temp_v0_3 + 0x2B8));
    temp_a3_3 = *(s32 *)((u8 *)temp_v1_6 + 0x354);
    temp_t0 = *(u8 **)((u8 *)((var_s0_6 * 4) + D_004708A4) + 0x320);
    temp_a2_3 = temp_t0 + 0x41C;
    if (*(s32 *)((u8 *)temp_t0 + 0x41C) == temp_a3_3) {
        goto block_43;
    }
    var_a1 = 0;
    goto loop_41;
block_40:
    temp_v1_8 = var_a1 << 6;
    var_a1 += 1;
    *(s32 *)((u8 *)(temp_v1_8 + *(s32 *)((u8 *)temp_a2_3 + 0x10)) + 0x30) = -1;
    *(s32 *)((u8 *)(temp_v1_8 + *(s32 *)((u8 *)temp_a2_3 + 0x10)) + 0x34) = -1;
    *(s32 *)((u8 *)(temp_v1_8 + *(s32 *)((u8 *)temp_a2_3 + 0x10)) + 0x38) = -1;
loop_41:
    if (var_a1 < *(s32 *)((u8 *)temp_t0 + 0x418)) {
        goto block_40;
    }
    *(s32 *)((u8 *)temp_a2_3 + 0xC) = 0xBF800000;
block_43:
    *(s32 *)((u8 *)temp_t0 + 0x41C) = temp_a3_3;
    temp_v0_4 = *(s32 *)((u8 *)temp_v1_6 + 0x354);
    *(f32 *)((u8 *)temp_s1 + 4) = (f32) *(s32 *)((u8 *)(((temp_v0_4 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v0_4 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)((var_s0_6 * 4) + D_004708A4) + 0x320)) + 0x46C)) + 0x14)) + 8);
    *(s32 *)((u8 *)temp_s1 + 8) = 0;
block_44:
    var_s0_6 += 1;
loop_45:
    if (var_s0_6 < 5) {
        goto block_37;
    }
    var_s0_7 = 0;
    goto loop_57;
block_48:
    temp_v1_9 = (unsigned char *)(D_004708A4 + ((var_s0_7 + 5) * 0x10));
    *(s32 *)((u8 *)temp_v1_9 + 0x360) = 0;
    temp_s1_2 = temp_v1_9 + 0x354;
    temp_v1_10 = (unsigned char *)((var_s0_7 * 4) + D_004708A4);
    if (*(s32 *)((u8 *)temp_v1_10 + 0x2CC) == 0) {
        goto block_56;
    }
    temp_a0_8 = var_s0_7 * 4;
    *(s32 *)((u8 *)(temp_a0_8 + D_004708A4) + 0x334) = amMotion_CreateFromObj(*(s32 *)((u8 *)temp_v1_10 + 0x254), 0, 0);
    temp_v0_5 = (unsigned char *)(temp_a0_8 + D_004708A4);
    amMotion_BindAnim(*(s32 *)((u8 *)temp_v0_5 + 0x334), 0, *(s32 *)((u8 *)temp_v0_5 + 0x2CC));
    temp_a3_4 = *(s32 *)((u8 *)temp_v1_9 + 0x354);
    temp_t0_2 = *(u8 **)((u8 *)((var_s0_7 * 4) + D_004708A4) + 0x334);
    temp_a2_4 = temp_t0_2 + 0x41C;
    if (*(s32 *)((u8 *)temp_t0_2 + 0x41C) == temp_a3_4) {
        goto block_55;
    }
    var_a1_2 = 0;
    goto loop_53;
block_52:
    temp_v1_11 = var_a1_2 << 6;
    var_a1_2 += 1;
    *(s32 *)((u8 *)(temp_v1_11 + *(s32 *)((u8 *)temp_a2_4 + 0x10)) + 0x30) = -1;
    *(s32 *)((u8 *)(temp_v1_11 + *(s32 *)((u8 *)temp_a2_4 + 0x10)) + 0x34) = -1;
    *(s32 *)((u8 *)(temp_v1_11 + *(s32 *)((u8 *)temp_a2_4 + 0x10)) + 0x38) = -1;
loop_53:
    if (var_a1_2 < *(s32 *)((u8 *)temp_t0_2 + 0x418)) {
        goto block_52;
    }
    *(s32 *)((u8 *)temp_a2_4 + 0xC) = 0xBF800000;
block_55:
    *(s32 *)((u8 *)temp_t0_2 + 0x41C) = temp_a3_4;
    temp_v0_6 = *(s32 *)((u8 *)temp_v1_9 + 0x354);
    *(f32 *)((u8 *)temp_s1_2 + 4) = (f32) *(s32 *)((u8 *)(((temp_v0_6 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v0_6 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)((var_s0_7 * 4) + D_004708A4) + 0x334)) + 0x46C)) + 0x14)) + 8);
    *(s32 *)((u8 *)temp_s1_2 + 8) = 0;
block_56:
    var_s0_7 += 1;
loop_57:
    if (var_s0_7 < 8) {
        goto block_48;
    }
    temp_s3 = *(s8 *)((u8 *)D_004708A4 + 0x1AE0);
    var_s2 = (unsigned char *)(D_004708A4 + 0x1AF0);
    temp_s1_3 = **(u8 ***)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0x1F4)) + 0x1C);
    var_s0_8 = 0;
    goto loop_67;
block_60:
    var_s4_2 = 0;
    goto loop_65;
block_61:
    temp_v0_7 = amMotion_FindBone(temp_s1_3, &sp6C);
    if (temp_v0_7 == -1) {
        goto block_63;
    }
    temp_t0_3 = (unsigned char *)(*(s32 *)((u8 *)temp_s1_3 + 0x14) + (temp_v0_7 * 0x50));
    *(u8 **)((u8 *)var_s2 + 0x14) = temp_t0_3;
    *(s32 *)((u8 *)var_s2 + 0) = (s32) *(s32 *)((u8 *)temp_t0_3 + 0x10);
    *(s32 *)((u8 *)var_s2 + 4) = 0;
    *(s32 *)((u8 *)var_s2 + 8) = (s32) *(s32 *)((u8 *)temp_t0_3 + 0x18);
    *(s32 *)((u8 *)var_s2 + 0xC) = 0x3F800000;
    *(s32 *)((u8 *)temp_t0_3 + 0x10) = 0;
    *(s32 *)((u8 *)temp_t0_3 + 0x18) = 0;
    *(s32 *)((u8 *)temp_t0_3 + 0x3C) = 0;
    *(s32 *)((u8 *)var_s2 + 0x10) = 0x4530C666;
    *(s32 *)((u8 *)var_s2 + 0x70) = (s32) (*(s32 *)((u8 *)temp_s1_3 + 0x1C) + (temp_v0_7 << 5));
    goto block_64;
block_63:
    printf(&D_0046BAD0, &sp6C);
block_64:
    var_s4_2 += 1;
    var_s2 += 0x80;
    sp6C += 1;
loop_65:
    if (var_s4_2 < temp_s3) {
        goto block_61;
    }
    sp6C = 0x41;
    var_s0_8 += 1;
    var_s2 += (6 - temp_s3) << 7;
    sp6D += 1;
loop_67:
    if (var_s0_8 < temp_s3) {
        goto block_60;
    }
    var_s0_9 = 0;
    var_a2 = -1;
    temp_s1_4 = **(u8 ***)((u8 *)(*(u8 **)((u8 *)D_004708A4 + 0x1F8)) + 0x1C);
    var_v1 = (unsigned char *)(D_004708A4 + 0x430);
    goto loop_78;
block_70:
    temp_v0_8 = (unsigned char *)(*(s32 *)((u8 *)temp_s1_4 + 0x1C) + (var_s0_9 << 5));
    temp_t1 = *(s8 *)((u8 *)temp_v0_8 + 0) - 0x41;
    temp_t2 = *(s8 *)((u8 *)temp_v0_8 + 1) - 0x31;
    if (temp_t1 < 0) {
        goto block_77;
    }
    if (temp_t1 >= 6) {
        goto block_77;
    }
    if (temp_t2 < 0) {
        goto block_77;
    }
    if (temp_t2 >= 6) {
        goto block_77;
    }
    temp_a3_5 = (unsigned char *)(D_004708A4 + (temp_t2 * 0x300) + (temp_t1 << 7));
    *(u8 **)((u8 *)var_v1 + 0) = (u8 *) *(u8 **)((u8 *)temp_a3_5 + 0x1B10);
    *(u8 **)((u8 *)var_v1 + 4) = (u8 *) (temp_a3_5 + 0x1AF0 + 0x20);
    *(u8 **)((u8 *)temp_a3_5 + 0x1B10) = var_v1;
    temp_v0_9 = *(u8 **)((u8 *)var_v1 + 0);
    if (temp_v0_9 == NULL) {
        goto block_76;
    }
    *(u8 **)((u8 *)temp_v0_9 + 4) = var_v1;
block_76:
    temp_t0_4 = (unsigned char *)(*(s32 *)((u8 *)temp_s1_4 + 0x14) + (var_s0_9 * 0x50));
    *(s32 *)((u8 *)temp_t0_4 + 0x3C) = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    *(s32 *)((u8 *)var_v1 + 8) = -1;
    *(s32 *)((u8 *)var_v1 + 0x10) = 3;
    *(s32 *)((u8 *)var_v1 + 0x14) = -1;
    *(u8 **)((u8 *)var_v1 + 0x18) = temp_t0_4;
    *(s32 *)((u8 *)var_v1 + 0x1C) = 0;
    *(s32 *)((u8 *)var_v1 + 0x20) = 0;
    *(f32 *)((u8 *)var_v1 + 0x30) = 0.0f;
    *(f32 *)((u8 *)var_v1 + 0x34) = 0.0f;
    *(f32 *)((u8 *)var_v1 + 0x38) = 0.0f;
    *(f32 *)((u8 *)var_v1 + 0x3C) = 1.0f;
    *(s32 *)((u8 *)var_v1 + 0x40) = (s32) (*(s32 *)((u8 *)temp_s1_4 + 0x1C) + (var_s0_9 << 5) + 3);
    var_v1 += 0x50;
block_77:
    var_s0_9 += 1;
loop_78:
    if (var_s0_9 < *(s32 *)((u8 *)temp_s1_4 + 0x10)) {
        goto block_70;
    }
    var_s0_10 = 0;
    var_v0_3 = (int *)(D_004708A4 + 0x334);
    goto loop_93;
block_80:
    if (*var_v0_3 == 0) {
        goto block_92;
    }
    temp_s1_5 = **(u8 ***)((u8 *)(*(u8 **)((u8 *)((var_s0_10 * 4) + D_004708A4) + 0x210)) + 0x1C);
    temp_a0_9 = *(u8 **)((u8 *)temp_s1_5 + 0x1C);
    var_a2 = *(s8 *)((u8 *)temp_a0_9 + 0);
    temp_t1_2 = var_a2 - 0x41;
    temp_t2_2 = *(s8 *)((u8 *)temp_a0_9 + 1) - 0x31;
    if (temp_t1_2 < 0) {
        goto block_92;
    }
    if (temp_t1_2 >= 6) {
        goto block_92;
    }
    if (temp_t2_2 < 0) {
        goto block_92;
    }
    var_a2 = temp_t2_2 * 2;
    if (temp_t2_2 >= 6) {
        goto block_92;
    }
    temp_t0_5 = (unsigned char *)(D_004708A4 + (temp_t2_2 * 0x300) + (temp_t1_2 << 7));
    *(u8 **)((u8 *)var_v1 + 0) = (u8 *) *(u8 **)((u8 *)temp_t0_5 + 0x1B10);
    *(u8 **)((u8 *)var_v1 + 4) = (u8 *) (temp_t0_5 + 0x1AF0 + 0x20);
    *(u8 **)((u8 *)temp_t0_5 + 0x1B10) = var_v1;
    temp_a0_10 = *(u8 **)((u8 *)var_v1 + 0);
    if (temp_a0_10 == NULL) {
        goto block_87;
    }
    *(u8 **)((u8 *)temp_a0_10 + 4) = var_v1;
block_87:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s32 *)((u8 *)var_v1 + 8) = -1;
    *(s32 *)((u8 *)var_v1 + 0x10) = (s32) (var_s0_10 + 9);
    var_a2 = (s8) D_004708A4;
    if (*(s32 *)((u8 *)((var_s0_10 * 4) + var_a2) + 0x300) == 0) {
        goto block_90;
    }
    *(s32 *)((u8 *)var_v1 + 0x14) = (s32) (var_s0_10 + 5);
    goto block_91;
block_90:
    *(s32 *)((u8 *)var_v1 + 0x14) = -1;
block_91:
    *(s32 *)((u8 *)var_v1 + 0x18) = 0;
    *(s32 *)((u8 *)var_v1 + 0x1C) = 0;
    *(s32 *)((u8 *)var_v1 + 0x20) = (s32) *var_v0_3;
    *(s32 *)((u8 *)var_v1 + 0x30) = 0;
    *(s32 *)((u8 *)var_v1 + 0x34) = 0;
    *(s32 *)((u8 *)var_v1 + 0x38) = 0;
    *(s32 *)((u8 *)var_v1 + 0x3C) = 0x3F800000;
    *(u8 **)((u8 *)var_v1 + 0x40) = (u8 *) (*(u8 **)((u8 *)temp_s1_5 + 0x1C) + 3);
    var_v1 += 0x50;
block_92:
    var_s0_10 += 1;
    var_v0_3 += 4;
loop_93:
    if (var_s0_10 < 8) {
        goto block_80;
    }
    func_002D02B0(0xFFFF, 0x3F800000, (u8 *) var_a2, -1);
    func_002D01C0();
    *(s32 *)((u8 *)D_004708A4 + 0x1AB0) = 1;
    return;
}
