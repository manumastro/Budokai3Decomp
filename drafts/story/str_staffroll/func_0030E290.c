/* Draft (not built): func_0030E290 at 0x0030E290, size 0x94, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x58, original 0x94
 * Original: asm/nonmatchings/story/str_staffroll/func_0030E290.s */

// src/story/str_staffroll.c func_0030E290 size diff=24/22
void func_0030E290(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s16 sp50;
    s32 *var_v1;
    u8 *temp_s0;

    sp34 = 1;
    sp30 = 0;
    sp38 = 0x600000;
    temp_s0 = arg0 + 0x30;
    sp50 = 0;
    sp3C = 0x400;
    sp40 = 0x200;
    sp44 = 3;
    sp48 = -1;
    sp4C = D_0046FD5C;
    *(u8 **)((u8 *)arg0 + 0x30) = (s32 *)amSofdec_Create((u8 *)((void *)(&sp30)));
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
    var_v1 = (s32 *)(&StaffRoll_TaskEnding);
    *(s32 *)((u8 *)temp_s0 + 0xC) = 0;
    if (&StaffRoll_TaskEnding == NULL) {
        var_v1 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
}
