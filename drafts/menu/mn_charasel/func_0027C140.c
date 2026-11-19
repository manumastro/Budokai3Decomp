/* Draft (not built): func_0027C140 at 0x0027C140, size 0x1AC, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); edeclared was declared as: 'int (...)' now declared as: 'int (int, float, float)' @ 92: s32 CsModel_Ease(s32, f32, f32);
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027C140.s */

// src/menu/mn_charasel.c func_0027C140 cerr diff=-1/0
extern void *D_00470810;
s32 func_0022D860(s32, s32);
s32 func_003101D0(s32);
s32 func_00310290(s32);
s32 memcpy(void *, s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0027CB20(void);
void func_0027C140(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s0;
    u8 *temp_a0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    if ((func_003101D0(*(s32 *)((u8 *)temp_s2 + 0x34)) & 0xFF) == 4) {
        func_00310290(*(s32 *)((u8 *)temp_s2 + 0x34));
        *(s32 *)((u8 *)temp_s2 + 0x34) = 0;
        *(s8 *)((u8 *)temp_s2 + 0) = 4;
        *(s8 *)((u8 *)temp_s2 + 2) = -1;
        *(s8 *)((u8 *)temp_s2 + 0xB) = 0;
        memcpy(temp_s2 + 0x6C, *(s32 *)((u8 *)temp_s2 + 0x78) + (*(s8 *)((u8 *)temp_s2 + 4) * 0xC) + 0x258, 0xC);
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
    }
}
