/* Draft (not built): func_002BED90 at 0x002BED90, size 0x144, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 27 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x144
 * Original: asm/nonmatchings/story/str_status/func_002BED90.s */

// src/story/str_status.c func_002BED90 size diff=27/80
void *func_00209540(void *, s32, s32);
extern void *D_005BD1A0;
void func_002BED90(s32 arg0) {
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_s0;

    temp_a0 = *(u8 **)((u8 *)D_0047011C + 0x1A4);
    temp_s0 = (unsigned char *)(D_0046FE44);
    if (temp_a0 == NULL) {
        goto block_2;
    }
    Obj_ResetF38((s32)(temp_a0));
    *(u8 **)((u8 *)D_0047011C + 0x1A4) = NULL;
block_2:
    temp_a2 = *(u8 **)((u8 *)(((u8 *)D_005BD1A0) + *(s32 *)((u8 *)D_005BD1A0 + 0xC)) + 0x24);
    temp_a1 = *(u8 **)((u8 *)temp_a2 + 0x28);
    *(s32 *)((u8 *)temp_a2 + 0xA4) = (s32) ((*(s16 *)((u8 *)temp_s0 + 0x34) * 2) + 0x1A);
    *(s32 *)((u8 *)temp_a1 + 0xA4) = (s32) ((*(s16 *)((u8 *)temp_s0 + 0x34) * 2) + 0x1A);
    if (arg0 == 0x12) {
        goto block_9;
    }
    if (arg0 == 0x11) {
        goto block_8;
    }
    if (arg0 == 0xF) {
        goto block_7;
    }
    if (arg0 == 0x10) {
        goto block_7;
    }
    goto block_10;
block_7:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x41700000;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0x40E00000;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 1;
    goto block_11;
block_8:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x41B00000;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0x41800000;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 1;
    goto block_11;
block_9:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x41A00000;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0x41400000;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 2;
    goto block_11;
block_10:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 1;
block_11:
    *(u8 **)((u8 *)D_0047011C + 0x1A4) = func_00209540(D_005BD1A0, 0x400020, 0);
    return;
}
