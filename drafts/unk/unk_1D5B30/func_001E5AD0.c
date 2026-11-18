/* Draft (not built): func_001E5AD0 at 0x001E5AD0, size 0x134, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x134
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E5AD0.s */

// src/unk/unk_1D5B30.c func_001E5AD0 size diff=58/80
extern void func_001C9EF0();
void func_001E5AD0(u8 *arg0) {
    s32 temp_s0;
    u8 *temp_a3;

    *(s32 *)((u8 *)arg0 + 0x5F0) = 0x100;
    *(s64 *)((u8 *)arg0 + 0x5F8) = 0x42;
    *(s32 *)((u8 *)arg0 + 0x600) = 0;
    func_001E7070(-1);
    func_001E8290(arg0);
    *(s8 *)((u8 *)arg0 + 0x66C) = 1;
    *(s8 *)((u8 *)arg0 + 0x66D) = 0;
    *(s8 *)((u8 *)arg0 + 0x66E) = 0;
    temp_s0 = *(s32 *)((u8 *)gBattle + 0x824);
    memset(arg0 + 0x2D0, 0, 0x250);
    *(s16 *)((u8 *)arg0 + 0x494) = 0;
    *(s32 *)((u8 *)arg0 + 0x48C) = 0xBF800000;
    *(s32 *)((u8 *)arg0 + 0x484) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0x488) = 0;
    *(s8 *)((u8 *)arg0 + 0x47E) = 0;
    temp_a3 = arg0 + 0x390;
    *(s8 *)((u8 *)arg0 + 0x47F) = 0;
    *(s8 *)((u8 *)arg0 + 0x480) = 0;
    *(s8 *)((u8 *)arg0 + 0x478) = 0;
    *(s32 *)((u8 *)arg0 + 0x470) = 0;
    *(u8 **)((u8 *)arg0 + 0x450) = (u8 *) (arg0 + 0x2D0);
    *(u8 **)((u8 *)arg0 + 0x454) = (u8 *) (arg0 + 0x300);
    *(u8 **)((u8 *)arg0 + 0x458) = (u8 *) (arg0 + 0x330);
    *(u8 **)((u8 *)arg0 + 0x45C) = (u8 *) (arg0 + 0x360);
    *(u8 **)((u8 *)arg0 + 0x460) = temp_a3;
    *(u8 **)((u8 *)arg0 + 0x464) = (u8 *) (arg0 + 0x3C0);
    *(u8 **)((u8 *)arg0 + 0x468) = (u8 *) (arg0 + 0x3F0);
    *(u8 **)((u8 *)arg0 + 0x46C) = (u8 *) (arg0 + 0x420);
    *(s8 *)((u8 *)arg0 + 0x479) = 0;
    *(s8 *)((u8 *)arg0 + 0x47A) = 0;
    *(s8 *)((u8 *)arg0 + 0x47B) = 0;
    *(s8 *)((u8 *)arg0 + 0x47C) = 0;
    *(s8 *)((u8 *)arg0 + 0x47D) = 0;
    *(s32 *)((u8 *)arg0 + 0x514) = 0;
    *(s32 *)((u8 *)arg0 + 0x474) = temp_s0;
    *(s32 *)((u8 *)arg0 + 0x490) = 0;
    func_001C9EF0(*(s32 *)((u8 *)arg0 + 0x540), 0, 0, temp_a3);
    *(s32 *)((u8 *)arg0 + 0x640) = -1;
    *(s32 *)((u8 *)arg0 + 0x644) = 0;
    *(s32 *)((u8 *)arg0 + 0x648) = 0;
    *(s32 *)((u8 *)arg0 + 0x654) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0x658) = 0;
    *(s32 *)((u8 *)arg0 + 0x64C) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0x5F0) = 0;
}
