/* Draft (not built): func_00265800 at 0x00265800, size 0x1DC, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 75 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x1DC
 * Original: asm/nonmatchings/menu/mn_dataload/func_00265800.s */

// src/menu/mn_dataload.c func_00265800 size diff=75/122
s32 func_00228430(s32 *);
s32 func_002284D0(s32 *);
s32 func_0022BF80(f32 *);
s32 func_0022C060(f32 *, s32);
f32 *func_0022D670(s32, s32);
f32 *func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00265800(u8 *arg0) {
    s32 sp30;
    f32 sp4C;
    f32 *var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *var_s0;

    var_s0 = arg0;
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    func_002284D0(&sp30);
    var_s1 = &sp4C;
    *var_s1 = *(f32 *)((u8 *)var_s0 + 0x40);
    func_00228430(&sp30);
    func_0022C060(*(f32 **)((u8 *)var_s0 + 8), 0x3F800000);
    func_0022CD00(*(f32 **)((u8 *)var_s0 + 8));
    func_00228410();
    *var_s1 = *(f32 *)((u8 *)var_s0 + 0x40);
    func_00228430(&sp30);
    if (*(u16 *)((u8 *)var_s0 + 0x32) & 0x100) {
        func_002655F0(var_s0);
        var_s1 = *(f32 **)((u8 *)var_s0 + 0x10);
        temp_a0_2 = *(u8 **)((u8 *)var_s0 + 4);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x1000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x1000);
        D_00470238 = 0;
        if (!(*(u16 *)((u8 *)var_s0 + 0x32) & 2)) {
            if (var_s1 == NULL) {
                *(f32 **)((u8 *)var_s0 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0)) + 0x1C)) + 0x120), 0);
                var_s1 = *(f32 **)((u8 *)var_s0 + 0x10);
            } else if (func_0022BF80(var_s1) == 0xFF) {
                func_0022D0E0((s32)(var_s1), 1);
                *(f32 **)((u8 *)var_s0 + 0x10) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0)) + 0x14)) + 4), 0);
                *(u16 *)((u8 *)var_s0 + 0x32) = (u16) (*(u16 *)((u8 *)var_s0 + 0x32) | 2);
                var_s1 = *(f32 **)((u8 *)var_s0 + 0x10);
            }
        }
        func_0022C060(var_s1, 0x3F800000);
        func_0022CD00(var_s1);
        func_00265420(var_s0);
        func_00265020(var_s0);
        var_s1 = *(f32 **)((u8 *)var_s0 + 0x28);
        temp_a0_3 = *(u8 **)((u8 *)var_s0 + 4);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x1000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x1000);
        D_00470238 = 0;
        if (var_s1 == NULL) {
            *(f32 **)((u8 *)var_s0 + 0x28) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 0)) + 0x1C)) + 0x108), 0);
            var_s1 = *(f32 **)((u8 *)var_s0 + 0x28);
        }
        func_0022C060(var_s1, 0x3F800000);
        func_0022CD00(var_s1);
    }
    func_00228410();
    A2d_FlushList();
}
