/* Draft (not built): func_00121610 at 0x00121610, size 0xBC, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121610.s */

void func_00121610(u64 *arg0, u8 *arg1) {
    s32 temp_a3;
    s64 temp_v1;
    u64 temp_v0;

    temp_v0 = *arg0;
    temp_a3 = (temp_v0 >> 0x34) & 0x7FF;
    temp_v1 = temp_v0 & (-1U >> 0xC);
    *(s32 *)((u8 *)arg1 + 4) = (s32) (temp_v0 >> 0x3F);
    switch (temp_a3) {                              /* irregular */
    case 0x0:
        *(s32 *)((u8 *)arg1 + 0) = 2;
        return;
    case 0x7FF:
        *(s32 *)((u8 *)arg1 + 8) = 0x3FF;
        if (temp_v1 == 0) {
            *(s64 *)((u8 *)arg1 + 0x10) = (s64) (0x8000 << 0x2D);
            *(s32 *)((u8 *)arg1 + 0) = 4;
            return;
        }
        if (temp_v1 & (0x8000 << 0x24)) {
            *(s32 *)((u8 *)arg1 + 0) = 1;
        } else {
            *(s32 *)((u8 *)arg1 + 0) = 0;
        }
        *(s64 *)((u8 *)arg1 + 0x10) = temp_v1;
        return;
    default:
        *(s64 *)((u8 *)arg1 + 0x10) = (s64) ((temp_v1 << 8) | (0x8000 << 0x2D));
        *(s32 *)((u8 *)arg1 + 8) = (s32) (temp_a3 - 0x3FF);
        *(s32 *)((u8 *)arg1 + 0) = 3;
        return;
    }
}
