/* Draft (not built): func_001B8500 at 0x001B8500, size 0xF4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001B8500.s */

void func_001B8500(u8 *arg0) {
    s32 sp30;
    f32 temp_f20;
    temp_f20 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    Fighter_ResetMotion(0, 0);
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0 && *(f32 *)((u8 *)arg0 + 0x182C) - *(f32 *)((u8 *)arg0 + 0x1830) < (f32)*(u32 *)((u8 *)arg0 + 0xC5C)) {
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684C0(arg0);
        func_002CBFF0(1, arg0);
        return;
    }
    func_00146F10(&sp30, arg0 + 0xD0, temp_f20);
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    func_001E4E20(arg0, 0);
    *(f32 *)((u8 *)arg0 + 0x44) = (f32)*(f32 *)((u8 *)arg0 + 0x1844);
    *(f32 *)((u8 *)arg0 + 0x1830) = (f32)(*(f32 *)((u8 *)arg0 + 0x1830) + temp_f20);
}
