/* Draft (not built): func_001E2510 at 0x001E2510, size 0x120, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA8, original 0x120
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E2510.s */

// src/unk/unk_1D5B30.c func_001E2510 size diff=41/42
s32 func_00246DA0(void *);
void func_001E2510(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s16 sp38;
    s32 sp50;
    s32 sp54;
    f32 sp58;
    s32 sp60;
    s32 sp64;
    f32 var_f0;

    if (*(s32 *)((u8 *)arg0 + 0x1CFC) == 0x2A) {
        *(s32 *)((u8 *)arg0 + 0x1A4C) = 0;
        *(s32 *)((u8 *)arg0 + 0x1A50) = 0;
        if (*(s32 *)((u8 *)arg0 + 0x1DB8) != 0) {
            func_001E7070(arg0 + 0x650, 0);
            sp50 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp54 = 0;
            if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                var_f0 = 0.0f;
            } else {
                var_f0 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
            }
            sp58 = var_f0;
            A2d_CallHandler(8, &sp50);
            sp30 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp38 = (s16) *(s32 *)((u8 *)arg0 + 0xBA4);
            Sp_CallHandler(1, &sp20);
        }
        func_00246DA0(arg0);
        sp60 = *(s32 *)((u8 *)arg0 + 0x1350);
        sp64 = 0;
        A2d_CallHandler(0x33, &sp60);
    }
}
