/* Draft (not built): func_002CE690 at 0x002CE690, size 0x144, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x130, original 0x144
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE690.s */

// src/unk/unk_2CD5F0.c func_002CE690 size diff=47/76
void func_002CE690(void) {
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s2 = (unsigned char *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24));
    temp_s1 = (((s32)(D_0051CD20)) << 5) + (((u8 *)&D_0044AE50) + (((s32)(gBtbBg)) * 0x5C)) + 0x1C;
    temp_v0 = func_001F5FD0(0x80000000, D_0046F240, *(s32 *)((u8 *)temp_s2 + 0xC), func_002CE0A0, 0);
    *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x10);
    *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x200);
    memset(temp_v0 + 0x30, 0, 0x40);
    *(s32 *)((u8 *)temp_v0 + 0x30) = (s32) *(s32 *)((u8 *)temp_s1 + 0x14);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    temp_v0_2 = func_001F5FD0(0x83000000, D_0046F248, *(s32 *)((u8 *)temp_s2 + 0xC) + 0x20, func_002CE3D0, 0);
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x40);
    memset(temp_v0_2 + 0x30, 0, 0x40);
    *(s32 *)((u8 *)temp_v0_2 + 0x30) = (s32) (*(s32 *)((u8 *)temp_s1 + 0x14) + 0x10);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a0) */);
}
