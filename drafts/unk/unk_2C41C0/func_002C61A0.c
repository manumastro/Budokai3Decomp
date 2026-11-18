/* Draft (not built): func_002C61A0 at 0x002C61A0, size 0x220, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 105 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x198, original 0x220
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C61A0.s */

// src/unk/unk_2C41C0.c func_002C61A0 size diff=105/102
void func_002C61A0(u8 *arg0) {
    s32 sp0;
    s32 sp4;
    f32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    f32 sp18;
    s32 sp20;
    f32 sp24;
    s32 sp2C;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 *var_a3;
    s32 *var_t3;
    f32 *var_a2;
    f32 *var_a2_2;
    f32 *var_t0;
    f32 *var_t0_2;
    f32 *var_t2;
    f32 *var_t4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f6;
    s32 var_t1;
    s32 var_t5;
    u8 *var_a3_2;

    var_t2 = &sp44;
    var_t4 = &sp48;
    var_a2 = &sp34;
    var_t5 = 1;
    var_t3 = &sp14;
    var_t0 = &sp24;
    var_a3 = &sp4;
    sp40 = *(f32 *)((u8 *)arg0 + 4) - *(f32 *)((u8 *)arg0 + 0);
    *var_t2 = *(f32 *)((u8 *)arg0 + 8) - *(f32 *)((u8 *)arg0 + 4);
    *var_t4 = *(f32 *)((u8 *)arg0 + 0xC) - *(f32 *)((u8 *)arg0 + 8);
    temp_f4 = *(f32 *)((u8 *)arg0 + 0x14);
    temp_f5 = *var_t2;
    *var_a2 = ((3.0f * (*(f32 *)((u8 *)arg0 + 0x18) - temp_f4)) / temp_f5) - ((3.0f * (temp_f4 - *(f32 *)((u8 *)arg0 + 0x10))) / sp40);
    temp_f4_2 = *(f32 *)((u8 *)arg0 + 0x18);
    sp2C = 0x3F800000;
    sp20 = 0x3F800000;
    spC = 0;
    sp0 = 0;
    sp10 = 0;
    sp38 = ((3.0f * (*(f32 *)((u8 *)arg0 + 0x1C) - temp_f4_2)) / *var_t4) - ((3.0f * (temp_f4_2 - *(f32 *)((u8 *)arg0 + 0x14))) / temp_f5);
    do {
        var_t5 += 1;
        M2C_ERROR(/* unknown instruction: mula.s $f4, $f2 */);
        *var_t0 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f1, $f0 */);
        *(f32 *)((u8 *)var_t3 + 0) = (f32) (*(f32 *)((u8 *)var_t2 + 0) / *var_t0);
        temp_f3 = *(f32 *)((u8 *)var_t2 + -4);
        var_t3 += 4;
        temp_f1 = *var_a2;
        temp_f0 = *var_t0;
        var_t2 += 4;
        var_a2 += 4;
        var_t0 += 4;
        *(f32 *)((u8 *)var_a3 + 0) = (f32) ((temp_f1 - (temp_f3 * *(f32 *)((u8 *)var_a3 + -4))) / temp_f0);
        var_a3 += 4;
    } while (var_t5 < 3);
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    var_t1 = 2;
    var_t0_2 = &sp18;
    var_a3_2 = arg0 + 8;
    var_a2_2 = &sp8;
    do {
        var_t1 -= 1;
        temp_f1_2 = *var_t0_2;
        temp_f0_2 = *var_a2_2;
        var_t0_2 -= 4;
        var_a2_2 -= 4;
        *(f32 *)((u8 *)var_a3_2 + 0x30) = (f32) (temp_f0_2 - (*(f32 *)((u8 *)var_a3_2 + 0x34) * temp_f1_2));
        temp_f6 = *var_t4;
        *(f32 *)((u8 *)var_a3_2 + 0x20) = (f32) (((*(f32 *)((u8 *)var_a3_2 + 0x14) - *(f32 *)((u8 *)var_a3_2 + 0x10)) / temp_f6) - ((temp_f6 * (*(f32 *)((u8 *)var_a3_2 + 0x34) + (2.0f * *(f32 *)((u8 *)var_a3_2 + 0x30)))) / 3.0f));
        temp_f0_3 = 3.0f * *var_t4;
        var_t4 -= 4;
        *(f32 *)((u8 *)var_a3_2 + 0x40) = (f32) ((*(f32 *)((u8 *)var_a3_2 + 0x34) - *(f32 *)((u8 *)var_a3_2 + 0x30)) / temp_f0_3);
        var_a3_2 -= 4;
    } while (var_t1 >= 0);
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) (*(s32 *)((u8 *)arg0 + 0x50) | 0x100);
}
