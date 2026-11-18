/* Draft (not built): func_00212050 at 0x00212050, size 0x104, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char[]' to '__int128' @ 3149: sp40 = D_0044B910;
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00212050.s */

// src/unk/unk_20A4D0.c func_00212050 cerr diff=-1/0
void func_00212050(u8 *arg0) {
    s32 sp30;
    s128 sp40;
    s32 sp50;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    u8 *temp_s0;

    sp40 = D_0044B910;
    temp_s0 = arg0 + 0x20;
    if (*(u8 **)((u8 *)arg0 + 0x10) != NULL) {
        D_00470238 = 0;
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x20);
        if (temp_a0 != 0) {
            amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)temp_s0 + 0x28));
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x24);
        if (temp_a0_2 != 0) {
            func_00208D60(temp_a0_2);
        }
        if (gBattle != NULL) {
            var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
        } else {
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            func_00146ED0(&sp50, temp_s0 + 0x10, *(f32 *)((u8 *)temp_s0 + 0x30));
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        }
        func_0013B0B0(NULL);
        func_00141C30(&sp30, &sp40, temp_s0 + 0x10);
        func_00142100(&sp30, temp_s0);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x10))));
        func_0013B110(1);
    }
}
