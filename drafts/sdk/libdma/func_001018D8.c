/* Draft (not built): func_001018D8 at 0x001018D8, size 0x84, segment sdk/libdma (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libdma/func_001018D8.s */

s32 func_00102000(void *);                      /* extern */
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0045CD88;

void func_001018D8(u8 *arg0, u32 arg1, s32 arg2) {
    s32 var_s0;

    if ((u32) *(u32 *)((u8 *)arg0 + 0x10) < arg1) {
        var_s0 = ((arg2 != 0) ? arg2 : 0x01000000) - 1;
        do {
            if (var_s0 < 0) {
                scePrintf(&D_0045CD88);
                func_00102000(arg0);
            }
            var_s0 -= 1;
        } while ((u32) *(u32 *)((u8 *)arg0 + 0x10) < arg1);
    }
}
