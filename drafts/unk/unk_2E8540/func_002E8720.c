/* Draft (not built): func_002E8720 at 0x002E8720, size 0x98, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E8720.s */

s32 memcpy(s8 *, s32 *, s32);
void func_002E8720(void) {
    s32 sp20;
    s32 *var_a1;
    s32 *var_a2;
    s128 temp_v0;
    s32 var_a0;
    s32 var_v1;
    var_a2 = (int *)&D_00457120;
    var_a1 = &sp20;
    var_a0 = 0xC;
    do {
        var_a0 -= 1;
        *(s128 *)((u8 *)var_a1 + 0) = (s128)*(s128 *)((u8 *)var_a2 + 0);
        temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
        var_a2 += 0x20;
        *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
        var_a1 += 0x20;
    }
    while (var_a0 > 0);
    memcpy((s8 *)D_005C9D80, (s32 *)&sp20, 0x180);
    *(s16 *)((u8 *)D_005C9D80 + 0x152) = 5;
    var_v1 = -1;
    if (D_004E05E0[0] > 0) {
        var_v1 = (s32)D_004E05E0 * 0x3C;
    }
    *(s32 *)((u8 *)D_005C9D80 + 0x15C) = var_v1;
    *(s32 *)((u8 *)D_005C9D80 + 0x160) = -1;
}
