/* Draft (not built): func_00219650 at 0x00219650, size 0x134, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 34 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x138, original 0x134
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00219650.s */

// src/unk/unk_20A4D0.c func_00219650 size diff=34/78
void func_00219650(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 var_s2;
    u8 *temp_s0;
    u8 *var_s1;

    var_s2 = (arg0 == 0) ? 2 : 0;
    temp_s0 = gBattle;
    if (var_s2 < 5) {
        var_s1 = temp_s0 + 0x5C4 + (var_s2 << 5);
        do {
            temp_a0 = *(s32 *)((u8 *)var_s1 + 8);
            if ((temp_a0 >= 0) && (temp_a0 < 5)) {
                amAdx_Stop(temp_a0);
            }
            temp_a0_2 = *(s32 *)((u8 *)var_s1 + 8);
            if ((temp_a0_2 != 0) && (temp_a0_2 != 1)) {
                *(s32 *)((u8 *)var_s1 + 8) = -1;
            }
            *(s32 *)((u8 *)var_s1 + 0xC) = 0;
            *(s32 *)((u8 *)var_s1 + 0x10) = 0;
            *(s16 *)((u8 *)var_s1 + 0x14) = -1;
            *(s16 *)((u8 *)var_s1 + 0x16) = -1;
            var_s2 += 1;
            *(s32 *)((u8 *)var_s1 + 0x18) = 0xBF800000;
            var_s1 += 0x20;
        } while (var_s2 < 5);
    }
    if (arg0 != 0) {
        temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x66C);
        if ((temp_a0_3 >= 0) && (temp_a0_3 < 5)) {
            amAdx_Stop(temp_a0_3);
        }
        temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x66C);
        if ((temp_a0_4 != 0) && (temp_a0_4 != 1)) {
            *(s32 *)((u8 *)temp_s0 + 0x66C) = -1;
        }
        *(s32 *)((u8 *)temp_s0 + 0x670) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x674) = 0;
        *(s16 *)((u8 *)temp_s0 + 0x678) = -1;
        *(s16 *)((u8 *)temp_s0 + 0x67A) = -1;
        *(s32 *)((u8 *)temp_s0 + 0x67C) = 0xBF800000;
    }
}
