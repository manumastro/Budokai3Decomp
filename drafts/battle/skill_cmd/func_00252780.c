/* Draft (not built): func_00252780 at 0x00252780, size 0x160, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'void *' + 'int' @ 1204: if (var_s0 < *(s32 *)((u8 *)((temp_s1 * 4) + D_0046FE54) + 8)) {
 * Original: asm/nonmatchings/battle/skill_cmd/func_00252780.s */

// src/battle/skill_cmd.c func_00252780 cerr diff=-1/0
void func_00252780(s32 arg0, u8 *arg1) {
    s32 sp50;
    s32 sp60;
    u8 *sp68;
    u8 *sp6C;
    s32 sp80;
    s32 sp90;
    s16 temp_v1;
    s16 var_a1;
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s0;
    u8 *temp_a2;

    temp_s1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x1354)) + 0x1350);
    memset(&sp60, 0, 0x40);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30(&sp50);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_s0 = 0;
    sp68 = *(u8 **)((u8 *)arg1 + 0x1354);
loop_10:
    if (var_s0 < *(s32 *)((u8 *)((temp_s1 * 4) + D_0046FE54) + 8)) {
        var_a1 = temp_s1 * 4;
        temp_a2 = (u8 *)(*(((u8 *)D_0046FE54) + var_a1) + (var_s0 * 0xF0));
        temp_v1 = *(s16 *)((u8 *)temp_a2 + 0x16);
        if (temp_v1 != 0) {
            if (((s64) ((s64) temp_v1 << 0x30) >> 0x30) != *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x1354)) + 0xBA4)) {

            } else {
                goto block_6;
            }
        } else {
            var_a1 = *(s16 *)((u8 *)temp_a2 + 0xDC);
            temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x1354)) + 0xBA4);
            if ((temp_a0 >= var_a1) && (*(s16 *)((u8 *)temp_a2 + 0xDE) >= temp_a0)) {
block_6:
                if ((arg0 == *(s16 *)((u8 *)temp_a2 + 0x12)) && (*(s16 *)((u8 *)temp_a2 + 0x10) == 0xB)) {
                    sp6C = temp_a2;
                    func_00251DA0(&sp60, var_a1, temp_a2);
                    func_00251C20(&sp60);
                }
            }
        }
        var_s0 += 1;
        goto loop_10;
    }
}
