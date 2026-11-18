/* Draft (not built): func_00249D50 at 0x00249D50, size 0x200, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  **)((u8 *)(((u8 *)temp_a3) + (((u8 *)temp_t0) + D_0046FE54)) + 0x14) = amTask_Create(&func_00249B00, 0, 0x3710, 0x400);
 * Original: asm/nonmatchings/battle/skill_cmd/func_00249D50.s */

// src/battle/skill_cmd.c func_00249D50 cerr diff=-1/0
extern s32 amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
void func_00249D50(u8 *arg0, s32 arg1) {
    s16 var_v1;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_t0;
    u8 *temp_s0_2;
    u8 *temp_v0;

    temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x1350);
    temp_t0 = temp_s0 * 0x10;
    temp_a3 = arg1 * 4;
    *(u8 **)((u8 *)(((u8 *)temp_a3) + (((u8 *)temp_t0) + D_0046FE54)) + 0x14) = amTask_Create(&func_00249B00, 0, 0x3710, 0x400);
    temp_v0 = ((u8 *)temp_a3) + (((u8 *)temp_t0) + D_0046FE54);
    temp_s0_2 = (u8 *)(*(s32 *)((u8 *)temp_v0 + 0x14) + 0x30);
    *(s32 *)((u8 *)temp_v0 + 0x34) = 1;
    memset(temp_s0_2, 0, 0x40, temp_a3);
    *(u8 **)((u8 *)temp_s0_2 + 0xC) = (u8 *) *(u8 **)((u8 *)arg0 + 0xC);
    *(u8 **)((u8 *)temp_s0_2 + 8) = (u8 *) *(u8 **)((u8 *)arg0 + 8);
    *(s32 *)((u8 *)temp_s0_2 + 0x18) = arg1;
    *(u8 **)((u8 *)temp_s0_2 + 0x10) = arg0;
    func_0020D400(temp_s0_2 + 0x20, *(u8 **)((u8 *)arg0 + 8), *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x2C));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s16 *)((u8 *)temp_s0_2 + 4) = (s16) (*(s16 *)((u8 *)temp_s0_2 + 4) | 0x1C00);
    switch (arg1) {                                 /* irregular */
    case 0:
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = 1;
        *(s16 *)((u8 *)temp_s0_2 + 6) = M2C_BITWISE(s16, (0.1f * (f32) *(s16 *)((u8 *)arg0 + 6)));
        var_v1 = *(s16 *)((u8 *)temp_s0_2 + 4) | 0x200;
block_11:
        *(s16 *)((u8 *)temp_s0_2 + 4) = var_v1;
        return;
    case 1:
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = 1;
        *(s16 *)((u8 *)temp_s0_2 + 6) = M2C_BITWISE(s16, (0.1f * (f32) *(s16 *)((u8 *)arg0 + 6)));
        var_v1 = *(s16 *)((u8 *)temp_s0_2 + 4) | 0x200;
        goto block_11;
    case 2:
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = 2;
        *(s16 *)((u8 *)temp_s0_2 + 6) = (s16) *(s16 *)((u8 *)arg0 + 6);
        return;
    case 3:
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = 3;
        *(s16 *)((u8 *)temp_s0_2 + 6) = M2C_BITWISE(s16, (0.1f * (f32) *(s16 *)((u8 *)arg0 + 6)));
        var_v1 = *(s16 *)((u8 *)temp_s0_2 + 4) | 0x200;
        goto block_11;
    }
}
