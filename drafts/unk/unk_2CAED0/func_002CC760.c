/* Draft (not built): func_002CC760 at 0x002CC760, size 0xDC, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD0, original 0xDC
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CC760.s */

// src/unk/unk_2CAED0.c func_002CC760 size diff=37/52
s32 func_002EB7B0(void *);
extern s32 D_00456570;
extern s32 D_00456574;
extern s32 D_005C2010;
s32 func_002CC760(u8 *arg0) {
    if (*(s16 *)((u8 *)arg0 + 0x152) == 4) {
        gTutWork = (struct TutWork *)(&D_005C2010);
        memset(gTutWork, 0, 0x40);
        *(s32 *)((u8 *)(&D_005C2010) + 4) = (s32) *(s8 *)((u8 *)gBattle + 0x8AB6);
        *(s32 *)((u8 *)(&D_005C2010) + 0x10) = (s32) *(&D_00456570 + (*(s32 *)((u8 *)(&D_005C2010) + 4) * 4));
        *(s32 *)((u8 *)(&D_005C2010) + 0xC) = (s32) *(s32 *)((u8 *)(&D_005C2010) + 0x10);
        if (*(s32 *)((u8 *)(&D_005C2010) + 0xC) == 1) {
            *(s32 *)((u8 *)(&D_005C2010) + 0x14) = (s32) *(s32 *)((u8 *)(&D_005C2010) + 0xC);
        } else {
            *(s32 *)((u8 *)(&D_005C2010) + 0x14) = (s32) *(&D_00456574 + (*(s32 *)((u8 *)(&D_005C2010) + 4) * 4));
        }
        return func_002EB7B0(arg0);
    }
    gTutWork = NULL;
    return 0;
}
