/* Draft (not built): func_001D8CD0 at 0x001D8CD0, size 0x304, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 106 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2DC, original 0x304
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D8CD0.s */

// src/unk/unk_1D5B30.c func_001D8CD0 size diff=106/183
s32 func_00146F10(void *, void *, s32);
s32 func_001C37F0(void *, void *);
s32 func_002CC4A0();
extern void func_00146F30(void *);
void func_001D8CD0(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    s16 temp_a0;
    s16 temp_a1;
    s32 temp_v0;
    u8 *temp_s0;
    u8 *temp_v1;

    temp_v0 = func_002CC4A0();
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        if (*(f32 *)((u8 *)gBattle + 0x890C) <= 1.0f) {
            goto block_4;
        }
    } else {
block_4:
        temp_v1 = arg0 + 0xA0;
        temp_s0 = arg0 + 0xB0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($s0) */);
        if ((*(s16 *)((u8 *)gBattle + 0x8944) == 0) && (*(s32 *)((u8 *)arg0 + 0x1898) == 0) && (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1898) != 0)) {
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                var_f1 = 1.5f;
            } else {
                var_f1 = 6.5f;
            }
            *(f32 *)((u8 *)temp_v1 + 4) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) + var_f1);
            return;
        }
        temp_a1 = *(s16 *)((u8 *)arg0 + 0xCAC);
        switch (temp_a1) {                          /* switch 1; irregular */
        case 40:                                    /* switch 1 */
        case 17:                                    /* switch 1 */
        case 22:                                    /* switch 1 */
        case 20:                                    /* switch 1 */
        case 16:                                    /* switch 1 */
            temp_f2 = *(f32 *)((u8 *)arg0 + 0x1844);
            if (*(f32 *)((u8 *)arg0 + 0x44) <= (temp_f2 + *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC))) {
                *(f32 *)((u8 *)temp_v1 + 4) = (f32) (13.0f + temp_f2);
            }
            break;
        case 15:                                    /* switch 1 */
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                var_f2 = 3.0f;
            } else {
                var_f2 = 13.0f;
            }
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x44) + var_f2;
            if (*(f32 *)((u8 *)temp_v1 + 4) < temp_f1) {
                *(f32 *)((u8 *)temp_v1 + 4) = temp_f1;
            }
            break;
        case 49:                                    /* switch 1 */
        case 14:                                    /* switch 1 */
        case 4:                                     /* switch 1 */
        case 50:                                    /* switch 1 */
        case 11:                                    /* switch 1 */
        case 9:                                     /* switch 1 */
        case 3:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
        case 0:                                     /* switch 1 */
            *(f32 *)((u8 *)arg0 + 0xA0) = (f32) *(f32 *)((u8 *)arg0 + 0x40);
            *(f32 *)((u8 *)temp_v1 + 8) = (f32) *(f32 *)((u8 *)arg0 + 0x48);
            /* fallthrough */
        default:                                    /* switch 1 */
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                var_f1_2 = 3.0f;
            } else {
                var_f1_2 = 13.0f;
            }
            *(f32 *)((u8 *)temp_v1 + 4) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) + var_f1_2);
            break;
        }
        temp_a0 = *(s16 *)((u8 *)arg0 + 0xCAC);
        switch (temp_a0) {                          /* switch 2; irregular */
        case 11:                                    /* switch 2 */
        case 9:                                     /* switch 2 */
            func_001C37F0(arg0, temp_s0);
            func_00146F10(temp_s0, temp_s0, 0x3D4CCCCD);
            return;
        case 40:                                    /* switch 2 */
            *(s32 *)((u8 *)arg0 + 0xB0) = 0;
            *(s32 *)((u8 *)temp_s0 + 4) = 0;
            *(s32 *)((u8 *)temp_s0 + 8) = 0x3F800000;
            *(s32 *)((u8 *)temp_s0 + 0xC) = 0x3F800000;
            return;
        case 23:                                    /* switch 2 */
        case 22:                                    /* switch 2 */
        case 20:                                    /* switch 2 */
        case 16:                                    /* switch 2 */
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
            func_00146F30(temp_s0);
            return;
        }
    }
}
