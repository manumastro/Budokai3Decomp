/* Draft (not built): func_0021A820 at 0x0021A820, size 0x110, segment unk/unk_21A4C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 53 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC0, original 0x110
 * Original: asm/nonmatchings/unk/unk_21A4C0/func_0021A820.s */

// src/unk/unk_21A4C0.c func_0021A820 size diff=53/48
s32 func_00146F60(s32 *, void *);
void *func_00209540(s32, s32, s32);
void *func_00243DC0(s32);
extern void func_00141C30(void *, void *, void *);
extern void func_00209850(void *, void *);
void func_0021A820(u8 *arg0) {
    s32 sp40;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 var_a1;
    s32 temp_a0;
    s64 var_s2;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s1;

    var_s1 = arg0;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_s2 = (s64) *(s16 *)((u8 *)var_s1 + 0x56) << 0x30;
    var_s2 = var_s2 >> 0x30;
    temp_v0 = func_00243DC0(*(s32 *)((u8 *)var_s0 + 0x1350));
    temp_a0 = *(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_v0 + 8) + var_s2) * 4) + temp_v0) + 0x14);
    if (*(s32 *)((u8 *)var_s0 + 0x1350) != 0) {
        var_a1 = 0x04000020;
    } else {
        var_a1 = 0x04000010;
    }
    *(u8 **)((u8 *)var_s1 + 0x40) = func_00209540(temp_a0, var_a1, 0);
    if (*(u8 **)((u8 *)var_s1 + 0x40) != NULL) {
        sp54 = 0x3F800000;
        sp5C = 0x3F800000;
        sp50 = 0;
        sp58 = 0;
        func_00146F60(&sp40, var_s1 + 0x10);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_00141C30(&sp60, &sp50, &sp40);
        func_00209850(*(u8 **)((u8 *)var_s1 + 0x40), &sp60);
    }
}
