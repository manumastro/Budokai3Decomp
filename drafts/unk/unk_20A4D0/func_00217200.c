/* Draft (not built): func_00217200 at 0x00217200, size 0x184, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x184
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00217200.s */

// src/unk/unk_20A4D0.c func_00217200 size diff=68/82
void func_00217200(u8 *arg0) {
    s32 sp30;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    u8 *temp_s0;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_a1 = temp_a2 * 0x2020;
    temp_s0 = gBattle + temp_a1 + 0x830;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_002CA290(-1);
        func_00216150(*(s32 *)((u8 *)arg0 + 0x10));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp30);
block_7:
        *(s32 **)((u8 *)arg0 + 4) = &sp30;
        break;
    case 1:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp30);
        goto block_7;
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
