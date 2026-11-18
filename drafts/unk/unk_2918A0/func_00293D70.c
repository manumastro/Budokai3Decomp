/* Draft (not built): func_00293D70 at 0x00293D70, size 0x108, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); : ((s64) ((s64) ((s32) ((s16) D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF); @ 334: D_005AA664 = (s32) D_005AA664;
 * Original: asm/nonmatchings/unk/unk_2918A0/func_00293D70.s */

// src/unk/unk_2918A0.c func_00293D70 cerr diff=-1/0
s32 StrMap_Start(s32, s32, s32);
s32 func_0029AAC0(s32, s32, s32);
extern s32 D_005AA630;
void func_00293D70(u8 *arg0) {
    void (*var_v1)();

    *(u16 *)((u8 *)D_005AA604 + 0x11D0) = (s32) *(u16 *)((u8 *)D_005AA604 + 0x11D0);
    D_005AA664 = (s32) D_005AA664;
    D_005AA664 = (s32) (((s64) ((s64) ((s32) ((s16) D_005AA664 * 0xF) >> 4) << 0x30) >> 0x30) & 0xFFFF);
    func_00291BF0();
    if (D_005AA5A4 == 0) {
        switch (D_005AA630) {                       /* irregular */
        case 0:
            break;
        case 1:
            StrMap_Start(0x9100, 0x20000, 0);
            func_0029AAC0(0x9110, 0x20000, -1);
            break;
        case 2:
            StrMap_Start(0x9100, 0x20000, 1);
            func_0029AAC0(0x9110, 0x20000, -1);
            break;
        }
        var_v1 = func_00295300;
        if (func_00295300 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
