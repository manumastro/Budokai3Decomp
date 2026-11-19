/* Draft (not built): func_001F4C20 at 0x001F4C20, size 0x244, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 81 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x204, original 0x244
 * Original: asm/nonmatchings/battle/btb_draw/func_001F4C20.s */

// src/battle/btb_draw.c func_001F4C20 size diff=81/129
extern s128 D_0044B5D0;
extern s128 D_0044B5E0;
extern s8 D_004697F8;
extern s8 D_00469808;
extern void func_001F1890(void);
void func_001F4C20(s32 unused_arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s128 sp70;
    s32 sp80;
    s32 sp90;
    s128 spA0;
    s32 spB0;
    s8 *temp_s1;
    s8 *temp_v0;
    s8 *temp_v0_3;
    s8 *var_s0;
    s8 *var_v0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_v0_2;
    u8 *temp_v0_4;

    temp_s1 = (signed char *)(*D_0051CD0C);
    temp_v0 = (signed char *)(func_001A50F0((char *)(temp_s1), 0x200));
    if (temp_v0 != NULL) {
        var_v0 = (signed char *)(func_00209540((char *)(temp_v0), 0x02000001, 0));
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        temp_v0_2 = func_001F5FD0((u32)(0x85000000U), (char *)(&D_004697F8), 0, (void *)(&func_001F1890), (void *)(M2C_ERROR(/* Read from unset register $a4 */)));
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) & ~0x800);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x800);
        memset(temp_v0_2 + 0x30, 0, 0x80);
        *(s8 **)((u8 *)temp_v0_2 + 0x68) = var_v0;
        temp_s0 = temp_v0_2 + 0x30;
        *(s8 **)((u8 *)temp_s0 + 0x30) = (signed char *)(func_001A50F0((char *)(temp_s1), 0x280));
        *(s32 *)((u8 *)temp_v0_2 + 0x30) = arg3;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        spA0 = D_0044B5D0;
        func_00146F60(&spB0, arg2);
        func_00141C30(temp_s0 + 0x20, &spA0, &spB0);
    }
    temp_v0_3 = (signed char *)(func_001A50F0((char *)(temp_s1), 0x201));
    if (temp_v0_3 != NULL) {
        var_s0 = (signed char *)(func_00209540((char *)(temp_v0_3), 0x02000001, 0));
    } else {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        temp_v0_4 = func_001F5FD0((u32)(0x85000000U), (char *)(&D_00469808), 0, (void *)(func_001F2150), (void *)(M2C_ERROR(/* Read from unset register $a4 */)));
        *(s32 *)((u8 *)temp_v0_4 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_4 + 0x20) & ~0x800);
        *(s32 *)((u8 *)temp_v0_4 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_4 + 0x20) | 0x800);
        memset(temp_v0_4 + 0x30, 0, 0x80);
        *(s8 **)((u8 *)temp_v0_4 + 0x38) = var_s0;
        temp_s0_2 = temp_v0_4 + 0x30;
        *(s8 **)((u8 *)temp_s0_2 + 4) = (signed char *)(func_001A50F0((char *)(temp_s1), 0x280));
        *(s32 *)((u8 *)temp_v0_4 + 0x30) = arg3;
        func_00209A90(*(u8 **)((u8 *)temp_s0_2 + 8), arg1);
        sp70 = D_0044B5E0;
        func_00146F60(&sp80, arg2);
        func_00141C30(&sp90, &sp70, &sp80);
        func_00209850(*(u8 **)((u8 *)temp_s0_2 + 8), &sp90);
    }
}
