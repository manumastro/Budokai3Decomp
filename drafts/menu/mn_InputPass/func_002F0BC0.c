/* Draft (not built): func_002F0BC0 at 0x002F0BC0, size 0x1B0, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x180, original 0x1B0
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F0BC0.s */

// src/menu/mn_InputPass.c func_002F0BC0 size diff=40/96
s32 func_00227A30(f32 *);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_0022C060(void *, s32);
extern s128 D_00458050;
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_002F0BC0(u8 *arg0) {
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    f32 sp40;
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    u16 temp_a1;
    u8 temp_a0;
    u8 *temp_a0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s0 = *(u8 **)((u8 *)arg0 + 0);
    var_s1 = gInputName;
    var_s2 = arg0;
    if (var_s0 != NULL) {
        func_0022C060(var_s0, 0x3F800000);
        func_0022CD00(var_s0);
    }
    temp_a0 = *(u8 *)((u8 *)var_s2 + 0x170);
    if (temp_a0 == 3) {
        temp_a1 = *(u16 *)((u8 *)var_s2 + 0x124);
        temp_a0_2 = *(u8 **)((u8 *)var_s2 + 0x94);
        if (temp_a1 != 0xFFFF) {
            *(s16 *)((u8 *)temp_a0_2 + 0x18) = 3;
            func_0022CF70(temp_a0_2, temp_a1, 3);
        }
    } else if (temp_a0 == 2) {
        func_002F0960(var_s2);
    }
    var_s0 = *(u8 **)((u8 *)var_s2 + 0x98);
    if (var_s0 != NULL) {
        func_002284D0(&sp70);
        func_00228430(0);
        sp60 = (s128) D_00458050;
        sp60 = 60.0f + *(f32 *)((u8 *)var_s2 + 0x11C);
        sp64 = 49.0f + *(f32 *)((u8 *)var_s2 + 0x120);
        func_00227A30(&sp60);
        func_0022C060(var_s0, 0x3F800000);
        func_0022CD00(var_s0);
        func_00228410();
    }
    var_s0 = *(u8 **)((u8 *)var_s2 + 0x9C);
    if (var_s0 != NULL) {
        var_s2 = (unsigned char *)(*(u16 *)((u8 *)var_s2 + 0x126) + 0xF);
        func_002284D0(&sp70);
        func_00228430(0);
        func_00229800((void *)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0xC)) + 0x1C) + ((s32) var_s2 * 4))), (void *)(&sp40), -1, *(f32 *)((u8 *)var_s0 + 0x10));
        sp70 = sp40;
        sp74 = sp44;
        sp78 = sp48;
        sp7C = sp4C;
        func_00228240(&sp70);
        func_0022C060(var_s0, 0x3F800000);
        func_0022CD00(var_s0);
        func_00228410();
    }
}
