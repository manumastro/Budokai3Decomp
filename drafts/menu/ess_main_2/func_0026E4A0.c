/* Draft (not built): func_0026E4A0 at 0x0026E4A0, size 0x1A0, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' to 'int' mwccps2.exe Compiler: @ 135: (s32 *)((u8 *)gEssMain + 4) = (s32 *)amCdFs_ReadFileId(0x107F6, 0, 0, gEssMain);
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E4A0.s */

// src/menu/ess_main_2.c func_0026E4A0 cerr diff=-1/0
s32 amCdFs_ReadFileId(s32, s32, s32, s32 *);
s32 *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
void *func_002C0630(s32, s32, s32);
extern s32 D_0046B440;
extern s32 D_0058F5D0;
extern void Save_Load();
extern void Help_Load();
extern void func_0028DF20(void);
void func_0026E4A0(void) {
    if (gEssMain != NULL) {
        amHeap_Free(gEssMain);
    }
    gEssMain = (u8 *)amHeap_Alloc(0x280, 0, &D_0046B440, 0xDE);
    memset(gEssMain, 0, 0x280);
    memset(&D_0058F5D0, 0, 0x84);
    Help_Load();
    *(u8 **)((u8 *)gEssMain + 0x20) = func_002C0630(0x1084E, 0x3110, 0);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)gEssMain + 0x20)) + 0x3A) = 3;
    Save_Load(0x3100, 0, gEssMain);
    *(s32 *)((u8 *)gEssMain + 0) = amCdFs_ReadFileId(0x107F4, 0, 0, 0);
    *(s32 *)((u8 *)gEssMain + 4) = (s32 *)amCdFs_ReadFileId(0x107F6, 0, 0, gEssMain);
    *(s32 *)((u8 *)gEssMain + 8) = (s32 *)amCdFs_ReadFileId(0x107F5, 0, 0, gEssMain);
    *(s32 *)((u8 *)gEssMain + 0x60) = 0;
    *(s32 *)((u8 *)gEssMain + 0x90) = 2;
    *(s32 *)((u8 *)gEssMain + 0xC0) = 8;
    *(s32 *)((u8 *)gEssMain + 0xF0) = 0x2F;
    *(s32 *)((u8 *)gEssMain + 0x120) = 0xA;
    *(s32 *)((u8 *)gEssMain + 0x150) = 0xC;
    *(s32 *)((u8 *)gEssMain + 0x180) = 0x61;
    *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xD;
    *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x12;
    *(s32 *)((u8 *)gEssMain + 0x240) = 0;
    func_0028DF20();
    func_0028DFC0(6, 0, 0, 0, 0x1F);
}
