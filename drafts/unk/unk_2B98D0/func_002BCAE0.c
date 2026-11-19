/* Draft (not built): func_002BCAE0 at 0x002BCAE0, size 0x100, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BCAE0.s */

// src/unk/unk_2B98D0.c func_002BCAE0 diff diff=52/64
void func_002BCAE0(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp50;
    s32 *var_v1;
    s32 temp_a0;
    u8 *temp_a0_2;

    *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_00455DA0) + 0);
    *(s64 *)((u8 *)(&sp50) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00455DA0) + 0x10);
    if (func_0022BF80((void *)(*(s32 *)((u8 *)gStrStatus + 0x1D4))) == 0xFF) {
        amTask_Kill(*(u8 **)((u8 *)gStrStatus + 0xB0));
        *(u8 **)((u8 *)gStrStatus + 0xB0) = NULL;
        temp_a0 = *(s32 *)((u8 *)gStrStatus + 0x1D4);
        if (temp_a0 != 0) {
            func_0022D0E0((void *)(temp_a0), 1);
            *(s32 *)((u8 *)gStrStatus + 0x1D4) = 0;
        }
        temp_a0_2 = *(u8 **)((u8 *)gStrStatus + 0xC0);
        if (temp_a0_2 != NULL) {
            amTask_Kill(temp_a0_2);
            *(u8 **)((u8 *)gStrStatus + 0xC0) = NULL;
        }
        sp34 = 1;
        sp30 = 3;
        StrStatus_Dispatch(&sp20);
        func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
        var_v1 = (int *)(&func_002BCA30);
        if (&func_002BCA30 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
