/* Draft (not built): func_00305E90 at 0x00305E90, size 0x1D0, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x19C, original 0x1D0
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00305E90.s */

// src/menu/mn_TourMap.c func_00305E90 size diff=47/103
s32 ScrCamSlot_Load(s32, s32, void *, s32);
s32 Scr_Start(s32, s32);
s32 SoundSlot_Create(s32, s32, s32);
s32 SoundSlot_SetParams(s32, void *, s32, s32);
s32 func_00264140(s32, s32);
s32 func_002A92B0(s32);
s32 func_002A9780(s32, s32, void *, s32);
s32 func_002A9810(s32, s32, void *, s32);
s32 func_002A98A0(s32, s32, void *, s32);
s32 func_002AA0F0(s32, s32, void *, s32);
s32 func_002AA260(s32, s32, s32, void *);
s32 func_002AA330(s32, s32, s32, void *);
s32 func_002AA340(s32, s32, void *, s32);
extern void *amObject_Create(void *, void *);
extern void func_002AA3D0(void);
void func_00305E90(void) {
    s32 temp_s0;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_5;
    u8 *temp_a2_6;
    u8 *temp_a2_7;
    u8 *temp_a2_8;
    u8 *temp_a2_9;

    temp_s0 = D_0047097C;
    func_002A92B0(*(s32 *)((u8 *)temp_s0 + 4));
    func_002AA3D0();
    temp_a2 = *(u8 **)((u8 *)temp_s0 + 0x64);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2, *(s32 *)((u8 *)temp_a2 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 0, 0, *(u8 **)((u8 *)temp_s0 + 0x68));
    func_002AA3D0();
    temp_a2_2 = *(u8 **)((u8 *)temp_s0 + 0x4C);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 1, temp_a2_2, *(s32 *)((u8 *)temp_a2_2 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 1, 0, *(u8 **)((u8 *)temp_s0 + 0x50));
    temp_a2_3 = *(u8 **)((u8 *)temp_s0 + 0x2C);
    ScrCamSlot_Load(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2_3, *(s32 *)((u8 *)temp_a2_3 + 0x50));
    temp_a2_4 = *(u8 **)((u8 *)temp_s0 + 0x34);
    func_002AA0F0(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2_4, *(s32 *)((u8 *)temp_a2_4 + 0x50));
    temp_a2_5 = *(u8 **)((u8 *)temp_s0 + 0x38);
    func_002AA0F0(*(s32 *)((u8 *)temp_s0 + 4), 1, temp_a2_5, *(s32 *)((u8 *)temp_a2_5 + 0x50));
    func_002AA3D0();
    temp_a2_6 = *(u8 **)((u8 *)temp_s0 + 0x7C);
    func_002AA340(*(s32 *)((u8 *)temp_s0 + 4), 2, temp_a2_6, *(s32 *)((u8 *)temp_a2_6 + 0x50));
    func_002AA330(*(s32 *)((u8 *)temp_s0 + 4), 2, 0, *(u8 **)((u8 *)temp_s0 + 0x80));
    func_002AA260(*(s32 *)((u8 *)temp_s0 + 4), 2, 0, *(u8 **)((u8 *)temp_s0 + 0x84));
    temp_a2_7 = *(u8 **)((u8 *)temp_s0 + 0xC4);
    func_002A98A0(*(s32 *)((u8 *)temp_s0 + 4), 0, temp_a2_7, *(s32 *)((u8 *)temp_a2_7 + 0x50));
    temp_a2_8 = *(u8 **)((u8 *)temp_s0 + 0xC0);
    func_002A9810(*(s32 *)((u8 *)temp_s0 + 4), 0xF, temp_a2_8, *(s32 *)((u8 *)temp_a2_8 + 0x50));
    temp_a2_9 = *(u8 **)((u8 *)temp_s0 + 0xBC);
    func_002A9780(*(s32 *)((u8 *)temp_s0 + 4), 0xF, temp_a2_9, *(s32 *)((u8 *)temp_a2_9 + 0x50));
    D_00470980 = amObject_Create(*(u8 **)((u8 *)temp_s0 + 0x150), NULL);
    SoundSlot_SetParams(*(s32 *)((u8 *)temp_s0 + 0x154), D_00470980, 0x100, 0);
    SoundSlot_Create(*(s32 *)((u8 *)temp_s0 + 0x158), 0, 0);
    func_00264140(-1, 0);
    Scr_Start(*(s32 *)((u8 *)temp_s0 + 4), 0);
}
