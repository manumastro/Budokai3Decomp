/* Draft (not built): func_002A5580 at 0x002A5580, size 0x118, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ccps2.exe Compiler: 2011: *(s32 *)((u8 *)D_005AA604 + 0x1200) = sp5C; @ 2003: *(s8 *)((u8 *)D_005AA604 + 0x11E7) = sp54;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5580.s */

// src/story/evt_scrp.c func_002A5580 cerr diff=-1/0
extern void amHeap_Free(void *);
void func_002A5580(void) {
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp50;
    s32 sp55;
    s32 temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;

    temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x27C);
    switch (temp_a0) {                              /* irregular */
    case 1:
    case 0:
        D_004708E8 = 0;
        return;
    case 3:
        func_002BD400(&sp50);
        *(s8 *)((u8 *)D_005AA604 + 0x11E7) = sp54;
        *(s8 *)((u8 *)D_005AA604 + 0x11E8) = (s8) *(s8 *)((u8 *)(&sp55) + 0);
        *(s8 *)((u8 *)D_005AA604 + 0x11E9) = (s8) *(s8 *)((u8 *)(&sp55) + 1);
        *(s8 *)((u8 *)D_005AA604 + 0x11EA) = (s8) *(s8 *)((u8 *)(&sp55) + 2);
        *(s8 *)((u8 *)D_005AA604 + 0x11EB) = (s8) *(s8 *)((u8 *)(&sp55) + 3);
        *(s8 *)((u8 *)D_005AA604 + 0x11EC) = (s8) *(s8 *)((u8 *)(&sp55) + 4);
        *(s8 *)((u8 *)D_005AA604 + 0x11ED) = (s8) *(s8 *)((u8 *)(&sp55) + 5);
        *(s8 *)((u8 *)D_005AA604 + 0x11EE) = (s8) *(s8 *)((u8 *)(&sp55) + 6);
        *(s32 *)((u8 *)D_005AA604 + 0x1200) = sp5C;
        StrStatus_Free();
        sp34 = 1;
        sp30 = 2;
        StrStatus_Dispatch(&sp20);
        temp_s0 = (u8 *)(gEvtWork);
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 8);
        if (temp_a0_2 != NULL) {
            amTask_Kill((void *)(temp_a0_2));
            *(s32 *)((u8 *)temp_s0 + 8) = 0;
        }
        if (gEvtWork != NULL) {
            amHeap_Free(gEvtWork);
            gEvtWork = NULL;
        }
        D_004708D8 = 0;
        func_002A5870();
        /* fallthrough */
    case 2:
        return;
    }
}
