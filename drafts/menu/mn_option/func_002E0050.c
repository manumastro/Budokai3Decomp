/* Draft (not built): func_002E0050 at 0x002E0050, size 0x11C, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0x11C
 * Original: asm/nonmatchings/menu/mn_option/func_002E0050.s */

// src/menu/mn_option.c func_002E0050 size diff=48/56
s32 func_00101190(s32 *);
s32 func_00148270(s8 *);
s32 func_0022DB40(s32);
extern s32 D_00456B40;
extern f32 D_0051D9A8;
extern f32 D_0051D9AC;
extern s32 func_00147560;
extern f32 gFrameDelta;
extern void amSofdec_Init(void);
extern void amSofdec_Exit(void);
void func_002E0050(s32 arg0) {
    s8 sp20;
    s8 sp42;
    s16 sp46;
    s16 sp48;

    *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_00456B40) + 0);
    *(s128 *)((u8 *)(&sp20) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00456B40) + 0x10);
    *(s64 *)((u8 *)(&sp20) + 0x20) = (s64) *(s64 *)((u8 *)(&D_00456B40) + 0x20);
    *(f32 *)((u8 *)(&sp20) + 0x28) = (f32) *(f32 *)((u8 *)(&D_00456B40) + 0x28);
    switch (arg0) {                                 /* irregular */
    case 0:
        break;
    case 1:
        sp20 = 3;
        sp48 = 0x200;
        break;
    case 2:
        sp42 = 0;
        sp20 = 0x50;
        sp46 = 0x280;
        break;
    }
    amSofdec_Exit();
    func_00148270(&sp20);
    D_0051D9A8 = gFrameDelta;
    D_0051D9AC = gFrameDelta / 60.0f;
    if (arg0 == 1) {
        func_0022DB40(0x3F99999A);
    } else {
        func_0022DB40(0x3F800000);
    }
    amSofdec_Init();
    func_00101190(&func_00147560);
}
