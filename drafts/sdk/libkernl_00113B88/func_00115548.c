/* Draft (not built): func_00115548 at 0x00115548, size 0x70, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115548.s */

extern s32 D_003EDCC8;

s32 func_00115548(void) {
    s32 temp_a1;
    s32 temp_a2;

    temp_a2 = *(s32 *)((u8 *)(&D_003EDCC8) + 0x14);
    if (temp_a2 == 0) {
        return 0x80008005;
    }
    temp_a1 = temp_a2 * 0x10;
    *(s32 *)((u8 *)temp_a2 + 0x28) = 0;
    *(s32 *)((u8 *)(&D_003EDCC8) + 0x10) = (s32) (*(s32 *)((u8 *)(&D_003EDCC8) + 0x10) + 1);
    *(s32 *)((u8 *)temp_a2 + 0xC) = 0;
    *(s32 *)((u8 *)(&D_003EDCC8) + 0x14) = (s32) *(s32 *)((u8 *)temp_a2 + 0);
    *(s64 *)((u8 *)temp_a2 + 0x18) = 0;
    *(s32 *)((u8 *)(&D_003EDCC8) + 0xC) = (s32) (*(s32 *)((u8 *)(&D_003EDCC8) + 0xC) + 1);
    *(s32 *)((u8 *)temp_a2 + 8) = (s32) (((*(s32 *)((u8 *)(&D_003EDCC8) + 0xC) * 2) & 0x3FE) | 1);
    return temp_a1 | *(s32 *)((u8 *)temp_a2 + 8);
}
