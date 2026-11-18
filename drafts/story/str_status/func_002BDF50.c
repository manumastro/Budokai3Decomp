/* Draft (not built): func_002BDF50 at 0x002BDF50, size 0x158, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x158
 * Original: asm/nonmatchings/story/str_status/func_002BDF50.s */

// src/story/str_status.c func_002BDF50 size diff=37/72
s32 func_00209540(s32, s32, s32);
s32 func_00209B50(s32, s32 *, s32);
extern s32 D_005BD154;
extern s32 D_005BD1D4;
void func_002BDF50(s32 *arg0, u8 *arg1) {
    s32 sp40;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a1;
    u8 *temp_s0;

    if (*(s32 *)((u8 *)D_0047011C + 0x1C4) != 0) {
        temp_s0 = (u8 *)(D_0046FE44);
        *arg0 = func_00209540((&D_005BD154)[*(s16 *)((u8 *)arg1 + 0x2A)], *(s32 *)((u8 *)arg1 + 0x24), 0);
        temp_a0 = *arg0;
        if (temp_a0 != 0) {
            temp_a1 = *(s32 *)((u8 *)arg1 + 0x10);
            switch (temp_a1) {                      /* irregular */
            case 0:
                func_00209B50(temp_a0, *(s32 **)((u8 *)temp_s0 + 0x20), 0);
                break;
            case 1:
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                break;
            case 3:
                M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
                func_00209B50(*arg0, &sp40, 0);
                break;
            default:
                func_00209B50(temp_a0, *(s32 **)((u8 *)temp_s0 + 0x20), 0);
                break;
            }
            *(s32 *)((u8 *)D_0047011C + 0xD0) = (s32) D_005BD154;
            *(s32 *)((u8 *)D_0047011C + 0xD8) = 0x03002000;
            temp_v1 = *(s16 *)((u8 *)arg1 + 0x2C);
            if (temp_v1 > 0) {
                *(s32 *)((u8 *)D_0047011C + 0xD4) = (s32) *(&D_005BD1D4 + (temp_v1 * 4));
            }
        }
    }
}
