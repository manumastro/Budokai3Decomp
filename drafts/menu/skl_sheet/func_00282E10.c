/* Draft (not built): func_00282E10 at 0x00282E10, size 0x4D0, segment menu/skl_sheet (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 245 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/skl_sheet/func_00282E10.s */

// src/menu/skl_sheet.c func_00282E10 diff diff=245/308
extern u8 *D_00470820;
void *A2d_AllocObj(s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00133780(s32, s32);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022C6B0(void *);
void func_00282E10(void) {
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_v0;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    u8 temp_v1_2;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s4;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v1;
    u8 *temp_v1_3;

    func_00133780(0, 1);
    spAC = amGs_SetReg32(0, 0x30000);
    temp_s4 = *(u8 **)((u8 *)D_00470820 + 0x30);
    temp_s0 = D_00470820 + 0x64;
    func_00228430(0);
    func_002284D0(0);
    func_00228430(0);
    func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0) * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
    if (*(s32 *)((u8 *)D_00470820 + 0x58) != 0) {
        var_s1 = *(s32 *)((u8 *)D_00470820 + 0x5C);
        var_s2 = var_s1;
        var_s3 = var_s1 == 0;
        var_s5 = var_s1;
        var_s6 = var_s1;
        var_s7 = var_s1;
        var_fp = var_s1;
        var_s0 = var_s3;
        spA8 = var_s3;
    } else {
        var_s0 = *(s32 *)((u8 *)D_00470820 + 0x5C);
        var_s3 = var_s0 != 0;
        spA8 = var_s0;
        var_s1 = var_s0 == 0;
        var_s2 = var_s1;
        var_s5 = var_s1;
        var_s6 = var_s1;
        var_s7 = var_s1;
        var_fp = var_s1;
    }
    temp_a0 = *(s32 *)((u8 *)D_00470820 + 0x48);
    if ((temp_a0 < 3) || (temp_a0 >= 8)) {
        var_s1 = 0;
        var_s2 = 0;
        var_s5 = 0;
        var_s6 = 0;
        var_s7 = 0;
        var_fp = 0;
        var_s0 = 0;
        spA8 = 0;
    }
    temp_v1 = ((u8 *)&D_004E0660) + (*(s32 *)((u8 *)D_00470820 + 0x50) * 0x28);
    temp_v0 = *(u8 *)((u8 *)temp_v1 + 8) & 7;
    if (temp_v0 > 0) {
        spA4 = temp_v0;
    } else {
        var_s1 = 0;
    }
    temp_v1_2 = *(u8 *)((u8 *)temp_v1 + 0xB);
    if (temp_v1_2 & 1) {
        var_s2 = 0;
    }
    if (!(temp_v1_2 & 8)) {
        var_s5 = 0;
    }
    temp_a0_2 = *(u8 **)((u8 *)D_00470820 + 0x38);
    temp_a1 = *(s32 *)((u8 *)D_00470820 + 0x54) + 0xF00;
    D_00470704 = temp_a0_2;
    D_0047070C = temp_a1;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, temp_a1);
    D_00470238 = 0;
    func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (var_s3 * 4)), 0.0f);
    temp_a0_3 = *(u8 **)((u8 *)D_00470820 + 0x34);
    temp_a1_2 = *(s32 *)((u8 *)D_00470820 + 0x54) + 0x500;
    D_00470704 = temp_a0_3;
    D_0047070C = temp_a1_2;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, temp_a1_2);
    D_00470238 = 0;
    if (var_s2 != 0) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x20), 0.0f);
    }
    if (var_s1 != 0) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x1C), (f32) (spA4 - 1));
    }
    if (var_s5 != 0) {
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x24), 0.0f);
    }
    temp_s1 = *(u8 **)((u8 *)D_00470820 + 0x3C);
    temp_a1_3 = *(s32 *)((u8 *)D_00470820 + 0x54);
    D_0047070C = temp_a1_3;
    D_00470704 = temp_s1;
    D_00470708 = 0;
    amModel_SetCurrent(temp_s1, temp_a1_3);
    D_00470238 = 0;
    if (var_s6 != 0) {
        temp_v0_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x3C), 0);
        *(s16 *)((u8 *)temp_v0_2 + 0x18) = 0;
        func_00282CB0(temp_v0_2, temp_s1, *(s16 *)((u8 *)temp_v0_2 + 0x18), 0x24);
        func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
        func_0022D4B0(temp_v0_2, 1);
    }
    if (var_s7 != 0) {
        temp_v0_3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x44), 0);
        *(s16 *)((u8 *)temp_v0_3 + 0x18) = 2;
        func_00282CB0(temp_v0_3, temp_s1, *(s16 *)((u8 *)temp_v0_3 + 0x18), 9);
        func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
        func_0022D4B0(temp_v0_3, 1);
    }
    if (var_fp != 0) {
        temp_v0_4 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x40), 0);
        *(s16 *)((u8 *)temp_v0_4 + 0x18) = 3;
        func_00282CB0(temp_v0_4, temp_s1, *(s16 *)((u8 *)temp_v0_4 + 0x18), 9);
        func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
        func_0022D4B0(temp_v0_4, 1);
    }
    if (var_s0 != 0) {
        temp_v0_5 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x48), 0);
        *(s16 *)((u8 *)temp_v0_5 + 0x18) = 1;
        func_00282CB0(temp_v0_5, temp_s1, *(s16 *)((u8 *)temp_v0_5 + 0x18), 9);
        func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
        func_0022D4B0(temp_v0_5, 1);
    }
    if (spA8 != 0) {
        temp_v0_6 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x4C), 0);
        *(s16 *)((u8 *)temp_v0_6 + 0x18) = 4;
        func_00282CB0(temp_v0_6, temp_s1, *(s16 *)((u8 *)temp_v0_6 + 0x18), 9);
        func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
        func_0022D4B0(temp_v0_6, 1);
    }
    func_00228410();
    temp_a0_4 = *(u8 **)((u8 *)D_00470820 + 0x34);
    temp_a1_4 = *(s32 *)((u8 *)D_00470820 + 0x54) + 0x500;
    D_00470704 = temp_a0_4;
    D_0047070C = temp_a1_4;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_4, temp_a1_4);
    D_00470238 = 0;
    temp_v1_3 = D_00470820 + 0x94;
    if ((*(s16 *)((u8 *)D_00470820 + 0x60) != 0) && (*(s32 *)((u8 *)temp_v1_3 + 0xC) == 0)) {
        func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)D_00470820 + 0x94) * 4)), (f32) *(s32 *)((u8 *)temp_v1_3 + 8) * gFrameDelta);
    }
    func_00228410();
    amGs_SetReg32(0, spAC);
    func_00133780(0, 0);
}
