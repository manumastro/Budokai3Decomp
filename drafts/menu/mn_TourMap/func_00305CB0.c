/* Draft (not built): func_00305CB0 at 0x00305CB0, size 0x1E0, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x1E0
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00305CB0.s */

// src/menu/mn_TourMap.c func_00305CB0 size diff=68/101
s32 ScrCamSlot_Load(s32, s32, void *, s32);
s32 Scr_Start(s32, s32);
s32 func_002A9780(s32, s32, void *, s32);
s32 func_002A9810(s32, s32, void *, s32);
s32 func_002A98A0(s32, s32, void *, s32);
s32 func_002AA0F0(s32, s32, void *, s32);
s32 func_002AA260(s32, s32, s32, void *);
s32 func_002AA330(s32, s32, s32, void *);
s32 func_002AA340(s32, s32, void *, s32);
extern void func_002AA3D0(void);
void func_00305CB0(void) {
    u8 *temp_a2;
    u8 *temp_a2_10;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_5;
    u8 *temp_a2_6;
    u8 *temp_a2_7;
    u8 *temp_a2_8;
    u8 *temp_a2_9;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(D_0047097C);
    func_002AA3D0();
    temp_a2 = *(u8 **)((u8 *)temp_s0 + 0x70);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2, *(s32 *)((u8 *)temp_a2 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 0, 0, *(u8 **)((u8 *)temp_s0 + 0x74));
    func_002AA3D0();
    temp_a2_2 = *(u8 **)((u8 *)temp_s0 + 0x58);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 1, temp_a2_2, *(s32 *)((u8 *)temp_a2_2 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 1, 0, *(u8 **)((u8 *)temp_s0 + 0x5C));
    temp_a2_3 = *(u8 **)((u8 *)temp_s0 + 0x30);
    ScrCamSlot_Load(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2_3, *(s32 *)((u8 *)temp_a2_3 + 0x50));
    temp_a2_4 = *(u8 **)((u8 *)temp_s0 + 0x3C);
    func_002AA0F0(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2_4, *(s32 *)((u8 *)temp_a2_4 + 0x50));
    temp_a2_5 = *(u8 **)((u8 *)temp_s0 + 0x40);
    func_002AA0F0(*(s32 *)((u8 *)temp_s0 + 4), 1, temp_a2_5, *(s32 *)((u8 *)temp_a2_5 + 0x50));
    temp_a2_6 = *(u8 **)((u8 *)temp_s0 + 0xD0);
    func_002A98A0(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2_6, *(s32 *)((u8 *)temp_a2_6 + 0x50));
    temp_a2_7 = *(u8 **)((u8 *)temp_s0 + 0xCC);
    func_002A9810(*(s32 *)((u8 *)temp_s0 + 4), 0xF, temp_a2_7, *(s32 *)((u8 *)temp_a2_7 + 0x50));
    temp_a2_8 = *(u8 **)((u8 *)temp_s0 + 0xC8);
    func_002A9780(*(s32 *)((u8 *)temp_s0 + 4), 0xF, temp_a2_8, *(s32 *)((u8 *)temp_a2_8 + 0x50));
    func_002AA3D0();
    temp_a2_9 = *(u8 **)((u8 *)temp_s0 + 0x8C);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 2, temp_a2_9, *(s32 *)((u8 *)temp_a2_9 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 2, 0, *(u8 **)((u8 *)temp_s0 + 0x90));
    func_002AA260(*(s32 *)((u8 *)temp_s0 + 4), 2, 0, *(u8 **)((u8 *)temp_s0 + 0x94));
    func_002AA3D0();
    temp_a2_10 = *(u8 **)((u8 *)temp_s0 + 0x9C);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 3, temp_a2_10, *(s32 *)((u8 *)temp_a2_10 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 3, 0, *(u8 **)((u8 *)temp_s0 + 0xA0));
    func_002AA260(*(s32 *)((u8 *)temp_s0 + 4), 3, 0, *(u8 **)((u8 *)temp_s0 + 0xA4));
    Scr_Start(*(s32 *)((u8 *)temp_s0 + 4), 0);
}
