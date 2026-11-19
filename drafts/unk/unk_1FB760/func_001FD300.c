/* Draft (not built): func_001FD300 at 0x001FD300, size 0x220, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 74 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x220
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FD300.s */

// src/unk/unk_1FB760.c func_001FD300 size diff=74/125
s32 func_001F9B60(s32, s32, void *);
s32 func_001F9BB0(s32, s32);
s32 func_001F9CD0(s32, s32, void *, void *);
extern s32 D_0051CD30;
extern s32 gBtbBg;
void func_001FD300(u8 *arg0, s32 arg1, s32 arg2) {
    s16 temp_a0_2;
    s16 temp_a1_4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_5;
    s32 temp_hi;
    s32 temp_s3;
    s32 var_a1;
    s32 var_s2;
    s32 var_s4;
    u8 *var_s0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0 == 0xE) {
        goto block_11;
    }
    if (temp_a0 == 0xF) {
        goto block_10;
    }
    if (temp_a0 == 0xC) {
        goto block_9;
    }
    if (temp_a0 == 0xD) {
        goto block_8;
    }
    if (temp_a0 == 0) {
        goto block_7;
    }
    goto block_12;
block_7:
    var_s4 = 0;
    goto block_13;
block_8:
    var_s4 = 0x10;
    goto block_13;
block_9:
    var_s4 = 0x20;
    goto block_13;
block_10:
    var_s4 = 0x30;
    goto block_13;
block_11:
    var_s4 = 0x40;
    goto block_13;
block_12:
    return;
block_13:
    temp_s3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x24)) + 0x1350);
    temp_a1 = temp_s3 * 2;
    var_s2 = 0;
    if (*(&D_0051CD30 + temp_a1) <= 0) {
        goto block_31;
    }
    var_s0 = (unsigned char *)(&gBtbBg + (temp_s3 * 0x10));
loop_15:
    temp_a0_2 = *(s16 *)((u8 *)var_s0 + 0x58);
    temp_hi = temp_a0_2 % 1000;
    temp_a1_2 = temp_hi - var_s4;
    if (temp_hi < 0) {
        goto block_21;
    }
    if (temp_a1_2 < 0) {
        goto block_29;
    }
    if (temp_a1_2 >= 0x10) {
        goto block_29;
    }
    if (arg1 == 0) {
        goto block_20;
    }
block_20:
    func_001F9CD0(temp_s3, temp_a1_2, arg0, arg0 + 0x10);
    goto block_24;
block_21:
    temp_a1_3 = var_s4 - temp_a0_2;
    if (temp_a1_3 < 0) {
        goto block_29;
    }
    if (temp_a1_3 >= 0x10) {
        goto block_29;
    }
    func_001F9BB0(temp_s3, temp_a1_3);
block_24:
    temp_a1_4 = *(s16 *)((u8 *)var_s0 + 0x58);
    if (temp_a1_4 < 0x3E9) {
        goto block_26;
    }
    var_a1 = (*(s16 *)((u8 *)var_s0 + 0x58) / 1000) + ((u32) temp_a1_4 >> 0x1F);
    goto block_27;
block_26:
    var_a1 = temp_hi - var_s4;
block_27:
    if (var_a1 < 0) {
        goto block_29;
    }
    func_001F9B60(temp_s3, var_a1, arg0);
block_29:
    var_s2 += 1;
    var_s0 += 2;
    if (var_s2 < *(s16 *)((u8 *)(&gBtbBg + temp_a1) + 0x50)) {
        goto loop_15;
    }
block_31:
    temp_a1_5 = *(s16 *)((u8 *)arg0 + 0x2C) - var_s4;
    if (temp_a1_5 < 0) {
        goto block_34;
    }
    if (temp_a1_5 >= 0x10) {
        goto block_34;
    }
    func_001F9CD0(temp_s3, temp_a1_5, arg0, arg0 + 0x10);
block_34:
    return;
}
