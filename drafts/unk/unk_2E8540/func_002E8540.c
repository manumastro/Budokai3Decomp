/* Draft (not built): func_002E8540 at 0x002E8540, size 0x1D8, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E8540.s */

// src/unk/unk_2E8540.c func_002E8540 diff diff=13/118
void func_002E8540(u8 *arg0, s32 arg1, s16 arg2) {
    f32 var_f0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_v1 = D_005C4140 + ((arg1 & 0xFF) * 0x50);
    temp_v1_2 = temp_v1 + 0x5C50;
    if (arg1 != 0) {
        var_f0 = 15.0f;
    } else {
        var_f0 = -15.0f;
    }
    *(f32 *)((u8 *)temp_v1 + 0x5C50) = var_f0;
    *(s32 *)((u8 *)temp_v1_2 + 4) = 0;
    *(s32 *)((u8 *)temp_v1_2 + 8) = 0;
    *(s32 *)((u8 *)temp_v1_2 + 0xC) = 0x3F800000;
    *(s16 *)((u8 *)temp_v1_2 + 0x10) = (s16) *(&D_0046B560 + (*(s8 *)((u8 *)arg0 + 0xB60) * 2));
    *(s16 *)((u8 *)temp_v1_2 + 0x12) = (s16) *(s8 *)((u8 *)arg0 + 0xB61);
    *(s16 *)((u8 *)temp_v1_2 + 0x14) = 0;
    *(s16 *)((u8 *)temp_v1_2 + 0x16) = 0;
    *(s16 *)((u8 *)temp_v1_2 + 0x18) = 8;
    *(s16 *)((u8 *)temp_v1_2 + 0x1A) = arg2;
    *(u16 *)((u8 *)temp_v1_2 + 0x1C) = (u16) *(&D_004570F0 + (*(s8 *)((u8 *)arg0 + 0xB6B) * 2));
    *(s16 *)((u8 *)temp_v1_2 + 0x1E) = 1;
    *(s16 *)((u8 *)temp_v1_2 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v1_2 + 0x24) = (s32) (*(&D_00456FD0 + (*(s8 *)((u8 *)arg0 + 0xB65) * 2)) + 0xBB8);
    *(s32 *)((u8 *)temp_v1_2 + 0x28) = (s32) (*(&D_00456FD0 + (*(s8 *)((u8 *)arg0 + 0xB65) * 2)) + 0xBB8);
    *(s32 *)((u8 *)temp_v1_2 + 0x2C) = -1;
    *(s32 *)((u8 *)temp_v1_2 + 0x30) = 0x1B58;
    *(s16 *)((u8 *)temp_v1_2 + 0x34) = (s16) *(s16 *)((u8 *)arg0 + 0xB70);
    *(s16 *)((u8 *)temp_v1_2 + 0x36) = (s16) *(s16 *)((u8 *)arg0 + 0xB72);
    *(s16 *)((u8 *)temp_v1_2 + 0x38) = (s16) *(s16 *)((u8 *)arg0 + 0xB74);
    *(s16 *)((u8 *)temp_v1_2 + 0x3A) = (s16) *(s16 *)((u8 *)arg0 + 0xB76);
    *(s16 *)((u8 *)temp_v1_2 + 0x3C) = (s16) *(s16 *)((u8 *)arg0 + 0xB78);
    *(s16 *)((u8 *)temp_v1_2 + 0x3E) = (s16) *(s16 *)((u8 *)arg0 + 0xB7A);
    *(s16 *)((u8 *)temp_v1_2 + 0x40) = (s16) *(s16 *)((u8 *)arg0 + 0xB7C);
    *(s16 *)((u8 *)temp_v1_2 + 0x42) = (s16) *(s16 *)((u8 *)arg0 + 0xB7E);
    *(u16 *)((u8 *)temp_v1_2 + 0x44) = (u16) *(&D_00457030 + (*(s8 *)((u8 *)arg0 + 0xB67) * 2));
    *(u16 *)((u8 *)temp_v1_2 + 0x46) = (u16) *(&D_00457060 + (*(s8 *)((u8 *)arg0 + 0xB68) * 2));
    *(u16 *)((u8 *)temp_v1_2 + 0x48) = (u16) *(&D_00457090 + (*(s8 *)((u8 *)arg0 + 0xB69) * 2));
    *(u16 *)((u8 *)temp_v1_2 + 0x4A) = (u16) *(&D_00457000 + (*(s8 *)((u8 *)arg0 + 0xB66) * 2));
    *(u16 *)((u8 *)temp_v1_2 + 0x4C) = (u16) *(&D_004570C0 + (*(s8 *)((u8 *)arg0 + 0xB6A) * 2));
}
