/* Draft (not built): func_00211AF0 at 0x00211AF0, size 0xD8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC8, original 0xD8
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00211AF0.s */

// src/unk/unk_20A4D0.c func_00211AF0 size diff=22/50
void func_00211AF0(u8 *arg0) {
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = arg0;
    temp_a2 = *(s16 *)((u8 *)arg0 + 0x66);
    var_s0 = var_s1 + 0x20;
    var_s2 = &D_00568C90 + (temp_a2 * 0x2140);
    if (*(u8 **)((u8 *)arg0 + 0x10) != NULL) {
        D_00470238 = 0;
        temp_a0 = *(s32 *)((u8 *)var_s0 + 0x20);
        if (temp_a0 != 0) {
            amModel_SetCurrent(temp_a0, *(s32 *)((u8 *)var_s0 + 0x28));
        }
        temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x24);
        if (temp_a0_2 != 0) {
            func_00208D60(temp_a0_2);
        }
        func_0013B0B0(gBattle + 0x60);
        func_0013B960(var_s2 + 0x40);
        func_00209D20((s32)((void *)(NULL)));
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        func_00208D70((s32)((void *)(*(u8 **)((u8 *)var_s1 + 0x10))));
        func_0013B110(1);
        func_00209C50();
    }
}
