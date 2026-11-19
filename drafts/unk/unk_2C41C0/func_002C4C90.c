/* Draft (not built): func_002C4C90 at 0x002C4C90, size 0x1218, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d mwccps2.exe Compiler: 297: memcpy((f32 (*)[]) &spC0[0], arg1 + 0x10, 0x10); @ 296: memcpy((f32 (*)[]) &spB0[0], 0x10);
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C4C90.s */

// src/unk/unk_2C41C0.c func_002C4C90 cerr diff=-1/0
s32 memcpy(f32 (*)[], s32, s32);
s32 func_002C4C90(u8 *arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 spC0;
    s32 spB0;
    u8 sp[0x400];
    s32 sp100;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_a0;
    s32 var_a0_10;
    s32 var_a0_11;
    s32 var_a0_12;
    s32 var_a0_13;
    s32 var_a0_14;
    s32 var_a0_15;
    s32 var_a0_16;
    s32 var_a0_17;
    s32 var_a0_18;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a0_9;
    s32 var_a1;
    s32 var_a1_10;
    s32 var_a1_11;
    s32 var_a1_12;
    s32 var_a1_13;
    s32 var_a1_14;
    s32 var_a1_15;
    s32 var_a1_16;
    s32 var_a1_17;
    s32 var_a1_18;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_s7;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_15;
    s32 var_v1_16;
    s32 var_v1_17;
    s32 var_v1_18;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;

    var_s7 = 0;
    if (!(fparg0 <= 6.0f)) {
        var_s7 = 3;
        temp_f21 = (0.5f * fparg2) + fparg1;
        temp_f22 = (0.25f * fparg2) + fparg1;
        temp_f20 = (0.75f * fparg2) + fparg1;
        memcpy((f32 (*)[]) &spB0[0], 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x10, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1 = 0;
        var_a0 = 3;
        do {
            temp_v0 = var_a1 + var_a0;
            var_v1 = temp_v0 >> 1;
            if (temp_v0 < 0) {
                var_v1 = (s32) (temp_v0 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1 * 4) + sp) + 0xB0) < temp_f22) {
                var_a1 = var_v1 + 1;
            } else {
                var_a0 = var_v1;
            }
        } while (var_a1 < var_a0);
        if (var_a1 > 0) {
            var_a1 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1);
        }
        var_a1_2 = 0;
        var_a0_2 = 3;
        do {
            temp_v0_2 = var_a1_2 + var_a0_2;
            var_v1_2 = temp_v0_2 >> 1;
            if (temp_v0_2 < 0) {
                var_v1_2 = (s32) (temp_v0_2 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_2 * 4) + sp) + 0xB0) < temp_f21) {
                var_a1_2 = var_v1_2 + 1;
            } else {
                var_a0_2 = var_v1_2;
            }
        } while (var_a1_2 < var_a0_2);
        if (var_a1_2 > 0) {
            var_a1_2 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x10) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_2);
        }
        var_a1_3 = 0;
        var_a0_3 = 3;
        do {
            temp_v0_3 = var_a1_3 + var_a0_3;
            var_v1_3 = temp_v0_3 >> 1;
            if (temp_v0_3 < 0) {
                var_v1_3 = (s32) (temp_v0_3 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_3 * 4) + sp) + 0xB0) < temp_f20) {
                var_a1_3 = var_v1_3 + 1;
            } else {
                var_a0_3 = var_v1_3;
            }
        } while (var_a1_3 < var_a0_3);
        if (var_a1_3 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x20) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x20, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_4 = 0;
        var_a0_4 = 3;
        do {
            temp_v0_4 = var_a1_4 + var_a0_4;
            var_v1_4 = temp_v0_4 >> 1;
            if (temp_v0_4 < 0) {
                var_v1_4 = (s32) (temp_v0_4 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_4 * 4) + sp) + 0xB0) < temp_f22) {
                var_a1_4 = var_v1_4 + 1;
            } else {
                var_a0_4 = var_v1_4;
            }
        } while (var_a1_4 < var_a0_4);
        if (var_a1_4 > 0) {
            var_a1_4 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_4);
        }
        var_a1_5 = 0;
        var_a0_5 = 3;
        do {
            temp_v0_5 = var_a1_5 + var_a0_5;
            var_v1_5 = temp_v0_5 >> 1;
            if (temp_v0_5 < 0) {
                var_v1_5 = (s32) (temp_v0_5 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_5 * 4) + sp) + 0xB0) < temp_f21) {
                var_a1_5 = var_v1_5 + 1;
            } else {
                var_a0_5 = var_v1_5;
            }
        } while (var_a1_5 < var_a0_5);
        if (var_a1_5 > 0) {
            var_a1_5 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x14) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_5);
        }
        var_a1_6 = 0;
        var_a0_6 = 3;
        do {
            temp_v0_6 = var_a1_6 + var_a0_6;
            var_v1_6 = temp_v0_6 >> 1;
            if (temp_v0_6 < 0) {
                var_v1_6 = (s32) (temp_v0_6 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_6 * 4) + sp) + 0xB0) < temp_f20) {
                var_a1_6 = var_v1_6 + 1;
            } else {
                var_a0_6 = var_v1_6;
            }
        } while (var_a1_6 < var_a0_6);
        if (var_a1_6 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x24) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x30, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_7 = 0;
        var_a0_7 = 3;
        do {
            temp_v0_7 = var_a1_7 + var_a0_7;
            var_v1_7 = temp_v0_7 >> 1;
            if (temp_v0_7 < 0) {
                var_v1_7 = (s32) (temp_v0_7 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_7 * 4) + sp) + 0xB0) < temp_f22) {
                var_a1_7 = var_v1_7 + 1;
            } else {
                var_a0_7 = var_v1_7;
            }
        } while (var_a1_7 < var_a0_7);
        if (var_a1_7 > 0) {
            var_a1_7 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 8) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_7);
        }
        var_a1_8 = 0;
        var_a0_8 = 3;
        do {
            temp_v0_8 = var_a1_8 + var_a0_8;
            var_v1_8 = temp_v0_8 >> 1;
            if (temp_v0_8 < 0) {
                var_v1_8 = (s32) (temp_v0_8 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_8 * 4) + sp) + 0xB0) < temp_f21) {
                var_a1_8 = var_v1_8 + 1;
            } else {
                var_a0_8 = var_v1_8;
            }
        } while (var_a1_8 < var_a0_8);
        if (var_a1_8 > 0) {
            var_a1_8 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_8);
        }
        var_a1_9 = 0;
        var_a0_9 = 3;
        do {
            temp_v0_9 = var_a1_9 + var_a0_9;
            var_v1_9 = temp_v0_9 >> 1;
            if (temp_v0_9 < 0) {
                var_v1_9 = (s32) (temp_v0_9 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_9 * 4) + sp) + 0xB0) < temp_f20) {
                var_a1_9 = var_v1_9 + 1;
            } else {
                var_a0_9 = var_v1_9;
            }
        } while (var_a1_9 < var_a0_9);
        if (var_a1_9 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x28) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        *(s32 *)((u8 *)arg0 + 0xC) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0x2C) = 0x3F800000;
    } else if ((fparg0 <= 6.0f) && !(fparg0 <= 2.0f)) {
        var_s7 = 2;
        temp_f21_2 = (0.33f * fparg2) + fparg1;
        temp_f20_2 = (0.67f * fparg2) + fparg1;
        memcpy((f32 (*)[]) &spB0[0], 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x10, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_10 = 0;
        var_a0_10 = 3;
        do {
            temp_v0_10 = var_a1_10 + var_a0_10;
            var_v1_10 = temp_v0_10 >> 1;
            if (temp_v0_10 < 0) {
                var_v1_10 = (s32) (temp_v0_10 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_10 * 4) + sp) + 0xB0) < temp_f21_2) {
                var_a1_10 = var_v1_10 + 1;
            } else {
                var_a0_10 = var_v1_10;
            }
        } while (var_a1_10 < var_a0_10);
        if (var_a1_10 > 0) {
            var_a1_10 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_10);
        }
        var_a1_11 = 0;
        var_a0_11 = 3;
        do {
            temp_v0_11 = var_a1_11 + var_a0_11;
            var_v1_11 = temp_v0_11 >> 1;
            if (temp_v0_11 < 0) {
                var_v1_11 = (s32) (temp_v0_11 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_11 * 4) + sp) + 0xB0) < temp_f20_2) {
                var_a1_11 = var_v1_11 + 1;
            } else {
                var_a0_11 = var_v1_11;
            }
        } while (var_a1_11 < var_a0_11);
        if (var_a1_11 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x10) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x20, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_12 = 0;
        var_a0_12 = 3;
        do {
            temp_v0_12 = var_a1_12 + var_a0_12;
            var_v1_12 = temp_v0_12 >> 1;
            if (temp_v0_12 < 0) {
                var_v1_12 = (s32) (temp_v0_12 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_12 * 4) + sp) + 0xB0) < temp_f21_2) {
                var_a1_12 = var_v1_12 + 1;
            } else {
                var_a0_12 = var_v1_12;
            }
        } while (var_a1_12 < var_a0_12);
        if (var_a1_12 > 0) {
            var_a1_12 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_12);
        }
        var_a1_13 = 0;
        var_a0_13 = 3;
        do {
            temp_v0_13 = var_a1_13 + var_a0_13;
            var_v1_13 = temp_v0_13 >> 1;
            if (temp_v0_13 < 0) {
                var_v1_13 = (s32) (temp_v0_13 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_13 * 4) + sp) + 0xB0) < temp_f20_2) {
                var_a1_13 = var_v1_13 + 1;
            } else {
                var_a0_13 = var_v1_13;
            }
        } while (var_a1_13 < var_a0_13);
        if (var_a1_13 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x14) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x30, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_14 = 0;
        var_a0_14 = 3;
        do {
            temp_v0_14 = var_a1_14 + var_a0_14;
            var_v1_14 = temp_v0_14 >> 1;
            if (temp_v0_14 < 0) {
                var_v1_14 = (s32) (temp_v0_14 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_14 * 4) + sp) + 0xB0) < temp_f21_2) {
                var_a1_14 = var_v1_14 + 1;
            } else {
                var_a0_14 = var_v1_14;
            }
        } while (var_a1_14 < var_a0_14);
        if (var_a1_14 > 0) {
            var_a1_14 -= 1;
        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 8) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0], var_a1_14);
        }
        var_a1_15 = 0;
        var_a0_15 = 3;
        do {
            temp_v0_15 = var_a1_15 + var_a0_15;
            var_v1_15 = temp_v0_15 >> 1;
            if (temp_v0_15 < 0) {
                var_v1_15 = (s32) (temp_v0_15 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_15 * 4) + sp) + 0xB0) < temp_f20_2) {
                var_a1_15 = var_v1_15 + 1;
            } else {
                var_a0_15 = var_v1_15;
            }
        } while (var_a1_15 < var_a0_15);
        if (var_a1_15 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0x18) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        *(s32 *)((u8 *)arg0 + 0xC) = 0x3F800000;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0x3F800000;
    } else if ((fparg0 <= 2.0f) && !(fparg0 <= 0.5f)) {
        var_s7 = 1;
        temp_f20_3 = (0.5f * fparg2) + fparg1;
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x10, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_16 = 0;
        var_a0_16 = 3;
        do {
            temp_v0_16 = var_a1_16 + var_a0_16;
            var_v1_16 = temp_v0_16 >> 1;
            if (temp_v0_16 < 0) {
                var_v1_16 = (s32) (temp_v0_16 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_16 * 4) + sp) + 0xB0) < temp_f20_3) {
                var_a1_16 = var_v1_16 + 1;
            } else {
                var_a0_16 = var_v1_16;
            }
        } while (var_a1_16 < var_a0_16);
        if (var_a1_16 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x20, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_17 = 0;
        var_a0_17 = 3;
        do {
            temp_v0_17 = var_a1_17 + var_a0_17;
            var_v1_17 = temp_v0_17 >> 1;
            if (temp_v0_17 < 0) {
                var_v1_17 = (s32) (temp_v0_17 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_17 * 4) + sp) + 0xB0) < temp_f20_3) {
                var_a1_17 = var_v1_17 + 1;
            } else {
                var_a0_17 = var_v1_17;
            }
        } while (var_a1_17 < var_a0_17);
        if (var_a1_17 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 4) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        memcpy((f32 (*)[]) &spB0[0], arg1, 0x10);
        memcpy((f32 (*)[]) &spC0[0], arg1 + 0x30, 0x10);
        sp100 = 0x200;
        func_002C61A0((f32 (*)[]) &spB0[0]);
        if (!(sp100 & 0x100)) {
            func_002C61A0((f32 (*)[]) &spB0[0]);
        }
        var_a1_18 = 0;
        var_a0_18 = 3;
        do {
            temp_v0_18 = var_a1_18 + var_a0_18;
            var_v1_18 = temp_v0_18 >> 1;
            if (temp_v0_18 < 0) {
                var_v1_18 = (s32) (temp_v0_18 + 1) >> 1;
            }
            if (*(f32 *)((u8 *)((var_v1_18 * 4) + sp) + 0xB0) < temp_f20_3) {
                var_a1_18 = var_v1_18 + 1;
            } else {
                var_a0_18 = var_v1_18;
            }
        } while (var_a1_18 < var_a0_18);
        if (var_a1_18 > 0) {

        }
        M2C_ERROR(/* unknown instruction: adda.s $f2, $f1 */);
        *(f32 *)((u8 *)arg0 + 8) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f4, $f0 */);
        *(s32 *)((u8 *)arg0 + 0xC) = 0x3F800000;
    }
    return var_s7;
}
