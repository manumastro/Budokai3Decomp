/* Draft (not built): func_00217070 at 0x00217070, size 0x18C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0x18C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00217070.s */

// src/unk/unk_20A4D0.c func_00217070 size diff=47/79
void func_00217070(u8 *arg0) {
    s32 sp30;
    s32 temp_a2;
    s32 temp_v1;
    u8 *temp_s0;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_s0 = gBattle + (temp_a2 * 0x2020) + 0x830;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00215230(-1, 0x400);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp30);
block_6:
        *(s32 **)((u8 *)arg0 + 4) = &sp30;
        break;
    case 1:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp30);
        goto block_6;
    }
    *(s16 *)((u8 *)arg0 + 0x20) = 0x14;
    *(s16 *)((u8 *)arg0 + 0x22) = 0;
    *(s16 *)((u8 *)arg0 + 0x24) = 0;
    *(u8 **)((u8 *)arg0 + 0) = (u8 *) (temp_s0 + 0x650);
    jtbl_00469CC4[0](arg0);
    *(u8 **)((u8 *)arg0 + 0) = (u8 *) (temp_s0 + 0x6F0);
    jtbl_00469CC4[0](arg0);
    *(u8 **)((u8 *)arg0 + 0) = (u8 *) (temp_s0 + 0x700);
    jtbl_00469CC4[0](arg0);
    *(u8 **)((u8 *)arg0 + 0) = (u8 *) (temp_s0 + 0x6B0);
    jtbl_00469CC4[0](arg0);
    *(u8 **)((u8 *)arg0 + 0) = (u8 *) (temp_s0 + 0x6C0);
    jtbl_00469CC4[0](arg0);
    *(u8 **)((u8 *)arg0 + 0) = (u8 *) (temp_s0 + 0x680);
    jtbl_00469CC4[0](arg0);
}
