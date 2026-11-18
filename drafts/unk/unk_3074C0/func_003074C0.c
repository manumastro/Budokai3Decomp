/* Draft (not built): func_003074C0 at 0x003074C0, size 0xEC, segment unk/unk_3074C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'char' to 'signed char *' @ 54: func_002BFEE0(sp11, sp13, 1, D_005C4150[0]);
 * Original: asm/nonmatchings/unk/unk_3074C0/func_003074C0.s */

// src/unk/unk_3074C0.c func_003074C0 cerr diff=-1/0
s32 func_002BFEE0(s8, s8, s32, s8 *);
extern char D_005116E0[];
extern void func_002BD6B0(void *);
extern char D_005C4150[];
void func_003074C0(void) {
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s8 sp13;
    u8 sp14;
    s8 sp15;
    s8 sp16;
    s8 sp17;
    s8 sp18;
    s8 sp19;
    s8 sp1A;
    s8 sp1B;
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

    sp10 = *(s8 *)((u8 *)D_005C4150 + 0xB60);
    sp11 = *(s8 *)((u8 *)D_005C4150 + 0xB60);
    sp12 = *(s8 *)((u8 *)D_005C4150 + 0xB61);
    sp13 = 0;
    sp14 = *(u8 *)((u8 *)D_005C4150 + 0xB64);
    sp15 = *(s8 *)((u8 *)D_005C4150 + 0xB65);
    sp16 = *(s8 *)((u8 *)D_005C4150 + 0xB66);
    sp17 = *(s8 *)((u8 *)D_005C4150 + 0xB67);
    sp18 = *(s8 *)((u8 *)D_005C4150 + 0xB68);
    sp19 = *(s8 *)((u8 *)D_005C4150 + 0xB69);
    sp1A = *(s8 *)((u8 *)D_005C4150 + 0xB6A);
    sp1B = *(s8 *)((u8 *)D_005C4150 + 0xB6B);
    sp1C = *(s32 *)((u8 *)D_005C4150 + 0xB6C);
    sp24 = (s8 *)(D_005116E0[0]);
    sp20 = 0;
    sp28 = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB72);
    sp2C = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB74);
    sp30 = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB76);
    sp34 = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB78);
    sp38 = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB7A);
    sp3C = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB7C);
    sp40 = (s32) *(s16 *)((u8 *)D_005C4150 + 0xB7E);
    func_002BFEE0(sp11, sp13, 1, D_005C4150[0]);
    func_002BD6B0(&sp10);
}
