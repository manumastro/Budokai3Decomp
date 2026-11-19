/* Draft (not built): func_001F1770 at 0x001F1770, size 0x11C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB4, original 0x11C
 * Original: asm/nonmatchings/battle/btb_draw/func_001F1770.s */

// src/battle/btb_draw.c func_001F1770 size diff=47/45
void func_001F1770(u8 *arg0) {
    BtbObj **temp_a2;
    BtbObj *temp_a1;
    f32 temp_f1;
    s32 var_a3;
    u8 *temp_s1;

    temp_f1 = *(f32 *)((u8 *)arg0 + 0x84) + *D_0051CD24;
    *(f32 *)((u8 *)arg0 + 0x84) = temp_f1;
    if (temp_f1 < *(f32 *)((u8 *)arg0 + 0x80)) {
        goto block_12;
    }
    temp_a1 = *(BtbObj **)((u8 *)(arg0 + 0x30) + 8);
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x10);
    if (temp_a1->f38 >= 0) {
        goto block_10;
    }
    var_a3 = 0;
    goto loop_7;
block_4:
    temp_a2 = &D_0051C770[var_a3];
    if ((s32)(*temp_a2) != (s32)(arg0)) {
        goto block_6;
    }
    *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x28)) + 0x24) = (u8 *) *(u8 **)((u8 *)arg0 + 0x24);
    *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x24)) + 0x28) = (u8 *) *(u8 **)((u8 *)arg0 + 0x28);
    *temp_a2 = NULL;
    D_0047062C -= 1;
    goto block_9;
block_6:
    var_a3 += 1;
loop_7:
    if (var_a3 < 0x100) {
        goto block_4;
    }
block_9:
    return;
block_10:
    func_00208F70(temp_a1);
    if (*(u8 ***)((u8 *)temp_s1 + 8) == NULL) {
        goto block_12;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a1) */);
block_12:
    return;
}
