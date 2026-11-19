/* Draft (not built): func_0022BC30 at 0x0022BC30, size 0x348, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 132 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2C8, original 0x348
 * Original: asm/nonmatchings/battle/a2d/func_0022BC30.s */

// src/battle/a2d.c func_0022BC30 size diff=132/178
s32 func_0022BC30(s32 *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 var_f12;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a2;
    u8 *var_a0;
    u8 *var_v1;

    var_a0 = (unsigned char *)(arg0);
    var_f12 = fparg0;
    var_v0 = 0;
    if (var_a0 != NULL) {
        var_v1 = *(u8 **)((u8 *)var_a0 + 0x18);
        if (var_v1 != NULL) {
loop_3:
            temp_f0 = (f32) *(s32 *)((u8 *)var_a0 + 0x1C);
            if (temp_f0 <= var_f12) {
                var_a0 = var_v1;
                var_v1 = *(u8 **)((u8 *)var_v1 + 0x18);
                var_f12 -= temp_f0;
                if (var_v1 == NULL) {

                } else {
                    goto loop_3;
                }
            }
        }
        temp_a1 = *(u8 **)((u8 *)var_a0 + 4);
        if ((temp_a1 != NULL) && (*(s32 *)((u8 *)temp_a1 + 0x10) != 0)) {
            var_v1_2 = 0;
            if (*(s32 *)((u8 *)temp_a1 + 0) & 1) {

            } else {
                var_v1_2 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a1 + 6) <= var_f12)) {

                } else {
                    goto block_13;
                }
            }
        } else {
block_13:
            var_v1_2 = 4;
        }
        if ((temp_a1 != NULL) && (*(s32 *)((u8 *)temp_a1 + 0x18) != 0)) {
            var_v1_3 = 0;
            if (*(s32 *)((u8 *)temp_a1 + 0) & 2) {

            } else {
                var_v1_3 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a1 + 0xA) <= var_f12)) {

                } else {
                    goto block_22;
                }
            }
        } else {
block_22:
            var_v1_3 = 1;
        }
        temp_a1_2 = *(u8 **)((u8 *)var_a0 + 8);
        if ((temp_a1_2 != NULL) && (*(s32 *)((u8 *)temp_a1_2 + 0x18) != 0)) {
            var_v1_4 = 0;
            if (*(s32 *)((u8 *)temp_a1_2 + 0) & 2) {

            } else {
                var_v1_4 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a1_2 + 0xA) <= var_f12)) {

                } else {
                    goto block_30;
                }
            }
        } else {
block_30:
            var_v1_4 = 2;
        }
        if ((temp_a1_2 != NULL) && (*(s32 *)((u8 *)temp_a1_2 + 0x10) != 0)) {
            var_v1_5 = 0;
            if (*(s32 *)((u8 *)temp_a1_2 + 0) & 1) {

            } else {
                var_v1_5 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a1_2 + 6) <= var_f12)) {

                } else {
                    goto block_39;
                }
            }
        } else {
block_39:
            var_v1_5 = 8;
        }
        temp_a2 = *(u8 **)((u8 *)var_a0 + 0xC);
        if ((temp_a2 != NULL) && (*(s32 *)((u8 *)temp_a2 + 0x20) != 0)) {
            var_v1_6 = 0;
            if (*(s32 *)((u8 *)temp_a2 + 0) & 2) {

            } else {
                var_v1_6 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a2 + 0xA) <= var_f12)) {

                } else {
                    goto block_48;
                }
            }
        } else {
block_48:
            var_v1_6 = 0x10;
        }
        if ((temp_a2 != NULL) && (*(s32 *)((u8 *)temp_a2 + 0x28) != 0)) {
            var_v1_7 = 0;
            if (*(s32 *)((u8 *)temp_a2 + 0) & 4) {

            } else {
                var_v1_7 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a2 + 0xE) <= var_f12)) {

                } else {
                    goto block_57;
                }
            }
        } else {
block_57:
            var_v1_7 = 0x20;
        }
        var_a1 = 0 | var_v1_6 | var_v1_7;
        if ((temp_a2 != NULL) && (*(s32 *)((u8 *)temp_a2 + 0x18) != 0)) {
            if (!(*(s32 *)((u8 *)temp_a2 + 0) & 1) && ((f32) *(s16 *)((u8 *)temp_a2 + 6) <= var_f12)) {
                var_a1 |= 0x40;
            }
        } else {
            var_a1 |= 0x40;
        }
        temp_a0 = *(u8 **)((u8 *)var_a0 + 0x10);
        if ((temp_a0 != NULL) && (*(s32 *)((u8 *)temp_a0 + 8) != 0)) {
            var_v1_8 = 0;
            if (*(s32 *)((u8 *)temp_a0 + 0) & 1) {

            } else {
                var_v1_8 = 0;
                if (!((f32) *(s16 *)((u8 *)temp_a0 + 6) <= var_f12)) {

                } else {
                    goto block_71;
                }
            }
        } else {
block_71:
            var_v1_8 = 0x80;
        }
        var_v0 = 0 | var_v1_2 | var_v1_3 | var_v1_4 | var_v1_5 | var_a1 | var_v1_8;
    }
    return var_v0;
}
