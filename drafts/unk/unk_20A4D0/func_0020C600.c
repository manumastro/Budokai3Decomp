/* Draft (not built): func_0020C600 at 0x0020C600, size 0x58C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ared as: 'void (unsigned char *, unsigned char *, int, float)' @ 2450: void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020C600.s */

// src/unk/unk_20A4D0.c func_0020C600 cerr diff=-1/0
void func_0020C600(u8 *arg0) {
    s32 sp10;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x54);
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        return;
    case 1:                                         /* switch 1 */
        temp_a1 = *(s32 *)((u8 *)arg0 + 0x78);
        switch (temp_a1) {                          /* switch 2; irregular */
        case 24:                                    /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        case 23:                                    /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        case 25:                                    /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        default:                                    /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_a1_2 = *(s32 *)((u8 *)arg0 + 0x78);
        switch (temp_a1_2) {                        /* switch 3; irregular */
        case 24:                                    /* switch 3 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            break;
        case 23:                                    /* switch 3 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            break;
        case 25:                                    /* switch 3 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            break;
        default:                                    /* switch 3 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            break;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        return;
    case 3:                                         /* switch 1 */
        func_0020D120(*(u8 **)((u8 *)arg0 + 0x6C), *(s32 *)((u8 *)arg0 + 0x78), *(f32 *)((u8 *)arg0 + 0x10));
        return;
    case 4:                                         /* switch 1 */
        func_0020D290(*(u8 **)((u8 *)arg0 + 0x6C), *(s32 *)((u8 *)arg0 + 0x78), *(f32 *)((u8 *)arg0 + 0x18));
        return;
    case 5:                                         /* switch 1 */
        func_0020CF60(*(u8 **)((u8 *)arg0 + 0x6C), *(s32 *)((u8 *)arg0 + 0x78), *(f32 *)((u8 *)arg0 + 0x10), *(f32 *)((u8 *)arg0 + 0x18));
        return;
    case 6:                                         /* switch 1 */
        temp_a2 = *(s32 *)((u8 *)arg0 + 0x78);
        switch (temp_a2) {                          /* switch 4; irregular */
        case 24:                                    /* switch 4 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        case 23:                                    /* switch 4 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        case 25:                                    /* switch 4 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        default:                                    /* switch 4 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            return;
        }
        break;
    case 7:                                         /* switch 1 */
        temp_a2_2 = *(s32 *)((u8 *)arg0 + 0x78);
        switch (temp_a2_2) {                        /* switch 5; irregular */
        case 24:                                    /* switch 5 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            break;
        case 23:                                    /* switch 5 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            break;
        case 25:                                    /* switch 5 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
            M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
            M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
            M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            break;
        default:                                    /* switch 5 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
            break;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        return;
    case 8:                                         /* switch 1 */
        func_0020D120(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1354), *(s32 *)((u8 *)arg0 + 0x78), *(f32 *)((u8 *)arg0 + 0x10));
        return;
    case 9:                                         /* switch 1 */
        func_0020D290(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1354), *(s32 *)((u8 *)arg0 + 0x78), *(f32 *)((u8 *)arg0 + 0x18));
        return;
    case 10:                                        /* switch 1 */
        func_0020CF60(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1354), *(s32 *)((u8 *)arg0 + 0x78), *(f32 *)((u8 *)arg0 + 0x10), *(f32 *)((u8 *)arg0 + 0x18));
        return;
    case 11:                                        /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 1);
        return;
    case 12:                                        /* switch 1 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x40);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 1);
        /* fallthrough */
    default:                                        /* switch 1 */
        return;
    }
}
