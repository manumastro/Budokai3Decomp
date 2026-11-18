/* Draft (not built): func_00101230 at 0x00101230, size 0x88, segment sdk/libgraph_00100CF8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgraph_00100CF8/func_00101230.s */

void func_00101230(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    s64 temp_a2;
    s64 var_v0;
    u64 temp_v0;

    temp_v0 = *(u64 *)((u8 *)arg0 + 0x30);
    temp_a2 = ((s64) ((s64) arg2 << 0x30) >> 0x30) - ((u64) (((s64) (((temp_v0 >> 0x30) & 0x7FF) << 0x20) >> 0x20) + 1) >> 1);
    if ((arg3 << 0x10) != 0) {
        var_v0 = ((temp_a2 * 0x10) + 8) << 0x20;
    } else {
        var_v0 = temp_a2 << 0x24;
    }
    *(s64 *)((u8 *)arg0 + 0x20) = (s64) (((((s64) ((s64) arg1 << 0x30) >> 0x30) - ((u64) (((s64) (((temp_v0 >> 0x10) & 0x7FF) << 0x20) >> 0x20) + 1) >> 1)) * 0x10) | var_v0);
}
