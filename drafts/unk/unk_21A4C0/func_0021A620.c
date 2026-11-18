/* Draft (not built): func_0021A620 at 0x0021A620, size 0x1A8, segment unk/unk_21A4C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 83 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xF4, original 0x1A8
 * Original: asm/nonmatchings/unk/unk_21A4C0/func_0021A620.s */

// src/unk/unk_21A4C0.c func_0021A620 size diff=83/61
s32 func_00209950(void *, s32 *, s32);
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern void func_00208F70(void *);
s32 func_0021A620(u8 *arg0) {
    s32 sp20;
    s32 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 sp60;
    u8 *sp70;
    u8 *sp74;
    s32 sp78;
    s32 temp_a2;
    u8 *temp_a0;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x30);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x50) << 0x30) >> 0x30) & 1) {
        return 1;
    }
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x34)) + 0x48) == 0) {
        sp70 = arg0;
        sp74 = arg0 + 0x10;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        sp78 = temp_a2;
        *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&sp70) + 0);
        *(s128 *)((u8 *)(&sp20) + 0x10) = (s128) *(s128 *)((u8 *)(&sp70) + 0x10);
        D_0046A3FC(&sp20, &sp20, temp_a2);
        *(s16 *)((u8 *)arg0 + 0x50) = (s16) (*(s16 *)((u8 *)arg0 + 0x50) | 1);
    }
    if (*(u8 **)((u8 *)arg0 + 0x40) != NULL) {
        sp54 = 1.0f;
        sp50 = 0.0f;
        sp5C = 1.0f;
        sp58 = 0.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        func_00146F30(&sp40);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_00141C30(&sp60, &sp50, &sp40);
        func_00209950(*(u8 **)((u8 *)arg0 + 0x40), &sp60, 0);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x40);
    if (temp_a0 != NULL) {
        func_00208F70(temp_a0);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x40) = NULL;
        }
    }
    return 0;
}
