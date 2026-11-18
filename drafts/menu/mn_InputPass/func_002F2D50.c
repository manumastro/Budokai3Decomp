/* Draft (not built): func_002F2D50 at 0x002F2D50, size 0x1B0, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xC)) + 0x1C) + (temp_s2 * 4)), &sp40, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F2D50.s */

// src/menu/mn_InputPass.c func_002F2D50 cerr diff=-1/0
s32 func_00227A30(f32 *);
s32 func_00228240(f32 *);
s32 func_00228430(s32);
s32 func_002284D0(f32 *);
s32 func_0022C060(void *, s32);
extern s128 D_00458060;
extern void func_00228410(void);
extern void func_0022CD00(void *);
void func_002F2D50(u8 *arg0) {
    f32 sp40;
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 temp_s2;
    u16 temp_a1;
    u8 temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s1;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0);
    temp_s1 = gInputName;
    if (temp_s0 != NULL) {
        func_0022C060(temp_s0, 0x3F800000);
        func_0022CD00(temp_s0);
    }
    temp_a0 = *(u8 *)((u8 *)arg0 + 0x60);
    if (temp_a0 == 3) {
        temp_a1 = *(u16 *)((u8 *)arg0 + 0x4C);
        temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x24);
        if (temp_a1 != 0xFFFF) {
            *(s16 *)((u8 *)temp_a0_2 + 0x18) = 3;
            func_0022CF70(temp_a0_2, temp_a1, 3);
        }
    } else if (temp_a0 == 2) {
        func_002F2AF0(arg0);
    }
    temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x28);
    if (temp_s0_2 != NULL) {
        func_002284D0(&sp70);
        func_00228430(0);
        sp60 = (s128) D_00458060;
        sp60 = 60.0f + *(f32 *)((u8 *)arg0 + 0x44);
        sp64 = 49.0f + *(f32 *)((u8 *)arg0 + 0x48);
        func_00227A30(&sp60);
        func_0022C060(temp_s0_2, 0x3F800000);
        func_0022CD00(temp_s0_2);
        func_00228410();
    }
    temp_s0_3 = *(u8 **)((u8 *)arg0 + 0x2C);
    if (temp_s0_3 != NULL) {
        temp_s2 = *(u16 *)((u8 *)arg0 + 0x4E) + 0x33;
        func_002284D0(&sp70);
        func_00228430(0);
        func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xC)) + 0x1C) + (temp_s2 * 4)), &sp40, -1, *(f32 *)((u8 *)temp_s0_3 + 0x10));
        sp70 = sp40;
        sp74 = sp44;
        sp78 = sp48;
        sp7C = sp4C;
        func_00228240(&sp70);
        func_0022C060(temp_s0_3, 0x3F800000);
        func_0022CD00(temp_s0_3);
        func_00228410();
    }
}
