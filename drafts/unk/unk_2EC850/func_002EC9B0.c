/* Draft (not built): func_002EC9B0 at 0x002EC9B0, size 0x110, segment unk/unk_2EC850 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x94, original 0x110
 * Original: asm/nonmatchings/unk/unk_2EC850/func_002EC9B0.s */

// src/unk/unk_2EC850.c func_002EC9B0 size diff=59/37
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

    sp10 = *D_00511450;
    sp11 = (*D_005AA604)->f11E1;
    sp12 = (*D_005AA604)->f11E3;
    sp13 = (*D_005AA604)->f11E2;
    sp14 = (*D_005AA604)->f0;
    *(s8 *)((u8 *)(&sp15) + 0) = (s8) (*D_005AA604)->b[0];
    *(s8 *)((u8 *)(&sp15) + 1) = (s8) (*D_005AA604)->b[1];
    *(s8 *)((u8 *)(&sp15) + 2) = (s8) (*D_005AA604)->b[2];
    *(s8 *)((u8 *)(&sp15) + 3) = (s8) (*D_005AA604)->b[3];
    *(s8 *)((u8 *)(&sp15) + 4) = (s8) (*D_005AA604)->b[4];
    *(s8 *)((u8 *)(&sp15) + 5) = (s8) (*D_005AA604)->b[5];
    *(s8 *)((u8 *)(&sp15) + 6) = (s8) (*D_005AA604)->b[6];
    sp1C = (*D_005AA604)->w;
    sp24 = (signed char *)(D_005116E0);
    sp20 = 0;
    sp28 = (s32) (*D_005AA604)->f11F0[0];
    sp2C = (s32) (*D_005AA604)->f11F0[1];
    sp30 = (s32) (*D_005AA604)->f11F0[2];
    sp34 = (s32) (*D_005AA604)->f11F0[3];
    sp38 = (s32) (*D_005AA604)->f11F0[4];
    sp3C = (s32) (*D_005AA604)->f11F0[5];
    sp40 = (s32) (*D_005AA604)->f11F0[6];
    func_002BFEE0((s32) sp11, (s32) sp13, 2);
    func_002BD6B0((ResultParam *) &sp10, 1);
    func_0028EB40(D_00470960, 0xA, &func_002EC960, 0);
}
