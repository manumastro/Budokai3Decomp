/* Draft (not built): func_00290D00 at 0x00290D00, size 0x680, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 264 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x710, original 0x680
 * Original: asm/nonmatchings/story/str_bg/func_00290D00.s */

// src/story/str_bg.c func_00290D00 size diff=264/452
s32 amMath_SinCosI(s32, f32 *, f32 *);
s32 amMotion_Update(s8 *, s32);
s32 func_0013C1E0(s8 *, s32, s32);
s32 func_002D0110(s32, s32, f32);
s32 func_002D04A0(s32);
extern f32 D_0049571C;
extern f32 D_00495720;
extern f32 D_00495724;
extern f32 D_0049575C;
extern f32 D_00495760;
extern f32 D_00495764;
extern void *D_005AA604;
extern f32 D_005AA624;
extern f32 gFrameDelta;
extern char D_00495718[];
extern char D_00495758[];
extern void amMotion_BuildMatrices(char *);
void func_00290D00(void) {
    f32 sp68;
    f32 sp6C;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f3_3;
    f32 var_f3_4;
    s32 *var_s1;
    s32 temp_v0_2;
    s32 var_s3;
    s8 **var_s2;
    s8 *temp_v0;
    s8 temp_a1;
    u8 *temp_v1;
    u8 *var_s0;

    var_s3 = 0;
    var_s2 = (signed char **)(D_004708A4 + 0x320);
    var_s1 = (int *)(D_004708A4 + 0x2EC);
    var_s0 = (unsigned char *)(D_004708A4 + 0x354);
    do {
        temp_v0 = *var_s2;
        if (temp_v0 != NULL) {
            *(f32 *)((u8 *)temp_v0 + 0x424) = (f32) *(f32 *)((u8 *)var_s0 + 8);
            amMotion_Update(*var_s2, 0);
            func_0013C1E0(*var_s2, 0, 0x3F800000);
            amMotion_BuildMatrices((char *)(*var_s2));
            temp_v0_2 = *(s32 *)((u8 *)var_s0 + 0);
            *(f32 *)((u8 *)var_s0 + 4) = (f32) *(s32 *)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*var_s2 + (((temp_v0_2 >> 0x10) - 1) * 4)) + 0x46C)) + 0x14) + ((temp_v0_2 & 0xFFFF) * 0x10)) + 8);
            *(f32 *)((u8 *)var_s0 + 8) = (f32) (*(f32 *)((u8 *)var_s0 + 8) + gFrameDelta);
            temp_f1 = *(f32 *)((u8 *)var_s0 + 4);
            temp_f0 = *(f32 *)((u8 *)var_s0 + 8);
            if (!(temp_f0 < temp_f1)) {
                *(f32 *)((u8 *)var_s0 + 8) = (f32) (temp_f0 - temp_f1);
            }
        }
        if (*var_s1 != 0) {
            func_002D04A0(var_s3);
            if (*var_s2 != NULL) {
                func_002D0110(*var_s1, 0, *(f32 *)((u8 *)var_s0 + 8));
            } else {
                func_002D0110(*var_s1, 0, *(f32 *)((u8 *)var_s0 + 0xC));
                *(f32 *)((u8 *)var_s0 + 0xC) = (f32) (*(f32 *)((u8 *)var_s0 + 0xC) + gFrameDelta);
            }
        }
        var_s3 += 1;
        var_s2 += 4;
        var_s0 += 0x10;
        var_s1 += 4;
    } while (var_s3 < 0xD);
    temp_f20 = D_005AA624;
    amMath_SinCosI(*(s32 *)((u8 *)D_005AA604 + 0x11D0), &sp6C, &sp68);
    *(f32 *)((u8 *)D_004708A4 + 0x1AB8) = (f32) (*(f32 *)((u8 *)D_004708A4 + 0x1AB8) + 0.0001f);
    *(f32 *)((u8 *)D_004708A4 + 0x1ABC) = (f32) (*(f32 *)((u8 *)D_004708A4 + 0x1ABC) + 0.0001f);
    *(f32 *)((u8 *)D_004708A4 + 0x1AB8) = (f32) (*(f32 *)((u8 *)D_004708A4 + 0x1AB8) - (0.0001f * (sp6C * temp_f20)));
    *(f32 *)((u8 *)D_004708A4 + 0x1ABC) = (f32) (*(f32 *)((u8 *)D_004708A4 + 0x1ABC) + (0.0001f * (sp68 * temp_f20)));
    var_f3 = *(f32 *)((u8 *)D_004708A4 + 0x1AB8);
    temp_v1 = (unsigned char *)(D_004708A4 + 0x1AB8);
    if (var_f3 < 0.0f) {
        do {
            var_f3 = *(f32 *)((u8 *)D_004708A4 + 0x1AB8) + 1.0f;
            *(f32 *)((u8 *)D_004708A4 + 0x1AB8) = var_f3;
        } while (var_f3 < 0.0f);
    }
    if (!(var_f3 < 1.0f)) {
        do {
            temp_f0_2 = *(f32 *)((u8 *)D_004708A4 + 0x1AB8) - 1.0f;
            *(f32 *)((u8 *)D_004708A4 + 0x1AB8) = temp_f0_2;
        } while (!(temp_f0_2 < 1.0f));
    }
    var_f3_2 = *(f32 *)((u8 *)temp_v1 + 4);
    if (var_f3_2 < 0.0f) {
        do {
            var_f3_2 = *(f32 *)((u8 *)temp_v1 + 4) + 1.0f;
            *(f32 *)((u8 *)temp_v1 + 4) = var_f3_2;
        } while (var_f3_2 < 0.0f);
    }
    if (!(var_f3_2 < 1.0f)) {
        do {
            temp_f0_3 = *(f32 *)((u8 *)temp_v1 + 4) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 4) = temp_f0_3;
        } while (!(temp_f0_3 < 1.0f));
    }
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) (*(f32 *)((u8 *)temp_v1 + 8) + 0.0001f);
    *(f32 *)((u8 *)temp_v1 + 0xC) = (f32) (*(f32 *)((u8 *)temp_v1 + 0xC) + 0.0001f);
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) (*(f32 *)((u8 *)temp_v1 + 8) - (0.0002f * (sp6C * temp_f20)));
    *(f32 *)((u8 *)temp_v1 + 0xC) = (f32) (*(f32 *)((u8 *)temp_v1 + 0xC) + (0.0002f * (sp68 * temp_f20)));
    var_f3_3 = *(f32 *)((u8 *)temp_v1 + 8);
    if (var_f3_3 < 0.0f) {
        do {
            var_f3_3 = *(f32 *)((u8 *)temp_v1 + 8) + 1.0f;
            *(f32 *)((u8 *)temp_v1 + 8) = var_f3_3;
        } while (var_f3_3 < 0.0f);
    }
    if (!(var_f3_3 < 1.0f)) {
        do {
            temp_f0_4 = *(f32 *)((u8 *)temp_v1 + 8) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 8) = temp_f0_4;
        } while (!(temp_f0_4 < 1.0f));
    }
    var_f3_4 = *(f32 *)((u8 *)temp_v1 + 0xC);
    if (var_f3_4 < 0.0f) {
        do {
            var_f3_4 = *(f32 *)((u8 *)temp_v1 + 0xC) + 1.0f;
            *(f32 *)((u8 *)temp_v1 + 0xC) = var_f3_4;
        } while (var_f3_4 < 0.0f);
    }
    if (!(var_f3_4 < 1.0f)) {
        do {
            temp_f0_5 = *(f32 *)((u8 *)temp_v1 + 0xC) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 0xC) = temp_f0_5;
        } while (!(temp_f0_5 < 1.0f));
    }
    *(f32 *)((u8 *)temp_v1 + 0x10) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x10) + 0.0008f);
    *(f32 *)((u8 *)temp_v1 + 0x14) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x14) + 0.0008f);
    if (!(*(f32 *)((u8 *)temp_v1 + 0x10) < 1.0f)) {
        do {
            temp_f0_6 = *(f32 *)((u8 *)temp_v1 + 0x10) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 0x10) = temp_f0_6;
        } while (!(temp_f0_6 < 1.0f));
    }
    if (!(*(f32 *)((u8 *)temp_v1 + 0x14) < 1.0f)) {
        do {
            temp_f0_7 = *(f32 *)((u8 *)temp_v1 + 0x14) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 0x14) = temp_f0_7;
        } while (!(temp_f0_7 < 1.0f));
    }
    *(f32 *)((u8 *)temp_v1 + 0x18) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x18) + 0.0004f);
    *(f32 *)((u8 *)temp_v1 + 0x1C) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x1C) + 0.0004f);
    if (!(*(f32 *)((u8 *)temp_v1 + 0x18) < 1.0f)) {
        do {
            temp_f0_8 = *(f32 *)((u8 *)temp_v1 + 0x18) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 0x18) = temp_f0_8;
        } while (!(temp_f0_8 < 1.0f));
    }
    if (!(*(f32 *)((u8 *)temp_v1 + 0x1C) < 1.0f)) {
        do {
            temp_f0_9 = *(f32 *)((u8 *)temp_v1 + 0x1C) - 1.0f;
            *(f32 *)((u8 *)temp_v1 + 0x1C) = temp_f0_9;
        } while (!(temp_f0_9 < 1.0f));
    }
    temp_a1 = *(s8 *)((u8 *)D_004708A4 + 0x1AB4);
    if (temp_a1 != 1) {
        if (temp_a1 != 0) {

        } else {
            *(f32 *)((u8 *)temp_v1 + 0x20) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x20) + 0.001f);
            *(f32 *)((u8 *)temp_v1 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x24) + 0.0015f);
            if (!(*(f32 *)((u8 *)temp_v1 + 0x20) < 1.0f)) {
                do {
                    temp_f0_10 = *(f32 *)((u8 *)temp_v1 + 0x20) - 1.0f;
                    *(f32 *)((u8 *)temp_v1 + 0x20) = temp_f0_10;
                } while (!(temp_f0_10 < 1.0f));
            }
            if (!(*(f32 *)((u8 *)temp_v1 + 0x24) < 1.0f)) {
                do {
                    temp_f0_11 = *(f32 *)((u8 *)temp_v1 + 0x24) - 1.0f;
                    *(f32 *)((u8 *)temp_v1 + 0x24) = temp_f0_11;
                } while (!(temp_f0_11 < 1.0f));
            }
        }
    }
    *D_00495718 = *(f32 *)((u8 *)D_004708A4 + 0x1AB8);
    *D_00495758 = *(f32 *)((u8 *)temp_v1 + 4);
    D_0049571C = *(f32 *)((u8 *)temp_v1 + 8);
    D_0049575C = *(f32 *)((u8 *)temp_v1 + 0xC);
    D_00495720 = *(f32 *)((u8 *)temp_v1 + 0x10);
    D_00495760 = *(f32 *)((u8 *)temp_v1 + 0x14);
    D_00495724 = *(f32 *)((u8 *)temp_v1 + 0x18);
    D_00495764 = *(f32 *)((u8 *)temp_v1 + 0x1C);
}
