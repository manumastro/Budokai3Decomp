/* Draft (not built): func_002BE530 at 0x002BE530, size 0x1E0, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x144, original 0x1E0
 * Original: asm/nonmatchings/story/str_status/func_002BE530.s */

// src/story/str_status.c func_002BE530 size diff=78/81
s32 func_002CA2F0(void **, s32);
extern s128 D_004562E0;
void func_002BE530(u8 *arg0) {
    u8 *sp40;
    s32 sp64;
    s16 sp6A;
    u8 *sp70;
    u8 *sp74;
    u8 *sp78;
    u8 *sp7C;
    s32 sp90;
    s32 sp94;
    s16 sp9A;
    s16 sp9C;
    s16 sp9E;
    s128 spA0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C);
    temp_s2 = (u8 *)(D_0046FE44);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0xB4);
    spA0 = D_004562E0;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x14);
    switch (temp_a0) {                              /* irregular */
    case 0:
        *(s32 *)((u8 *)D_0047011C + 0x1BC) = (s32) (*(s32 *)((u8 *)D_0047011C + 0x1BC) | 2);
        *(s32 *)((u8 *)temp_s2 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s2 + 0x2C) & ~2);
        memset(&sp70, 0, 0x30);
        sp9E = 0x400;
        sp9A = 0x10;
        sp9C |= 0x6000;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        temp_v1 = temp_s1 + 0x160;
        sp90 = (((s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x34) << 0x30) >> 0x30) * 2) + 0x19;
        sp70 = temp_v1;
        temp_a1 = (((s64) ((s64) *(s16 *)((u8 *)temp_s2 + 0x34) << 0x30) >> 0x30) * 2) + 0x19;
        sp94 = temp_a1;
        *(u8 **)((u8 *)D_0047011C + 0x1A0) = temp_v1;
        temp_v0 = (u8 *)(D_0047011C + 0x10);
        sp78 = (u8 *)(D_0047011C + 0x10);
        sp74 = temp_v0;
        sp7C = temp_v0;
        func_002CA2F0(&sp70, temp_a1);
        func_002BED90(sp9A);
        temp_a0_2 = *(u8 **)((u8 *)D_0047011C + 0x1B8);
        if (temp_a0_2 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_2)));
            *(u8 **)((u8 *)D_0047011C + 0x1B8) = NULL;
        }
        memset(&sp40, 0, 0x30);
        sp6A = 0x14;
        sp64 = 0x400008;
        func_002BDF50(D_0047011C + 0x1B8, &sp40);
        return;
    case 1:
        *(s32 *)((u8 *)D_0047011C + 0x1BC) = (s32) (*(s32 *)((u8 *)D_0047011C + 0x1BC) & ~2);
        temp_a0_3 = *(u8 **)((u8 *)D_0047011C + 0x1A4);
        if (temp_a0_3 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_3)));
            *(u8 **)((u8 *)D_0047011C + 0x1A4) = NULL;
        }
        return;
    }
}
