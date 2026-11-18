/* Draft (not built): func_00168918 at 0x00168918, size 0x1C, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/htci/func_00168918.s */

s64 func_00168918(u8 *arg0) {
    u64 temp_a1;
    u64 temp_v0;

    temp_a1 = *(u64 *)((u8 *)arg0 + 8);
    temp_v0 = (s64) *(s32 *)((u8 *)arg0 + 0x28) << 0xB;
    return (s64) ((temp_a1 < temp_v0) ? temp_a1 : temp_v0) >> 0x20;
}
