/* Draft (not built): func_00299CA0 at 0x00299CA0, size 0x3EC, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 143 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x32C, original 0x3EC
 * Original: asm/nonmatchings/story/str_map/func_00299CA0.s */

// src/story/str_map.c func_00299CA0 size diff=143/203
s32 amDraw_SetPacketMode(s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00133780(s32, s32);
s32 func_00136E80(s32, s32 *, s32, s32);
s32 func_00227A30(f32 *);
s32 func_00228430(s32);
s32 func_0022C060(void *, s32);
s32 func_0022C560(void *);
extern s32 D_00453EB0;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_004708A4;
extern void *D_005AA604;
extern void func_00228410(void);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00299CA0(void) {
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 sp9C;
    f32 temp_f20;
    s32 temp_s5;
    s32 var_s2;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *var_s3;

    temp_s5 = amGs_SetReg32(2, 0x30402);
    func_00133780(2, 1);
    amDraw_SetPacketMode(1);
    amModel_SetCurrent(*(u8 **)((u8 *)gStrMap + 0x60), 0x500000);
    func_00136E80(0x40000924, &D_00453EB0, 0, 0x44);
    sp90 = 384.0f;
    sp94 = 234.0f;
    sp98 = 0x41200000;
    sp9C = 0x3F800000;
    sp80 = 0x42800000;
    sp84 = 0x42800000;
    sp88 = 0x3F800000;
    sp8C = 0x3F800000;
    func_00137560(&sp90, &sp80);
    sp90 += 200.0f;
    sp94 += 200.0f;
    sp80 = 0x43A00000;
    sp84 = 0x43A00000;
    func_00137560(&sp90, &sp80);
    amDraw_FlushPacket();
    temp_a0 = *(u8 **)((u8 *)gStrMap + 0x64);
    D_00470704 = temp_a0;
    D_0047070C = 0x510000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x510000);
    D_00470238 = 0;
    sp98 = 0;
    sp9C = 0x3F800000;
    temp_s0 = *(u8 **)((u8 *)gStrMap + 0x98);
    temp_f20 = 200.0f / (4000.0f * (f32) *(s8 *)((u8 *)D_004708A4 + 0x1AE0));
    func_0022C060(temp_s0, 0x3F800000);
    func_0022C560(temp_s0);
    var_s4 = 0;
    var_s2 = 0;
    var_s3 = ((u8 *)D_005AA604) + 0x80;
    do {
        if ((*(s32 *)((u8 *)var_s3 + 0) != -1) && !(*(s32 *)((u8 *)var_s3 + 4) & 0xC0)) {
            temp_s0_2 = *(u8 **)((u8 *)(gStrMap + var_s2) + 0x9C);
            sp90 = 484.0f + (*(f32 *)((u8 *)var_s3 + 0x10) * temp_f20);
            sp94 = 334.0f + (*(f32 *)((u8 *)var_s3 + 0x18) * temp_f20);
            func_00228430(0);
            func_00227A30(&sp90);
            func_0022C060(temp_s0_2, 0x3F800000);
            func_0022C560(temp_s0_2);
            func_00228410();
        }
        var_s4 += 1;
        var_s2 += 4;
        var_s3 += 0x40;
    } while (var_s4 < 0x40);
    sp90 = 484.0f + (*(f32 *)((u8 *)D_005AA604 + 0x11C0) * temp_f20);
    sp94 = 334.0f + (*(f32 *)((u8 *)D_005AA604 + 0x11C8) * temp_f20);
    temp_s0_3 = *(u8 **)((u8 *)gStrMap + 0x94);
    sp90 += 4.0f;
    sp94 += 4.0f;
    func_00228430(0);
    func_00227A30(&sp90);
    func_0022C060(temp_s0_3, 0x3F800000);
    **(f32 **)((u8 *)temp_s0_3 + 0x30) = -((180.0f * (f32) *(s16 *)((u8 *)D_005AA604 + 0x11D0)) / 32768.0f);
    func_0022C560(temp_s0_3);
    func_00228410();
    temp_s0_4 = *(u8 **)((u8 *)gStrMap + 0x90);
    sp90 -= 4.0f;
    sp94 -= 4.0f;
    func_00228430(0);
    func_00227A30(&sp90);
    func_0022C060(temp_s0_4, 0x3F800000);
    **(f32 **)((u8 *)temp_s0_4 + 0x30) = -((180.0f * (f32) *(s16 *)((u8 *)D_005AA604 + 0x11D0)) / 32768.0f);
    func_0022C560(temp_s0_4);
    func_00228410();
    amDraw_SetPacketMode(0);
    func_00133780(2, 0);
    amGs_SetReg32(2, temp_s5);
}
