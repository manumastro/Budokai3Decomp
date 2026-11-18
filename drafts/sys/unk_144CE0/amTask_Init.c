/* Draft (not built): amTask_Init at 0x00144CE0, size 0x1E0, segment sys/unk_144CE0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 85 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C8, original 0x1E0
 * Original: asm/nonmatchings/sys/unk_144CE0/amTask_Init.s */

// src/sys/unk_144CE0.c amTask_Init size diff=85/114
void amTask_Init(s32 arg0, s32 arg1) {
    s32 var_a1;
    u8 *var_a2;

    D_00470350 = 0;
    D_00470354 = 0;
    D_00470358 = 0;
    D_0047036C = 0;
    D_00470370 = 0;
    D_00470374 = 0;
    D_00470378 = 0;
    D_0047037C = 0;
    D_0047035C = (arg1 + 0x3F) & ~0x3F;
    D_00470360 = arg0;
    D_00470364 = func_00124940(0x40, D_00470360 * (D_0047035C + 0x50));
    D_00470368 = func_00124940(0x40, D_00470360 * 4);
    func_00128040(&gTaskHead, D_0045F5E0, 0x10);
    *(s32 *)((u8 *)(&gTaskHead) + 0x18) = 0;
    *(s32 *)((u8 *)(&gTaskHead) + 0x24) = 0;
    *(s32 **)((u8 *)(&gTaskHead) + 0x28) = &gTaskTail;
    *(s32 *)((u8 *)(&gTaskHead) + 0x10) = 0;
    *(s32 *)((u8 *)(&gTaskHead) + 0x14) = 1;
    *(s32 *)((u8 *)(&gTaskHead) + 0x2C) = 0x0D020A0C;
    *(s32 *)((u8 *)(&gTaskHead) + 0x1C) = 0;
    *(s32 *)((u8 *)(&gTaskHead) + 0x20) = 0;
    func_00128040(&gTaskTail, D_0045F5F0, 0x10);
    *(s32 *)((u8 *)(&gTaskTail) + 0x18) = -1;
    *(s32 **)((u8 *)(&gTaskTail) + 0x24) = &gTaskHead;
    *(s32 *)((u8 *)(&gTaskTail) + 0x28) = 0;
    *(s32 *)((u8 *)(&gTaskTail) + 0x10) = 0;
    *(s32 *)((u8 *)(&gTaskTail) + 0x14) = 1;
    *(s32 *)((u8 *)(&gTaskTail) + 0x2C) = 0x0D020A0C;
    *(s32 *)((u8 *)(&gTaskTail) + 0x1C) = 0;
    *(s32 *)((u8 *)(&gTaskTail) + 0x20) = 0;
    var_a2 = (u8 *)(D_00470364);
    var_a1 = 0;
loop_2:
    if (var_a1 < D_00470360) {
        *(D_00470368 + (var_a1 * 4)) = var_a2;
        *(s32 *)((u8 *)var_a2 + 0x2C) = 0x0D020A0C;
        *(var_a2 + 0x40 + D_0047035C) = 0x0D020A0C;
        var_a2 = var_a2 + 0x50 + D_0047035C;
        var_a1 += 1;
        goto loop_2;
    }
}
