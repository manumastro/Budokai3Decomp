/* Draft (not built): func_0027B860 at 0x0027B860, size 0x590, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal use of keyword mwccps2.exe Compiler: 237: s32 CsModel_Ease(s32, f32, f32); @ 224: case -1:
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027B860.s */

// src/menu/mn_charasel.c func_0027B860 cerr diff=-1/0
extern void *D_00470810;
s32 CsModel_SetScale(s32, s16, s8);
s32 CsModel_Shift(s32, s16, s8);
s32 CsSubStat_Close(s32);
s64 CsSubStat_GetResult(s32, s8, s32, s8);
u8 CsSubStat_GetSlot(s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
s32 func_00280DF0(s32, s8);
s32 func_00280E40(s32, s8);
extern s32 D_0046B560;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_0058F664;
extern s32 D_0058F668;
extern s32 D_0058F66E;
extern s32 D_0058F670;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0027CB20(void);
void func_0027B860(u8 *arg0, s8 arg1, s32 arg2, s8 arg3) {
    s32 *var_v1;
    s32 *var_v1_2;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_9;
    s32 temp_a2_2;
    s32 temp_a2_5;
    s32 temp_s2;
    s32 temp_s2_3;
    s32 var_a2;
    s64 temp_a0_8;
    s64 temp_a2;
    s64 temp_a2_3;
    s64 temp_a2_4;
    s8 temp_a3;
    s8 temp_a3_2;
    s8 var_a1;
    s8 var_a3;
    u8 *temp_a0;
    u8 *temp_a0_10;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s2_2;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *temp_s4;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s4 = D_00470810;
    if (*(s8 *)((u8 *)temp_s0 + 0) == 4) {
        *(s8 *)((u8 *)temp_s0 + 2) = -1;
        temp_s3 = D_00470810;
        temp_s2 = *(u8 *)((u8 *)temp_s0 + 7) == 0;
        if (*(s8 *)((u8 *)temp_s0 + 1) != 1) {
            *(s8 *)((u8 *)temp_s0 + 1) = 1;
            temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
            D_00470704 = temp_a0;
            D_0047070C = 0x3000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0, 0x3000);
            D_00470238 = 0;
            temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x50);
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14) + (temp_s2 * 4)), 0);
        }
        temp_s2_2 = *(u8 **)((u8 *)arg0 + 0x30);
        *(s32 *)((u8 *)temp_s2_2 + 0x60) = 0x3F800000;
        temp_f1 = (1.0f - *(f32 *)((u8 *)temp_s2_2 + 0x5C)) / 10.0f;
        *(f32 *)((u8 *)temp_s2_2 + 0x64) = temp_f1;
        *(f32 *)((u8 *)temp_s2_2 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s2_2 + 0x5C) + temp_f1);
        temp_a0_3 = *(s32 *)((u8 *)temp_s2_2 + 0x28);
        if (temp_a0_3 != 0) {
            func_002F9510(temp_a0_3, 0x3F800000, 0x41200000);
        }
        temp_a0_4 = *(s32 *)((u8 *)temp_s2_2 + 0x2C);
        if (temp_a0_4 != 0) {
            func_00280D90(temp_a0_4, 0x3F800000, 0x41200000);
        }
        temp_a0_5 = *(s32 *)((u8 *)temp_s2_2 + 0x30);
        if (temp_a0_5 != 0) {
            CsModel_Ease(temp_a0_5, 0x3F800000, 0x41200000);
        }
        if (*(s8 *)((u8 *)temp_s0 + 3) != 0) {
            *(s8 *)((u8 *)temp_s0 + 3) = 0;
            *(s8 *)((u8 *)temp_s0 + 4) = 0x26;
            *(s8 *)((u8 *)temp_s0 + 5) = 0;
            temp_a3 = *(s8 *)((u8 *)temp_s0 + 4);
            temp_a2 = (s64) ((s64) *(u8 *)((u8 *)temp_s0 + 7) << 0x30) >> 0x30;
            temp_a2_2 = temp_a2 * 2;
            *(&D_0058F664 + temp_a2_2) = (s16) temp_a3;
            *(&D_0058F668 + temp_a2) = *(s8 *)((u8 *)temp_s0 + 5);
            *(&D_0058F66E + temp_a2) = *(u8 *)((u8 *)temp_s0 + 0xC);
            *(&D_0058F670 + temp_a2) = *(u8 *)((u8 *)temp_s0 + 0xD);
            temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0x4C);
            if (temp_a0_6 != 0) {
                func_0022D0E0(temp_a0_6, 1, temp_a2_2, temp_a3);
            }
            *(s32 *)((u8 *)temp_s0 + 0x4C) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 8)) + 0x1C) + ((*(s8 *)((u8 *)temp_s0 + 4) + 0x69) * 4)), 0);
            func_00280E40(*(s32 *)((u8 *)temp_s0 + 0x2C), *(s8 *)((u8 *)temp_s0 + 4));
            CsModel_Shift(*(s32 *)((u8 *)temp_s0 + 0x30), *(&D_0046B560 + (*(s8 *)((u8 *)temp_s0 + 4) * 2)), *(s8 *)((u8 *)temp_s0 + 5));
        }
        var_v1 = (int *)(&func_0027CB20);
        if (&func_0027CB20 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 0x34);
    if (temp_a0_7 != 0) {
        if (*(u8 *)((u8 *)temp_s0 + 0xA) == 2) {
            *(u8 *)((u8 *)temp_s0 + 0xD) = CsSubStat_GetSlot(temp_a0_7);
            var_a3 = *(s8 *)((u8 *)temp_s0 + 4);
            temp_a2_3 = (s64) ((s64) *(u8 *)((u8 *)temp_s0 + 7) << 0x30) >> 0x30;
            var_a2 = temp_a2_3 * 2;
            *(&D_0058F664 + var_a2) = (s16) var_a3;
            var_a1 = *(s8 *)((u8 *)temp_s0 + 5);
            *(&D_0058F668 + temp_a2_3) = var_a1;
            *(&D_0058F66E + temp_a2_3) = *(u8 *)((u8 *)temp_s0 + 0xC);
            *(&D_0058F670 + temp_a2_3) = *(u8 *)((u8 *)temp_s0 + 0xD);
        }
        temp_a0_8 = (s64) (CsSubStat_GetResult(*(s32 *)((u8 *)temp_s0 + 0x34), var_a1, var_a2, var_a3) << 0x38) >> 0x38;
        switch (temp_a0_8) {                        /* irregular */
        case 0:
            CsSubStat_Close(*(s32 *)((u8 *)temp_s0 + 0x34));
            *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
            *(s8 *)((u8 *)temp_s0 + 0) = 4;
            *(s8 *)((u8 *)temp_s0 + 2) = -1;
            *(s8 *)((u8 *)temp_s0 + 0xB) = 0;
            if (*(s8 *)((u8 *)temp_s0 + 3) != 0) {
                *(s8 *)((u8 *)temp_s0 + 3) = 0;
                *(s8 *)((u8 *)temp_s0 + 4) = 0x26;
                *(s8 *)((u8 *)temp_s0 + 5) = 0;
                temp_a3_2 = *(s8 *)((u8 *)temp_s0 + 4);
                temp_a2_4 = (s64) ((s64) *(u8 *)((u8 *)temp_s0 + 7) << 0x30) >> 0x30;
                temp_a2_5 = temp_a2_4 * 2;
                *(&D_0058F664 + temp_a2_5) = (s16) temp_a3_2;
                *(&D_0058F668 + temp_a2_4) = *(s8 *)((u8 *)temp_s0 + 5);
                *(&D_0058F66E + temp_a2_4) = *(u8 *)((u8 *)temp_s0 + 0xC);
                *(&D_0058F670 + temp_a2_4) = *(u8 *)((u8 *)temp_s0 + 0xD);
                temp_a0_9 = *(s32 *)((u8 *)temp_s0 + 0x4C);
                if (temp_a0_9 != 0) {
                    func_0022D0E0(temp_a0_9, 1, temp_a2_5, temp_a3_2);
                }
                *(s32 *)((u8 *)temp_s0 + 0x4C) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 8)) + 0x1C) + ((*(s8 *)((u8 *)temp_s0 + 4) + 0x69) * 4)), 0);
                func_00280E40(*(s32 *)((u8 *)temp_s0 + 0x2C), *(s8 *)((u8 *)temp_s0 + 4));
                CsModel_Shift(*(s32 *)((u8 *)temp_s0 + 0x30), *(&D_0046B560 + (*(s8 *)((u8 *)temp_s0 + 4) * 2)), *(s8 *)((u8 *)temp_s0 + 5));
            }
            temp_s3_2 = D_00470810;
            temp_s2_3 = *(u8 *)((u8 *)temp_s0 + 7) == 0;
            if (*(s8 *)((u8 *)temp_s0 + 1) != 1) {
                *(s8 *)((u8 *)temp_s0 + 1) = 1;
                temp_a0_10 = *(u8 **)((u8 *)temp_s3_2 + 0xC);
                D_00470704 = temp_a0_10;
                D_0047070C = 0x3000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_10, 0x3000);
                D_00470238 = 0;
                temp_a0_11 = *(s32 *)((u8 *)temp_s0 + 0x50);
                if (temp_a0_11 != 0) {
                    func_0022D0E0(temp_a0_11, 1);
                }
                *(s32 *)((u8 *)temp_s0 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3_2 + 8)) + 0x14) + (temp_s2_3 * 4)), 0);
            }
            var_v1_2 = (int *)(&func_0027CB20);
            if (&func_0027CB20 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        case 1:
            CsSubStat_Close(*(s32 *)((u8 *)temp_s0 + 0x34));
            *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
            *(s8 *)((u8 *)temp_s0 + 2) = 1;
            *(s8 *)((u8 *)temp_s0 + 0xB) = 0;
            func_00280DF0(*(s32 *)((u8 *)temp_s0 + 0x2C), *(s8 *)((u8 *)temp_s0 + 4));
            CsModel_SetScale(*(s32 *)((u8 *)temp_s0 + 0x30), *(&D_0046B560 + (*(s8 *)((u8 *)temp_s0 + 4) * 2)), *(s8 *)((u8 *)temp_s0 + 5));
            temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
            *(s32 *)((u8 *)temp_s0_2 + 0x60) = 0x3F000000;
            temp_f1_2 = (0.5f - *(f32 *)((u8 *)temp_s0_2 + 0x5C)) / 30.0f;
            *(f32 *)((u8 *)temp_s0_2 + 0x64) = temp_f1_2;
            *(f32 *)((u8 *)temp_s0_2 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0_2 + 0x5C) + temp_f1_2);
            temp_a0_12 = *(s32 *)((u8 *)temp_s0_2 + 0x28);
            if (temp_a0_12 != 0) {
                func_002F9510(temp_a0_12, 0x3F000000, 0x41F00000);
            }
            temp_a0_13 = *(s32 *)((u8 *)temp_s0_2 + 0x2C);
            if (temp_a0_13 != 0) {
                func_00280D90(temp_a0_13, 0x3F000000, 0x41F00000);
            }
            temp_a0_14 = *(s32 *)((u8 *)temp_s0_2 + 0x30);
            if (temp_a0_14 != 0) {
                CsModel_Ease(temp_a0_14, 0x3F000000, 0x41F00000);
            }
            break;
        }
    } else {
    case -1:
    }
}
