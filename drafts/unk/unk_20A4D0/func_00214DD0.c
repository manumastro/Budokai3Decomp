/* Draft (not built): func_00214DD0 at 0x00214DD0, size 0x1A8, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tifier 'jtbl_00469C40' mwccps2.exe Compiler: 3405: func_0020C600(&jtbl_00469C40); @ 3400: func_0020C600(&jtbl_00469C40);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00214DD0.s */

// src/unk/unk_20A4D0.c func_00214DD0 cerr diff=-1/0
void func_00214DD0(s32 *arg0) {
    s16 temp_a0;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x52);
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
        func_0020C600(&jtbl_00469C40);
        func_0020BF30(arg0);
        return;
    case 1:                                         /* switch 1 */
    case 8:                                         /* switch 1 */
        func_0020C600(&jtbl_00469C40);
        func_0020BF30(arg0);
        temp_v1_2 = *(s16 *)((u8 *)arg0 + 0x58);
        switch (temp_v1_2) {                        /* switch 2 */
        case 1:                                     /* switch 2 */
            func_00146F30(arg0 + 0x30);
            return;
        case 2:                                     /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00146F30(arg0 + 0x30);
            return;
        case 3:                                     /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00146F30(arg0 + 0x30);
            return;
        case 4:                                     /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00146F30(arg0 + 0x30);
            return;
        default:                                    /* switch 1 */
        default:                                    /* switch 2 */
            return;
        }
        break;
    case 2:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
        func_0020BF30(&jtbl_00469C40);
        temp_a0 = *(s16 *)((u8 *)arg0 + 0x54);
        if ((temp_a0 >= 6) && (temp_a0 != 0xB)) {
            *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x40);
        }
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 1);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        return;
    case 4:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
        func_0020C600(&jtbl_00469C40);
        break;
    }
}
