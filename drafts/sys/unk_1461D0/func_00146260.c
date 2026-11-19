/* Draft (not built): func_00146260 at 0x00146260, size 0x41C, segment sys/unk_1461D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 164 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4DC, original 0x41C
 * Original: asm/nonmatchings/sys/unk_1461D0/func_00146260.s */

// src/sys/unk_1461D0.c func_00146260 size diff=164/311
extern s32 D_0045F600;
extern s32 D_0045F620;
extern s32 gModelBlock;
extern void *gModelUser;
u8 *func_00146260(u8 *arg0, u8 *arg1, s8 arg2) {
    s16 temp_t5;
    s16 var_a3_2;
    s16 var_t0_2;
    s16 var_t1;
    s16 var_t5;
    s16 var_v0_4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 *temp_s0;
    u8 *var_t2;

    var_a3 = ((s32) *(s32 *)((u8 *)arg1 + 4) >> 2) & 3;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x24) + (*(s16 *)((u8 *)arg0 + 0x14) << 6);
    if (*(s8 *)((u8 *)arg0 + 0) == 1) {
        goto block_3;
    }
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)arg0 + 0x28) + (*(s16 *)((u8 *)arg0 + 0x14) * 0x2D0));
    goto block_4;
block_3:
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
block_4:
    temp_v1 = *(s16 *)((u8 *)arg0 + 4) - 1;
    *(s16 *)((u8 *)arg0 + 0x14) = (s16) ((*(s16 *)((u8 *)arg0 + 0x14) + 1) & temp_v1);
    *(s16 *)((u8 *)arg0 + 2) = (s16) (*(s16 *)((u8 *)arg0 + 2) + 1);
    *(u8 **)((u8 *)temp_s0 + 0) = arg1;
    *(s32 *)((u8 *)temp_s0 + 0x1C) = (s32) *(s32 *)((u8 *)arg1 + 4);
    *(u8 **)((u8 *)temp_s0 + 4) = (u8 *) (((s32)(((u8 *)*(s32 *)((u8 *)arg1 + 0)))) + ((s32)(gModelUser)));
    if (var_a3 == 0) {
        goto block_12;
    }
    var_v0 = *(s32 *)((u8 *)arg1 + 0x18);
    if (*(s32 *)((u8 *)arg1 + 8) != 1) {
        goto block_7;
    }
    var_v0 = ((var_v0 * 4) / 3) + ((u32) (var_v0 * 4) >> 0x1F);
block_7:
    temp_v0 = (var_v0 + 0xFF) & ~0xFF;
    var_t0 = (s32) (temp_v0 + 0xFF) >> 8;
    var_v0_2 = temp_v0 >> 2;
    goto loop_9;
block_8:
    var_t0 += (s32) (var_v0_2 + 0xFF) >> 8;
    var_v0_2 = var_v0_2 >> 2;
    var_a3 -= 1;
loop_9:
    if (var_a3 > 0) {
        goto block_8;
    }
    var_t0_2 = (var_t0 + 0x1F) & ~0x1F;
    goto block_16;
block_12:
    if ((*(s32 *)((u8 *)arg1 + 8) & 7) >= 3) {
        goto block_14;
    }
    var_v0_3 = (s32) (*(s16 *)((u8 *)arg1 + 0x10) + 0x3F) >> 6;
    goto block_15;
block_14:
    var_v0_3 = (s32) (*(s16 *)((u8 *)arg1 + 0x10) + 0x7F) >> 7;
block_15:
    var_t0_2 = (var_v0_3 * ((s32) ((*(s16 *)((u8 *)arg1 + 0x12) + *(&D_0045F600 + ((*(s32 *)((u8 *)arg1 + 8) & 7) * 4))) - 1) >> *(&D_0045F620 + ((*(s32 *)((u8 *)arg1 + 8) & 7) * 4)))) << 5;
block_16:
    *(s16 *)((u8 *)temp_s0 + 0xE) = var_t0_2;
    var_t1 = *(s16 *)((u8 *)arg0 + 0xA);
    var_a3_2 = var_t1 + var_t0_2;
    var_t2 = *(u8 **)((u8 *)arg0 + 0x24) + (*(s16 *)((u8 *)arg0 + 0x12) << 6);
    if (*(s16 *)((u8 *)arg0 + 2) < 2) {
        goto block_38;
    }
    if (*(s16 *)((u8 *)arg0 + 8) >= var_a3_2) {
        goto block_27;
    }
    var_t1 = *(s16 *)((u8 *)arg0 + 6);
    var_a3_2 = var_t1 + var_t0_2;
    var_t5 = *(s16 *)((u8 *)arg0 + 0x12);
    var_v0_4 = *(s16 *)((u8 *)arg0 + 2);
    goto loop_24;
