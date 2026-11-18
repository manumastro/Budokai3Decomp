/* Draft (not built): func_00121468 at 0x00121468, size 0x5C, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121468.s */

void func_00121468(u32 *arg0, u8 *arg1) {
    s32 temp_v0;
    u32 temp_v1;

    temp_v1 = *arg0;
    temp_v0 = (temp_v1 >> 0x17) & 0xFF;
    *(u32 *)((u8 *)arg1 + 4) = (u32) (temp_v1 >> 0x1F);
    if (temp_v0 == 0) {
        *(s32 *)((u8 *)arg1 + 0) = 2;
        return;
    }
    *(s32 *)((u8 *)arg1 + 8) = (s32) (temp_v0 - 0x7F);
    *(s32 *)((u8 *)arg1 + 0) = 3;
    *(s32 *)((u8 *)arg1 + 0xC) = (s32) (((temp_v1 & 0x7FFFFF) << 7) | 0x40000000);
}
