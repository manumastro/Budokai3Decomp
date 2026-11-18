/* Draft (not built): func_00101DD0 at 0x00101DD0, size 0x74, segment sdk/libdma_00101CD8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libdma_00101CD8/func_00101DD0.s */

s32 func_00101868(void *);                      /* extern */
s32 func_00101960(s32);                             /* extern */

void func_00101DD0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    temp_s1 = func_00101960(arg1);
    func_00101868(arg0);
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0xFFFFFFFF) {
        *(s32 *)((u8 *)arg0 + 0x10) = temp_s1;
    }
    *(s32 *)((u8 *)arg0 + 0x20) = arg2;
    *(s32 *)((u8 *)arg0 + 0) = (s32) ((*(s32 *)((u8 *)arg0 + 0) & ~0xC) | 0x109);
}
