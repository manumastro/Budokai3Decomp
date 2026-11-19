/* Draft (not built): func_002C0510 at 0x002C0510, size 0x120, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x9C, original 0x120
 * Original: asm/nonmatchings/story/str_status/func_002C0510.s */

// src/story/str_status.c func_002C0510 size diff=59/39
extern s128 D_00456310;
extern s128 D_00456320;
Task *func_002C0510(s32 arg0, s64 arg1, s32 arg2, s32 unused_arg3, s32 arg4, s8 *arg5) {
    s128 sp50;
    s128 sp60;
    Task *temp_v0;
    u8 *temp_s1;

    sp60 = D_00456310;
    sp50 = D_00456320;
    temp_v0 = amTask_Create((void (*)(Task *)) StrStatus_TaskComment, NULL, (s32) ((s64) (arg1 << 0x30) >> 0x30), 8, arg4,(char *)(arg5));
    temp_s1 = (unsigned char *)(temp_v0 + 0x30);
    memset(temp_s1, 0, 0x40);
    if (arg2 == 0) {

    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    *(f32 *)((u8 *)temp_s1 + 0x2C) = 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(s32 *)((u8 *)temp_s1 + 4) = arg0;
    *(s16 *)((u8 *)temp_s1 + 8) = 2;
    *(f32 *)((u8 *)temp_s1 + 0x18) = 1.0f;
    *(f32 *)((u8 *)temp_s1 + 0x1C) = 1.0f;
    *(s32 *)((u8 *)temp_s1 + 0xC) = -1;
    *(s32 *)((u8 *)temp_s1 + 0x10) = -1;
    *(s32 *)((u8 *)temp_s1 + 0x14) = -1;
    return temp_v0;
}
