/* Draft (not built): func_002BE870 at 0x002BE870, size 0x1B8, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x1B8
 * Original: asm/nonmatchings/story/str_status/func_002BE870.s */

// src/story/str_status.c func_002BE870 size diff=59/80
extern s32 D_00456140;
extern s32 D_004562B4;
void func_002BE870(u8 *arg0) {
    s32 sp20;
    s32 sp44;
    s16 sp4A;
    s32 sp50;
    s32 sp74;
    s16 sp7A;
    s16 sp7C;
    s32 *temp_s0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_v0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_s0 = D_0046FE44;
    if (temp_a0 == 2) {
        goto block_15;
    }
    if (temp_a0 == 1) {
        goto block_4;
    }
    if (temp_a0 == 0) {
        goto block_21;
    }
    return;
block_4:
    *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2C) | 0x20);
    temp_a0_2 = *(s32 *)((u8 *)D_0047011C + 0x1B0);
    if (temp_a0_2 == 0) {
        goto block_6;
    }
    Obj_ResetF38(temp_a0_2);
    *(s32 *)((u8 *)D_0047011C + 0x1B0) = 0;
block_6:
    temp_a0_3 = *(s32 *)((u8 *)D_0047011C + 0x1B8);
    if (temp_a0_3 == 0) {
        goto block_8;
    }
    Obj_ResetF38(temp_a0_3);
    *(s32 *)((u8 *)D_0047011C + 0x1B8) = 0;
block_8:
    memset(&sp50, 0, 0x30);
    if (*(s16 *)((u8 *)D_0046FE44 + 0x36) != 7) {
        goto block_12;
    }
    if (*(s16 *)((u8 *)D_0046FE44 + 0x34) != 4) {
        goto block_12;
    }
    var_v0 = D_004562B4;
    goto block_13;
block_12:
    var_v0 = *(&D_00456140 + (*(s16 *)((u8 *)D_0046FE44 + 0x36) * 4));
block_13:
    sp7A = (s16) var_v0;
    sp7C = 0xC;
    sp74 = 0x400020;
    func_002BDF50(D_0047011C + 0x1B0, &sp50);
    memset(&sp20, 0, 0x30);
    sp4A = 0x14;
    sp44 = 0x400020;
    func_002BDF50(D_0047011C + 0x1B8, &sp20);
    return;
block_15:
    if (!(*(s32 *)((u8 *)temp_s0 + 0x2C) & 0x20)) {
        goto block_21;
    }
    temp_a0_4 = *(s32 *)((u8 *)D_0047011C + 0x1B0);
    if (temp_a0_4 == 0) {
        goto block_18;
    }
    Obj_ResetF38(temp_a0_4);
    *(s32 *)((u8 *)D_0047011C + 0x1B0) = 0;
block_18:
    temp_a0_5 = *(s32 *)((u8 *)D_0047011C + 0x1B8);
    if (temp_a0_5 == 0) {
        goto block_20;
    }
    Obj_ResetF38(temp_a0_5);
    *(s32 *)((u8 *)D_0047011C + 0x1B8) = 0;
block_20:
    *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2C) & ~0x20);
block_21:
    return;
}
