/* Draft (not built): func_001C8B50 at 0x001C8B50, size 0x2F4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2F0, original 0x2F4
 * Original: asm/nonmatchings/battle/btl_main/func_001C8B50.s */

// src/battle/btl_main.c func_001C8B50 size diff=99/188
s32 func_001C8B50(u8 *arg0, u8 *arg1) {
    s16 temp_s3;
    s16 temp_s3_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_13;
    s32 temp_v0_16;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_8;
    s32 temp_v1_2;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_4;
    u8 *temp_v0_10;
    u8 *temp_v0_11;
    u8 *temp_v0_12;
    u8 *temp_v0_14;
    u8 *temp_v0_15;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v0_7;
    u8 *temp_v0_9;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1CF8);
    temp_a0 = *(s32 *)((u8 *)temp_v1 + 0x20);
    if (temp_a0 != -1) {
        temp_v0 = amCdFs_ReadFileId(temp_a0, 0, 1);
        *(s32 *)((u8 *)(arg0 + 0x1ED8) + 0x14) = temp_v0;
        *(s32 *)((u8 *)arg0 + 0x1EF8) = temp_v0;
    }
    temp_v1_2 = *(s32 *)((u8 *)temp_v1 + 0x28);
    if (temp_v1_2 != -1) {
        temp_v0_2 = amCdFs_ReadFileId(temp_v1_2 | 0x10000, 0, 1);
        *(s32 *)((u8 *)(arg0 + 0x1EF0) + 4) = temp_v0_2;
        *(s32 *)((u8 *)arg0 + 0x1EF8) = temp_v0_2;
    }
    temp_s1 = arg0 + 0x1DF8;
    if ((*(s32 *)((u8 *)arg0 + 0x1E10) == 0) && (*(s32 *)((u8 *)arg0 + 0x1DF8) == 0) && (*(s32 *)((u8 *)temp_s1 + 0x14) == 0)) {
        temp_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF8)) + 0);
        if (temp_a0_2 != -1) {
            temp_v0_3 = amCdFs_ReadFileId(temp_a0_2, 0, 1);
            *(s32 *)((u8 *)temp_s1 + 0x14) = temp_v0_3;
            *(s32 *)((u8 *)arg0 + 0x1EF8) = temp_v0_3;
        }
    }
    temp_s3 = *(s16 *)((u8 *)arg1 + 0x16);
    temp_s2 = temp_s3 * 4;
    temp_v0_4 = temp_s2 + arg0;
    if (*(u8 **)((u8 *)temp_v0_4 + 0x1DB8) == NULL) {
        temp_v0_5 = *(u8 **)((u8 *)arg0 + 0x1CF8) + (temp_s3 * 0x14);
        temp_v0_6 = func_001CAAB0(*(s16 *)((u8 *)temp_v0_5 + 0xD6), *(s16 *)((u8 *)temp_v0_5 + 0xD8), *(s8 *)((u8 *)(temp_s3 + arg0) + 0x1D0C), *(s32 *)((u8 *)arg0 + 0x1350), 0);
        if (temp_v0_6 != NULL) {
            *(s32 *)((u8 *)arg0 + 0x1EF8) = (s32) *(s32 *)((u8 *)temp_v0_6 + 0x20);
            *(u8 **)((u8 *)temp_v0_4 + 0x1DB8) = temp_v0_6;
        }
    }
    temp_v0_7 = arg0 + (temp_s3 * 0x1C);
    temp_s1_2 = temp_v0_7 + 0x1DF8;
    if ((*(s32 *)((u8 *)temp_v0_7 + 0x1E10) == 0) && (*(s32 *)((u8 *)temp_v0_7 + 0x1DF8) == 0) && (*(s32 *)((u8 *)temp_s1_2 + 0x14) == 0)) {
        temp_a0_3 = *(*(u8 **)((u8 *)arg0 + 0x1CF8) + temp_s2);
        if (temp_a0_3 != -1) {
            temp_v0_8 = amCdFs_ReadFileId(temp_a0_3, 0, 1);
            *(s32 *)((u8 *)temp_s1_2 + 0x14) = temp_v0_8;
            *(s32 *)((u8 *)arg0 + 0x1EF8) = temp_v0_8;
        }
    }
    temp_s3_2 = *(s16 *)((u8 *)arg1 + 0x14);
    temp_s2_2 = temp_s3_2 * 4;
    temp_v0_9 = temp_s2_2 + arg0;
    if (*(u8 **)((u8 *)temp_v0_9 + 0x1DB8) == NULL) {
        temp_v0_10 = *(u8 **)((u8 *)arg0 + 0x1CF8) + (temp_s3_2 * 0x14);
        temp_v0_11 = func_001CAAB0(*(s16 *)((u8 *)temp_v0_10 + 0xD6), *(s16 *)((u8 *)temp_v0_10 + 0xD8), *(s8 *)((u8 *)(temp_s3_2 + arg0) + 0x1D0C), *(s32 *)((u8 *)arg0 + 0x1350), 0);
        if (temp_v0_11 != NULL) {
            *(s32 *)((u8 *)arg0 + 0x1EF8) = (s32) *(s32 *)((u8 *)temp_v0_11 + 0x20);
            *(u8 **)((u8 *)temp_v0_9 + 0x1DB8) = temp_v0_11;
        }
    }
    temp_v0_12 = arg0 + (temp_s3_2 * 0x1C);
    temp_s1_3 = temp_v0_12 + 0x1DF8;
    if ((*(s32 *)((u8 *)temp_v0_12 + 0x1E10) == 0) && (*(s32 *)((u8 *)temp_v0_12 + 0x1DF8) == 0) && (*(s32 *)((u8 *)temp_s1_3 + 0x14) == 0)) {
        temp_a0_4 = *(*(u8 **)((u8 *)arg0 + 0x1CF8) + temp_s2_2);
        if (temp_a0_4 != -1) {
            temp_v0_13 = amCdFs_ReadFileId(temp_a0_4, 0, 1);
            *(s32 *)((u8 *)temp_s1_3 + 0x14) = temp_v0_13;
            *(s32 *)((u8 *)arg0 + 0x1EF8) = temp_v0_13;
        }
    }
    if (*(s32 *)((u8 *)arg0 + 0x1CFC) == 0x2A) {
        if (*(u8 **)((u8 *)arg0 + 0x1DBC) == NULL) {
            temp_v0_14 = *(u8 **)((u8 *)arg0 + 0x1CF8);
            temp_v0_15 = func_001CAAB0(*(s16 *)((u8 *)temp_v0_14 + 0xEA), *(s16 *)((u8 *)temp_v0_14 + 0xEC), *(s8 *)((u8 *)arg0 + 0x1D0D), *(s32 *)((u8 *)arg0 + 0x1350), 0);
            if (temp_v0_15 != NULL) {
                *(s32 *)((u8 *)arg0 + 0x1EF8) = (s32) *(s32 *)((u8 *)temp_v0_15 + 0x20);
                *(u8 **)((u8 *)arg0 + 0x1DBC) = temp_v0_15;
            }
        }
        temp_s1_4 = arg0 + 0x1E14;
        if ((*(s32 *)((u8 *)arg0 + 0x1E2C) == 0) && (*(s32 *)((u8 *)arg0 + 0x1E14) == 0) && (*(s32 *)((u8 *)temp_s1_4 + 0x14) == 0)) {
            temp_a0_5 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF8)) + 4);
            if (temp_a0_5 != -1) {
                temp_v0_16 = amCdFs_ReadFileId(temp_a0_5, 0, 1);
                *(s32 *)((u8 *)temp_s1_4 + 0x14) = temp_v0_16;
                *(s32 *)((u8 *)arg0 + 0x1EF8) = temp_v0_16;
            }
        }
    }
    return *(s32 *)((u8 *)arg0 + 0x1EF8);
}
