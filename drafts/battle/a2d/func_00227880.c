/* Draft (not built): func_00227880 at 0x00227880, size 0x1B0, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x1B0
 * Original: asm/nonmatchings/battle/a2d/func_00227880.s */

// src/battle/a2d.c func_00227880 size diff=96/82
void func_00227880(u8 *arg0) {
    s32 spF;
    s32 spE;
    s32 spD;
    s32 sp7;
    s32 sp6;
    s32 sp5;
    u8 sp4;
    u8 sp8;
    u8 sp9;
    u8 spA;
    u8 spB;
    u8 spC;
    s32 temp_a1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 *temp_a1_2;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_a1 = *D_004706D0;
    if (!(temp_a1 & 2)) {
        if (temp_a1 & 0x80) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_a1_2 = D_004706CC + 0x20;
            *(u8 *)((u8 *)D_004706CC + 0x20) = (u8) *(u8 *)((u8 *)arg0 + 0x10);
            *(u8 *)((u8 *)temp_a1_2 + 1) = (u8) *(u8 *)((u8 *)arg0 + 0x11);
            *(u8 *)((u8 *)temp_a1_2 + 2) = (u8) *(u8 *)((u8 *)arg0 + 0x12);
            *(u8 *)((u8 *)temp_a1_2 + 3) = (u8) *(u8 *)((u8 *)arg0 + 0x13);
            return;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_v1 = arg0 + 0x10;
        *(u8 *)((u8 *)(&sp4) + 0) = *(u8 *)((u8 *)arg0 + 0x10);
        *(u8 *)((u8 *)(&sp4) + 1) = (u8) *(u8 *)((u8 *)temp_v1 + 1);
        *(u8 *)((u8 *)(&sp4) + 2) = (u8) *(u8 *)((u8 *)temp_v1 + 2);
        *(u8 *)((u8 *)(&sp4) + 3) = (u8) *(u8 *)((u8 *)temp_v1 + 3);
        temp_v1_2 = D_004706CC + 0x20;
        *(u8 *)((u8 *)(&sp8) + 0) = *(u8 *)((u8 *)D_004706CC + 0x20);
        *(u8 *)((u8 *)(&sp8) + 1) = (u8) *(u8 *)((u8 *)temp_v1_2 + 1);
        *(u8 *)((u8 *)(&sp8) + 2) = (u8) *(u8 *)((u8 *)temp_v1_2 + 2);
        *(u8 *)((u8 *)(&sp8) + 3) = (u8) *(u8 *)((u8 *)temp_v1_2 + 3);
        var_v1 = (sp8 & 0xFF) + (sp4 & 0xFF);
        if (var_v1 >= 0x100) {
            var_v1 = 0xFF;
        }
        sp8 = (u8) var_v1;
        var_v1_2 = sp9 + sp5;
        if (var_v1_2 >= 0x100) {
            var_v1_2 = 0xFF;
        }
        sp9 = (u8) var_v1_2;
        var_v1_3 = spA + sp6;
        if (var_v1_3 >= 0x100) {
            var_v1_3 = 0xFF;
        }
        spA = (u8) var_v1_3;
        var_v1_4 = spB + sp7;
        if (var_v1_4 >= 0x100) {
            var_v1_4 = 0xFF;
        }
        spB = (u8) var_v1_4;
        spC = (f32) *(u8 *)((u8 *)(&sp8) + 0);
        *(u8 *)((u8 *)D_004706CC + 0x20) = spC;
        *(u8 *)((u8 *)D_004706CC + 0x21) = spD;
        *(u8 *)((u8 *)D_004706CC + 0x22) = spE;
        *(u8 *)((u8 *)D_004706CC + 0x23) = spF;
    }
}
