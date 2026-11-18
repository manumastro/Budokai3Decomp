/* Draft (not built): func_001E0A50 at 0x001E0A50, size 0x788, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 301 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xF98, original 0x788
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E0A50.s */

// src/unk/unk_1D5B30.c func_001E0A50 size diff=301/998
void func_001E0A50(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 var_a1;
    f32 var_a1_10;
    f32 var_a1_11;
    f32 var_a1_12;
    f32 var_a1_2;
    f32 var_a1_3;
    f32 var_a1_4;
    f32 var_a1_5;
    f32 var_a1_6;
    f32 var_a1_7;
    f32 var_a1_8;
    f32 var_a1_9;
    f32 var_f1;
    f32 var_f2;
    f32 var_f2_10;
    f32 var_f2_11;
    f32 var_f2_12;
    f32 var_f2_13;
    f32 var_f2_14;
    f32 var_f2_15;
    f32 var_f2_16;
    f32 var_f2_17;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    f32 var_f2_5;
    f32 var_f2_6;
    f32 var_f2_7;
    f32 var_f2_8;
    f32 var_f2_9;
    u8 temp_v1;
    u8 temp_v1_10;
    u8 temp_v1_11;
    u8 temp_v1_12;
    u8 temp_v1_13;
    u8 temp_v1_14;
    u8 temp_v1_15;
    u8 temp_v1_16;
    u8 temp_v1_17;
    u8 temp_v1_18;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;

    if ((*(s32 *)((u8 *)arg0 + 0x186C) >= 2) && (*(f32 *)((u8 *)arg0 + 0x1870) < 1.0f)) {
        temp_v1 = *(u8 *)((u8 *)arg0 + 0x1888);
        if ((s32) temp_v1 >= 0) {
            var_f2 = (f32) temp_v1;
        } else {
            var_f2 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        }
        temp_f1 = var_f2 * *(f32 *)((u8 *)arg0 + 0x1880);
        if (!(temp_f1 >= 2.1474836e9f)) {
            var_a1 = temp_f1;
        } else {
            var_a1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x1888) = M2C_BITWISE(u8, var_a1);
        temp_v1_2 = *(u8 *)((u8 *)arg0 + 0x1889);
        if ((s32) temp_v1_2 >= 0) {
            var_f2_2 = (f32) temp_v1_2;
        } else {
            var_f2_2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
        }
        temp_f1_2 = var_f2_2 * *(f32 *)((u8 *)arg0 + 0x1880);
        if (!(temp_f1_2 >= 2.1474836e9f)) {
            var_a1_2 = temp_f1_2;
        } else {
            var_a1_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_2 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x1889) = M2C_BITWISE(u8, var_a1_2);
        temp_v1_3 = *(u8 *)((u8 *)arg0 + 0x188A);
        if ((s32) temp_v1_3 >= 0) {
            var_f2_3 = (f32) temp_v1_3;
        } else {
            var_f2_3 = 2.0f * (f32) ((temp_v1_3 >> 1) | (temp_v1_3 & 1));
        }
        temp_f1_3 = var_f2_3 * *(f32 *)((u8 *)arg0 + 0x1880);
        if (!(temp_f1_3 >= 2.1474836e9f)) {
            var_a1_3 = temp_f1_3;
        } else {
            var_a1_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_3 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x188A) = M2C_BITWISE(u8, var_a1_3);
        temp_v1_4 = *(u8 *)((u8 *)arg0 + 0x188C);
        if ((s32) temp_v1_4 >= 0) {
            var_f2_4 = (f32) temp_v1_4;
        } else {
            var_f2_4 = 2.0f * (f32) ((temp_v1_4 >> 1) | (temp_v1_4 & 1));
        }
        temp_f1_4 = var_f2_4 * *(f32 *)((u8 *)arg0 + 0x1880);
        if (!(temp_f1_4 >= 2.1474836e9f)) {
            var_a1_4 = temp_f1_4;
        } else {
            var_a1_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_4 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x188C) = M2C_BITWISE(u8, var_a1_4);
        temp_v1_5 = *(u8 *)((u8 *)arg0 + 0x188D);
        if ((s32) temp_v1_5 >= 0) {
            var_f2_5 = (f32) temp_v1_5;
        } else {
            var_f2_5 = 2.0f * (f32) ((temp_v1_5 >> 1) | (temp_v1_5 & 1));
        }
        temp_f1_5 = var_f2_5 * *(f32 *)((u8 *)arg0 + 0x1880);
        if (!(temp_f1_5 >= 2.1474836e9f)) {
            var_a1_5 = temp_f1_5;
        } else {
            var_a1_5 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_5 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x188D) = M2C_BITWISE(u8, var_a1_5);
        temp_v1_6 = *(u8 *)((u8 *)arg0 + 0x188E);
        if ((s32) temp_v1_6 >= 0) {
            var_f2_6 = (f32) temp_v1_6;
        } else {
            var_f2_6 = 2.0f * (f32) ((temp_v1_6 >> 1) | (temp_v1_6 & 1));
        }
        temp_f1_6 = var_f2_6 * *(f32 *)((u8 *)arg0 + 0x1880);
        if (!(temp_f1_6 >= 2.1474836e9f)) {
            var_a1_6 = temp_f1_6;
        } else {
            var_a1_6 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_6 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x188E) = M2C_BITWISE(u8, var_a1_6);
        temp_f1_7 = *(f32 *)((u8 *)arg0 + 0x1870);
        temp_v1_7 = *(u8 *)((u8 *)arg0 + 0x1878);
        temp_f0 = 1.0f - temp_f1_7;
        if ((s32) temp_v1_7 >= 0) {
            var_f2_7 = (f32) temp_v1_7;
        } else {
            var_f2_7 = 2.0f * (f32) ((temp_v1_7 >> 1) | (temp_v1_7 & 1));
        }
        temp_v1_8 = *(u8 *)((u8 *)arg0 + 0x1888);
        if ((s32) temp_v1_8 >= 0) {
            var_f2_8 = (f32) temp_v1_8;
        } else {
            var_f2_8 = 2.0f * (f32) ((temp_v1_8 >> 1) | (temp_v1_8 & 1));
        }
        temp_f3 = (var_f2_7 * temp_f1_7) + (var_f2_8 * temp_f0);
        if (!(temp_f3 >= 2.1474836e9f)) {
            var_a1_7 = temp_f3;
        } else {
            var_a1_7 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x1878) = M2C_BITWISE(u8, var_a1_7);
        temp_v1_9 = *(u8 *)((u8 *)arg0 + 0x1879);
        if ((s32) temp_v1_9 >= 0) {
            var_f2_9 = (f32) temp_v1_9;
        } else {
            var_f2_9 = 2.0f * (f32) ((temp_v1_9 >> 1) | (temp_v1_9 & 1));
        }
        temp_v1_10 = *(u8 *)((u8 *)arg0 + 0x1889);
        if ((s32) temp_v1_10 >= 0) {
            var_f2_10 = (f32) temp_v1_10;
        } else {
            var_f2_10 = 2.0f * (f32) ((temp_v1_10 >> 1) | (temp_v1_10 & 1));
        }
        temp_f3_2 = (var_f2_9 * temp_f1_7) + (var_f2_10 * temp_f0);
        if (!(temp_f3_2 >= 2.1474836e9f)) {
            var_a1_8 = temp_f3_2;
        } else {
            var_a1_8 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_2 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x1879) = M2C_BITWISE(u8, var_a1_8);
        temp_v1_11 = *(u8 *)((u8 *)arg0 + 0x187A);
        if ((s32) temp_v1_11 >= 0) {
            var_f2_11 = (f32) temp_v1_11;
        } else {
            var_f2_11 = 2.0f * (f32) ((temp_v1_11 >> 1) | (temp_v1_11 & 1));
        }
        temp_v1_12 = *(u8 *)((u8 *)arg0 + 0x188A);
        if ((s32) temp_v1_12 >= 0) {
            var_f2_12 = (f32) temp_v1_12;
        } else {
            var_f2_12 = 2.0f * (f32) ((temp_v1_12 >> 1) | (temp_v1_12 & 1));
        }
        temp_f3_3 = (var_f2_11 * temp_f1_7) + (var_f2_12 * temp_f0);
        if (!(temp_f3_3 >= 2.1474836e9f)) {
            var_a1_9 = temp_f3_3;
        } else {
            var_a1_9 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_3 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x187A) = M2C_BITWISE(u8, var_a1_9);
        temp_v1_13 = *(u8 *)((u8 *)arg0 + 0x187C);
        if ((s32) temp_v1_13 >= 0) {
            var_f2_13 = (f32) temp_v1_13;
        } else {
            var_f2_13 = 2.0f * (f32) ((temp_v1_13 >> 1) | (temp_v1_13 & 1));
        }
        temp_v1_14 = *(u8 *)((u8 *)arg0 + 0x188C);
        if ((s32) temp_v1_14 >= 0) {
            var_f2_14 = (f32) temp_v1_14;
        } else {
            var_f2_14 = 2.0f * (f32) ((temp_v1_14 >> 1) | (temp_v1_14 & 1));
        }
        temp_f3_4 = (var_f2_13 * temp_f1_7) + (var_f2_14 * temp_f0);
        if (!(temp_f3_4 >= 2.1474836e9f)) {
            var_a1_10 = temp_f3_4;
        } else {
            var_a1_10 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_4 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x187C) = M2C_BITWISE(u8, var_a1_10);
        temp_v1_15 = *(u8 *)((u8 *)arg0 + 0x187D);
        if ((s32) temp_v1_15 >= 0) {
            var_f2_15 = (f32) temp_v1_15;
        } else {
            var_f2_15 = 2.0f * (f32) ((temp_v1_15 >> 1) | (temp_v1_15 & 1));
        }
        temp_v1_16 = *(u8 *)((u8 *)arg0 + 0x188D);
        if ((s32) temp_v1_16 >= 0) {
            var_f2_16 = (f32) temp_v1_16;
        } else {
            var_f2_16 = 2.0f * (f32) ((temp_v1_16 >> 1) | (temp_v1_16 & 1));
        }
        temp_f3_5 = (var_f2_15 * temp_f1_7) + (var_f2_16 * temp_f0);
        if (!(temp_f3_5 >= 2.1474836e9f)) {
            var_a1_11 = temp_f3_5;
        } else {
            var_a1_11 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_5 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x187D) = M2C_BITWISE(u8, var_a1_11);
        temp_v1_17 = *(u8 *)((u8 *)arg0 + 0x187E);
        if ((s32) temp_v1_17 >= 0) {
            var_f2_17 = (f32) temp_v1_17;
        } else {
            var_f2_17 = 2.0f * (f32) ((temp_v1_17 >> 1) | (temp_v1_17 & 1));
        }
        temp_v1_18 = *(u8 *)((u8 *)arg0 + 0x188E);
        if ((s32) temp_v1_18 >= 0) {
            var_f1 = (f32) temp_v1_18;
        } else {
            var_f1 = 2.0f * (f32) ((temp_v1_18 >> 1) | (temp_v1_18 & 1));
        }
        temp_f2 = (var_f2_17 * temp_f1_7) + (var_f1 * temp_f0);
        if (!(temp_f2 >= 2.1474836e9f)) {
            var_a1_12 = temp_f2;
        } else {
            var_a1_12 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f2 - 2.1474836e9f)) | 0x80000000));
        }
        *(u8 *)((u8 *)arg0 + 0x187E) = M2C_BITWISE(u8, var_a1_12);
        *(f32 *)((u8 *)arg0 + 0x1870) = (f32) (*(f32 *)((u8 *)arg0 + 0x1870) + (temp_f0 * *(f32 *)((u8 *)arg0 + 0x1880)));
    }
}
