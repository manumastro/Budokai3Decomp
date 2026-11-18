/* Draft (not built): func_001E94C0 at 0x001E94C0, size 0x44C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 113 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x430, original 0x44C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E94C0.s */

// src/unk/unk_1D5B30.c func_001E94C0 size diff=113/268
f32 func_00146EB0(s32 *);
s32 func_00236090(void *);
s32 func_002CC240(void *, s32);
s32 func_001E94C0(u8 *arg0) {
    s32 sp50;
    f32 sp54;
    f32 temp_f0;
    f32 var_f1;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_v1_2;
    u8 *var_s2;
    u8 *var_s3;

    var_s3 = arg0;
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) <= 0) {
        return 0;
    }
    var_s2 = (u8 *)(gBattle);
    var_s1 = -1;
    var_s0 = func_001D9220(0);
    if (*(s8 *)((u8 *)var_s3 + 0x2013) == 1) {
        return 0x29;
    }
    if (*(s8 *)((u8 *)var_s3 + 0x200F) == 1) {
        return 0x33;
    }
    temp_v1 = *(s16 *)((u8 *)var_s2 + 0x7E2);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        temp_v1_2 = *(s8 *)((u8 *)gBattle + 0x8977);
        if (temp_v1_2 != 3) {
            var_s1 = 0;
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                if (var_s0 != 0) {
                    var_s1 = 1;
                }
                break;
            case 2:                                 /* switch 2 */
                if (!(*(f32 *)((u8 *)var_s3 + 0x1808) <= 0.0f) && (var_s0 != 0)) {
                    var_s1 = 1;
                }
                break;
            }
            return var_s1;
        }
    default:                                        /* switch 1 */
block_26:
        if (var_s1 < 0) {
            var_s1 = func_00236090(var_s3);
        }
        if (var_s1 == 1) {
            if (var_s0 == 0) {
                var_s1 = 0;
            } else if (func_001E3D60(*(s32 *)((u8 *)var_s3 + 0x17AC), 0x43480000) != 0) {
                var_s1 = 3;
            }
        }
        if (var_s1 == 4) {
            if (*(s8 *)((u8 *)var_s3 + 0x1FF8) == 1) {
                var_s1 = 0;
            }
            if (!(*(f32 *)((u8 *)var_s3 + 0x1A40) <= 0.0f)) {
                var_f1 = *(f32 *)((u8 *)var_s3 + 0x17D4);
            } else {
                var_f1 = *(f32 *)((u8 *)var_s3 + 0x17D0);
            }
            if (!(var_f1 < *(f32 *)((u8 *)var_s3 + 0x17D4))) {
                var_s1 = 0;
            }
            if (*(s8 *)((u8 *)var_s3 + 0x2010) != 0) {
                var_s1 = 0;
            }
        }
        if (var_s1 != 0x30) {
            if (var_s1 == 0x31) {
                goto block_47;
            }
        } else {
block_47:
            if (gBattle != NULL) {
                var_v0 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x800;
            } else {
                var_v0 = 0;
            }
            if (var_v0 == 0) {
                if (*(s16 *)((u8 *)var_s3 + 0x1FEC) == 0) {
                    goto block_54;
                }
            } else {
block_54:
                var_s1 = 0x31;
            }
            if (var_s1 == 0x31) {
                if (gBattle != NULL) {
                    var_v0_2 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x400;
                } else {
                    var_v0_2 = 0;
                }
                if (var_v0_2 != 0) {
                    var_s1 = 0;
                }
            }
            if (*(s8 *)((u8 *)var_s3 + 0x1FF8) == 1) {
                var_s1 = 0;
            }
        }
        if (func_001E3D60(*(s32 *)((u8 *)var_s3 + 0x17AC), 0x42F00000) != 0) {
            switch (var_s1) {                       /* switch 3; irregular */
            case 7:                                 /* switch 3 */
                var_s1 = 8;
                break;
            case 8:                                 /* switch 3 */
                var_s1 = 7;
                break;
            }
        }
        if ((func_001E3D60(*(s32 *)((u8 *)var_s3 + 0x17AC), 0x43110000) != 0) && (var_s1 != 0) && (var_s1 != 7) && (var_s1 != 8)) {
            var_s1 = 0xD;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp54 = 0.0f;
        temp_f0 = func_00146EB0(&sp50);
        if (var_s1 == 9) {
            temp_v1_3 = *(s16 *)((u8 *)var_s3 + 0xCAC);
            if (temp_v1_3 != 5) {
                if (temp_v1_3 == 9) {
                    goto block_78;
                }
                goto block_82;
            }
block_78:
            temp_v1_4 = *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x1354)) + 0xCAC);
            if ((temp_v1_4 != 6) && (temp_v1_4 != 0xB) && (temp_f0 < 225.0f)) {
block_82:
                var_s1 = 5;
            }
        }
        if (var_s1 == 0xB) {
            temp_v1_5 = *(s16 *)((u8 *)var_s3 + 0xCAC);
            switch (temp_v1_5) {                    /* switch 4; irregular */
            case 6:                                 /* switch 4 */
                if (!(temp_f0 < 19600.0f)) {
                default:                            /* switch 4 */
block_90:
                    var_s1 = 6;
                }
                break;
            case 11:                                /* switch 4 */
                if (!(temp_f0 <= 22500.0f)) {
                    goto block_90;
                }
                break;
            }
        }
        return var_s1;
    case 4:                                         /* switch 1 */
        temp_v0 = func_002CC240(var_s3, 1);
        if (temp_v0 != -3) {
            var_s1 = temp_v0;
        }
        goto block_26;
    }
}
