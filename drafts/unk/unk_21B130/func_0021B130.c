/* Draft (not built): func_0021B130 at 0x0021B130, size 0xA4, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021B130.s */

void func_0021B130(void) {
    f32 sp18;
    f32 sp1C;
    s32 temp_a0;
    s32 var_v1;
    temp_a0 = D_00470684 & D_00470680;
    if (temp_a0 & 0x80000000 && ((var_v1 = 1, (temp_a0 & 2) == 2))) {
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 0 && D_0047068C != 0) {
        sp1C = D_00470690;
        sp18 = D_00470694;
        func_0021BEA0((u8 *)D_0047068C, 0x18);
        func_0022DB20(sp1C, sp18);
        func_0022DB20(0.0f, 0.0f);
        func_0022C560(D_0047068C);
    }
}
