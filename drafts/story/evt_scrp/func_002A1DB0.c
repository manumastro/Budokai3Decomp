/* Draft (not built): func_002A1DB0 at 0x002A1DB0, size 0x174, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d (*)(struct Task *), int, int, @ 344: *(u8 **)((u8 *)temp_s0_2 + 8) = amTask_Create(&func_002A7F70, 0, 0xB000, 0x4000);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A1DB0.s */

// src/story/evt_scrp.c func_002A1DB0 cerr diff=-1/0
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_002A1C20(void);
void func_002A1DB0(u8 *arg0) {
    s32 *var_v1;
    s32 temp_a1;
    u16 temp_a0_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_s0 = (u8 *)(gEvtWork);
    if (*(s32 *)((u8 *)temp_s0 + 0xC) == 1) {
        temp_a1 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0xFC) * 4) + temp_s0) + 0x100);
        if (temp_a1 > 0) {
            func_00283D00(0x9500, temp_a1, 1, 0x11403000);
            SklSheet_SetIndex(*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0xFC) * 4) + temp_s0) + 0x110));
            var_v1 = (s32 *)(&func_002A1C20);
            *(s32 *)((u8 *)temp_s0 + 0xFC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xFC) + 1);
            if (&func_002A1C20 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 8);
        if (temp_a0 != NULL) {
            amTask_Kill((void *)(temp_a0));
            *(u8 **)((u8 *)temp_s0 + 8) = NULL;
        }
        temp_s0_2 = (u8 *)(gEvtWork);
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = 0x40000002;
        temp_a0_2 = (u16) *(s32 *)((u8 *)temp_s0_2 + 0x14);
        switch (temp_a0_2) {                        /* irregular */
        case 4:
        case 2:
        case 0:
            Save_Load(0x3000, 0);
            /* fallthrough */
        case 5:
        case 1:
            *(s32 *)((u8 *)temp_s0_2 + 0x6C) = amCdFs_ReadFileId(0x107D5, 0, 0);
            *(s32 *)((u8 *)temp_s0_2 + 0x70) = amCdFs_ReadFileId(0x107D6, 0, 0);
            *(u8 **)((u8 *)temp_s0_2 + 8) = amTask_Create(&func_002A7F70, 0, 0xB000, 0x4000);
            break;
        }
        *(s32 *)((u8 *)temp_s0_2 + 0x98) = 0;
    }
}
