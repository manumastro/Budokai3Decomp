/* Draft (not built): func_001F1770 at 0x001F1770, size 0x11C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'float' mwccps2.exe Compiler: 3849: if (*temp_a2 == arg0) { @ 3837: temp_f1 = *(f32 *)((u8 *)arg0 + 0x84) + D_0051CD24;
 * Original: asm/nonmatchings/battle/btb_draw/func_001F1770.s */

// src/battle/btb_draw.c func_001F1770 cerr diff=-1/0
void func_001F1770(u8 *arg0) {
    f32 temp_f1;
    s32 *temp_a2;
    s32 var_a3;
    u8 *temp_a1;
    u8 *temp_s1;

    temp_f1 = *(f32 *)((u8 *)arg0 + 0x84) + D_0051CD24;
    *(f32 *)((u8 *)arg0 + 0x84) = temp_f1;
    if (!(temp_f1 < *(f32 *)((u8 *)arg0 + 0x80))) {
        temp_a1 = *(u8 **)((u8 *)(arg0 + 0x30) + 8);
        temp_s1 = *(u8 **)((u8 *)arg0 + 0x10);
        if (*(s32 *)((u8 *)temp_a1 + 0x38) < 0) {
            var_a3 = 0;
loop_7:
            if (var_a3 >= 0x100) {

            } else {
                temp_a2 = &D_0051C770 + (var_a3 * 4);
                if (*temp_a2 == arg0) {
                    *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x28)) + 0x24) = (u8 *) *(u8 **)((u8 *)arg0 + 0x24);
                    *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x24)) + 0x28) = (u8 *) *(u8 **)((u8 *)arg0 + 0x28);
                    *temp_a2 = 0;
                    D_0047062C -= 1;
                } else {
                    var_a3 += 1;
                    goto loop_7;
                }
            }
            return;
        }
        func_00208F70((void *)(temp_a1));
        if (*(u8 ***)((u8 *)temp_s1 + 8) != NULL) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf3, 0x20($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf4, 0x30($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf2, 0x10($a1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf3, 0x20($a1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf4, 0x30($a1) */);
        }
    }
}
