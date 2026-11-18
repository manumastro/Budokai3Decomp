/* Draft (not built): func_002A21F0 at 0x002A21F0, size 0xD0, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x88, original 0xD0
 * Original: asm/nonmatchings/story/evt_scrp/func_002A21F0.s */

// src/story/evt_scrp.c func_002A21F0 size diff=32/34
s32 func_00136E80(s32, s32, s32, s32);
s32 func_001377E0(s32 *, f32 *);
extern f32 D_0047043C;
extern f32 D_00470440;
extern void amDraw_FlushPacket(void);
void func_002A21F0(u8 *arg0, f32 fparg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 sp60;
    s32 sp64;
    f32 sp68;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 *var_s1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 *var_s0;
    s32 var_s2;

    temp_f5 = *(f32 *)((u8 *)arg0 + 0);
    var_s1 = &sp40;
    temp_f4 = *(f32 *)((u8 *)arg0 + 4);
    temp_f3 = *(f32 *)((u8 *)arg0 + 8);
    temp_f2 = *(f32 *)((u8 *)arg0 + 0xC);
    sp60 = 0;
    sp70 = D_0047043C;
    sp64 = 0;
    sp74 = D_00470440;
    sp68 = fparg0;
    sp78 = fparg0;
    sp40 = temp_f5;
    sp50 = temp_f5;
    sp44 = temp_f4;
    sp54 = temp_f4;
    sp48 = temp_f3;
    sp58 = temp_f3;
    sp4C = temp_f2;
    sp5C = temp_f2;
    func_00136E80(0x20001800, 0, -1, 0x44);
    var_s2 = 0;
    var_s0 = &sp60;
    do {
        func_001377E0(var_s0, var_s1);
        var_s2 += 1;
        var_s1 += 0x10;
        var_s0 += 0x10;
    } while (var_s2 < 2);
    amDraw_FlushPacket();
}
