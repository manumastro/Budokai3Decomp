/* Draft (not built): func_00228240 at 0x00228240, size 0x1CC, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp5' mwccps2.exe Compiler: 664: var_a1_3 = spA + sp6; @ 659: var_a1_2 = sp9 + sp5;
 * Original: asm/nonmatchings/battle/a2d/func_00228240.s */

// src/battle/a2d.c func_00228240 cerr diff=-1/0
void func_00228240(u8 *arg0) {
    u8 sp4;
    u8 sp8;
    u8 sp9;
    u8 spA;
    u8 spB;
    u8 spC;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    u8 *temp_a1;
    u8 *temp_a2;

    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
    M2C_ERROR(/* unknown instruction: vmul.xyzw $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    temp_a1 = D_004706CC + 0x20;
    temp_a2 = arg0 + 0x20;
    *(u8 *)((u8 *)(&sp4) + 0) = *(u8 *)((u8 *)arg0 + 0x20);
    *(u8 *)((u8 *)(&sp4) + 1) = (u8) *(u8 *)((u8 *)temp_a2 + 1);
    *(u8 *)((u8 *)(&sp4) + 2) = (u8) *(u8 *)((u8 *)temp_a2 + 2);
    *(u8 *)((u8 *)(&sp4) + 3) = (u8) *(u8 *)((u8 *)temp_a2 + 3);
    *(u8 *)((u8 *)(&sp8) + 0) = *(u8 *)((u8 *)D_004706CC + 0x20);
    *(u8 *)((u8 *)(&sp8) + 1) = (u8) *(u8 *)((u8 *)temp_a1 + 1);
    *(u8 *)((u8 *)(&sp8) + 2) = (u8) *(u8 *)((u8 *)temp_a1 + 2);
    *(u8 *)((u8 *)(&sp8) + 3) = (u8) *(u8 *)((u8 *)temp_a1 + 3);
    var_a1 = (sp8 & 0xFF) + (sp4 & 0xFF);
    if (var_a1 >= 0x100) {
        var_a1 = 0xFF;
    }
    sp8 = (u8) var_a1;
    var_a1_2 = sp9 + sp5;
    if (var_a1_2 >= 0x100) {
        var_a1_2 = 0xFF;
    }
    sp9 = (u8) var_a1_2;
    var_a1_3 = spA + sp6;
    if (var_a1_3 >= 0x100) {
        var_a1_3 = 0xFF;
    }
    spA = (u8) var_a1_3;
    var_a1_4 = spB + sp7;
    if (var_a1_4 >= 0x100) {
        var_a1_4 = 0xFF;
    }
    spB = (u8) var_a1_4;
    spC = (f32) *(u8 *)((u8 *)(&sp8) + 0);
    *(u8 *)((u8 *)D_004706CC + 0x20) = spC;
    *(u8 *)((u8 *)D_004706CC + 0x21) = spD;
    *(u8 *)((u8 *)D_004706CC + 0x22) = spE;
    *(u8 *)((u8 *)D_004706CC + 0x23) = spF;
    *(f32 *)((u8 *)D_004706CC + 0) = (f32) (*(f32 *)((u8 *)D_004706CC + 0) + (*(f32 *)((u8 *)D_004706CC + 0x30) * *(f32 *)((u8 *)arg0 + 0)));
    *(f32 *)((u8 *)D_004706CC + 4) = (f32) (*(f32 *)((u8 *)D_004706CC + 4) + (*(f32 *)((u8 *)D_004706CC + 0x34) * *(f32 *)((u8 *)arg0 + 4)));
    *(f32 *)((u8 *)D_004706CC + 0x30) = (f32) (*(f32 *)((u8 *)D_004706CC + 0x30) * *(f32 *)((u8 *)arg0 + 0x30));
    *(f32 *)((u8 *)D_004706CC + 0x34) = (f32) (*(f32 *)((u8 *)D_004706CC + 0x34) * *(f32 *)((u8 *)arg0 + 0x34));
    *(f32 *)((u8 *)D_004706CC + 0x38) = (f32) (*(f32 *)((u8 *)D_004706CC + 0x38) * *(f32 *)((u8 *)arg0 + 0x38));
    *(f32 *)((u8 *)D_004706CC + 0x3C) = (f32) (*(f32 *)((u8 *)D_004706CC + 0x3C) * *(f32 *)((u8 *)arg0 + 0x3C));
    *(f32 *)((u8 *)D_004706CC + 0x40) = (f32) (*(f32 *)((u8 *)D_004706CC + 0x40) + *(f32 *)((u8 *)arg0 + 0x40));
}
