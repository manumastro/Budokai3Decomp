/* Draft (not built): func_0020A4D0 at 0x0020A4D0, size 0x11C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA4, original 0x11C
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020A4D0.s */

// src/unk/unk_20A4D0.c func_0020A4D0 size diff=57/41
void func_0020A4D0(s32 arg0) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    s32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    s32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    s32 sp8C;
    u8 *temp_s3;
    u8 *temp_v1;

    temp_v1 = &D_005687D0 + (arg0 * 0xF0);
    temp_s3 = temp_v1 + 0x20;
    sp50 = *(f32 *)((u8 *)temp_v1 + 0);
    sp54 = *(f32 *)((u8 *)temp_v1 + 4);
    sp58 = *(f32 *)((u8 *)temp_v1 + 8);
    sp5C = 0x3F800000;
    sp60 = *(f32 *)((u8 *)temp_v1 + 0x10);
    sp64 = *(f32 *)((u8 *)temp_v1 + 4);
    sp68 = *(f32 *)((u8 *)temp_v1 + 8);
    sp6C = 0x3F800000;
    sp70 = *(f32 *)((u8 *)temp_v1 + 0);
    sp74 = *(f32 *)((u8 *)temp_v1 + 0x14);
    sp78 = *(f32 *)((u8 *)temp_v1 + 8);
    sp7C = 0x3F800000;
    sp80 = *(f32 *)((u8 *)temp_v1 + 0x10);
    sp84 = *(f32 *)((u8 *)temp_v1 + 0x14);
    sp88 = *(f32 *)((u8 *)temp_v1 + 8);
    sp8C = 0x3F800000;
    func_00136870(1, 0x812, 0, -1, 0, 0);
    func_00137920(&sp50, temp_s3, &sp60, temp_s3 + 0x10);
    func_00137920(&sp70, temp_s3 + 0x20, &sp80, temp_s3 + 0x30);
    amDraw_FlushPacket();
}
