/* Draft (not built): func_002ACBF0 at 0x002ACBF0, size 0x160, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x174, original 0x160
 * Original: asm/nonmatchings/battle/scr_func/func_002ACBF0.s */

// src/battle/scr_func.c func_002ACBF0 size diff=52/93
s32 amModel_SetupPart(ScrFlag *, void *, s32, s32, f32);
extern void func_002AC9F0(void);
s32 func_002ACBF0(u8 *arg0, u8 *arg1) {
    ScrModel *temp_s0;
    s32 temp_a0;
    s32 temp_a3;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a3 = *(s32 *)((u8 *)temp_v1 + 8);
    temp_s0 = &D_005BC440[**(s32 **)((u8 *)arg0 + 0)][temp_a3 + 1];
    *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) *(s32 *)((u8 *)temp_v1 + 4);
    if (!(temp_s0->speed < 0.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0x10) = 0.0f;
    } else {
        *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) (*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0xC) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x14)) + 8) - 1);
    }
    *(s32 *)((u8 *)temp_s0 + 0x18) = (s32) *(s32 *)((u8 *)temp_v1 + 0);
    amModel_SetupPart(temp_s0->flag, *(u8 **)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 0xC), temp_a3, *(f32 *)((u8 *)temp_s0 + 0x10));
    temp_v0 = *(u8 **)((u8 *)arg1 + 0x38);
    temp_a0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0xC) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x14)) + 8);
    if (*(s32 *)((u8 *)temp_v0 + 0x6C) == 0) {
        *(s32 *)((u8 *)temp_v0 + 0x68) = (s32) (temp_a0 + M2C_BITWISE(s32, gScrTimers[**(s32 **)((u8 *)arg0 + 0)]));
    } else {
        *(s32 *)((u8 *)temp_v0 + 0x68) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x68) + temp_a0);
    }
    *(s32 *)((u8 *)(temp_v0 + 0x68) + 4) = 1;
    *(s32 **)((u8 *)arg0 + 0x10) = (int *)(&func_002AC9F0);
    return 3;
}
