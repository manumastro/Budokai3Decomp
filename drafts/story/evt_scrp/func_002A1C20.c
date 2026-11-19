/* Draft (not built): func_002A1C20 at 0x002A1C20, size 0x18C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_scrp/func_002A1C20.s */

extern s32 amCdFs_ReadFileId(s32, s32, s32);
void func_002A1C20(void) {
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 temp_s1;
    u16 temp_a0;
    temp_s0 = gEvtWork;
    if (*(s32 *)((u8 *)temp_s0 + 0xFC) >= *(s32 *)((u8 *)temp_s0 + 0xF8) && func_00283BF0() >= 8) {
        SklSheet_Free();
        *(Task **)((u8 *)temp_s0 + 8) = NULL;
        amTask_Kill(*(Task **)((u8 *)temp_s0 + 8));
        temp_s0_2 = gEvtWork;
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = 0x40000002;
        temp_a0 = (u16)*(s32 *)((u8 *)temp_s0_2 + 0x14);
        switch (temp_a0) {
            case 4:

            case 2:

            case 0:
                Save_Load(0x3000, 0);

            case 5:

            case 1:
                *(s32 *)((u8 *)temp_s0_2 + 0x6C) = amCdFs_ReadFileId(0x107D5, 0, 0);
                *(s32 *)((u8 *)temp_s0_2 + 0x70) = amCdFs_ReadFileId(0x107D6, 0, 0);
                *(Task **)((u8 *)temp_s0_2 + 8) = amTask_Create(func_002A7F70, NULL, 0xB000, 0x4000, M2C_ERROR(), M2C_ERROR());
                break;
        }

        *(s32 *)((u8 *)temp_s0_2 + 0x98) = 0;
        return;
    }
    if (func_00283BF0() >= 8) {
        SklSheet_Free();
        temp_s1 = *(s32 *)((u8 *)&temp_s0[*(s32 *)((u8 *)temp_s0 + 0xFC)] + 0x100);
        func_00283D00(0x9500, temp_s1, 1, 0x11403000);
        SklSheet_SetIndex(*(s32 *)((u8 *)&temp_s0[*(s32 *)((u8 *)temp_s0 + 0xFC)] + 0x110));
        *(s32 *)((u8 *)temp_s0 + 0xFC) = (s32)(*(s32 *)((u8 *)temp_s0 + 0xFC) + 1);
    }
}
