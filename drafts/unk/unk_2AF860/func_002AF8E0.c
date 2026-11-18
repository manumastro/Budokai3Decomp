/* Draft (not built): func_002AF8E0 at 0x002AF8E0, size 0xF8, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0xF8
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002AF8E0.s */

// src/unk/unk_2AF860.c func_002AF8E0 size diff=33/68
s32 func_002AF8E0(u8 *arg0, u8 *arg1) {
    s32 temp_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s4;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x1C);
    if (*(s16 *)((u8 *)temp_s2 + 4) != 3) {
        return 3;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    temp_s0 = *(u8 **)((u8 *)temp_s2 + 0x40);
    temp_s4 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 4) * 0x28) + (&D_005BCD20 + (**(s32 **)((u8 *)arg0 + 0) * 0xA0));
    temp_a0 = *(u8 **)((u8 *)temp_s4 + 0);
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)((void *)(temp_a0)));
        *(u8 **)((u8 *)temp_s4 + 0) = NULL;
    }
    *(u8 **)((u8 *)temp_s4 + 0) = temp_s0;
    *(s32 *)((u8 *)temp_s4 + 8) = temp_s1;
    *(u8 **)((u8 *)temp_s2 + 0x40) = NULL;
    amCdFs_Close(temp_s2, 0);
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x18);
    if (temp_a0_2 != NULL) {
        amCdFs_Close(temp_a0_2, 0);
    }
    *(u8 **)((u8 *)arg0 + 0x18) = NULL;
    *(u8 **)((u8 *)arg0 + 0x1C) = NULL;
    return 1;
}
