/* Draft (not built): func_002A5420 at 0x002A5420, size 0x160, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC4, original 0x160
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5420.s */

// src/story/evt_scrp.c func_002A5420 size diff=71/49
s32 func_00264140(s32, s32);
void func_002A5420(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s8 sp50;
    s8 sp51;
    s8 sp52;
    s8 sp53;
    s8 sp54;
    s32 sp55;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    void (*var_v1)();

    sp50 = (s8)(D_00511450);
    sp51 = *(s8 *)((u8 *)D_005AA604 + 0x11E1);
    sp52 = *(s8 *)((u8 *)D_005AA604 + 0x11E3);
    sp53 = *(s8 *)((u8 *)D_005AA604 + 0x11E2);
    sp54 = *(s8 *)((u8 *)D_005AA604 + 0x11E7);
    *(s8 *)((u8 *)(&sp55) + 0) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E8);
    *(s8 *)((u8 *)(&sp55) + 1) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E9);
    *(s8 *)((u8 *)(&sp55) + 2) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EA);
    *(s8 *)((u8 *)(&sp55) + 3) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EB);
    *(s8 *)((u8 *)(&sp55) + 4) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EC);
    *(s8 *)((u8 *)(&sp55) + 5) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11ED);
    *(s8 *)((u8 *)(&sp55) + 6) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EE);
    sp5C = *(s32 *)((u8 *)D_005AA604 + 0x1200);
    sp64 = 0;
    sp60 = *(s32 *)((u8 *)(((*(s8 *)((u8 *)D_005AA604 + 0x11E7) + D_004708D8) * 4) + *(&D_00455760 + (*(s8 *)((u8 *)D_005AA604 + 0x11E1) * 4))) + -4) - *(s32 *)((u8 *)D_005AA604 + 0x1200);
    sp68 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F0);
    sp6C = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F2);
    sp70 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F4);
    sp74 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F6);
    sp78 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F8);
    sp7C = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11FA);
    sp80 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11FC);
    func_002BD6B0(&sp50);
    StrStatus_Start(0x3000, 0x80000);
    sp30 = 2;
    sp34 = 0;
    StrStatus_Dispatch(&sp20);
    func_00264140(-1, 0);
    var_v1 = func_002A5580;
    if (func_002A5580 == NULL) {
        var_v1 = NULL;
    }
    *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
}
