/* Draft (not built): func_002F9930 at 0x002F9930, size 0x1238, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void *amTask_Create(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
u32 func_0012EAE0(M2C_UNK, s16, s16 *, s8);         /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_00458AA0;
extern s16 D_00458AF0;
extern s16 D_00458AF2;
extern s16 D_00458AF8;
extern M2C_UNK D_00458B00;
extern s16 D_00458B08;
extern M2C_UNK D_00458B10;
extern M2C_UNK D_00458B28;
extern M2C_UNK D_00458B30;
extern M2C_UNK D_00458B38;
extern s16 D_00458B40;
extern s16 D_00458B48;
extern M2C_UNK D_00458B50;
extern s16 D_00458B54;
extern s16 D_00458B58;
extern s16 D_00458B62;
extern s16 D_00458B68;
extern s16 D_00458B6A;
extern s16 D_00458B6C;
extern s16 D_00458B70;
extern s16 D_00458B72;
extern s16 D_00458B74;
extern s16 D_00458B78;
extern s8 D_004B4B58;
extern s8 D_005CA030;
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
extern M2C_UNK func_002F9870;
extern void *gTourMap;

void func_002F9930(s32 arg0) {
    s32 sp7C;
    s32 sp78;
    void *sp74;
    void *sp70;
    s32 sp6C;
    s32 sp68;
    s16 *temp_a2_4;
    s16 temp_a1;
    s16 temp_s0_25;
    s16 temp_s1;
    s16 temp_s1_11;
    s16 temp_s1_12;
    s16 temp_s1_13;
    s16 temp_s1_14;
    s16 temp_s1_15;
    s16 temp_s1_16;
    s16 temp_s1_17;
    s16 temp_s1_18;
    s16 temp_s1_19;
    s16 temp_s1_20;
    s16 temp_s1_21;
    s16 temp_s1_22;
    s16 temp_s1_2;
    s16 temp_s1_4;
    s16 temp_s1_5;
    s16 temp_s1_6;
    s16 temp_s1_7;
    s16 temp_s1_8;
    s16 temp_s1_9;
    s16 temp_s2;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s16 temp_s3_4;
    s16 temp_s3_6;
    s16 temp_s3_7;
    s16 temp_s3_8;
    s16 temp_s4;
    s16 var_v1;
    s32 temp_s1_10;
    s32 temp_s1_3;
    s32 var_t0;
    s8 temp_a2;
    s8 temp_a2_2;
    s8 temp_a2_3;
    s8 temp_a3;
    s8 temp_s0;
    s8 var_a3;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_13;
    void *temp_s0_14;
    void *temp_s0_15;
    void *temp_s0_16;
    void *temp_s0_17;
    void *temp_s0_18;
    void *temp_s0_19;
    void *temp_s0_20;
    void *temp_s0_21;
    void *temp_s0_22;
    void *temp_s0_23;
    void *temp_s0_24;
    void *temp_s0_26;
    void *temp_s0_27;
    void *temp_s0_28;
    void *temp_s0_29;
    void *temp_s0_2;
    void *temp_s0_30;
    void *temp_s0_31;
    void *temp_s0_32;
    void *temp_s0_33;
    void *temp_s0_34;
    void *temp_s0_35;
    void *temp_s0_36;
    void *temp_s0_37;
    void *temp_s0_38;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_s2_2;
    void *temp_s3_5;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_24;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_28;
    void *temp_v0_29;
    void *temp_v0_2;
    void *temp_v0_30;
    void *temp_v0_31;
    void *temp_v0_32;
    void *temp_v0_33;
    void *temp_v0_34;
    void *temp_v0_35;
    void *temp_v0_36;
    void *temp_v0_37;
    void *temp_v0_38;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_s0 = D_004B4B58;
    sp70 = gTourMap + (D_005D0080 * 0x14) + 0x2EC;
    sp78 = (s32) M2C_FIELD(sp70, s16 *, 8);
    sp68 = (s32) M2C_FIELD(sp70, s16 *, 0xA);
    sp74 = gTourMap + (D_005D0081 * 0x14) + 0x2EC;
    temp_t3 = sp74;
    sp7C = (s32) M2C_FIELD(temp_t3, s16 *, 8);
    sp6C = (s32) M2C_FIELD(temp_t3, s16 *, 0xA);
    var_t0 = 0;
    if ((sp68 >= 0) && (sp6C >= 0)) {
        var_a3 = M2C_FIELD(temp_t3, s8 *, 7);
        temp_a2 = M2C_FIELD(sp70, s8 *, 7);
        if (var_a3 < temp_a2) {
            var_t0 = 1;
        } else {
            var_t0 = 2;
            if (temp_a2 == var_a3) {

            } else {
                var_t0 = 1;
            }
        }
    } else if (sp68 >= 0) {
        var_a3 = M2C_FIELD(temp_t3, s8 *, 7);
        temp_a2_2 = M2C_FIELD(sp70, s8 *, 7);
        if (var_a3 < temp_a2_2) {
            var_t0 = 1;
        } else if (temp_a2_2 == var_a3) {
            var_t0 = 2;
        }
    } else {
        temp_a2_3 = M2C_FIELD(temp_t3, s8 *, 7);
        var_a3 = M2C_FIELD(sp70, s8 *, 7);
        if (var_a3 < temp_a2_3) {
            var_t0 = 1;
        } else if (temp_a2_3 == var_a3) {
            var_t0 = 2;
        }
    }
    switch (arg0) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_s1 = D_00458AF0;
        temp_v0 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_2 = temp_v0 + 0x30;
        memset(temp_s0_2, 0, 0xC);
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) temp_s1;
        M2C_FIELD(temp_s0_2, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        temp_s1_2 = D_00458AF2;
        temp_v0_2 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_3 = temp_v0_2 + 0x30;
        memset(temp_s0_3, 0, 0xC);
        M2C_FIELD(temp_v0_2, s32 *, 0x30) = (s32) temp_s1_2;
        M2C_FIELD(temp_s0_3, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
block_69:
        M2C_FIELD(gTourMap, s16 *, 0x5C) = var_v1;
        return;
    case 3:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
        temp_a3 = sp78 * 2;
        temp_a2_4 = &D_00458AA0 + temp_a3;
        temp_a1 = *(&D_00458AA0 + (sp7C * 2));
        temp_s2 = *temp_a2_4;
        temp_s1_3 = temp_a1 + 1;
        if ((temp_s0 + 1) == D_005D0082) {
            temp_s3 = D_00458B08;
            temp_v0_3 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_4 = temp_v0_3 + 0x30;
            memset(temp_s0_4, 0, 0xC);
            M2C_FIELD(temp_v0_3, s32 *, 0x30) = (s32) temp_s3;
            M2C_FIELD(temp_s0_4, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_s3_2 = *(&D_00458B30 + ((func_0012EAE0(0x20) % 3U) * 2));
            temp_v0_4 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_5 = temp_v0_4 + 0x30;
            memset(temp_s0_5, 0, 0xC);
            M2C_FIELD(temp_v0_4, s32 *, 0x30) = (s32) temp_s3_2;
            M2C_FIELD(temp_s0_5, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_v0_5 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_6 = temp_v0_5 + 0x30;
            memset(temp_s0_6, 0, 0xC);
            M2C_FIELD(temp_v0_5, s32 *, 0x30) = (s32) temp_s2;
            M2C_FIELD(temp_s0_6, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_v0_6 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_7 = temp_v0_6 + 0x30;
            memset(temp_s0_7, 0, 0xC);
            M2C_FIELD(temp_v0_6, s32 *, 0x30) = temp_s1_3;
            M2C_FIELD(temp_s0_7, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_s1_4 = D_00458B40;
            temp_v0_7 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_8 = temp_v0_7 + 0x30;
            memset(temp_s0_8, 0, 0xC);
            M2C_FIELD(temp_v0_7, s32 *, 0x30) = (s32) temp_s1_4;
            M2C_FIELD(temp_s0_8, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        } else if ((temp_s0 + 2) == D_005D0082) {
            if (M2C_FIELD(gTourMap, s32 *, 0x68) != 0) {
                temp_s3_3 = *(&D_00458B00 + ((func_0012EAE0(0x20, temp_a1, temp_a2_4, temp_a3) % 3U) * 2));
                temp_v0_8 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
                temp_s0_9 = temp_v0_8 + 0x30;
                memset(temp_s0_9, 0, 0xC);
                M2C_FIELD(temp_v0_8, s32 *, 0x30) = (s32) temp_s3_3;
                M2C_FIELD(temp_s0_9, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
                M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
                temp_s3_4 = *(&D_00458B28 + ((func_0012EAE0(0x20) & 1) * 2));
                temp_v0_9 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
                temp_s0_10 = temp_v0_9 + 0x30;
                memset(temp_s0_10, 0, 0xC);
                M2C_FIELD(temp_v0_9, s32 *, 0x30) = (s32) temp_s3_4;
                M2C_FIELD(temp_s0_10, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
                M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            }
            temp_v0_10 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_11 = temp_v0_10 + 0x30;
            memset(temp_s0_11, 0, 0xC);
            M2C_FIELD(temp_v0_10, s32 *, 0x30) = (s32) temp_s2;
            M2C_FIELD(temp_s0_11, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_v0_11 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_12 = temp_v0_11 + 0x30;
            memset(temp_s0_12, 0, 0xC);
            M2C_FIELD(temp_v0_11, s32 *, 0x30) = temp_s1_3;
            M2C_FIELD(temp_s0_12, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_s1_5 = *(&D_00458B38 + ((func_0012EAE0(0x20) % 3U) * 2));
            temp_v0_12 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_13 = temp_v0_12 + 0x30;
            memset(temp_s0_13, 0, 0xC);
            M2C_FIELD(temp_v0_12, s32 *, 0x30) = (s32) temp_s1_5;
            M2C_FIELD(temp_s0_13, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        } else if (temp_s0 > 0) {
            if (M2C_FIELD(gTourMap, s32 *, 0x68) != 0) {
                temp_s4 = *(&D_00458B00 + ((func_0012EAE0(0x20, temp_a1, temp_a2_4, temp_a3) % 3U) * 2));
                temp_v0_13 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
                temp_s3_5 = temp_v0_13 + 0x30;
                memset(temp_s3_5, 0, 0xC);
                M2C_FIELD(temp_v0_13, s32 *, 0x30) = (s32) temp_s4;
                M2C_FIELD(temp_s3_5, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
                M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
                temp_s3_6 = *(((func_0012EAE0(0x20) & 1) * 2) + (&D_00458B10 + (temp_s0 * 8)));
                temp_v0_14 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
                temp_s0_14 = temp_v0_14 + 0x30;
                memset(temp_s0_14, 0, 0xC);
                M2C_FIELD(temp_v0_14, s32 *, 0x30) = (s32) temp_s3_6;
                M2C_FIELD(temp_s0_14, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
                M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            }
            temp_v0_15 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_15 = temp_v0_15 + 0x30;
            memset(temp_s0_15, 0, 0xC);
            M2C_FIELD(temp_v0_15, s32 *, 0x30) = (s32) temp_s2;
            M2C_FIELD(temp_s0_15, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_v0_16 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_16 = temp_v0_16 + 0x30;
            memset(temp_s0_16, 0, 0xC);
            M2C_FIELD(temp_v0_16, s32 *, 0x30) = temp_s1_3;
            M2C_FIELD(temp_s0_16, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_s1_6 = *(&D_00458B38 + ((func_0012EAE0(0x20) % 3U) * 2));
            temp_v0_17 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_17 = temp_v0_17 + 0x30;
            memset(temp_s0_17, 0, 0xC);
            M2C_FIELD(temp_v0_17, s32 *, 0x30) = (s32) temp_s1_6;
            M2C_FIELD(temp_s0_17, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        } else {
            if (M2C_FIELD(gTourMap, s32 *, 0x68) != 0) {
                temp_s3_7 = D_00458AF8;
                temp_v0_18 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
                temp_s0_18 = temp_v0_18 + 0x30;
                memset(temp_s0_18, 0, 0xC);
                M2C_FIELD(temp_v0_18, s32 *, 0x30) = (s32) temp_s3_7;
                M2C_FIELD(temp_s0_18, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
                M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
                temp_s3_8 = *(&D_00458B10 + ((func_0012EAE0(0x20) & 1) * 2));
                temp_v0_19 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
                temp_s0_19 = temp_v0_19 + 0x30;
                memset(temp_s0_19, 0, 0xC);
                M2C_FIELD(temp_v0_19, s32 *, 0x30) = (s32) temp_s3_8;
                M2C_FIELD(temp_s0_19, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
                M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            }
            temp_v0_20 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_20 = temp_v0_20 + 0x30;
            memset(temp_s0_20, 0, 0xC);
            M2C_FIELD(temp_v0_20, s32 *, 0x30) = (s32) temp_s2;
            M2C_FIELD(temp_s0_20, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_v0_21 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_21 = temp_v0_21 + 0x30;
            memset(temp_s0_21, 0, 0xC);
            M2C_FIELD(temp_v0_21, s32 *, 0x30) = temp_s1_3;
            M2C_FIELD(temp_s0_21, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_s1_7 = *(&D_00458B38 + ((func_0012EAE0(0x20) % 3U) * 2));
            temp_v0_22 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_22 = temp_v0_22 + 0x30;
            memset(temp_s0_22, 0, 0xC);
            M2C_FIELD(temp_v0_22, s32 *, 0x30) = (s32) temp_s1_7;
            M2C_FIELD(temp_s0_22, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        }
        goto block_69;
    case 11:                                        /* switch 1 */
        switch (var_t0) {                           /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_s1_8 = *(&D_00458B50 + ((func_0012EAE0(0x20, (s16) &sp7C, (s16 *)3, var_a3) & 1) * 2));
            temp_v0_23 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_23 = temp_v0_23 + 0x30;
            memset(temp_s0_23, 0, 0xC);
            M2C_FIELD(temp_v0_23, s32 *, 0x30) = (s32) temp_s1_8;
            M2C_FIELD(temp_s0_23, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_s1_9 = D_00458B54;
            temp_v0_24 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_24 = temp_v0_24 + 0x30;
            memset(temp_s0_24, 0, 0xC);
            M2C_FIELD(temp_v0_24, s32 *, 0x30) = (s32) temp_s1_9;
            M2C_FIELD(temp_s0_24, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
            goto block_69;
        case 1:                                     /* switch 2 */
            temp_s0_25 = D_00458B48;
            temp_s1_10 = *(&D_00458AA0 + (M2C_ERROR(/* Read from unset register $t1 */) * 2)) + 1;
            temp_v0_25 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s2_2 = temp_v0_25 + 0x30;
            memset(temp_s2_2, 0, 0xC);
            M2C_FIELD(temp_v0_25, s32 *, 0x30) = (s32) temp_s0_25;
            M2C_FIELD(temp_s2_2, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
            temp_v0_26 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_26 = temp_v0_26 + 0x30;
            memset(temp_s0_26, 0, 0xC);
            M2C_FIELD(temp_v0_26, s32 *, 0x30) = temp_s1_10;
            M2C_FIELD(temp_s0_26, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
            goto block_69;
        case 2:                                     /* switch 2 */
            temp_s1_11 = D_00458B58;
            temp_v0_27 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_27 = temp_v0_27 + 0x30;
            memset(temp_s0_27, 0, 0xC);
            M2C_FIELD(temp_v0_27, s32 *, 0x30) = (s32) temp_s1_11;
            M2C_FIELD(temp_s0_27, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
            goto block_69;
        }
        break;
    case 14:                                        /* switch 1 */
        temp_s1_12 = D_00458B62;
        temp_v0_28 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_28 = temp_v0_28 + 0x30;
        memset(temp_s0_28, 0, 0xC);
        M2C_FIELD(temp_v0_28, s32 *, 0x30) = (s32) temp_s1_12;
        M2C_FIELD(temp_s0_28, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        temp_s1_13 = D_00458B78;
        temp_v0_29 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_29 = temp_v0_29 + 0x30;
        memset(temp_s0_29, 0, 0xC);
        M2C_FIELD(temp_v0_29, s32 *, 0x30) = (s32) temp_s1_13;
        M2C_FIELD(temp_s0_29, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        goto block_69;
    case 15:                                        /* switch 1 */
        temp_s1_14 = D_00458B68;
        temp_v0_30 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_30 = temp_v0_30 + 0x30;
        memset(temp_s0_30, 0, 0xC);
        M2C_FIELD(temp_v0_30, s32 *, 0x30) = (s32) temp_s1_14;
        M2C_FIELD(temp_s0_30, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        if (D_005CA030 == 1) {
            temp_s1_15 = D_00458B6A;
            temp_v0_31 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_31 = temp_v0_31 + 0x30;
            memset(temp_s0_31, 0, 0xC);
            M2C_FIELD(temp_v0_31, s32 *, 0x30) = (s32) temp_s1_15;
            M2C_FIELD(temp_s0_31, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        }
        temp_s1_16 = D_00458B6C;
        temp_v0_32 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_32 = temp_v0_32 + 0x30;
        memset(temp_s0_32, 0, 0xC);
        M2C_FIELD(temp_v0_32, s32 *, 0x30) = (s32) temp_s1_16;
        M2C_FIELD(temp_s0_32, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        temp_s1_17 = D_00458B78;
        temp_v0_33 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_33 = temp_v0_33 + 0x30;
        memset(temp_s0_33, 0, 0xC);
        M2C_FIELD(temp_v0_33, s32 *, 0x30) = (s32) temp_s1_17;
        M2C_FIELD(temp_s0_33, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        goto block_69;
    case 16:                                        /* switch 1 */
        temp_s1_18 = D_00458B70;
        temp_v0_34 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_34 = temp_v0_34 + 0x30;
        memset(temp_s0_34, 0, 0xC);
        M2C_FIELD(temp_v0_34, s32 *, 0x30) = (s32) temp_s1_18;
        M2C_FIELD(temp_s0_34, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        if (D_005CA030 == 1) {
            temp_s1_19 = D_00458B72;
            temp_v0_35 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
            temp_s0_35 = temp_v0_35 + 0x30;
            memset(temp_s0_35, 0, 0xC);
            M2C_FIELD(temp_v0_35, s32 *, 0x30) = (s32) temp_s1_19;
            M2C_FIELD(temp_s0_35, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
            M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        }
        temp_s1_20 = D_00458B74;
        temp_v0_36 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_36 = temp_v0_36 + 0x30;
        memset(temp_s0_36, 0, 0xC);
        M2C_FIELD(temp_v0_36, s32 *, 0x30) = (s32) temp_s1_20;
        M2C_FIELD(temp_s0_36, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        M2C_FIELD(gTourMap, s16 *, 0x5C) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5C) + 1);
        temp_s1_21 = D_00458B78;
        temp_v0_37 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_37 = temp_v0_37 + 0x30;
        memset(temp_s0_37, 0, 0xC);
        M2C_FIELD(temp_v0_37, s32 *, 0x30) = (s32) temp_s1_21;
        M2C_FIELD(temp_s0_37, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        goto block_69;
    case 17:                                        /* switch 1 */
        temp_s1_22 = D_00458B78;
        temp_v0_38 = amTask_Create(&func_002F9870, 0, 0x3000, 0x200);
        temp_s0_38 = temp_v0_38 + 0x30;
        memset(temp_s0_38, 0, 0xC);
        M2C_FIELD(temp_v0_38, s32 *, 0x30) = (s32) temp_s1_22;
        M2C_FIELD(temp_s0_38, s32 *, 8) = (s32) M2C_FIELD(gTourMap, s16 *, 0x5C);
        var_v1 = M2C_FIELD(gTourMap, s16 *, 0x5C) + 1;
        goto block_69;
    }
}
