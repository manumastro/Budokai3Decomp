/* Draft (not built): func_00268BF0 at 0x00268BF0, size 0x104, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268BF0.s */

extern void *D_004707DC;
s32 func_0022C060(s32 *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void A2d_FlushList(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_00268BF0(u8 *arg0) {
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s3;
    s32 var_s2;
    u8 *temp_a0;
    var_s0 = *(s32 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)D_004707DC + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s1 = (int *)*var_s0;
    if (var_s1 != NULL) {
        func_0022CD00(var_s1);
        func_0022C060(var_s1, 0x3F800000);
    }
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        var_s3 = *(s32 **)((u8 *)var_s1 + 0x2C);
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
    var_s1 = NULL;
    do {
        var_s2 = *(s32 *)((u8 *)var_s0 + 4);
        if (var_s2 != 0) {
            func_0022CD00((u8 *)var_s2);
            func_0022C060((s32 *)var_s2, 0x3F800000);
        }
        var_s1 += 1;
        var_s0 += 4;
    }
    while ((s32)var_s1 < 2);
    A2d_FlushList();
}
