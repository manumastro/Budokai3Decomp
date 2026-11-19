/* Draft (not built): func_001E3AA0 at 0x001E3AA0, size 0x10C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x10C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E3AA0.s */

// src/unk/unk_1D5B30.c func_001E3AA0 size diff=30/72
void func_001E3AA0(u8 *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v1;
    s32 var_v1;
    u32 temp_s1;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x1A32);
    if (temp_v1 < -1) {
        *(s16 *)((u8 *)arg0 + 0x1A32) = (s16) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A32);
        temp_a0 = *(s16 *)((u8 *)arg0 + 0x1A32);
        if (temp_a0 >= 6) {
            *(s16 *)((u8 *)arg0 + 0x1A32) = (s16) (temp_a0 - 6);
        }
        var_v1 = *(s16 *)((u8 *)arg0 + 0x1A32) + 0xE4;
    } else if (temp_v1 < 0) {
        *(s16 *)((u8 *)arg0 + 0x1A32) = (s16) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A32);
        temp_a0_2 = *(s16 *)((u8 *)arg0 + 0x1A32);
        if (temp_a0_2 >= 6) {
            *(s16 *)((u8 *)arg0 + 0x1A32) = (s16) (temp_a0_2 - 6);
        }
        var_v1 = *(s16 *)((u8 *)arg0 + 0x1A32) + 0xDE;
    } else {
        temp_s1 = func_0012EAE0(0x20) % 3U;
        *(s16 *)((u8 *)arg0 + 0x1A32) = (s16) (temp_s1 + ((func_0012EAE0(0x20) & 1) * 6));
        var_v1 = *(s16 *)((u8 *)arg0 + 0x1A32) + 0xD2;
    }
    *(s32 *)((u8 *)arg0 + 0xB70) = var_v1;
    if (*(s16 *)((u8 *)arg0 + 0x1A30) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 3);
    }
    *(s16 *)((u8 *)arg0 + 0x1A30) = (s16) (1 - *(s16 *)((u8 *)arg0 + 0x1A30));
}
