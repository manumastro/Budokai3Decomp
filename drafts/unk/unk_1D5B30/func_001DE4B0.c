/* Draft (not built): func_001DE4B0 at 0x001DE4B0, size 0xCBC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 524 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC58, original 0xCBC
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DE4B0.s */

// src/unk/unk_1D5B30.c func_001DE4B0 size diff=524/790
void func_001DE4B0(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 *var_a1;
    s32 *var_a1_2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f2;
    f32 var_f5;
    f32 var_s3_2;
    f32 var_s3_3;
    s16 temp_a0;
    s16 temp_s4;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s2;
    s32 var_t9;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_a0_2;
    u8 temp_s4_2;
    u8 temp_v1;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s2_2;
    u8 *var_s3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s2 = 0;
    temp_s0 = (u8 *)(gBattle);
    *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x44);
    *(s32 *)((u8 *)arg0 + 0x1A10) = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x46);
    *(s32 *)((u8 *)arg0 + 0x1A14) = (s32) (0x64 - *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x4A));
    var_s3 = *(u8 **)((u8 *)arg0 + 0x1CF4);
    if (*(s16 *)((u8 *)var_s3 + 0x34) > 0) {
        var_t9 = 0;
        var_a1 = (s32 *)6;
        var_a2 = 7;
        var_a3 = 8;
loop_2:
        temp_s4 = *(s16 *)((u8 *)(var_s3 + var_t9) + 0x36);
        if (temp_s4 > 0) {
            temp_s3 = &D_004E0660 + (temp_s4 * 0x28);
            temp_s4_2 = *(u8 *)((u8 *)temp_s3 + 0x15);
            switch (temp_s4_2) {                    /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)));
                break;
            case 2:                                 /* switch 1 */
                temp_f2 = 1.0f + (*(f32 *)((u8 *)temp_s0 + 0x8908) / (f32) (*(s16 *)((u8 *)temp_s3 + 0x18) * 0x3C));
                *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + ((f32) ((M2C_BITWISE(s32, temp_f2) >= 4) ? 6e-45f : temp_f2) * (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f))));
                break;
            case 3:                                 /* switch 1 */
                if (*(f32 *)((u8 *)temp_s0 + 0x8908) < (f32) (*(s16 *)((u8 *)temp_s3 + 0x18) * 0x3C)) {
                    *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)));
                }
                break;
            case 4:                                 /* switch 1 */
                if (*(f32 *)((u8 *)arg0 + 0x17C0) <= (100.0f * (f32) *(s16 *)((u8 *)temp_s3 + 0x18))) {
                    *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)));
                }
                break;
            case 5:                                 /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)));
                break;
            case 6:                                 /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + (*(s16 *)((u8 *)temp_s3 + 0x16) * (*(s8 *)((u8 *)arg0 + 0x1FC3) - 1)));
                break;
            case 7:                                 /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + (*(s16 *)((u8 *)temp_s3 + 0x16) * (*(s8 *)((u8 *)arg0 + 0x1FC4) - 1)));
                break;
            case 8:                                 /* switch 1 */
                var_s3_2 = (f32) *(s32 *)((u8 *)arg0 + 0x1A10) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
