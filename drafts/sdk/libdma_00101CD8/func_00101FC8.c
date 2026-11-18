/* Draft (not built): func_00101FC8 at 0x00101FC8, size 0x34, segment sdk/libdma_00101CD8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libdma_00101CD8/func_00101FC8.s */

s32 func_001018D8(s32);                         /* extern */

s32 func_00101FC8(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        return (u32) *(u32 *)((u8 *)arg0 + 0x10) < arg1;
    }
    func_001018D8(arg3);
    return 0;
}
