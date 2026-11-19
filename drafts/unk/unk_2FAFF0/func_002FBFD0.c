/* Draft (not built): func_002FBFD0 at 0x002FBFD0, size 0x538, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 207 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x620, original 0x538
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FBFD0.s */

// src/unk/unk_2FAFF0.c func_002FBFD0 size diff=207/392
extern void func_0029DD30(s32, f32);
void func_002FBFD0(Task2FAFF0 *arg0) {
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_10;
    s32 temp_s2_11;
    s32 temp_s2_12;
    s32 temp_s2_13;
    s32 temp_s2_14;
    s32 temp_s2_15;
    s32 temp_s2_16;
    s32 temp_s2_17;
    s32 temp_s2_18;
    s32 temp_s2_19;
    s32 temp_s2_20;
    s32 temp_s2_21;
    s32 temp_s2_22;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s2_4;
    s32 temp_s2_5;
    s32 temp_s2_6;
    s32 temp_s2_7;
    s32 temp_s2_8;
    s32 temp_s2_9;
    s32 var_s2;
    s32 var_s2_2;
    u8 *temp_a0_3;
    u8 *temp_s1;
    u8 *temp_s3;

    temp_s3 = *(u8 **)((u8 *)gTourMap + 0x34);
    var_s2 = -1;
    func_00208F70((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x38)));
    temp_s1 = (unsigned char *)(gTourMap + 0x25C);
    temp_a0 = *(s32 *)((u8 *)gTourMap + 0x4C);
    temp_a1 = ((s32)(D_005CA030)) ^ 1;
    temp_s0 = (s32)(D_005CA030) == (s32)(1);
    switch (temp_a0) {                              /* irregular */
    case 0:
        temp_s2 = -1 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xD8), temp_a1);
        temp_s2_2 = temp_s2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xDC), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_3 = temp_s2_2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xE8), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_4 = temp_s2_3 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xF4), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_5 = temp_s2_4 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xF8), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_6 = temp_s2_5 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xFC), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_7 = temp_s2_6 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x100), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_8 = temp_s2_7 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x104), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_9 = temp_s2_8 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x108), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_10 = temp_s2_9 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x10C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_11 = temp_s2_10 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x110), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        var_s2 = temp_s2_11 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x114), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        if (temp_s0 != 0) {
            temp_s2_12 = var_s2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x34), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
            var_s2 = temp_s2_12 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x5C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        }
        break;
    case 1:
        temp_s2_13 = -1 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x94), temp_a1);
        temp_s2_14 = temp_s2_13 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x98), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        var_s2_2 = temp_s2_14 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x9C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        if (temp_s0 != 0) {
            temp_s2_15 = var_s2_2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xA8), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
            temp_s2_16 = temp_s2_15 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xAC), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
            temp_s2_17 = temp_s2_16 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xB0), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
            var_s2_2 = temp_s2_17 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xB4), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        }
        var_s2 = var_s2_2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x88), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        if (temp_s0 != 0) {
            temp_s2_18 = var_s2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x34), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
            var_s2 = temp_s2_18 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x5C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        }
        break;
    case 2:
        temp_s2_19 = -1 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x68), temp_a1);
        temp_s2_20 = temp_s2_19 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x78), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        temp_s2_21 = temp_s2_20 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x7C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        var_s2 = temp_s2_21 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x6C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        if (temp_s0 != 0) {
            temp_s2_22 = var_s2 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x34), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
            var_s2 = temp_s2_22 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x5C), M2C_BITWISE(s32, ((f32) *(s32 *)((u8 *)temp_s1 + 8) * gFrameDelta)));
        }
        break;
    }
    *(s32 *)((u8 *)temp_s1 + 8) = (s32) (*(s32 *)((u8 *)temp_s1 + 8) + 1);
    temp_a0_2 = *(s32 *)((u8 *)gTourMap + 0x74);
    if (temp_a0_2 != 0) {
        func_0029DD30(temp_a0_2, 0x3F800000);
    }
    if (var_s2 == 0xFF) {
        temp_a0_3 = *(u8 **)((u8 *)gTourMap + 0x40);
        *(s32 *)((u8 *)temp_a0_3 + 0x30) = (s32) (*(s32 *)((u8 *)temp_a0_3 + 0x30) + 1);
        if (*(s32 *)((u8 *)gTourMap + 0x4C) == 0) {
            var_v1 = (int *)(&func_002FBAE0);
            if (&func_002FBAE0 == NULL) {
                var_v1 = NULL;
            }
        } else if ((s32)(D_005CA030) == (s32)(1)) {
            var_v1 = (int *)(&func_002FBF40);
            if (&func_002FBF40 == NULL) {
                var_v1 = NULL;
            }
        } else {
            var_v1 = (int *)(&func_002FBAE0);
            if (&func_002FBAE0 == NULL) {
                var_v1 = NULL;
            }
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
