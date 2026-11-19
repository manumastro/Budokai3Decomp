/* Draft (not built): func_001AC490 at 0x001AC490, size 0x1D4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 86 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A4, original 0x1D4
 * Original: asm/nonmatchings/battle/btl_main/func_001AC490.s */

// src/battle/btl_main.c func_001AC490 size diff=86/105
extern s8 D_004B4B5A;
void func_001AC490(void *arg0) {
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_t2;

    temp_t2 = (unsigned char *)(gBattle + (D_004B4B5A * 0x2020));
    temp_a3 = (unsigned char *)(gBattle + (D_004B4B5A * 0x48) + 0x897E);
    temp_a2 = (unsigned char *)(gBattle + ((1 - D_004B4B5A) * 0x48) + 0x897E);
    *(s32 *)((u8 *)arg0 + 0x10) = (s32) *(s16 *)((u8 *)temp_a2 + 8);
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) *(s16 *)((u8 *)temp_a2 + 6);
    *(s32 *)((u8 *)arg0 + 0x18) = (s32) *(s16 *)((u8 *)temp_a2 + 0xA);
    *(s32 *)((u8 *)arg0 + 0x1C) = (s32) *(s32 *)((u8 *)temp_t2 + 0x1FF0);
    *(s32 *)((u8 *)arg0 + 0x20) = (s32) *(s32 *)((u8 *)temp_t2 + 0x2000);
    *(s32 *)((u8 *)arg0 + 0x24) = (s32) *(s16 *)((u8 *)temp_a3 + 0xC);
    *(s32 *)((u8 *)arg0 + 0x28) = (s32) *(s16 *)((u8 *)temp_a3 + 0xE);
    *(s32 *)((u8 *)arg0 + 0x2C) = (s32) *(s16 *)((u8 *)temp_a3 + 0x10);
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) *(s16 *)((u8 *)temp_a3 + 0x12);
    *(s32 *)((u8 *)arg0 + 0x34) = (s32) *(s16 *)((u8 *)temp_a3 + 0x14);
    *(s32 *)((u8 *)arg0 + 0x38) = (s32) *(s16 *)((u8 *)temp_a3 + 0x16);
    *(s32 *)((u8 *)arg0 + 0x3C) = (s32) *(s16 *)((u8 *)temp_a3 + 0x18);
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) ((*(u32 *)((u8 *)gBattle + 0x8908) / 60) + ((u32) *(u32 *)((u8 *)gBattle + 0x8908) >> 0x1F));
    *(s32 *)((u8 *)arg0 + 0x44) = (s32) *(s16 *)((u8 *)temp_a3 + 0x1A);
    *(s32 *)((u8 *)arg0 + 0x48) = (s32) *(s16 *)((u8 *)temp_a3 + 0x1E);
    *(s32 *)((u8 *)arg0 + 0x4C) = (s32) *(s16 *)((u8 *)temp_a3 + 0x20);
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s16 *)((u8 *)temp_a3 + 0x22);
    *(s32 *)((u8 *)arg0 + 0x54) = (s32) *(s16 *)((u8 *)temp_a3 + 0x24);
    *(s32 *)((u8 *)arg0 + 0x58) = (s32) *(s16 *)((u8 *)temp_a2 + 0x26);
    *(s32 *)((u8 *)arg0 + 0x5C) = (s32) *(s16 *)((u8 *)temp_a3 + 0x28);
    *(s32 *)((u8 *)arg0 + 0x60) = (s32) *(s16 *)((u8 *)temp_a3 + 0x2A);
    *(s32 *)((u8 *)arg0 + 0x64) = (s32) *(s16 *)((u8 *)temp_a3 + 0x2C);
    *(s32 *)((u8 *)arg0 + 0x68) = (s32) *(s16 *)((u8 *)temp_a3 + 0x2E);
    *(s32 *)((u8 *)arg0 + 0x6C) = 0;
    if (*(s16 *)((u8 *)temp_a3 + 0x32) != 0) {
        *(s32 *)((u8 *)arg0 + 0x6C) = 1;
    }
    if (*(s16 *)((u8 *)temp_a3 + 0x36) != 0) {
        *(s32 *)((u8 *)arg0 + 0x6C) = 2;
    }
    if (*(s16 *)((u8 *)temp_a3 + 0x34) != 0) {
        *(s32 *)((u8 *)arg0 + 0x6C) = 3;
    }
    *(s32 *)((u8 *)arg0 + 0x70) = (s32) *(s16 *)((u8 *)temp_a3 + 0x3A);
    *(s32 *)((u8 *)arg0 + 0x74) = (s32) *(s16 *)((u8 *)temp_a3 + 0x3E);
    *(s32 *)((u8 *)arg0 + 0x78) = (s32) *(s16 *)((u8 *)temp_a3 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x7C) = (s32) *(s16 *)((u8 *)temp_a3 + 0x38);
    *(s32 *)((u8 *)arg0 + 0x80) = (s32) *(s16 *)((u8 *)temp_a3 + 0x40);
    *(s32 *)((u8 *)arg0 + 0x84) = (s32) *(s16 *)((u8 *)temp_a3 + 0x42);
    *(s32 *)((u8 *)arg0 + 0x88) = (s32) *(s16 *)((u8 *)temp_a3 + 0x44);
}
