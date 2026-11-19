/* Draft (not built): func_001C37F0 at 0x001C37F0, size 0x300, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 148 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x130, original 0x300
 * Original: asm/nonmatchings/battle/btl_main/func_001C37F0.s */

// src/battle/btl_main.c func_001C37F0 size diff=148/76
f32 func_00146F90(s32 *, s32 *);
extern void func_00146F30(void *);
void func_001C37F0(Fighter *arg0, void *arg1) {
    s32 sp40;
    f32 sp44;
    s32 sp50;
    f32 sp54;
    s32 sp60;
    f32 sp64;
    s32 sp70;
    f32 sp74;
    s32 sp80;
    f32 sp84;
    s32 sp90;
    f32 sp94;
    s16 temp_a0;
    s16 temp_a0_2;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_a0 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if ((temp_a0 != 0x1A) && (temp_a0 != 0x19)) {
        if ((temp_a0 != 0x12) && (temp_a0 != 0xB) && (temp_a0 != 9) && (temp_a0 != 4) && (temp_a0 != 3) && (temp_a0 != 2) && (temp_a0 != 1) && (temp_a0 != 0)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            sp84 = *(f32 *)((u8 *)arg0 + 0x64);
        }
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp74 = 0.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp64 = 0.0f;
        func_00146F30(&sp70);
        func_00146F10(&sp80, &sp70, func_00146F90(&sp70, &sp60));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp84 = *(f32 *)((u8 *)arg0 + 0x94);
    }
    if (*(s16 *)((u8 *)arg0 + 0x181C) != 0) {
        sp84 = *(f32 *)((u8 *)arg0 + 0x1818);
    }
    temp_a0_2 = *(s16 *)((u8 *)temp_s0 + 0xCAC);
    if ((temp_a0_2 != 6) && (temp_a0_2 != 5)) {
        if ((temp_a0_2 != 0x12) && (temp_a0_2 != 0xB) && (temp_a0_2 != 9) && (temp_a0_2 != 4) && (temp_a0_2 != 3) && (temp_a0_2 != 2) && (temp_a0_2 != 1) && (temp_a0_2 != 0)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            sp94 = *(f32 *)((u8 *)temp_s0 + 0x64);
        }
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp54 = 0.0f;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp44 = 0.0f;
        func_00146F30(&sp50);
        func_00146F10(&sp90, &sp50, func_00146F90(&sp50, &sp40));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp94 = *(f32 *)((u8 *)temp_s0 + 0x94);
    }
    if (*(s16 *)((u8 *)temp_s0 + 0x181C) != 0) {
        sp94 = *(f32 *)((u8 *)temp_s0 + 0x1818);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
}
