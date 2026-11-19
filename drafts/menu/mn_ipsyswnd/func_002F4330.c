/* Draft (not built): func_002F4330 at 0x002F4330, size 0x11C, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4330.s */

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
    s32 temp_a0;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    u8 *temp_s1;
    temp_s1 = gInputName;
    A2d_FlushList();
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x10);
    func_00133B50(0, 0);
    D_00470704 = temp_a0;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x5000);
    temp_s1_2 = *(s32 *)((u8 *)arg0 + 0);
    D_00470238 = 0;
    if (temp_s1_2 != 0) {
        func_0022C060(temp_s1_2, 1.0f);
        func_0022CD00(temp_s1_2);
    }
    temp_s1_3 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_s1_3 != 0) {
        func_0022C060(temp_s1_3, 1.0f);
        func_0022CD00(temp_s1_3);
    }
    temp_s1_4 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_s1_4 != 0) {
        func_0022CD00(temp_s1_4);
        func_0022C060(temp_s1_4, 1.0f);
    }
    A2d_FlushList();
    if (*(s16 *)((u8 *)arg0 + 0xE) == 2) {
        InputName_DrawSprite(arg0, *(s16 *)((u8 *)arg0 + 0xC));
        temp_a0_2 = *(s16 *)((u8 *)arg0 + 0xC);
        if (temp_a0_2 != 6 && temp_a0_2 != 4 && temp_a0_2 != 0) {
        }
    }
}
