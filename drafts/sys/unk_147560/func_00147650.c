/* Draft (not built): func_00147650 at 0x00147650, size 0xAFC, segment sys/unk_147560 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 683 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/unk_147560/func_00147650.s */

// src/sys/unk_147560.c func_00147650 diff diff=683/702
extern s8 D_004703F8;
extern s32 D_00470418;
extern s32 D_00459F70;
extern s32 D_00459FD0;
extern s32 D_0045A090;
extern s32 D_0045A1C0;
extern s32 D_0045A200;
extern s32 D_0045A2C0;
extern s32 D_0045A4B0;
extern s32 D_0045A4F0;
extern s32 D_0045A560;
extern s32 D_0045A5D0;
extern s32 D_0045A760;
extern s32 D_0045A7A0;
extern s32 D_0045A810;
extern s32 D_0045A9A0;
extern s32 D_0045A9E0;
extern s32 D_0045AAE0;
extern s32 D_0045AB60;
extern s32 D_0045ABE0;
extern s32 D_0045AC30;
extern s32 D_0046FD5C;
extern s32 D_004703DC;
extern s8 D_00470404;
extern f32 D_0047040C;
extern f32 D_00470410;
extern u32 D_00470414;
extern f32 D_0047042C;
extern f32 D_00470430;
extern f32 D_0047043C;
extern f32 D_00470440;
extern f32 D_00470444;
extern f32 D_00470448;
extern s8 D_0047044C;
extern s8 D_0047045C;
extern s32 D_0047046C;
extern s32 D_00470490;
extern u32 D_00470494;
extern s32 D_00470498;
extern s32 D_0047049C;
extern f32 D_004704A0;
extern f32 D_004704A4;
extern s8 D_004704A8;
extern f32 D_0047CA68;
extern f32 D_0047CA6C;
extern f32 D_0047CA80;
extern f32 D_0047CA84;
void func_00147650(void) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 var_a0;
    f32 var_a0_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_10;
    s32 temp_t1_11;
    s32 temp_t1_12;
    s32 temp_t1_13;
    s32 temp_t1_14;
    s32 temp_t1_15;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t1_5;
    s32 temp_t1_6;
    s32 temp_t1_7;
    s32 temp_t1_8;
    s32 temp_t1_9;
    s32 temp_v1;
    u16 temp_a1_2;

    temp_a3 = (D_004703F8 == 0) ? 0x10 : 8;
    if (D_00470404 == 0) {
        goto block_9;
    }
    if (0x10 < 0) {
        goto block_3;
    }
    var_f1 = (f32) 0x10;
    goto block_4;
block_3:
    var_f1 = 2.0f * (f32) ((0x10U >> 1) | (0x10 & 1));
block_4:
    D_004704A0 = (var_f1 * D_0047040C) / D_0047042C;
    if (temp_a3 < 0) {
        goto block_6;
    }
    var_f1_2 = (f32) temp_a3;
    goto block_7;
block_6:
    var_f1_2 = 2.0f * (f32) (((u32) temp_a3 >> 1) | (temp_a3 & 1));
block_7:
    D_004704A4 = (var_f1_2 * D_00470410) / D_00470430;
    goto block_16;
block_9:
    if (0x10 < 0) {
        goto block_11;
    }
    var_f0 = (f32) 0x10;
    goto block_12;
block_11:
    var_f0 = 2.0f * (f32) ((0x10U >> 1) | (0x10 & 1));
block_12:
    D_004704A0 = var_f0;
    if (temp_a3 < 0) {
        goto block_14;
    }
    var_f0_2 = (f32) temp_a3;
    goto block_15;
block_14:
    var_f0_2 = 2.0f * (f32) (((u32) temp_a3 >> 1) | (temp_a3 & 1));
block_15:
    D_004704A4 = var_f0_2;
