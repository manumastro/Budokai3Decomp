/* Draft (not built): func_001E18B0 at 0x001E18B0, size 0xF4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x70, original 0xF4
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E18B0.s */

// src/unk/unk_1D5B30.c func_001E18B0 size diff=43/28
void func_001E18B0(u8 *arg0, s32 arg1) {
    s32 sp30;
    s32 sp40;
    s16 sp48;
    s32 sp60;
    s32 sp64;
    f32 sp68;
    f32 var_f0;

    if (*(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x1DB8) != 0) {
        func_001E7070(arg0 + 0x650);
        sp60 = *(s32 *)((u8 *)arg0 + 0x1350);
        sp64 = arg1;
        if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
            var_f0 = 0.0f;
        } else {
            var_f0 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
        }
        sp68 = var_f0;
        A2d_CallHandler(8, &sp60);
        sp40 = *(s32 *)((u8 *)arg0 + 0x1350);
        sp48 = (s16) *(s32 *)((u8 *)arg0 + 0xBA4);
        Sp_CallHandler(1, &sp30);
    }
}
