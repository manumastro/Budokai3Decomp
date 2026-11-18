/* Draft (not built): func_002163D0 at 0x002163D0, size 0xF4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xFC, original 0xF4
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002163D0.s */

// src/unk/unk_20A4D0.c func_002163D0 size diff=23/63
void func_002163D0(u8 *arg0) {
    s16 temp_s1;
    s32 temp_a0;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_v0 = func_00215320(0, 0x400);
    temp_s1 = *(s16 *)((u8 *)arg0 + 0x20);
    if (temp_v0 != NULL) {
        temp_s0 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = &func_00215EB0;
        *(s32 **)((u8 *)temp_v0 + 0xC) = &func_00212650;
        *(s32 *)((u8 *)temp_v0 + 0x18) = 0x442F0000;
        memset(temp_s0, 0, 0x50);
        temp_a0 = *(D_0046FDD0 + (temp_s1 * 4));
        if (temp_a0 != 0) {
            *(s32 *)((u8 *)temp_v0 + 0x10) = func_00209540(temp_a0, 0x04000040, 0);
        }
        if (*(s32 *)((u8 *)temp_v0 + 0x10) != 0) {
            *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) *(D_0046FDD0 + (*(s16 *)((u8 *)arg0 + 0x22) * 4));
            *(s32 *)((u8 *)temp_s0 + 0x28) = (s32) ((*(s16 *)((u8 *)arg0 + 0x22) << 5) + 0x03001000);
        }
    }
}
