/* Draft (not built): func_001AE5C0 at 0x001AE5C0, size 0x158, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x158
 * Original: asm/nonmatchings/battle/btl_main/func_001AE5C0.s */

// src/battle/btl_main.c func_001AE5C0 size diff=33/80
extern s32 func_001C8020(s32, void *);
extern s32 func_00218CD0(s32, s32);
void func_001AE5C0(void) {
    s32 sp20;
    s32 sp30;
    s32 sp50;
    s32 sp54;
    s32 sp60;
    s32 sp80;
    s32 *var_a2;
    s32 temp_a0;
    s32 var_a3;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    *(s32 *)((u8 *)temp_s0 + 0x88F8) = 4;
    *(s32 *)((u8 *)temp_s0 + 0x890C) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8910) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8908) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x8918) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AAE) = 1;
    *(s8 *)((u8 *)temp_s0 + 0x8AAF) = 1;
    memset(&sp30, 0, 0x50);
    sp50 = 0;
    sp54 = 0;
    sp60 = 0;
    func_001A8770(1, &sp30);
    sp80 = 0;
    var_a3 = 0;
    if (*(s32 *)((u8 *)temp_s0 + 0x88D8) > 0) {
        var_a2 = &sp80;
        do {
            temp_a0 = 1 << var_a3;
            var_a3 += 1;
            sp80 |= temp_a0;
            *(s16 *)((u8 *)var_a2 + 8) = 2;
            var_a2 += 2;
        } while (var_a3 < *(s32 *)((u8 *)temp_s0 + 0x88D8));
    }
    func_001C8020(0, &sp80);
    if (*(s16 *)((u8 *)temp_s0 + 0x7E2) != 4) {
        sp20 = 1;
        A2d_CallHandler(0x27, &sp20);
        A2d_CallHandler(0x14, NULL);
        func_00218CD0(1, *(s8 *)((u8 *)temp_s0 + 0x8AB7));
    }
    func_00219270((s8) *(s16 *)((u8 *)temp_s0 + 0x7E6));
}
