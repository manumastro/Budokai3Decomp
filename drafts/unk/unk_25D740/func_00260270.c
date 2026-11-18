/* Draft (not built): func_00260270 at 0x00260270, size 0xA8, segment unk/unk_25D740 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_25D740/func_00260270.s */

// src/unk/unk_25D740.c func_00260270 diff diff=24/42
s32 func_00260270(u8 *arg0, u8 *arg1) {
    f32 temp_f0;
    s32 temp_s1;
    s32 temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 4);
    temp_s1 = *(s32 *)((u8 *)temp_v0 + 0);
    temp_v0_2 = (u8 *)func_0020A720(temp_s2);
    *(s8 *)((u8 *)arg0 + 0x28) = (s8) temp_s2;
    temp_f0 = (f32) temp_s1;
    *(f32 *)((u8 *)temp_v0_2 + 0xE0) = temp_f0;
    *(f32 *)((u8 *)temp_v0_2 + 0xE4) = temp_f0;
    *(s32 **)((u8 *)arg0 + 0x10) = &func_00260210;
    if ((*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0xC) != 3) && (func_0020A5F0(*(s8 *)((u8 *)arg0 + 0x28)) != 0)) {
        *(s32 **)((u8 *)arg0 + 0x10) = NULL;
        return 1;
    }
    func_0020A4D0(*(s8 *)((u8 *)arg0 + 0x28));
    return 3;
}
