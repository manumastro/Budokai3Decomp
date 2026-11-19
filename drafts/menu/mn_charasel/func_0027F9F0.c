/* Draft (not built): func_0027F9F0 at 0x0027F9F0, size 0xE4, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 14 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE8, original 0xE4
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027F9F0.s */

// src/menu/mn_charasel.c func_0027F9F0 size diff=14/58
s32 func_00287C60(void *);
extern f32 gFrameDelta;
extern void func_001F07E0(void);
extern void func_0022CF70();
extern void Scene_Request();
void func_0027F9F0(u8 *arg0) {
    s8 temp_v1_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_v1;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x38);
    func_0027EA60(temp_s0);
    temp_v1 = *(u8 **)((u8 *)temp_s0 + 0x38);
    *(f32 *)((u8 *)temp_v1 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x5C) + (0.05f * gFrameDelta));
    func_0022CF70(*(u8 **)((u8 *)temp_s0 + 0x38));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x38);
    if (!(*(f32 *)((u8 *)temp_a0 + 0x5C) < 1.0f)) {
        if (*(s32 *)((u8 *)temp_s0 + 8) != 0) {
            func_00287C60(temp_a0);
            *(s32 *)((u8 *)temp_s0 + 8) = 0;
        }
        func_002804A0();
        temp_v1_2 = *(s8 *)((u8 *)(arg0 + 0x30) + 4);
        if (temp_v1_2 == 0) {
            Scene_Request(0xF, 0);
        } else if (temp_v1_2 == 1) {
            Scene_Request(0x14, 0);
        }
        func_001F07E0();
    }
}
