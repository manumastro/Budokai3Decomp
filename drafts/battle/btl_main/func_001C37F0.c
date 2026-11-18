/* Draft (not built): func_001C37F0 at 0x001C37F0, size 0x300, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); gal implicit conversion from 'void *' to 'int' mwccps2.exe Compiler: @ 3785: func_001C37F0(f, (void *)((u8 *)f + 0xD0));
 * Original: asm/nonmatchings/battle/btl_main/func_001C37F0.s */

// src/battle/btl_main.c func_001C37F0 cerr diff=-1/0
f32 func_00146F90(s32 *, s32 *);
extern void func_00146F30(void *);
void func_001C37F0(u8 *arg0, s32 arg1) {
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
    switch (temp_a0) {                              /* switch 1; irregular */
    case 18:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
    case 9:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp84 = *(f32 *)((u8 *)arg0 + 0x64);
        break;
    case 26:                                        /* switch 1 */
    case 25:                                        /* switch 1 */
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
        break;
    default:                                        /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        break;
    }
    if (*(s16 *)((u8 *)arg0 + 0x181C) != 0) {
        sp84 = *(f32 *)((u8 *)arg0 + 0x1818);
    }
    temp_a0_2 = *(s16 *)((u8 *)temp_s0 + 0xCAC);
    switch (temp_a0_2) {                            /* switch 2; irregular */
    case 18:                                        /* switch 2 */
    case 11:                                        /* switch 2 */
    case 9:                                         /* switch 2 */
    case 4:                                         /* switch 2 */
    case 3:                                         /* switch 2 */
    case 2:                                         /* switch 2 */
    case 1:                                         /* switch 2 */
    case 0:                                         /* switch 2 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp94 = *(f32 *)((u8 *)temp_s0 + 0x64);
        break;
    case 6:                                         /* switch 2 */
    case 5:                                         /* switch 2 */
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
        break;
    default:                                        /* switch 2 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        break;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0x181C) != 0) {
        sp94 = *(f32 *)((u8 *)temp_s0 + 0x1818);
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
}
