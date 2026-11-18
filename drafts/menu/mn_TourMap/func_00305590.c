/* Draft (not built): func_00305590 at 0x00305590, size 0xEC, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); loat *, int, int, int)' mwccps2.exe Compiler: @ 168: func_00305130(&sp20, &sp10, *(s32 *)((u8 *)D_0047097C + 0x15C), 0);
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00305590.s */

// src/menu/mn_TourMap.c func_00305590 cerr diff=-1/0
void func_00305590(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 temp_f1;
    f32 temp_f1_2;

    sp20 = 0x43A00000;
    sp28 = 0;
    sp24 = 0x43C80000;
    sp2C = 0x3F800000;
    sp10 = 0x3F800000;
    sp14 = 0x3F800000;
    sp18 = 0x3F800000;
    sp1C = 0x3F800000;
    temp_f1 = *(f32 *)((u8 *)D_0047097C + 8);
    if ((temp_f1 > 1100.0f) && (temp_f1 < 1300.0f)) {
        func_00305130(&sp20, &sp10, *(s32 *)((u8 *)D_0047097C + 0x15C), 0);
        return;
    }
    temp_f1_2 = *(f32 *)((u8 *)D_0047097C + 8);
    if ((temp_f1_2 >= 1400.0f) && (temp_f1_2 < 1700.0f)) {
        func_00305130(&sp20, &sp10, *(s32 *)((u8 *)D_0047097C + 0x15C), 1);
    }
}
