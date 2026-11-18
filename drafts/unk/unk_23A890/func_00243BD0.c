/* Draft (not built): func_00243BD0 at 0x00243BD0, size 0x1A8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 73 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0x1A8
 * Original: asm/nonmatchings/unk/unk_23A890/func_00243BD0.s */

// src/unk/unk_23A890.c func_00243BD0 size diff=73/68
void func_00243BD0(u8 *arg0) {
    s32 sp40;
    s16 sp90;
    s16 sp92;
    s16 sp94;
    s16 sp96;
    s16 sp98;
    u8 *spAC;
    s32 spB8;
    s16 spD4;
    s16 spD6;
    s16 spD8;
    s16 spE0;
    s16 spE2;
    s16 spE4;
    s32 spF0;
    u8 *sp100;
    s16 sp104;
    s16 sp106;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_t0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_t0 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_a3 = temp_t0 << 7;
    temp_s1 = gBattle + (temp_t0 * 0x2020) + 0x830;
    temp_s0 = D_0046FE44 + temp_a3;
    memset(&spF0, 0, 0x20);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0 != 2) {
        if (temp_a0 != 1) {
            if (temp_a0 != 0) {
                return;
            }
            memset(&sp40, 0, 0xB0);
            sp90 = 2;
            sp92 = 0;
            sp94 = 1;
            sp96 = 4;
            spE2 = 7;
            spD4 = 4;
            spE4 = 9;
            spD6 = 4;
            spD8 = 4;
            sp98 = 0;
            spE0 = 0;
            spAC = temp_s1;
            spB8 = 0;
            func_00214DD0(&sp40, 0);
            func_00214F80(sp92, &sp40);
            sp104 = 4;
            sp100 = temp_s1;
            sp106 = 6;
            func_0025BD40(&spF0);
            return;
        }
        temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x2C) | 0x10;
        *(s32 *)((u8 *)temp_s0 + 0x2C) = temp_a1;
        sp104 = 4;
        sp106 = 5;
        sp100 = temp_s1;
        func_0025BD40(&spF0, temp_a1);
        return;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x2C) & 0x10) {
        func_00241500(*(s32 *)((u8 *)arg0 + 0x10), 4);
        sp104 = 4;
        sp100 = temp_s1;
        sp106 = 5;
        func_0025BD40(&spF0);
        *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x2C) & ~0x10);
        func_00241600(*(s32 *)((u8 *)arg0 + 0x10));
    }
}
