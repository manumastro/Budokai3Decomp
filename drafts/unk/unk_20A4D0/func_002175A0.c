/* Draft (not built): func_002175A0 at 0x002175A0, size 0x2D0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 92 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2AC, original 0x2D0
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002175A0.s */

// src/unk/unk_20A4D0.c func_002175A0 size diff=92/171
void func_002175A0(u8 *arg0) {
    s32 sp60;
    s16 var_s3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_t1;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s4;
    u8 *var_s1;

    var_s1 = arg0;
    temp_t1 = *(s32 *)((u8 *)arg0 + 0x10);
    var_s0 = D_0046FDD0 + 0x188;
    *(s32 *)((u8 *)((temp_t1 * 4) + var_s0) + 0x10) = (s32) *(s32 *)((u8 *)arg0 + 0x14);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0xC);
    var_s2 = gBattle + (temp_t1 * 0x2020) + 0x830;
    switch (temp_a0) {                              /* irregular */
    case 1:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 **)((u8 *)var_s1 + 0) = &sp60;
        *(s16 *)((u8 *)var_s1 + 0x22) = 0;
        *(s16 *)((u8 *)var_s1 + 0x20) = 0xC;
        *(s16 *)((u8 *)var_s1 + 0x24) = 0;
        temp_a0_2 = *(D_0046FDD0 + (((s64) ((s64) *(s16 *)((u8 *)var_s1 + 0x20) << 0x30) >> 0x30) * 4));
        var_s2 = D_0046FDD0 + 0x188;
        if (temp_a0_2 != 0) {
            *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s2) + 0x18) = func_00209540(temp_a0_2, 0x04000002, 0);
        }
        *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 8) = 1;
        return;
    case 2:
        temp_a0_3 = *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 0x18);
        if (temp_a0_3 != 0) {
            Obj_ResetF38(temp_a0_3);
            *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 0x18) = 0;
        }
        *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 8) = 0;
        return;
    case 3:
        temp_a0_4 = *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 0x18);
        if (temp_a0_4 != 0) {
            Obj_ResetF38(temp_a0_4);
            *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 0x18) = 0;
        }
        func_00216F50(var_s1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(s32 **)((u8 *)var_s1 + 0) = &sp60;
        *(s16 *)((u8 *)var_s1 + 0x22) = 0;
        *(s16 *)((u8 *)var_s1 + 0x20) = 0xD;
        *(s16 *)((u8 *)var_s1 + 0x24) = 0;
        var_s4 = func_00215320(-1, 0x10);
        var_s3 = *(s16 *)((u8 *)var_s1 + 0x20);
        if (var_s4 != NULL) {
            var_s2 = var_s4 + 0x20;
            *(s32 **)((u8 *)var_s4 + 8) = (int *)(&func_00212480);
            *(void (**)(u8 *))((u8 *)var_s4 + 0xC) = func_00212650;
            memset(var_s2, 0, 0x50);
            temp_a0_5 = *(D_0046FDD0 + (var_s3 * 4));
            if (temp_a0_5 != 0) {
                *(s32 *)((u8 *)var_s4 + 0x10) = func_00209540(temp_a0_5, 0x04000002, 0);
            }
            if (*(s32 *)((u8 *)var_s4 + 0x10) != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
                *(s32 *)((u8 *)var_s2 + 0x20) = (s32) *(D_0046FDD0 + (((s64) ((s64) *(s16 *)((u8 *)var_s1 + 0x22) << 0x30) >> 0x30) * 4));
                *(s32 *)((u8 *)var_s2 + 0x28) = (s32) ((((s64) ((s64) *(s16 *)((u8 *)var_s1 + 0x22) << 0x30) >> 0x30) << 5) + 0x03001000);
            }
        }
        *(s32 *)((u8 *)((*(s32 *)((u8 *)var_s1 + 0x10) * 4) + var_s0) + 8) = 1;
        return;
    }
}