block_16:
    if (D_004704A8 == 0) {
        goto block_20;
    }
    if (!(D_004703DC & 2)) {
        goto block_20;
    }
    D_004704A0 *= 0.75f;
    D_00470498 = 0x8000 - (D_00470414 * 6);
    D_0047049C = 0x8000 - (D_00470418 * 8);
    D_0047043C = (4.0f * D_0047042C) / 3.0f;
    D_00470440 = D_00470430;
    D_00470444 = -0.5f * (D_0047043C - D_0047042C);
    D_00470448 = -0.5f * (D_00470440 - D_00470430);
    goto block_21;
block_20:
    D_00470498 = 0x8000 - (D_00470414 * 8);
    D_0047049C = 0x8000 - (D_00470418 * 8);
    D_0047043C = D_0047042C;
    D_00470440 = D_00470430;
    D_00470444 = 0.0f;
    D_00470448 = 0.0f;
block_21:
    sp0 = D_004704A0;
    sp4 = D_004704A4;
    sp8 = D_0047CA80;
    spC = D_0047CA68;
    sp10 = (f32) D_00470498;
    sp14 = (f32) D_0047049C;
    sp18 = D_0047CA84;
    sp1C = D_0047CA6C;
    M2C_ERROR(/* unknown instruction: lqc2 $vf20, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf21, 0x10($v1) */);
    temp_t0 = (0x800 - ((u32) D_00470414 >> 1)) * 0x10;
    temp_a2 = ((((u32) D_00470414 >> 1) + 0x7FF) * 0x10) | 0xA;
    temp_a3_2 = (0x800 - ((u32) D_00470418 >> 1)) * 0x10;
    temp_a1 = ((((u32) D_00470418 >> 1) + 0x7FF) * 0x10) | 0xA;
    temp_a0 = D_00470414 * 0x10;
    temp_v1 = D_00470418 * 0x10;
    temp_t1 = (s32) &D_00459F70 | 0x20000000;
    *(s32 *)((u8 *)temp_t1 + 0) = (s32) ((((u32) D_00470414 >> 6) << 0x10) | (D_0047044C << 0x18));
    *(s32 *)((u8 *)temp_t1 + 4) = (s32) (D_0047044C << 0x18);
    temp_t1_2 = (s32) &D_00459FD0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_2 + 0) = (s32) ((((u32) D_00470414 >> 6) << 0x10) | (D_0047044C << 0x18));
    *(s32 *)((u8 *)temp_t1_2 + 4) = (s32) ((D_0047044C << 0x18) | (((u32) D_00470494 >> 8) | (((u32) D_00470414 >> 6) << 0x10)));
    *(u32 *)((u8 *)temp_t1_2 + 0x20) = (u32) D_00470414;
    *(u32 *)((u8 *)temp_t1_2 + 0x24) = (u32) D_00470418;
    *(s32 *)((u8 *)temp_t1_2 + 0x40) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s32 *)((u8 *)temp_t1_2 + 0x80) = (s32) ((D_0047044C << 0x14) | (((u32) D_00470494 >> 8) | (((u32) D_00470414 >> 6) << 0xE)) | 0xA8000000);
    temp_t1_3 = (s32) &D_0045A090 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_3 + 0x20) = temp_t0;
    *(s32 *)((u8 *)temp_t1_3 + 0x24) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_3 + 0x30) = temp_a0;
    *(s32 *)((u8 *)temp_t1_3 + 0x34) = temp_v1;
    *(s32 *)((u8 *)temp_t1_3 + 0x50) = temp_a2;
    *(s32 *)((u8 *)temp_t1_3 + 0x54) = temp_a1;
    *(s32 *)((u8 *)temp_t1_3 + 0x80) = temp_t0;
    *(s32 *)((u8 *)temp_t1_3 + 0x84) = (s32) (temp_a3_2 - 0x10);
    *(s32 *)((u8 *)temp_t1_3 + 0x90) = temp_a0;
    *(s32 *)((u8 *)temp_t1_3 + 0x94) = temp_v1;
    *(s32 *)((u8 *)temp_t1_3 + 0xB0) = temp_a2;
    *(s32 *)((u8 *)temp_t1_3 + 0xB4) = (s32) (temp_a1 - 0x10);
    *(s32 *)((u8 *)temp_t1_3 + 0xE0) = temp_t0;
    *(s32 *)((u8 *)temp_t1_3 + 0xE4) = (s32) (temp_a3_2 + 0x10);
    *(s32 *)((u8 *)temp_t1_3 + 0xF0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_3 + 0xF4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_3 + 0x110) = temp_a2;
    *(s32 *)((u8 *)temp_t1_3 + 0x114) = (s32) (temp_a1 + 0x10);
    *(s32 *)((u8 *)((s32) &D_0045A1C0 | 0x20000000) + 0x10) = (s32) ((D_0047045C << 0x18) | D_00470490);
    temp_t1_4 = (s32) &D_0045A200 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_4 + 0) = (s32) ((((u32) D_00470414 >> 6) << 0x10) | (D_0047044C << 0x18));
    *(s32 *)((u8 *)temp_t1_4 + 4) = (s32) ((D_0047044C << 0x18) | (((u32) D_00470494 >> 8) | (((u32) D_00470414 >> 6) << 0x10)));
    *(u32 *)((u8 *)temp_t1_4 + 0x20) = (u32) D_00470414;
    *(u32 *)((u8 *)temp_t1_4 + 0x24) = (u32) D_00470418;
    *(s32 *)((u8 *)temp_t1_4 + 0x40) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s32 *)((u8 *)temp_t1_4 + 0x80) = (s32) ((D_0047044C << 0x14) | (((u32) D_00470494 >> 8) | (((u32) D_00470414 >> 6) << 0xE)) | 0xA8000000);
    temp_t1_5 = (s32) &D_0045A2C0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_5 + 0x20) = temp_t0;
    *(s32 *)((u8 *)temp_t1_5 + 0x24) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_5 + 0x30) = temp_a0;
    *(s32 *)((u8 *)temp_t1_5 + 0x34) = temp_v1;
    *(s32 *)((u8 *)temp_t1_5 + 0x50) = temp_a2;
    *(s32 *)((u8 *)temp_t1_5 + 0x54) = temp_a1;
    *(s32 *)((u8 *)temp_t1_5 + 0x80) = (s32) (temp_t0 - 0x10);
    *(s32 *)((u8 *)temp_t1_5 + 0x84) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_5 + 0x90) = temp_a0;
    *(s32 *)((u8 *)temp_t1_5 + 0x94) = temp_v1;
    *(s32 *)((u8 *)temp_t1_5 + 0xB0) = (s32) (temp_a2 - 0x10);
    *(s32 *)((u8 *)temp_t1_5 + 0xB4) = temp_a1;
    *(s32 *)((u8 *)temp_t1_5 + 0xE0) = (s32) (temp_t0 + 0x10);
    *(s32 *)((u8 *)temp_t1_5 + 0xE4) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_5 + 0xF0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_5 + 0xF4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_5 + 0x110) = (s32) (temp_a2 + 0x10);
    *(s32 *)((u8 *)temp_t1_5 + 0x114) = temp_a1;
    *(s32 *)((u8 *)temp_t1_5 + 0x140) = temp_t0;
    *(s32 *)((u8 *)temp_t1_5 + 0x144) = (s32) (temp_a3_2 - 0x10);
    *(s32 *)((u8 *)temp_t1_5 + 0x150) = temp_a0;
    *(s32 *)((u8 *)temp_t1_5 + 0x154) = temp_v1;
    *(s32 *)((u8 *)temp_t1_5 + 0x170) = temp_a2;
    *(s32 *)((u8 *)temp_t1_5 + 0x174) = (s32) (temp_a1 - 0x10);
    *(s32 *)((u8 *)temp_t1_5 + 0x1A0) = temp_t0;
    *(s32 *)((u8 *)temp_t1_5 + 0x1A4) = (s32) (temp_a3_2 - 0x18);
    *(s32 *)((u8 *)temp_t1_5 + 0x1B0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_5 + 0x1B4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_5 + 0x1D0) = temp_a2;
    *(s32 *)((u8 *)temp_t1_5 + 0x1D4) = (s32) (temp_a1 - 0x18);
    *(s32 *)((u8 *)((s32) &D_0045A4B0 | 0x20000000) + 0x10) = (s32) ((D_0047045C << 0x18) | D_00470490);
    temp_t1_6 = (s32) &D_0045A4F0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_6 + 0) = (s32) ((((u32) D_00470414 >> 6) << 0x10) | (D_0047044C << 0x18));
    *(s32 *)((u8 *)temp_t1_6 + 4) = (s32) ((D_0047044C << 0x18) | (D_0046FD5C | (((u32) D_00470414 >> 6) << 0x10)));
    *(u32 *)((u8 *)temp_t1_6 + 0x20) = (u32) D_00470414;
    *(u32 *)((u8 *)temp_t1_6 + 0x24) = (u32) D_00470418;
    temp_t1_7 = (s32) &D_0045A560 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_7 + 0) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s32 *)((u8 *)temp_t1_7 + 0x30) = (s32) ((D_0047044C << 0x14) | (D_0046FD5C | (((u32) D_00470414 >> 6) << 0xE)) | 0xA8000000);
    temp_t1_8 = (s32) &D_0045A5D0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_8 + 0x20) = (s32) (temp_t0 - 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0x24) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_8 + 0x30) = temp_a0;
    *(s32 *)((u8 *)temp_t1_8 + 0x34) = temp_v1;
    *(s32 *)((u8 *)temp_t1_8 + 0x50) = (s32) (temp_a2 - 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0x54) = temp_a1;
    *(s32 *)((u8 *)temp_t1_8 + 0x80) = (s32) (temp_t0 + 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0x84) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_8 + 0x90) = temp_a0;
    *(s32 *)((u8 *)temp_t1_8 + 0x94) = temp_v1;
    *(s32 *)((u8 *)temp_t1_8 + 0xB0) = (s32) (temp_a2 + 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0xB4) = temp_a1;
    if (D_004703F8 == 0) {
        goto block_23;
    }
    *(s32 *)((u8 *)temp_t1_8 + 0xE0) = (s32) (temp_t0 - 0x20);
    *(s32 *)((u8 *)temp_t1_8 + 0xE4) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_8 + 0xF0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_8 + 0xF4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_8 + 0x110) = (s32) (temp_a2 - 0x20);
    *(s32 *)((u8 *)temp_t1_8 + 0x114) = temp_a1;
    *(s32 *)((u8 *)temp_t1_8 + 0x140) = (s32) (temp_t0 + 0x20);
    *(s32 *)((u8 *)temp_t1_8 + 0x144) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_8 + 0x150) = temp_a0;
    *(s32 *)((u8 *)temp_t1_8 + 0x154) = temp_v1;
    *(s32 *)((u8 *)temp_t1_8 + 0x170) = (s32) (temp_a2 + 0x20);
    *(s32 *)((u8 *)temp_t1_8 + 0x174) = temp_a1;
    goto block_24;
