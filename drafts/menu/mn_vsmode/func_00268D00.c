/* Draft (not built): func_00268D00 at 0x00268D00, size 0x13C, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268D00.s */

extern void *D_004707DC;
void VsMode_Exit(void);
s32 VsCharasel_Start(s32, s8);
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void A2d_FlushList(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_00268D00(u8 *arg0) {
    u8 *var_s3;
    f32 temp_f1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *var_s0;
    u8 *var_s1;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)D_004707DC + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s1 = *(u8 **)((u8 *)var_s0 + 0);
    if (var_s1 != NULL) {
        func_0022CD00(var_s1);
        func_0022C060(var_s1, 0x3F800000);
    }
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        var_s3 = *(u8 **)((u8 *)var_s1 + 0x2C);
        if (var_s3 != NULL) {
            func_0022CD00(var_s3);
            func_0022C060(var_s3, 0x3F800000);
        }
        var_s2 += 1;
        var_s1 += 4;
    }
    while (var_s2 < 2);
    func_00268170(var_s0);
    func_00267E00(var_s0);
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        var_s3 = *(u8 **)((u8 *)var_s1 + 4);
        if (var_s3 != NULL) {
            func_0022CD00(var_s3);
            func_0022C060(var_s3, 0x3F800000);
        }
        var_s2 += 1;
        var_s1 += 4;
    }
    while (var_s2 < 2);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)var_s0 + 0x48) - gFrameDelta;
    *(f32 *)((u8 *)var_s0 + 0x48) = temp_f1;
    if (temp_f1 <= 0.0f) {
        VsCharasel_Start(0, *(s8 *)((u8 *)var_s0 + 0x53));
        VsMode_Exit();
    }
}
