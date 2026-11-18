/* Draft (not built): func_002927E0 at 0x002927E0, size 0xE0, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); eclared as: 'void (struct Work2918A0 *)' now declared as: 'void (unsigned char *)' @ 223: void func_002927E0(u8 *arg0) {
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002927E0.s */

// src/unk/unk_2918A0.c func_002927E0 cerr diff=-1/0
void func_002927E0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f4;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x40) - gFrameDelta;
    *(f32 *)((u8 *)arg0 + 0x40) = temp_f1;
    if (temp_f1 < 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x10) = 0.0f;
        amTask_Kill(arg0);
        D_005AA5A4 = 0;
    }
    temp_f4 = *(f32 *)((u8 *)temp_s0 + 0x10);
    if (temp_f4 <= 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0xC) = 0.0f;
    } else {
        temp_f0 = *(f32 *)((u8 *)temp_s0 + 0xC) - ((0.75f * gFrameDelta) / temp_f4);
        *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f0;
        if (temp_f0 < 0.0f) {
            *(f32 *)((u8 *)temp_s0 + 0xC) = 0.0f;
        }
    }
    func_00133780(0, 1);
    func_00139620(0x900, arg0 + 0x30, -1, 0x44, 0);
    func_00133780(0, 0);
}