block_20:
    var_t5 = (var_t5 + 1) & temp_v1;
    var_t2 += 0x40;
    if (var_t5 != 0) {
        goto block_22;
    }
    var_t2 = *(u8 **)((u8 *)arg0 + 0x24);
block_22:
    var_v0_4 -= 1;
    if (var_v0_4 != 1) {
        goto loop_24;
    }
    temp_t5 = temp_v1 & (temp_v1 + *(s16 *)((u8 *)arg0 + 0x14));
    var_t1 = *(s16 *)((u8 *)arg0 + 6);
    var_a3_2 = var_t1 + var_t0_2;
    *(s16 *)((u8 *)arg0 + 2) = var_v0_4;
    *(s16 *)((u8 *)arg0 + 0x12) = temp_t5;
    *(s16 *)((u8 *)arg0 + 0x16) = temp_t5;
    goto block_38;
loop_24:
    if (*(s16 *)((u8 *)var_t2 + 0xC) != var_t1) {
        goto block_20;
    }
    goto loop_30;
block_27:
    if (*(s16 *)((u8 *)var_t2 + 0xC) >= var_a3_2) {
        goto block_38;
    }
    if (var_t1 >= (*(s16 *)((u8 *)var_t2 + 0xC) + *(s16 *)((u8 *)var_t2 + 0xE))) {
        goto block_38;
    }
    var_t5 = *(s16 *)((u8 *)arg0 + 0x12);
    var_v0_4 = *(s16 *)((u8 *)arg0 + 2);
loop_30:
    var_t5 = (var_t5 + 1) & temp_v1;
    var_t2 += 0x40;
    if (var_t5 != 0) {
        goto block_32;
    }
    var_t2 = *(u8 **)((u8 *)arg0 + 0x24);
block_32:
    var_v0_4 -= 1;
    if (var_v0_4 != 1) {
        goto block_35;
    }
    var_t5 = temp_v1 & (temp_v1 + *(s16 *)((u8 *)arg0 + 0x14));
    var_t1 = *(s16 *)((u8 *)arg0 + 6);
    var_a3_2 = var_t1 + var_t0_2;
    goto block_37;
block_35:
    if (*(s16 *)((u8 *)var_t2 + 0xC) >= var_a3_2) {
        goto block_37;
    }
    if (var_t1 < (*(s16 *)((u8 *)var_t2 + 0xC) + *(s16 *)((u8 *)var_t2 + 0xE))) {
        goto loop_30;
    }
block_37:
    *(s16 *)((u8 *)arg0 + 2) = var_v0_4;
    *(s16 *)((u8 *)arg0 + 0x12) = var_t5;
    *(s16 *)((u8 *)arg0 + 0x16) = var_t5;
block_38:
    *(s16 *)((u8 *)arg0 + 0xA) = var_a3_2;
    *(s16 *)((u8 *)temp_s0 + 0xC) = var_t1;
    if (*(s32 *)((u8 *)arg1 + 0x1C) == 0) {
        goto block_44;
    }
    *(s8 *)((u8 *)temp_s0 + 0x23) = arg2;
    *(s8 *)((u8 *)temp_s0 + 0x22) = (s8) ((s32) (*(s32 *)((u8 *)arg1 + 0x28) + 0xFF) >> 8);
    *(s32 *)((u8 *)temp_s0 + 0x24) = (s32) (gModelBlock + *(s32 *)((u8 *)arg1 + 0x24));
    if (*(s16 *)((u8 *)arg0 + 0xE) >= (*(s16 *)((u8 *)arg0 + 0x10) + *(s8 *)((u8 *)temp_s0 + 0x22))) {
        goto block_41;
    }
    *(s16 *)((u8 *)arg0 + 0x10) = (s16) *(s16 *)((u8 *)arg0 + 0xC);
block_41:
    *(s16 *)((u8 *)temp_s0 + 0x20) = (s16) *(s16 *)((u8 *)arg0 + 0x10);
    *(s16 *)((u8 *)arg0 + 0x10) = (s16) (*(s16 *)((u8 *)arg0 + 0x10) + *(s8 *)((u8 *)temp_s0 + 0x22));
    if (*(s16 *)((u8 *)arg0 + 0x10) < *(s16 *)((u8 *)arg0 + 0xE)) {
        goto block_45;
    }
    *(s16 *)((u8 *)arg0 + 0x10) = (s16) *(s16 *)((u8 *)arg0 + 0xC);
    goto block_45;
block_44:
    *(s8 *)((u8 *)temp_s0 + 0x23) = -1;
    *(s8 *)((u8 *)temp_s0 + 0x22) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
    *(s16 *)((u8 *)temp_s0 + 0x20) = 0;
block_45:
    func_00146680(temp_s0, var_a3_2);
    return temp_s0;
}
