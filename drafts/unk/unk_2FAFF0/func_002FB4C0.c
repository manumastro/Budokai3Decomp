/* Draft (not built): func_002FB4C0 at 0x002FB4C0, size 0x5B8, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 148 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x5C8, original 0x5B8
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FB4C0.s */

// src/unk/unk_2FAFF0.c func_002FB4C0 size diff=148/370
void *A2d_AllocObj(s32, f32);
s32 Zenie_GetChange();
s32 Zenie_IsAtLimit();
s32 amCamera_SetScreen(s32 *, s32 *, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133780(s32, s32);
s32 func_0013B110(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
s32 func_002FAB70();
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void amMtxStack_Init(void);
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amCamera_Init(void *);
extern void func_00209E50(void *);
extern void func_0013B160(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void Zenie_Draw(void);
extern char D_003F0800[];
extern void func_0022C6B0(void *);
extern void func_0013AFA0(void *);
extern void func_00208D70(void *);
void func_002FB4C0(Task2FAFF0 *arg0) {
    s32 sp70;
    s32 spD0;
    s32 temp_v1;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;

    var_s0 = (unsigned char *)(arg0);
    amMtxStack_Init();
    func_0013AFA0(NULL);
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x40);
    var_s2 = temp_v0 + 0x30;
    func_00300D20(var_s0);
    var_s4 = (u8 *)1;
    if ((s32)(D_005CA030) == (s32)(1)) {

    } else {
        var_s4 = NULL;
    }
    var_s3 = *(u8 **)((u8 *)gTourMap + 0x28);
    var_s0 = *(u8 **)((u8 *)gTourMap + 0x34);
    D_0047070C = 0x11406000;
    D_00470704 = var_s3;
    D_00470708 = 0;
    amModel_SetCurrent(var_s3, 0x11406000);
    D_00470238 = 0;
    func_00133780(0, 1);
    var_s1 = (unsigned char *)(gTourMap + 0x25C);
    temp_v1 = *(s32 *)((u8 *)gTourMap + 0x4C);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x88), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        if (var_s4 != NULL) {
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xB0), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xB4), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            func_002FAB70();
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xA8), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xAC), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        } else {
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xB0), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xB4), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            func_00133780(0, 0);
            func_002FAFF0(*(s32 *)((u8 *)gTourMap + 0x74));
            func_00133780(0, 1);
            D_00470704 = var_s3;
            D_0047070C = 0x11406000;
            D_00470708 = 0;
            amModel_SetCurrent(var_s3, 0x11406000);
            D_00470238 = 0;
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xA8), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0xAC), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        }
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x94), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x98), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x9C), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        break;
    case 2:
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x6C), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x68), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        if (var_s4 != NULL) {
            func_002FAB70();
        } else {
            func_00133780(0, 0);
            func_002FAFF0(*(s32 *)((u8 *)gTourMap + 0x74));
            func_00133780(0, 1);
            D_00470704 = var_s3;
            D_0047070C = 0x11406000;
            D_00470708 = 0;
            amModel_SetCurrent(var_s3, 0x11406000);
            D_00470238 = 0;
        }
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x78), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x7C), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        break;
    }
    if (*(s32 *)((u8 *)gTourMap + 0x4C) == 2) {
        amCamera_Init(&spD0);
        func_00131B90(&sp70);
        func_00131F00(&sp70, 0, 0);
        func_0013B160(NULL);
        amCamera_SetScreen(&sp70, &spD0, 0x43F00000);
        func_00209E50(NULL);
        func_00132DF0(NULL);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
        M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
        temp_a0 = *(u8 **)((u8 *)gTourMap + 0x2C);
        D_0047070C = 0x11407000;
        D_00470704 = temp_a0;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x11407000);
        D_00470238 = 0;
        func_0013B0B0(D_003F0800);
        func_00208D70(*(u8 **)((u8 *)var_s2 + 8));
        func_0013B110(1);
    }
    if (var_s4 != NULL) {
        D_00470704 = var_s3;
        D_0047070C = 0x11406000;
        D_00470708 = 0;
        amModel_SetCurrent(var_s3, 0x11406000);
        D_00470238 = 0;
        var_s4 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x34), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        func_0022C6B0(var_s4);
        if ((Zenie_IsAtLimit() != 0) && (var_s3 = NULL, ((*(s32 *)((u8 *)temp_v0 + 0x30) < 3) == 0))) {

        } else {
            var_s3 = (unsigned char *)(*(s32 *)((u8 *)gTourMap + 0x58) - Zenie_GetChange());
        }
        var_s2 = NULL;
        do {
            temp_v0_2 = A2d_AllocObj(*(s32 *)((u8 *)(((s32) var_s2 * 4) + *(u8 **)((u8 *)var_s0 + 0x1C)) + 0x40), (f32) ((s32) var_s3 % 10));
            var_s5 = temp_v0_2;
            *(f32 *)((u8 *)temp_v0_2 + 0x24) = (f32) *(f32 *)((u8 *)var_s4 + 0x24);
            func_0022C6B0(var_s5);
            func_0022D4B0(var_s5, 1);
            var_s3 = (unsigned char *)(((s32) var_s3 / 10) + ((u32) var_s3 >> 0x1F));
            var_s2 += 1;
        } while (var_s3 != NULL);
        if ((s32) var_s2 >= 4) {
            temp_v0_3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x58), 0.0f);
            var_s5 = temp_v0_3;
            *(f32 *)((u8 *)temp_v0_3 + 0x24) = (f32) *(f32 *)((u8 *)var_s4 + 0x24);
            func_0022C6B0(var_s5);
            func_0022D4B0(var_s5, 1);
        }
        func_0022D4B0(var_s4, 1);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x1C)) + 0x5C), (f32) *(s32 *)((u8 *)var_s1 + 8) * gFrameDelta);
        Zenie_Draw();
    }
    func_00133780(0, 0);
}
