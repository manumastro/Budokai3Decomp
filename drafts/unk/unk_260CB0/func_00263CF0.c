/* Draft (not built): func_00263CF0 at 0x00263CF0, size 0xD0, segment unk/unk_260CB0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'struct FadeColor' to '__int128' mwccps2.exe Compiler: @ 111: sp20 = D_00452B60;
 * Original: asm/nonmatchings/unk/unk_260CB0/func_00263CF0.s */

// src/unk/unk_260CB0.c func_00263CF0 cerr diff=-1/0
void func_00263CF0(void) {
    s128 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;

    sp20 = D_00452B60;
    switch (D_00470758) {                           /* irregular */
    case 0:
        return;
    case 3:
    case 2:
    case 1:
        func_00136E80(0x900, (FadeColor *)(&sp20), -1, 0x44);
        sp30 = 0;
        sp34 = 0;
        sp3C = 0x3F800000;
        sp38 = 0;
        func_00137B60((FadeVec *)(&sp30));
        sp30 = D_0047042C;
        sp34 = D_00470430;
        func_00137B60((FadeVec *)(&sp30));
        amDraw_FlushPacket();
        return;
    }
}
