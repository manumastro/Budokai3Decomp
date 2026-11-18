/* Draft (not built): func_00115D58 at 0x00115D58, size 0xA8, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115D58.s */

s64 __udivdi3();

void func_00115D58(s32 arg0, s32 *arg1, s32 *arg2) {
    s64 temp_v0;
    u64 temp_a2;

    temp_v0 = (s64) (__udivdi3(0x08CA0000) << 0x20) >> 0x20;
    if (arg1 != NULL) {
        *arg1 = (s32) temp_v0;
    }
    if (arg2 != NULL) {
        temp_a2 = (u64) ((temp_v0 * 0x08CA0000) << 0x20) >> 0x20;
        *arg2 = (s32) ((s64) (__udivdi3((arg0 - ((MULTU_HI(temp_v0, 0x08CA0000) << 0x20) | temp_a2)) * 0xF4240, 0x08CA0000, temp_a2) << 0x20) >> 0x20);
    }
}
