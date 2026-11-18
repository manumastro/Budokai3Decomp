/* Draft (not built): func_002693E0 at 0x002693E0, size 0x1C4, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D8, original 0x1C4
 * Original: asm/nonmatchings/menu/mn_vsmode/func_002693E0.s */

// src/menu/mn_vsmode.c func_002693E0 size diff=63/118
extern void *D_004707DC;
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_0022C060(void *, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0618;
extern f32 gFrameDelta;
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
extern void amAdx_Pause();
extern void Obj_SetF3C();
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_00268E40(void);
void func_002693E0(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f1;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s5;

    var_s1 = arg0;
    var_s2 = D_004707DC;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)var_s2 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s3 = *(u8 **)((u8 *)var_s0 + 0);
    if (var_s3 != NULL) {
        func_0022C060(var_s3, 0x3F800000);
        func_0022CD00(var_s3);
    }
    var_s4 = 0;
    var_s3 = var_s0;
    do {
        var_s5 = *(u8 **)((u8 *)var_s3 + 0x2C);
        if (var_s5 != NULL) {
            func_0022C060(var_s5, 0x3F800000);
            func_0022CD00(var_s5);
        }
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 2);
    func_00268170(var_s0);
    func_00267E00(var_s0);
    var_s4 = 0;
    var_s3 = var_s0;
    do {
        var_s5 = *(u8 **)((u8 *)var_s3 + 4);
        if (var_s5 != NULL) {
            func_0022C060(var_s5, 0x3F800000);
            func_0022CD00(var_s5);
        }
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 2);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)var_s0 + 0x48) - gFrameDelta;
    *(f32 *)((u8 *)var_s0 + 0x48) = temp_f1;
    if (temp_f1 <= 0.0f) {
        Obj_SetF3C(*(s32 *)((u8 *)var_s0 + 0x44), 0);
        *(s32 *)((u8 *)var_s0 + 0x4C) = amAdx_PlayAfs(1, 0x211B7, 0);
        amAdx_SetVolume(*(s32 *)((u8 *)var_s0 + 0x4C), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)var_s0 + 0x4C), 0);
        *(s8 *)((u8 *)var_s0 + 0x50) = 0;
        temp_a0_2 = *(u8 **)((u8 *)var_s2 + 0xC);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x1000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x1000);
        D_00470238 = 0;
        var_v1 = (s32 *)(&func_00268E40);
        *(s32 *)((u8 *)var_s0 + 0x3C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 8)) + 0x14)) + 0x10), 0);
        if (&func_00268E40 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)var_s1 + 0x1C) = var_v1;
    }
}