block_51:
                *(s32 *)((u8 *)arg0 + 0x1A10) = M2C_BITWISE(s32, var_s3_2);
                break;
            case 9:                                 /* switch 1 */
                var_s3_3 = 1.0f + (*(f32 *)((u8 *)temp_s0 + 0x8908) / (f32) (*(s16 *)((u8 *)temp_s3 + 0x18) * 0x3C));
                if (M2C_BITWISE(s32, var_s3_3) < 4) {

                } else {
                    var_s3_3 = 6e-45f;
                }
                var_s3_2 = (f32) *(s32 *)((u8 *)arg0 + 0x1A10) + ((f32) var_s3_3 * (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f));
                goto block_51;
            case 10:                                /* switch 1 */
                if (*(f32 *)((u8 *)temp_s0 + 0x8908) < (f32) (*(s16 *)((u8 *)temp_s3 + 0x18) * 0x3C)) {
                    var_s3_2 = (f32) *(s32 *)((u8 *)arg0 + 0x1A10) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
                    goto block_51;
                }
                break;
            case 11:                                /* switch 1 */
                var_s3_2 = M2C_BITWISE(f32, (*(s32 *)((u8 *)arg0 + 0x1A10) + (*(s16 *)((u8 *)temp_s3 + 0x16) * (*(s8 *)((u8 *)arg0 + 0x1FC8) - 1))));
                goto block_51;
            case 14:                                /* switch 1 */
            case 12:                                /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)));
                var_s3_2 = (f32) *(s32 *)((u8 *)arg0 + 0x1A10) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x18) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
                goto block_51;
            case 13:                                /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)));
                var_s3_2 = (f32) *(s32 *)((u8 *)arg0 + 0x1A10) + (((f32) *(s16 *)((u8 *)temp_s3 + 0x18) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
                goto block_51;
            case 21:                                /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A14) = M2C_BITWISE(s32, (0.01f * ((f32) *(s32 *)((u8 *)arg0 + 0x1A14) * (100.0f - (((f32) *(s16 *)((u8 *)temp_s3 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f)))));
                break;
            case 30:                                /* switch 1 */
                *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + (*(s16 *)((u8 *)(&D_004E0660 + (*(s16 *)((u8 *)arg0 + 0x1FE6) * 0x28)) + 0x16) * (*(s8 *)((u8 *)arg0 + 0x1FC3) - 1)));
                *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + (*(s16 *)((u8 *)(&D_004E0660 + (*(s16 *)((u8 *)arg0 + 0x1FEA) * 0x28)) + 0x16) * (*(s8 *)((u8 *)arg0 + 0x1FC4) - 1)));
                var_s3_2 = M2C_BITWISE(f32, (*(s32 *)((u8 *)arg0 + 0x1A10) + (*(s16 *)((u8 *)(&D_004E0660 + (*(s16 *)((u8 *)arg0 + 0x1FE8) * 0x28)) + 0x16) * (*(s8 *)((u8 *)arg0 + 0x1FC8) - 1))));
                goto block_51;
            }
            var_s3 = *(u8 **)((u8 *)arg0 + 0x1CF4);
            var_s2 += 1;
            var_t9 += 2;
            if (var_s2 < *(s16 *)((u8 *)var_s3 + 0x34)) {
                goto loop_2;
            }
        }
    }
    temp_a0 = *(s16 *)((u8 *)arg0 + 0x1FF0);
    if (temp_a0 == 0) {
        var_s2_2 = NULL;
    } else {
        var_s2_2 = &D_004E0660 + (temp_a0 * 0x28);
    }
    if (var_s2_2 != NULL) {
        temp_v0 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350));
        temp_v1 = *(u8 *)((u8 *)var_s2_2 + 0x15);
        var_f5 = -1.0f;
        switch (temp_v1) {                          /* switch 2 */
        case 0x68:                                  /* switch 2 */
            temp_f1 = ((f32) *(s16 *)((u8 *)var_s2_2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
            *(s32 *)((u8 *)arg0 + 0x1A14) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A14) - M2C_BITWISE(s32, temp_f1));
            *(f32 *)((u8 *)temp_v0 + 0xD4) = temp_f1;
            var_f5 = 60.0f * (f32) *(s16 *)((u8 *)var_s2_2 + 0x18);
            break;
        case 0x69:                                  /* switch 2 */
        case 0x6A:                                  /* switch 2 */
            temp_f1_2 = ((f32) *(s16 *)((u8 *)var_s2_2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
            *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + M2C_BITWISE(s32, temp_f1_2));
            *(f32 *)((u8 *)temp_v0 + 0xD8) = temp_f1_2;
            var_f5 = 60.0f * (f32) *(s16 *)((u8 *)var_s2_2 + 0x18);
            break;
        case 0x6B:                                  /* switch 2 */
            temp_f4 = *(f32 *)((u8 *)arg0 + 0x1FB8);
            temp_f1_3 = ((f32) *(s16 *)((u8 *)var_s2_2 + 0x16) * (100.0f + temp_f4)) / 100.0f;
            *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + M2C_BITWISE(s32, temp_f1_3));
            temp_f0 = ((f32) -*(s16 *)((u8 *)var_s2_2 + 0x18) * (100.0f - temp_f4)) / 100.0f;
            *(s32 *)((u8 *)arg0 + 0x1A10) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A10) + M2C_BITWISE(s32, temp_f0));
            *(f32 *)((u8 *)temp_v0 + 0xD8) = temp_f1_3;
            *(f32 *)((u8 *)temp_v0 + 0xDC) = temp_f0;
            break;
        case 0x6C:                                  /* switch 2 */
            temp_f1_4 = ((f32) *(s16 *)((u8 *)var_s2_2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
            *(s32 *)((u8 *)arg0 + 0x1A10) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A10) + M2C_BITWISE(s32, temp_f1_4));
            *(f32 *)((u8 *)temp_v0 + 0xDC) = temp_f1_4;
            var_f5 = 60.0f * (f32) *(s16 *)((u8 *)var_s2_2 + 0x18);
            break;
        case 0x6D:                                  /* switch 2 */
        case 0x6E:                                  /* switch 2 */
        case 0x70:                                  /* switch 2 */
            var_f5 = 60.0f * (f32) *(s16 *)((u8 *)var_s2_2 + 0x16);
            break;
        }
        if (!(var_f5 <= 0.0f)) {
            temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x1FF4) + var_f5;
            *(f32 *)((u8 *)temp_v0 + 0xE0) = var_f5;
            var_f0 = temp_f2_2 - *(f32 *)((u8 *)temp_s0 + 0x8908);
            *(f32 *)((u8 *)temp_v0 + 0xE4) = var_f0;
            if (!(var_f0 <= 0.0f)) {

            } else {
                var_f0 = 0.0f;
            }
            *(f32 *)((u8 *)temp_v0 + 0xE4) = var_f0;
            if (!(*(f32 *)((u8 *)temp_s0 + 0x8908) < temp_f2_2)) {
                *(s16 *)((u8 *)arg0 + 0x1FF0) = 0;
            }
        }
    }
    *(s32 *)((u8 *)arg0 + 0x1A0C) = M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)arg0 + 0x1A0C) + (f32) *(s8 *)((u8 *)(*(s32 *)((u8 *)arg0 + 0x1CF8) + (*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14)) + 0xDC)));
    var_a2_2 = *(s32 *)((u8 *)arg0 + 0xBA4);
    var_a1_2 = (s32 *)(&D_004693C0);
    if (var_a2_2 < 0) {

    }
