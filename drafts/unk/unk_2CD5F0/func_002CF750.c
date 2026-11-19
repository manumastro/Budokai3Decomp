/* Draft (not built): func_002CF750 at 0x002CF750, size 0xC8, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CF750.s */

void func_002CF750(s32 arg0, s32 arg1, s32 arg2) {
    u32 sp34;
    s32 sp2C;
    s32 sp30;
    s32 sp28;
    u8 sp[0x400];
    s32 sp20;
    s32 sp24;
    s32 sp40;
    s32 (*temp_v0)(s32 *, s128);
    *(s128 *)((u8 *)&sp40 + 0) = (s128)*(s128 *)((u8 *)D_00456A30 + 0);
    *(s128 *)((u8 *)&sp40 + 0x10) = (s128)*(s128 *)((u8 *)D_00456A30 + 0x10);
    *(s64 *)((u8 *)&sp40 + 0x20) = (s64)*(s64 *)((u8 *)D_00456A30 + 0x20);
    temp_v0 = *(s32 (**)(s32 *, s128))((u8 *)(arg1 * 4 + sp) + 0x40);
    if (temp_v0 != NULL) {
        sp24 = arg2;
        sp20 = arg0;
        if (temp_v0(&sp20, *(s128 *)((u8 *)D_00456A30 + 0)) != 0) {
            func_001E9B00(0, sp28, sp30, *(s32 *)(D_005C2074 + arg0 * 0x28), sp2C, sp34);
        }
    } else {
        func_001E9B00(0, arg1, 0, 0, 0.0f, 1.0f);
    }
}
