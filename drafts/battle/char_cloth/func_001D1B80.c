/* Draft (not built): func_001D1B80 at 0x001D1B80, size 0x350, segment battle/char_cloth (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 153 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x384, original 0x350
 * Original: asm/nonmatchings/battle/char_cloth/func_001D1B80.s */

// src/battle/char_cloth.c func_001D1B80 size diff=153/225
f32 func_00146E30(void *, void *);
extern void func_0011F4C0(void);
void func_001D1B80(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f21;
    f32 var_f20;
    s16 temp_s0;
    s16 temp_s1_2;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a2;
    u8 *temp_a2_10;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_5;
    u8 *temp_a2_6;
    u8 *temp_a2_7;
    u8 *temp_a2_8;
    u8 *temp_a2_9;
    u8 *temp_s1;
    u8 *var_s3_2;

    if (arg0 == NULL) {
        goto block_21;
    }
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x50);
    var_s0 = *(s32 *)((u8 *)arg0 + 0x5C);
loop_2:
    var_s0 -= 1;
    *(f32 *)((u8 *)temp_s1 + 8) = func_00146E30(*(u8 **)((u8 *)temp_s1 + 0), *(u8 **)((u8 *)temp_s1 + 4));
    if (var_s0 != 0) {
        goto loop_2;
    }
    temp_a2 = *(u8 **)((u8 *)arg0 + 0x50);
    var_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
loop_4:
    var_a1 -= 1;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a2 + 0)) + 0x60) = 0x461C4000;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a2 + 4)) + 0x60) = 0x461C4000;
    if (var_a1 != 0) {
        goto loop_4;
    }
    temp_s0 = *(s16 *)((u8 *)arg0 + 0x6E);
    var_f20 = *(f32 *)((u8 *)arg0 + 0x48);
    temp_s1_2 = *(s16 *)((u8 *)arg0 + 0x6C);
    var_s3 = 1;
    temp_f21 = (*(f32 *)((u8 *)arg0 + 0x4C) - var_f20) / (f32) temp_s0;
    if (temp_s0 < 2) {
        goto block_15;
    }
loop_6:
    func_0011F4C0();
    var_a0 = 0;
    temp_f0 = 0.3f + (0.7f * M2C_ERROR(/* Read from unset register $f0 */));
    if (temp_s1_2 <= 0) {
        goto block_14;
    }
    if (temp_s1_2 < 9) {
        goto block_10;
    }
loop_9:
    temp_t5 = var_a0 + 1;
    temp_t4 = var_a0 + 2;
    temp_t3 = var_a0 + 3;
    temp_t2 = var_a0 + 4;
    temp_t1 = var_a0 + 5;
    temp_t0 = var_a0 + 6;
    temp_a3 = var_a0 + 7;
    temp_a2_2 = (var_a0 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7;
    var_a0 += 8;
    temp_a2_3 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + temp_a2_2);
    *(f32 *)((u8 *)temp_a2_3 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_3 + 0x68) = temp_f0;
    temp_a2_4 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_t5 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_4 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_4 + 0x68) = temp_f0;
    temp_a2_5 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_t4 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_5 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_5 + 0x68) = temp_f0;
    temp_a2_6 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_t3 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_6 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_6 + 0x68) = temp_f0;
    temp_a2_7 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_t2 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_7 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_7 + 0x68) = temp_f0;
    temp_a2_8 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_t1 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_8 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_8 + 0x68) = temp_f0;
    temp_a2_9 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_t0 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_9 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_9 + 0x68) = temp_f0;
    temp_a2_10 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((temp_a3 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7));
    *(f32 *)((u8 *)temp_a2_10 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a2_10 + 0x68) = temp_f0;
    if (var_a0 < (temp_s1_2 - 8)) {
        goto loop_9;
    }
block_10:
    if (var_a0 >= temp_s1_2) {
        goto block_14;
    }
loop_12:
    temp_a1 = (var_a0 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s3)) << 7;
    var_a0 += 1;
    temp_a1_2 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + temp_a1);
    *(f32 *)((u8 *)temp_a1_2 + 0x64) = var_f20;
    *(f32 *)((u8 *)temp_a1_2 + 0x68) = temp_f0;
    if (var_a0 < temp_s1_2) {
        goto loop_12;
    }
block_14:
    var_s3 += 1;
    var_f20 += temp_f21;
    if (var_s3 < temp_s0) {
        goto loop_6;
    }
block_15:
    var_s6 = 0;
    if (temp_s1_2 <= 0) {
        goto block_21;
    }
    var_s4 = 0;
loop_17:
    var_s5 = 1;
    var_s3_2 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + var_s4);
    *(s32 *)((u8 *)var_s3_2 + 0x6C) = 0;
    if (temp_s0 < 2) {
        goto block_20;
    }
loop_18:
    temp_a1_3 = var_s3_2;
    var_s3_2 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x54) + ((var_s6 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s5)) << 7));
    var_s5 += 1;
    *(f32 *)((u8 *)var_s3_2 + 0x6C) = func_00146E30(var_s3_2, temp_a1_3);
    if (var_s5 < temp_s0) {
        goto loop_18;
    }
block_20:
    var_s6 += 1;
    var_s4 += 0x80;
    if (var_s6 < temp_s1_2) {
        goto loop_17;
    }
block_21:
    return;
}
