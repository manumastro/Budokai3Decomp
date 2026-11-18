/* Draft (not built): func_0011ECE8 at 0x0011ECE8, size 0x18C, segment sdk/libm_0011ECE8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libm_0011ECE8/func_0011ECE8.s */

s64 func_00121988(s64, s64, s64);                   /* extern */

s64 func_0011ECE8(s64 arg0, s64 *arg1, s32 arg3) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s64 temp_a3;
    s64 temp_a3_2;
    s64 temp_t1;
    s64 temp_t2;
    u32 temp_v0_2;

    temp_t2 = (s64) (arg0 << 0x20) >> 0x20;
    temp_t1 = arg0 >> 0x20;
    temp_a1 = (temp_t1 >> 0x14) & 0x7FF;
    temp_v1 = temp_a1 - 0x3FF;
    if (temp_v1 < 0x14) {
        if (temp_v1 >= 0) {
            temp_v0 = 0xFFFFF >> temp_v1;
            if (((temp_t1 & temp_v0) | temp_t2) != 0) {
                temp_a3_2 = ((arg3 & (0xFFFF0000U >> 0x20)) | ((temp_t1 & ~temp_v0) << 0x20)) & (-1 << 0x20);
                *arg1 = temp_a3_2;
                return func_00121988(temp_a3_2, arg0, temp_a3_2);
            }
            goto block_12;
        }
        *arg1 = ((arg3 & (0xFFFF0000U >> 0x20)) | (((u64) ((temp_t1 & 0x80000000) << 0x20) >> 0x20) << 0x20)) & (-1 << 0x20);
        return arg0;
    }
    if (temp_v1 < 0x34) {
        temp_v0_2 = -1U >> (temp_a1 - 0x413);
        if (temp_t2 & temp_v0_2) {
            temp_a3 = (((arg3 & (0xFFFF0000U >> 0x20)) | (temp_t1 << 0x20)) & (-1 << 0x20)) | ((u64) ((temp_t2 & ~temp_v0_2) << 0x20) >> 0x20);
            *arg1 = temp_a3;
            return func_00121988(temp_a3, arg0, temp_a3);
        }
        goto block_12;
    }
block_12:
    *arg1 = arg0;
    return ((arg3 & (0xFFFF0000U >> 0x20)) | (((u64) (((arg0 >> 0x20) & 0x80000000) << 0x20) >> 0x20) << 0x20)) & (-1 << 0x20);
}
