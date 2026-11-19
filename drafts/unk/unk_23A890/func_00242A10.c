/* Draft (not built): func_00242A10 at 0x00242A10, size 0x130, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x124, original 0x130
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242A10.s */

// src/unk/unk_23A890.c func_00242A10 size diff=46/73
void func_00242A10(void) {
    s32 var_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;

    if (*(s8 *)((u8 *)gBattle + 0x8975) == 1) {
        goto block_12;
    }
    var_s0 = 0;
    goto loop_10;
block_2:
    temp_v1 = gBattle + (var_s0 * 0x2020);
    temp_s2 = D_0046FE44 + (var_s0 << 7);
    temp_s1 = D_0046FE48 + (var_s0 * 0x1A4);
    if (*(s8 *)((u8 *)temp_v1 + 0x14ED) != 0) {
        goto block_9;
    }
    if (*(s32 *)((u8 *)(temp_v1 + 0x830) + 0xB9C) != 0xE) {
        goto block_9;
    }
    func_0013B160((s32)(NULL));
    func_00142100(temp_s2 + 0x50, temp_s2 + 0x60);
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)temp_s1 + 0x1A0), 0x03003000);
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 0x70);
    if (temp_a0 == NULL) {
        goto block_6;
    }
    func_00208D70((s32)(temp_a0));
block_6:
    temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0x74);
    if (temp_a0_2 == NULL) {
        goto block_8;
    }
    func_00208D70((s32)(temp_a0_2));
block_8:
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
block_9:
    var_s0 += 1;
loop_10:
    if (var_s0 < *(s16 *)((u8 *)D_0046FE44 + 0x102)) {
        goto block_2;
    }
block_12:
    return;
}
