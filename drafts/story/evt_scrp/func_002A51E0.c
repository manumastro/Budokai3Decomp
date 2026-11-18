/* Draft (not built): func_002A51E0 at 0x002A51E0, size 0xC4, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 26 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC0, original 0xC4
 * Original: asm/nonmatchings/story/evt_scrp/func_002A51E0.s */

// src/story/evt_scrp.c func_002A51E0 size diff=26/48
void func_002A51E0(u8 *arg0, u8 *arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    f32 *var_v1;
    f32 temp_f3;
    s32 var_v0;
    u8 *temp_a0;

    var_v0 = 0x10;
    var_v1 = &sp30;
    temp_a0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_f3 = *(f32 *)((u8 *)temp_a0 + 0x14);
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp30 = *(f32 *)((u8 *)temp_a0 + 0x10);
    sp3C = 0;
    sp34 = *(f32 *)((u8 *)temp_a0 + 0xC);
    sp38 = *(f32 *)((u8 *)temp_a0 + 8);
    D_004708DC = *(f32 *)((u8 *)temp_a0 + 0x18);
    if (!(temp_f3 < 0.0f)) {
        D_004708DC += temp_f3;
    }
    D_004700B0 = 1;
    func_002A21F0(&sp30, *(f32 *)((u8 *)temp_a0 + 0));
    *(s32 (**)(u8 *, u8 *))((u8 *)arg0 + 0x10) = func_002A5030;
    func_002A5030(arg0, arg1);
}
