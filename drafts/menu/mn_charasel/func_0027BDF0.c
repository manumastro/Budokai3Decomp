/* Draft (not built): func_0027BDF0 at 0x0027BDF0, size 0x344, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); declared was declared as: 'int (...)' now declared as: 'int (int, float, float)' @ 161: s32 CsModel_Ease(s32, f32, f32);
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027BDF0.s */

// src/menu/mn_charasel.c func_0027BDF0 cerr diff=-1/0
extern void *D_00470810;
s32 CsModel_SetScale(s32, s16, s8);
s32 CsSubArena_Close(s32);
s64 CsSubArena_GetResult(s32);
s32 func_0022D860(s32, s32);
s32 func_00280DF0(s32, s8);
extern s32 D_0046B560;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0027CB20(void);
void func_0027BDF0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_9;
    s32 temp_s0;
    s32 temp_s0_3;
    s64 temp_a0_7;
    u8 *temp_a0;
    u8 *temp_a0_8;
    u8 *temp_s0_2;
    u8 *temp_s0_4;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(s8 *)((u8 *)temp_s2 + 0) == 4) {
        *(s8 *)((u8 *)temp_s2 + 2) = -1;
        *(u8 *)((u8 *)temp_s2 + 6) = (u8) (*(u8 *)((u8 *)temp_s2 + 6) & 0xF7);
        temp_s1 = D_00470810;
        temp_s0 = *(u8 *)((u8 *)temp_s2 + 7) == 0;
        if (*(s8 *)((u8 *)temp_s2 + 1) != 1) {
            *(s8 *)((u8 *)temp_s2 + 1) = 1;
            temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xC);
            D_00470704 = temp_a0;
            D_0047070C = 0x3000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0, 0x3000);
            D_00470238 = 0;
            temp_a0_2 = *(s32 *)((u8 *)temp_s2 + 0x50);
            if (temp_a0_2 != 0) {
                func_0022D0E0(temp_a0_2, 1);
            }
            *(s32 *)((u8 *)temp_s2 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 8)) + 0x14) + (temp_s0 * 4)), 0);
        }
        temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
        *(s32 *)((u8 *)temp_s0_2 + 0x60) = 0x3F800000;
        temp_f1 = (1.0f - *(f32 *)((u8 *)temp_s0_2 + 0x5C)) / 10.0f;
        *(f32 *)((u8 *)temp_s0_2 + 0x64) = temp_f1;
        *(f32 *)((u8 *)temp_s0_2 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0_2 + 0x5C) + temp_f1);
        temp_a0_3 = *(s32 *)((u8 *)temp_s0_2 + 0x28);
        if (temp_a0_3 != 0) {
            func_002F9510(temp_a0_3, 0x3F800000, 0x41200000);
        }
        temp_a0_4 = *(s32 *)((u8 *)temp_s0_2 + 0x2C);
        if (temp_a0_4 != 0) {
            func_00280D90(temp_a0_4, 0x3F800000, 0x41200000);
        }
        temp_a0_5 = *(s32 *)((u8 *)temp_s0_2 + 0x30);
        if (temp_a0_5 != 0) {
            CsModel_Ease(temp_a0_5, 0x3F800000, 0x41200000);
        }
        var_v1 = (int *)(&func_0027CB20);
        if (&func_0027CB20 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    temp_a0_6 = *(s32 *)((u8 *)temp_s2 + 0x34);
    if ((temp_a0_6 != 0) && (temp_a0_7 = (s64) (CsSubArena_GetResult(temp_a0_6) << 0x38) >> 0x38, (temp_a0_7 != -1))) {
        switch (temp_a0_7) {                        /* irregular */
        case 0:
            CsSubArena_Close(*(s32 *)((u8 *)temp_s2 + 0x34));
            *(s32 *)((u8 *)temp_s2 + 0x34) = 0;
            *(s8 *)((u8 *)temp_s2 + 0) = 4;
            *(s8 *)((u8 *)temp_s2 + 2) = -1;
            *(s8 *)((u8 *)temp_s2 + 0xB) = 0;
            temp_s1_2 = D_00470810;
            temp_s0_3 = *(u8 *)((u8 *)temp_s2 + 7) == 0;
            if (*(s8 *)((u8 *)temp_s2 + 1) != 1) {
                *(s8 *)((u8 *)temp_s2 + 1) = 1;
                temp_a0_8 = *(u8 **)((u8 *)temp_s1_2 + 0xC);
                D_00470704 = temp_a0_8;
                D_0047070C = 0x3000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_8, 0x3000);
                D_00470238 = 0;
                temp_a0_9 = *(s32 *)((u8 *)temp_s2 + 0x50);
                if (temp_a0_9 != 0) {
                    func_0022D0E0(temp_a0_9, 1);
                }
                *(s32 *)((u8 *)temp_s2 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1_2 + 8)) + 0x14) + (temp_s0_3 * 4)), 0);
            }
            var_v1_2 = (int *)(&func_0027CB20);
            if (&func_0027CB20 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            return;
        case 1:
            CsSubArena_Close(*(s32 *)((u8 *)temp_s2 + 0x34));
            *(s32 *)((u8 *)temp_s2 + 0x34) = 0;
            *(s8 *)((u8 *)temp_s2 + 2) = 1;
            *(s8 *)((u8 *)temp_s2 + 0xB) = 0;
            func_00280DF0(*(s32 *)((u8 *)temp_s2 + 0x2C), *(s8 *)((u8 *)temp_s2 + 4));
            CsModel_SetScale(*(s32 *)((u8 *)temp_s2 + 0x30), *(&D_0046B560 + (*(s8 *)((u8 *)temp_s2 + 4) * 2)), *(s8 *)((u8 *)temp_s2 + 5));
            temp_s0_4 = *(u8 **)((u8 *)arg0 + 0x30);
            *(s32 *)((u8 *)temp_s0_4 + 0x60) = 0x3F000000;
            temp_f1_2 = (0.5f - *(f32 *)((u8 *)temp_s0_4 + 0x5C)) / 30.0f;
            *(f32 *)((u8 *)temp_s0_4 + 0x64) = temp_f1_2;
            *(f32 *)((u8 *)temp_s0_4 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0_4 + 0x5C) + temp_f1_2);
            temp_a0_10 = *(s32 *)((u8 *)temp_s0_4 + 0x28);
            if (temp_a0_10 != 0) {
                func_002F9510(temp_a0_10, 0x3F000000, 0x41F00000);
            }
            temp_a0_11 = *(s32 *)((u8 *)temp_s0_4 + 0x2C);
            if (temp_a0_11 != 0) {
                func_00280D90(temp_a0_11, 0x3F000000, 0x41F00000);
            }
            temp_a0_12 = *(s32 *)((u8 *)temp_s0_4 + 0x30);
            if (temp_a0_12 != 0) {
                CsModel_Ease(temp_a0_12, 0x3F000000, 0x41F00000);
            }
            break;
        }
    }
}