loop_78:
    temp_v1_2 = *(s32 *)((u8 *)var_a1_2 + 0);
    if (temp_v1_2 == -1) {
        var_v1 = 0;
    } else if ((*(s32 *)((u8 *)arg0 + 0x1CFC) == temp_v1_2) && (var_a2_2 >= *(s32 *)((u8 *)var_a1_2 + 4))) {
        var_v1 = *(s32 *)((u8 *)var_a1_2 + 8);
    } else {
        var_a1_2 += 0xC;
        goto loop_78;
    }
    if (var_v1 != 1) {
        temp_f1_5 = *(f32 *)((u8 *)arg0 + 0x1A40);
        var_f0_2 = 0.0f;
        if (!(temp_f1_5 <= 0.0f)) {
            var_f2 = *(f32 *)((u8 *)arg0 + 0x17D4);
        } else {
            var_f2 = *(f32 *)((u8 *)arg0 + 0x17D0);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            if (!(temp_f1_5 <= 0.0f)) {
                var_f0_2 = *(f32 *)((u8 *)arg0 + 0x17D4);
            } else {
                var_f0_2 = *(f32 *)((u8 *)arg0 + 0x17E0);
            }
            if (!(var_f2 <= var_f0_2)) {

            } else {
                var_f0_2 = 0.0f;
                if (!(temp_f1_5 <= 0.0f)) {

                }
            }
        }
        temp_a0_2 = *(s8 *)((u8 *)((var_a2_2 * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD);
        var_a1_2 = (s32 *)((M2C_BITWISE(s32, var_f0_2) / 1000) + (M2C_BITWISE(u32, var_f0_2) >> 0x1F));
        temp_v1_3 = (s32)(var_a1_2 - temp_a0_2);
        var_v1_2 = temp_v1_3 * 2;
        var_a2_2 = var_v1_2;
        if ((var_a1_2 == (s32 *)7) && (temp_a0_2 != 7)) {
            var_a2_2 = var_v1_2 + 2;
        }
        if (var_a2_2 > 0) {

        } else {
            var_a2_2 = 0;
        }
        if (temp_v1_3 & 0x40000000) {

        } else {
            var_v1_2 = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x1A0C) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A0C) + var_a2_2);
        *(s32 *)((u8 *)arg0 + 0x1A10) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A10) + var_v1_2);
    }
    *(f32 *)((u8 *)arg0 + 0x1A20) = (f32) (0.01f * (f32) *(s32 *)((u8 *)arg0 + 0x1A14));
    *(f32 *)((u8 *)arg0 + 0x1A18) = (f32) (0.01f * (f32) *(s32 *)((u8 *)arg0 + 0x1A0C));
    *(f32 *)((u8 *)arg0 + 0x1A1C) = (f32) (0.01f * (f32) *(s32 *)((u8 *)arg0 + 0x1A10));
    temp_v0_2 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350));
    if (!(*(f32 *)((u8 *)arg0 + 0x1A18) < 0.0f)) {

    }
    temp_f3 = *(f32 *)((u8 *)arg0 + 0x1A1C);
    if (!(temp_f3 < 0.0f)) {
        var_f0_3 = 0.005f;
    } else {
        var_f0_3 = -0.005f;
    }
    *(s16 *)((u8 *)temp_v0_2 + 0x3A) = 0x64;
    *(s16 *)((u8 *)temp_v0_2 + 0x3C) = (s16) (M2C_BITWISE(s32, (100.0f * (temp_f3 + var_f0_3))) + 0x64);
}
