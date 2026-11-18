/* Draft (not built): func_002EC9B0 at 0x002EC9B0, size 0x110, segment unk/unk_2EC850 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB0, original 0x110
 * Original: asm/nonmatchings/unk/unk_2EC850/func_002EC9B0.s */

// src/unk/unk_2EC850.c func_002EC9B0 size diff=60/44
void func_002EC9B0(void) {
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s8 sp13;
    s8 sp14;
    s32 sp15;
    s32 sp1C;
    s32 sp20;
    s8 *sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 temp_a3;

    sp10 = (s8)(D_00511450);
    sp11 = *(s8 *)((u8 *)D_005AA604 + 0x11E1);
    sp12 = *(s8 *)((u8 *)D_005AA604 + 0x11E3);
    sp13 = *(s8 *)((u8 *)D_005AA604 + 0x11E2);
    sp14 = *(s8 *)((u8 *)D_005AA604 + 0x11E7);
    *(s8 *)((u8 *)(&sp15) + 0) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E8);
    *(s8 *)((u8 *)(&sp15) + 1) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11E9);
    *(s8 *)((u8 *)(&sp15) + 2) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EA);
    *(s8 *)((u8 *)(&sp15) + 3) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EB);
    *(s8 *)((u8 *)(&sp15) + 4) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EC);
    *(s8 *)((u8 *)(&sp15) + 5) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11ED);
    *(s8 *)((u8 *)(&sp15) + 6) = (s8) *(s8 *)((u8 *)D_005AA604 + 0x11EE);
    temp_a3 = *(s32 *)((u8 *)D_005AA604 + 0x1200);
    sp1C = temp_a3;
    sp24 = (s8 *)(D_005116E0[0]);
    sp20 = 0;
    sp28 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F0);
    sp2C = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F2);
    sp30 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F4);
    sp34 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F6);
    sp38 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11F8);
    sp3C = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11FA);
    sp40 = (s32) *(s16 *)((u8 *)D_005AA604 + 0x11FC);
    func_002BFEE0(sp11, sp13, 2);
    func_002BD6B0((void *)(&sp10), 0);
    func_0028EB40(D_00470960, 0xA, &func_002EC960, 0);
}
