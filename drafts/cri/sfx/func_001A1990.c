/* Draft (not built): func_001A1990 at 0x001A1990, size 0x3C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A1990.s */

void func_001A1990(u8 *arg0, s64 arg1) {
    s64 temp_a3;
    s64 temp_t0;

    temp_a3 = *(s64 *)((u8 *)arg0 + 8);
    temp_t0 = *(s64 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)arg0 + 0x18) = (s32) (*(s32 *)((u8 *)arg0 + 0x18) + 1);
    *(s64 *)((u8 *)arg0 + 0) = (s64) (*(s64 *)((u8 *)arg0 + 0) + arg1);
    *(s64 *)((u8 *)arg0 + 8) = (s64) ((arg1 < temp_a3) ? arg1 : temp_a3);
    *(s64 *)((u8 *)arg0 + 0x10) = (s64) ((temp_t0 < arg1) ? arg1 : temp_t0);
}
