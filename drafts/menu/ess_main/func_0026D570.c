/* Draft (not built): func_0026D570 at 0x0026D570, size 0xA0, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main/func_0026D570.s */

void func_0026D570(s32 arg0) {
    u8 *temp_t0;
    *(s32 *)((u8 *)gEssMain + 0x130) = 0;
    temp_t0 = gEssMain + 0x120;
    if (arg0 == 0) {
        *(s32 *)((u8 *)gEssMain + 0x120) = (s32)((!(*(u8 *)((u8 *)gEssMain + 0x5D) & 1)) ? (0x17) : (0x13));
        *(s32 *)((u8 *)temp_t0 + 8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x15C) = 1;
        *(s32 *)((u8 *)gEssMain + 0x150) = 0xC;
        *(s32 *)((u8 *)gEssMain + 0x158) = 0;
        return;
    }
    *(s32 *)((u8 *)gEssMain + 0x120) = (s32)((!(*(u8 *)((u8 *)gEssMain + 0x5D) & 1)) ? (0x14) : (0x10));
    *(s32 *)((u8 *)temp_t0 + 8) = 0;
    *(s32 *)((u8 *)gEssMain + 0x150) = (s32)((!(*(u8 *)((u8 *)gEssMain + 0x5D) & 1)) ? (0x16) : (0x12));
    *(s32 *)((u8 *)gEssMain + 0x15C) = 0;
    *(s32 *)((u8 *)gEssMain + 0x158) = 0;
}
