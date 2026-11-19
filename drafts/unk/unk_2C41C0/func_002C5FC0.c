/* Draft (not built): func_002C5FC0 at 0x002C5FC0, size 0xEC, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C5FC0.s */

// src/unk/unk_2C41C0.c func_002C5FC0 diff diff=6/59
s32 func_002C5FC0(u8 *arg0) {
    s16 temp_v1;
    s32 var_a1;

    if (*(s16 *)((u8 *)arg0 + 0x58) & 0x80) {
        var_a1 = 0;
    } else {
        var_a1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(arg0 + 0x20) + 0x14)) + 0x1350);
    }
    temp_v1 = *(s16 *)((u8 *)gEffWork + 0x4D86);
    if (temp_v1 & 0x8000) {
        func_002152E0();
        return 1;
    }
    if ((var_a1 == 0) && (temp_v1 & 0x2000)) {
        func_002152E0();
        if (*(s16 *)((u8 *)gEffWork + 0x4D84) == 0) {
            *(s16 *)((u8 *)gEffWork + 0x4D86) = (s16) (*(s16 *)((u8 *)gEffWork + 0x4D86) & ~0x2000);
        }
        return 1;
    }
    if ((var_a1 == 1) && (temp_v1 & 0x1000)) {
        func_002152E0();
        if (*(s16 *)((u8 *)gEffWork + 0x4D84) == 0) {
            *(s16 *)((u8 *)gEffWork + 0x4D86) = (s16) (*(s16 *)((u8 *)gEffWork + 0x4D86) & ~0x1000);
        }
        return 1;
    }
    return 0;
}
