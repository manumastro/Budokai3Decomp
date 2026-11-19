/* Draft (not built): func_00217390 at 0x00217390, size 0x12C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x12C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00217390.s */

// src/unk/unk_20A4D0.c func_00217390 size diff=40/82
void func_00217390(u8 *arg0) {
    s32 sp30;
    s32 temp_a0;
    u8 *temp_a0_2;
    u8 *temp_v0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0xC);
    switch (temp_a0) {                              /* irregular */
    case 1:
        func_0020D780(&sp30);
        *(s32 **)((u8 *)arg0 + 4) = &sp30;
        *(s16 *)((u8 *)arg0 + 0x22) = 0;
        *(s16 *)((u8 *)arg0 + 0x20) = 0xF;
        *(s16 *)((u8 *)arg0 + 0x24) = 0;
        jtbl_00469CC4[0](arg0);
        temp_v0 = amTask_Create(&func_00216880, 0, 0x5A00, 0x400, 0, 0);
        if (temp_v0 != NULL) {
            memset(temp_v0 + 0x30, 0, 0x10);
            *(u8 **)((u8 *)D_0046FDD0 + 0x1A8) = temp_v0;
            *(s32 *)((u8 *)D_0046FDD0 + 0x1AC) = 0x42C80000;
        }
        *(s16 *)((u8 *)arg0 + 0x22) = 0;
        *(s16 *)((u8 *)arg0 + 0x20) = 0x10;
        *(s16 *)((u8 *)arg0 + 0x24) = 0;
        D_00469CCC[0](arg0);
        return;
    case 2:
        temp_a0_2 = *(u8 **)((u8 *)D_0046FDD0 + 0x1A8);
        if (temp_a0_2 != NULL) {
            amTask_Kill((s32)(temp_a0_2));
            *(u8 **)((u8 *)D_0046FDD0 + 0x1A8) = NULL;
        }
        func_00215230(-1, 0x400);
        return;
    }
}
