/* Draft (not built): func_00248550 at 0x00248550, size 0xE8, segment unk/unk_248550 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC0, original 0xE8
 * Original: asm/nonmatchings/unk/unk_248550/func_00248550.s */

// src/unk/unk_248550.c func_00248550 size diff=25/48
extern void memset(void *, s32, s32);
s32 func_001D9C40(s32, s32, s32);
s32 func_002183F0(s32, void **);
s32 func_00218440(s32, void **);
extern void func_00146F30(void *);
extern void func_0020D780(void *);
void func_00248550(u8 *arg0, s32 arg1) {
    s32 sp40;
    s32 sp50;
    u8 *sp60;
    s32 *sp64;
    s16 sp80;
    s16 sp82;
    s32 temp_s0;

    temp_s0 = *(s32 *)((u8 *)arg0 + 0x1354);
    memset(&sp60, 0, 0x2C);
    func_0020D780(&sp50);
    sp64 = &sp50;
    sp60 = arg0 + 0x130;
    sp80 = 9;
    sp82 = 0;
    if (arg1 == 2) {
        func_002183F0(1, (void **)(&sp60));
        func_001D9C40(temp_s0, 1, 0x3B);
    }
    if (arg1 == 3) {
        func_002183F0(1, (void **)(&sp60));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp40);
        sp60 = arg0 + 0x130;
        sp64 = &sp40;
        func_00218440(2, (void **)(&sp60));
        func_001D9C40(temp_s0, 1, 0x3B);
    }
}
