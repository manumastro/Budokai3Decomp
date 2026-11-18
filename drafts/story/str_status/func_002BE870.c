/* Draft (not built): func_002BE870 at 0x002BE870, size 0x1B8, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x1B8
 * Original: asm/nonmatchings/story/str_status/func_002BE870.s */

// src/story/str_status.c func_002BE870 size diff=61/82
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
    s32 temp_a0;
    s32 var_v0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_s0 = (u8 *)(D_0046FE44);
    switch (temp_a0) {                              /* irregular */
    case 1:
        *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2C) | 0x20);
        temp_a0_2 = *(u8 **)((u8 *)D_0047011C + 0x1B0);
        if (temp_a0_2 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_2)));
            *(u8 **)((u8 *)D_0047011C + 0x1B0) = NULL;
        }
        temp_a0_3 = *(u8 **)((u8 *)D_0047011C + 0x1B8);
        if (temp_a0_3 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_3)));
            *(u8 **)((u8 *)D_0047011C + 0x1B8) = NULL;
        }
        memset(&sp50, 0, 0x30);
        if ((*(s16 *)((u8 *)D_0046FE44 + 0x36) == 7) && (*(s16 *)((u8 *)D_0046FE44 + 0x34) == 4)) {
            var_v0 = D_004562B4;
        } else {
            var_v0 = *(&D_00456140 + (*(s16 *)((u8 *)D_0046FE44 + 0x36) * 4));
        }
        sp7A = (s16) var_v0;
        sp7C = 0xC;
        sp74 = 0x400020;
        func_002BDF50(D_0047011C + 0x1B0, &sp50);
        memset(&sp20, 0, 0x30);
        sp4A = 0x14;
        sp44 = 0x400020;
        func_002BDF50(D_0047011C + 0x1B8, &sp20);
        return;
    case 2:
        if (*(s32 *)((u8 *)temp_s0 + 0x2C) & 0x20) {
            temp_a0_4 = *(u8 **)((u8 *)D_0047011C + 0x1B0);
            if (temp_a0_4 != NULL) {
                Obj_ResetF38((s32)((void *)(temp_a0_4)));
                *(u8 **)((u8 *)D_0047011C + 0x1B0) = NULL;
            }
            temp_a0_5 = *(u8 **)((u8 *)D_0047011C + 0x1B8);
            if (temp_a0_5 != NULL) {
                Obj_ResetF38((s32)((void *)(temp_a0_5)));
                *(u8 **)((u8 *)D_0047011C + 0x1B8) = NULL;
            }
            *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2C) & ~0x20);
        }
        /* fallthrough */
    case 0:
        return;
    }
}