block_23:
    *(s32 *)((u8 *)temp_t1_8 + 0xE0) = temp_t0;
    *(s32 *)((u8 *)temp_t1_8 + 0xE4) = (s32) (temp_a3_2 - 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0xF0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_8 + 0xF4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_8 + 0x110) = temp_a2;
    *(s32 *)((u8 *)temp_t1_8 + 0x114) = (s32) (temp_a1 - 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0x140) = temp_t0;
    *(s32 *)((u8 *)temp_t1_8 + 0x144) = (s32) (temp_a3_2 + 0x10);
    *(s32 *)((u8 *)temp_t1_8 + 0x150) = temp_a0;
    *(s32 *)((u8 *)temp_t1_8 + 0x154) = temp_v1;
    *(s32 *)((u8 *)temp_t1_8 + 0x170) = temp_a2;
    *(s32 *)((u8 *)temp_t1_8 + 0x174) = (s32) (temp_a1 + 0x10);
block_24:
    *(s32 *)((u8 *)((s32) &D_0045A760 | 0x20000000) + 0x10) = (s32) ((D_0047045C << 0x18) | D_00470490);
    temp_t1_9 = (s32) &D_0045A7A0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_9 + 0) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s32 *)((u8 *)temp_t1_9 + 0x30) = (s32) ((D_0047044C << 0x14) | (D_0046FD5C | (((u32) D_00470414 >> 6) << 0xE)) | 0xA8000000);
    temp_t1_10 = (s32) &D_0045A810 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_10 + 0x20) = (s32) (temp_t0 - 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0x24) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_10 + 0x30) = temp_a0;
    *(s32 *)((u8 *)temp_t1_10 + 0x34) = temp_v1;
    *(s32 *)((u8 *)temp_t1_10 + 0x50) = (s32) (temp_a2 - 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0x54) = temp_a1;
    *(s32 *)((u8 *)temp_t1_10 + 0x80) = (s32) (temp_t0 + 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0x84) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_10 + 0x90) = temp_a0;
    *(s32 *)((u8 *)temp_t1_10 + 0x94) = temp_v1;
    *(s32 *)((u8 *)temp_t1_10 + 0xB0) = (s32) (temp_a2 + 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0xB4) = temp_a1;
    if (D_004703F8 == 0) {
        goto block_26;
    }
    *(s32 *)((u8 *)temp_t1_10 + 0xE0) = (s32) (temp_t0 - 0x40);
    *(s32 *)((u8 *)temp_t1_10 + 0xE4) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_10 + 0xF0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_10 + 0xF4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_10 + 0x110) = (s32) (temp_a2 - 0x40);
    *(s32 *)((u8 *)temp_t1_10 + 0x114) = temp_a1;
    *(s32 *)((u8 *)temp_t1_10 + 0x140) = (s32) (temp_t0 + 0x40);
    *(s32 *)((u8 *)temp_t1_10 + 0x144) = temp_a3_2;
    *(s32 *)((u8 *)temp_t1_10 + 0x150) = temp_a0;
    *(s32 *)((u8 *)temp_t1_10 + 0x154) = temp_v1;
    *(s32 *)((u8 *)temp_t1_10 + 0x170) = (s32) (temp_a2 + 0x40);
    *(s32 *)((u8 *)temp_t1_10 + 0x174) = temp_a1;
    goto block_27;
