/* Draft (not built): func_00268D00 at 0x00268D00, size 0x13C, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); er 'VsMode_Exit(...)' redeclared was declared as: 'int (...)' now declared as: 'void ()' @ 234: void VsMode_Exit(void) {
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268D00.s */

// src/menu/mn_vsmode.c func_00268D00 cerr diff=-1/0
extern void *D_004707DC;
s32 VsCharasel_Start(s32, s8);
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00268D00(u8 *arg0) {
    f32 temp_f1;
    s32 var_s2;
    s32 var_s2_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *var_s1;
    u8 *var_s1_2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)D_004707DC + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    temp_s1 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_s1 != NULL) {
        func_0022C060(temp_s1, 0x3F800000);
        func_0022CD00(temp_s1);
    }
    var_s2 = 0;
    var_s1 = temp_s0;
    do {
        temp_s3 = *(u8 **)((u8 *)var_s1 + 0x2C);
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    func_00268170(temp_s0);
    func_00267E00(temp_s0);
    var_s2_2 = 0;
    var_s1_2 = temp_s0;
    do {
        temp_s3_2 = *(u8 **)((u8 *)var_s1_2 + 4);
        if (temp_s3_2 != NULL) {
            func_0022C060(temp_s3_2, 0x3F800000);
            func_0022CD00(temp_s3_2);
        }
        var_s2_2 += 1;
        var_s1_2 += 4;
    } while (var_s2_2 < 2);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x48) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x48) = temp_f1;
    if (temp_f1 <= 0.0f) {
        VsCharasel_Start(0, *(s8 *)((u8 *)temp_s0 + 0x53));
        VsMode_Exit();
    }
}
