/* Draft (not built): func_0026B880 at 0x0026B880, size 0x48C, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 135 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4A4, original 0x48C
 * Original: asm/nonmatchings/menu/ess_main/func_0026B880.s */

// src/menu/ess_main.c func_0026B880 size diff=135/297
s32 A2d_AllocObj(s32, s32);
s32 func_00139620(s32, void *, s32, s32, s32);
s32 func_001A5490(s32, s32, f32);
s32 func_00227A30(s32);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00229800(s32, s32 *, s32, s32);
s32 func_0022C430(s32, f32);
s32 func_0022D0E0(void *, s32);
s32 func_0022D4B0(s32, s32);
void *func_0022D860(s32, f32);
extern void func_0022CD00(void *);
extern void Obj_CopyVec4F50(void *, void *);
extern void func_0022CF70();
extern void Obj_SetF3C();
void func_0026B880(void) {
    u8 sp[0x400];
    s32 sp60;
    f32 temp_f2;
    s32 temp_a1;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    u8 *temp_a0;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s4_3;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *var_s1;

    temp_a0 = *(u8 **)((u8 *)gEssMain + 0x28);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x11401000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x11401000);
    D_00470238 = 0;
    func_00133780(0, 1);
    temp_s3 = *(u8 **)((u8 *)gEssMain + 0x24);
    func_00228430(0);
    func_002284D0(0);
    func_0022C1D0((void *)(*(*(u8 **)((u8 *)temp_s3 + 0x14) + (*(s32 *)((u8 *)gEssMain + 0x90) * 4))), 1, (f32) *(s32 *)((u8 *)gEssMain + 0x98) * gFrameDelta);
    func_00228430(0);
    temp_v0 = func_0022D860(*(*(u8 **)((u8 *)temp_s3 + 0x14) + (*(s32 *)((u8 *)gEssMain + 0x1E0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0x1E8) * gFrameDelta);
    func_0022CD00(temp_v0);
    var_s0 = 0;
    var_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x14)) + 0x3C);
    temp_s4 = gEssMain + 0xF0;
loop_8:
    if (var_s0 < 4) {
        func_00228430(0);
        if (var_s0 == *(s32 *)((u8 *)gEssMain + 0x50)) {
            temp_v0_2 = *(s32 *)((u8 *)temp_s4 + 0x10);
            if (temp_v0_2 != 0) {
                func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (temp_v0_2 * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s4 + 8) * gFrameDelta);
            }
        }
        func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_s4 + 0) * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s4 + 8) * gFrameDelta);
        temp_v1 = (var_s0 * 4) + sp;
        *(s32 *)((u8 *)temp_v1 + 0x80) = A2d_AllocObj(*(s32 *)((u8 *)var_s1 + 0x10), 0);
        func_0022CF70(*(s32 *)((u8 *)temp_v1 + 0x80));
        if (var_s0 == *(s32 *)((u8 *)gEssMain + 0x50)) {
            temp_v1_2 = *(u8 **)((u8 *)((var_s0 * 4) + sp) + 0x80);
            *(s32 *)((u8 *)temp_v1_2 + 0x50) = 0x3F800000;
            *(s32 *)((u8 *)temp_v1_2 + 0x54) = 0x3F800000;
            *(s32 *)((u8 *)temp_v1_2 + 0x58) = 0x3F800000;
            *(f32 *)((u8 *)temp_v1_2 + 0x5C) = (f32) *(f32 *)((u8 *)temp_v1_2 + 0x5C);
            temp_f2 = *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x30)) + 0x28);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_v1_3 = *(u8 **)((u8 *)temp_v0 + 0x30);
            *(f32 *)((u8 *)temp_v1_3 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v1_3 + 0x5C) * *(f32 *)((u8 *)(*(u8 **)((u8 *)((var_s0 * 4) + sp) + 0x80)) + 0x5C));
            *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x30)) + 0x28) = temp_f2;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            temp_v0_3 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x2C)) + 0x30);
            *(f32 *)((u8 *)temp_v0_3 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x5C) * *(f32 *)((u8 *)(*(u8 **)((u8 *)((var_s0 * 4) + sp) + 0x80)) + 0x5C));
            *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x2C)) + 0x30)) + 0x28) = temp_f2;
        }
        func_00228410();
        var_s1 = *(u8 **)((u8 *)var_s1 + 4);
        var_s0 += 1;
        goto loop_8;
    }
    func_00228410();
    func_0022C1D0((void *)(*(*(u8 **)((u8 *)temp_s3 + 0x14) + (*(s32 *)((u8 *)gEssMain + 0xC0) * 4))), 1, (f32) *(s32 *)((u8 *)gEssMain + 0xC8) * gFrameDelta);
    var_s0_2 = 0;
loop_12:
    if (var_s0_2 < 4) {
        func_0022D4B0(*(s32 *)((u8 *)((var_s0_2 * 4) + sp) + 0x80), 1);
        var_s0_2 += 1;
        goto loop_12;
    }
    func_0022D0E0(temp_v0, 1);
    func_00228430(0);
    temp_s4_2 = gEssMain + 0x120;
    if ((D_004707F0 != 0) && !(*(u8 *)((u8 *)gEssMain + 0x5D) & 1)) {
        func_00227A30(D_004707F0);
    }
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_s4_2 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s4_2 + 8));
    temp_a1 = *(s32 *)((u8 *)gEssMain + 0x190);
    if (temp_a1 >= 0) {
        func_001A5490(*(s32 *)((u8 *)gEssMain + 0x2C), temp_a1, (f32) *(s32 *)((u8 *)(gEssMain + 0x180) + 8) * gFrameDelta);
    }
    func_00228410();
    temp_s4_3 = gEssMain + 0x1B0;
    func_0022C430(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)gEssMain + 0x1B0) * 4)), (f32) *(s32 *)((u8 *)gEssMain + 0x1B8));
    if (func_0022BC30(*(*(u8 **)((u8 *)temp_s3 + 0x1C) + (*(s32 *)((u8 *)temp_s4_3 + 0) * 4)), (f32) *(s32 *)((u8 *)temp_s4_3 + 8) * gFrameDelta) == 0xFF) {
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x180), &sp60, 0, 0);
        Obj_CopyVec4F50(*(u8 **)((u8 *)gEssMain + 0x20), &sp60);
        Obj_SetF3C(*(u8 **)((u8 *)gEssMain + 0x20), *(s16 *)((u8 *)temp_s4_3 + 0x10));
    } else {
        Obj_SetF3C(*(u8 **)((u8 *)gEssMain + 0x20), -1);
    }
    func_00228410();
    if (*(f32 *)((u8 *)gEssMain + 0x4C) != 0.0f) {
        func_00139620(0x902, gEssMain + 0x40, -1, 0x44, 0);
    }
    func_00133780(0, 0);
}
