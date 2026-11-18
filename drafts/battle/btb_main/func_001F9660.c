/* Draft (not built): func_001F9660 at 0x001F9660, size 0x138, segment battle/btb_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tifier 'D_0044A9C0' redeclared was declared as: 'struct StageFog[]' now declared as: 'int' @ 280: extern s32 D_0044A9C0;
 * Original: asm/nonmatchings/battle/btb_main/func_001F9660.s */

// src/battle/btb_main.c func_001F9660 cerr diff=-1/0
extern s32 D_0044A9C0;
extern s32 D_0051CD20;
extern s32 D_0051CD2C;
void func_001F9660(void) {
    s8 sp20;
    s32 var_v0;
    s8 *var_v1;
    u8 *temp_s0;

    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        temp_s0 = &D_0044A9C0 + (*(s32 *)((u8 *)((D_0051CD20 << 5) + (&D_0044AE50 + (gBtbBg * 0x5C))) + 0x20) * 0x14);
        BtbBg_DrawObjs();
        var_v1 = &sp20;
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        func_00133B50(0, 0);
        func_00133780(0, 1);
        func_00139620(0x102, &sp20, -1, 0, 0, 0);
        amDraw_FlushPacket();
        func_00133780(0, 0);
        if (D_0051CD2C & 0x20) {
            func_00133CE0(1);
            func_00133D10(*(s32 *)((u8 *)temp_s0 + 0));
            func_00133D50(*(f32 *)((u8 *)temp_s0 + 4), *(f32 *)((u8 *)temp_s0 + 8));
            func_00133D20(*(f32 *)((u8 *)temp_s0 + 0xC), *(f32 *)((u8 *)temp_s0 + 0x10));
        }
    }
}
