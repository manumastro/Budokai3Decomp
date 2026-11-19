/* Draft (not built): func_002EA4A0 at 0x002EA4A0, size 0x214, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 87 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x19C, original 0x214
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EA4A0.s */

// src/unk/unk_2EA0B0.c func_002EA4A0 size diff=87/103
s32 func_00136E80(s32, s32, s32, s32);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_002EA4A0(void) {
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 sp80;
    f32 sp84;
    s32 sp88;
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 sp9C;
    f32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    s32 temp_a0;
    u8 *temp_s0;
    u8 *temp_a1;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s0 = D_00470958;
    temp_a1 = *(u8 **)((u8 *)temp_s0 + 4);
    if ((temp_a1 != NULL) && (*(s32 *)((u8 *)temp_s0 + 0xC) == 1)) {
        temp_s4 = *(u8 **)((u8 *)temp_a1 + 0x30);
        temp_s3 = *(u8 **)((u8 *)temp_s0 + 0x4C);
        amModel_SetCurrent(*(s32 *)((u8 *)temp_s0 + 0x58), 0x05100000);
        sp90 = *(f32 *)((u8 *)temp_s4 + 0x20) - (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x10));
        sp98 = 0;
        sp9C = 0x3F800000;
        sp94 = *(f32 *)((u8 *)temp_s4 + 0x24) - (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x12));
        spA0 = *(f32 *)((u8 *)temp_s4 + 0x20) + (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x10));
        spA4 = *(f32 *)((u8 *)temp_s4 + 0x24) + (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x12));
        spA8 = 0;
        spAC = 0x3F800000;
        sp70 = 0;
        sp74 = 0;
        sp78 = 0x3F800000;
        sp7C = 0x3F800000;
        sp80 = (f32) *(s16 *)((u8 *)temp_s3 + 0x10) - 0.5f;
        sp88 = 0x3F800000;
        sp8C = 0x3F800000;
        sp84 = (f32) *(s16 *)((u8 *)temp_s3 + 0x12) - 0.5f;
        func_00136E80(0x40000C24, 0, *(s32 *)((u8 *)temp_s0 + 0x48), 0x44);
        func_00137560(&sp90, &sp70);
        func_00137560(&spA0, &sp80);
        amDraw_FlushPacket();
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x54);
        D_00470704 = temp_a0;
        D_0047070C = 0x05000000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x05000000);
        D_00470238 = 0;
        func_0022C060(*(s32 *)((u8 *)temp_s0 + 8), 1.0f);
        temp_v0 = *(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 8)) + 0x30);
        *(f32 *)((u8 *)temp_v0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x20) + (0.5f * (sp90 + spA0)));
        temp_v0_2 = *(u8 **)((u8 *)(*(s32 *)((u8 *)temp_s0 + 8)) + 0x30);
        *(f32 *)((u8 *)temp_v0_2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x24) + spA4);
        func_0022C560(*(s32 *)((u8 *)temp_s0 + 8));
    }
}