block_26:
    *(s32 *)((u8 *)temp_t1_10 + 0xE0) = temp_t0;
    *(s32 *)((u8 *)temp_t1_10 + 0xE4) = (s32) (temp_a3_2 - 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0xF0) = temp_a0;
    *(s32 *)((u8 *)temp_t1_10 + 0xF4) = temp_v1;
    *(s32 *)((u8 *)temp_t1_10 + 0x110) = temp_a2;
    *(s32 *)((u8 *)temp_t1_10 + 0x114) = (s32) (temp_a1 - 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0x140) = temp_t0;
    *(s32 *)((u8 *)temp_t1_10 + 0x144) = (s32) (temp_a3_2 + 0x20);
    *(s32 *)((u8 *)temp_t1_10 + 0x150) = temp_a0;
    *(s32 *)((u8 *)temp_t1_10 + 0x154) = temp_v1;
    *(s32 *)((u8 *)temp_t1_10 + 0x170) = temp_a2;
    *(s32 *)((u8 *)temp_t1_10 + 0x174) = (s32) (temp_a1 + 0x20);
block_27:
    *(s32 *)((u8 *)((s32) &D_0045A9A0 | 0x20000000) + 0x10) = (s32) ((D_0047045C << 0x18) | D_00470490);
    temp_t1_11 = (s32) &D_0045A9E0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_11 + 0) = (s32) ((D_0047044C << 0x18) | (((u32) D_00470494 >> 8) | (((u32) D_00470414 >> 6) << 0x10)));
    *(s32 *)((u8 *)temp_t1_11 + 0x20) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s16 *)((u8 *)temp_t1_11 + 0x70) = (s16) temp_t0;
    *(s16 *)((u8 *)temp_t1_11 + 0x72) = (s16) temp_a3_2;
    *(s16 *)((u8 *)temp_t1_11 + 0x90) = (s16) temp_a2;
    *(s16 *)((u8 *)temp_t1_11 + 0x92) = (s16) temp_a1;
    *(s16 *)((u8 *)temp_t1_11 + 0xA2) = (s16) (((u32) D_00470414 >> 6) | (D_0047044C << 8));
    *(s32 *)((u8 *)temp_t1_11 + 0xC0) = (s32) ((D_0047045C << 0x18) | D_00470490);
    temp_t1_12 = (s32) &D_0045AAE0 | 0x20000000;
    *(s32 *)((u8 *)temp_t1_12 + 0x20) = (s32) ((D_0047045C << 0x18) | D_00470490);
    *(s16 *)((u8 *)temp_t1_12 + 0x40) = (s16) temp_t0;
    *(s16 *)((u8 *)temp_t1_12 + 0x42) = (s16) temp_a3_2;
    *(s16 *)((u8 *)temp_t1_12 + 0x50) = (s16) temp_a2;
    *(s16 *)((u8 *)temp_t1_12 + 0x52) = (s16) temp_a1;
    temp_t1_13 = (s32) &D_0045AB60 | 0x20000000;
    *(s16 *)((u8 *)temp_t1_13 + 0x30) = (s16) temp_t0;
    *(s16 *)((u8 *)temp_t1_13 + 0x32) = (s16) temp_a3_2;
    *(s16 *)((u8 *)temp_t1_13 + 0x40) = (s16) temp_a2;
    *(s16 *)((u8 *)temp_t1_13 + 0x42) = (s16) temp_a1;
    *(s32 *)((u8 *)temp_t1_13 + 0x50) = (s32) ((D_0047045C << 0x18) | D_00470490);
    temp_t1_14 = (s32) &D_0045ABE0 | 0x20000000;
    *(s16 *)((u8 *)temp_t1_14 + 0x30) = (s16) temp_t0;
    *(s16 *)((u8 *)temp_t1_14 + 0x32) = (s16) temp_a3_2;
    *(s16 *)((u8 *)temp_t1_14 + 0x40) = (s16) temp_a2;
    *(s16 *)((u8 *)temp_t1_14 + 0x42) = (s16) temp_a1;
    temp_a1_2 = D_0047046C * 3;
    temp_t1_15 = (s32) &D_0045AC30 | 0x20000000;
    *(s16 *)((u8 *)temp_t1_15 + 2) = (s16) (temp_a1_2 + 0x36);
    *(s16 *)((u8 *)temp_t1_15 + 4) = (s16) ((u32) (temp_a1_2 + 0x36) >> 0x10);
    if (D_0047040C >= 2.1474836e9f) {
        goto block_29;
    }
    var_a0 = D_0047040C;
    goto block_30;
block_29:
    var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (D_0047040C - 2.1474836e9f)) | 0x80000000));
block_30:
    *(s16 *)((u8 *)temp_t1_15 + 0x12) = M2C_BITWISE(s16, var_a0);
    if (D_00470410 >= 2.1474836e9f) {
        goto block_32;
    }
    var_a0_2 = D_00470410;
    goto block_33;
block_32:
    var_a0_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (D_00470410 - 2.1474836e9f)) | 0x80000000));
block_33:
    *(s16 *)((u8 *)temp_t1_15 + 0x16) = M2C_BITWISE(s16, var_a0_2);
    *(u16 *)((u8 *)temp_t1_15 + 0x22) = temp_a1_2;
    *(s16 *)((u8 *)temp_t1_15 + 0x24) = (s16) (temp_a1_2 >> 0x10);
    return;
}
