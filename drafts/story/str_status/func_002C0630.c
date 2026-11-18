/* Draft (not built): func_002C0630 at 0x002C0630, size 0x114, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); , void (*)(struct Task *), int, int, @ 927: temp_v0 = amTask_Create(&func_002C03E0, 0, (s64) (arg1 << 0x30) >> 0x30, 8);
 * Original: asm/nonmatchings/story/str_status/func_002C0630.s */

// src/story/str_status.c func_002C0630 cerr diff=-1/0
extern s128 D_004562F0;
extern s128 D_00456300;
u8 *func_002C0630(s32 arg0, s64 arg1, s32 arg2) {
    s128 sp50;
    s128 sp60;
    u8 *temp_s1;
    u8 *temp_v0;

    sp60 = D_004562F0;
    sp50 = D_00456300;
    temp_v0 = amTask_Create(&func_002C03E0, 0, (s64) (arg1 << 0x30) >> 0x30, 8);
    temp_s1 = temp_v0 + 0x30;
    memset(temp_s1, 0, 0x40);
    if (arg2 == 0) {

    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    *(f32 *)((u8 *)temp_s1 + 0x2C) = 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(s32 *)((u8 *)temp_v0 + 0x30) = amCdFs_ReadFileId(arg0, 0, 0);
    *(s16 *)((u8 *)temp_s1 + 8) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x18) = 0x3F800000;
    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0x3F800000;
    *(s32 *)((u8 *)temp_s1 + 0xC) = -1;
    *(s32 *)((u8 *)temp_s1 + 0x10) = -1;
    *(s32 *)((u8 *)temp_s1 + 0x14) = -1;
    return temp_v0;
}
