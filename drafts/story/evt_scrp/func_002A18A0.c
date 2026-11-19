/* Draft (not built): func_002A18A0 at 0x002A18A0, size 0xD4, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC4, original 0xD4
 * Original: asm/nonmatchings/story/evt_scrp/func_002A18A0.s */

// src/story/evt_scrp.c func_002A18A0 size diff=31/49
void func_002A18A0(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    f32 sp3C;
    void (*var_v1)();
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gEvtWork);
    sp30 = 0x3F800000;
    sp34 = 0x3F800000;
    sp38 = 0x3F800000;
    sp3C = 1.0f;
    sp3C = *(f32 *)((u8 *)temp_s0 + 0x5C) / *(f32 *)((u8 *)temp_s0 + 0x60);
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x5C) + func_002B06A0());
    func_002A1510((s32)(&sp30));
    if (!(*(f32 *)((u8 *)temp_s0 + 0x5C) <= *(f32 *)((u8 *)temp_s0 + 0x60)) || (func_002A1020(3) == 0)) {
        func_0029AC30();
        Zenie_SetValue(D_00511448, D_00511448);
        *(f32 *)((u8 *)temp_s0 + 0x5C) = 0.0f;
        *(f32 *)((u8 *)temp_s0 + 0x60) = 120.0f;
        var_v1 = func_002A17D0;
        if (func_002A17D0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
