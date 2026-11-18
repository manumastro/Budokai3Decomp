/* Draft (not built): func_002F4330 at 0x002F4330, size 0x11C, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE4, original 0x11C
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4330.s */

// src/menu/mn_ipsyswnd.c func_002F4330 size diff=32/57
extern void *gInputName;
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void A2d_FlushList(void);
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
s32 InputName_DrawSprite(void *, s16);
void func_002F4330(u8 *arg0) {
    s16 temp_a0_2;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_4;

    temp_s1 = gInputName;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0x10);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x5000);
    D_00470238 = 0;
    temp_s1_2 = *(u8 **)((u8 *)arg0 + 0);
    if (temp_s1_2 != NULL) {
        func_0022C060((s32)(temp_s1_2), 0x3F800000);
        func_0022CD00((s32)((void *)(temp_s1_2)));
    }
    temp_s1_3 = *(u8 **)((u8 *)arg0 + 4);
    if (temp_s1_3 != NULL) {
        func_0022C060((s32)(temp_s1_3), 0x3F800000);
        func_0022CD00((s32)((void *)(temp_s1_3)));
    }
    temp_s1_4 = *(u8 **)((u8 *)arg0 + 8);
    if (temp_s1_4 != NULL) {
        func_0022C060((s32)(temp_s1_4), 0x3F800000);
        func_0022CD00((s32)((void *)(temp_s1_4)));
    }
    A2d_FlushList();
    if (*(s16 *)((u8 *)arg0 + 0xE) == 2) {
        InputName_DrawSprite(arg0, *(s16 *)((u8 *)arg0 + 0xC));
        temp_a0_2 = *(s16 *)((u8 *)arg0 + 0xC);
        if ((temp_a0_2 != 6) && (temp_a0_2 != 4) && (temp_a0_2 != 0)) {

        }
    }
}
