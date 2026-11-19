/* Draft (not built): func_002A56A0 at 0x002A56A0, size 0xF0, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/evt_scrp/func_002A56A0.s */

s32 func_002B4C80(s32);
s32 func_002B4CC0(s32, s32 *);
extern void SklEdit_Close(void);
void func_002A56A0(void) {
    s32 sp20;
    s32 *temp_s0;
    s32 *var_a0;
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0_2;
    temp_s0 = gEvtWork;
    if (func_002B4C80(0) >= 9) {
        func_002A0D50(1);
        func_002A13C0(func_002A13B0() + 1);
        func_002B4CC0(0, &sp20);
        SklEdit_Close();
        var_a1 = 0;
        if (0 < sp20) {
            var_a0 = &sp20;
            var_v1 = *D_005AA604;
            do {
                var_a1 += 1;
                *(s16 *)((u8 *)var_v1 + 0x11F0) = (s16)*(s32 *)((u8 *)var_a0 + 4);
                var_a0 += 4;
                var_v1 += 2;
            }
            while (var_a1 < sp20);
        }
        if (var_a1 < 7) {
            var_a0_2 = (unsigned char *)(*D_005AA604 + var_a1 * 2);
            do {
                var_a1 += 1;
                *(s16 *)((u8 *)var_a0_2 + 0x11F0) = -1;
                var_a0_2 += 2;
            }
            while (var_a1 < 7);
        }
        *(Task **)((u8 *)temp_s0 + 0x9C) = NULL;
        amTask_Kill(*(Task **)((u8 *)temp_s0 + 0x9C));
    }
}
