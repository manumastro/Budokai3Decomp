/* Draft (not built): func_00216F50 at 0x00216F50, size 0x110, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xBC, original 0x110
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00216F50.s */

// src/unk/unk_20A4D0.c func_00216F50 size diff=48/47
void func_00216F50(u8 *arg0, s32 unused_arg1, s32 unused_arg2, s32 unused_arg3, s32 arg4, u8 *arg5) {
    s32 sp40;
    u8 *sp50;
    s32 sp58;
    s16 sp68;
    s16 sp6A;
    s16 sp6C;
    s16 sp6E;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_v0 = amTask_Create(func_00216A60, 0, 0x5A00, 0x400, arg4, arg5);
    if (temp_v0 != NULL) {
        memset(&sp40, 0, 0x30);
        sp6E = 0x400;
        sp6C |= ~0x7FFF;
        sp50 = gBattle + (*(s32 *)((u8 *)arg0 + 0x10) * 0x2020) + 0x830;
        sp58 = *(s32 *)((u8 *)arg0 + 0x14);
        sp68 = 7;
        sp6A = func_00216080(*(s32 *)((u8 *)arg0 + 0x10));
        func_002CA2F0(&sp40);
        temp_s0 = temp_v0 + 0x30;
        *(u8 **)((u8 *)((*(s32 *)((u8 *)arg0 + 0x10) * 4) + D_0046FDD0) + 0x188) = temp_v0;
        memset(temp_s0, 0, 0x10);
        *(s32 *)((u8 *)temp_v0 + 0x30) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
        *(s32 *)((u8 *)temp_s0 + 4) = (s32) *(s32 *)((u8 *)arg0 + 0x14);
        *(s32 *)((u8 *)temp_s0 + 8) = (s32) *(s32 *)((u8 *)arg0 + 0x1C);
    }
}
