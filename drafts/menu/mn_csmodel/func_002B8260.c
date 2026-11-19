/* Draft (not built): func_002B8260 at 0x002B8260, size 0x1A8, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x188, original 0x1A8
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B8260.s */

// src/menu/mn_csmodel.c func_002B8260 size diff=61/98
s32 SklSheet_SetIndex(s32);
s32 func_0022C060(void *, s32);
s32 func_00283D00(s32, s16, s32, s32);
extern s32 D_00455350;
extern s32 D_004DFB19;
extern void func_0022CD00(void *);
extern void func_002B8070(void);
void func_002B8260(u8 *arg0) {
    u8 *sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 *var_v1_2;
    f32 temp_f1;
    s16 temp_s0;
    s32 var_s0;
    s32 var_v0;
    u8 **var_s3;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s4;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    var_v1 = &sp60;
    D_00470238 = 0;
    var_v0 = 0x18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(u8 **)((u8 *)temp_s1 + 0);
    sp64 = *(s32 *)((u8 *)temp_s1 + 4);
    sp68 = *(s32 *)((u8 *)temp_s1 + 8);
    sp6C = *(s32 *)((u8 *)temp_s1 + 0xC);
    sp70 = *(s32 *)((u8 *)temp_s1 + 0x40);
    sp74 = *(s32 *)((u8 *)temp_s1 + 0x44);
    temp_a0_2 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (int)(temp_a0_2);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x1000);
    D_00470238 = 0;
    var_s0 = 0;
    var_s3 = &sp60;
    do {
        temp_s4 = *var_s3;
        if (temp_s4 != NULL) {
            func_0022C060(temp_s4, 0x3F800000);
            func_0022CD00(temp_s4);
        }
        var_s0 += 1;
        var_s3 += 4;
    } while (var_s0 < 6);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x68) - gFrameDelta;
    *(f32 *)((u8 *)temp_s1 + 0x68) = temp_f1;
    if (temp_f1 <= 0.0f) {
        temp_s0 = *(&D_00455350 + (*(u8 *)((u8 *)temp_s1 + 0x5E) * 2));
        func_00283D00(0x2000, temp_s0, 1, 0x11403000);
        SklSheet_SetIndex((s32) *(&D_004DFB19 + temp_s0) <= 0);
        var_v1_2 = (int *)(&func_002B8070);
        if (&func_002B8070 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
