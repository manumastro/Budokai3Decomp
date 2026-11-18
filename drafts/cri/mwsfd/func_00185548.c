/* Draft (not built): func_00185548 at 0x00185548, size 0x5C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00185548.s */

s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00466B60;

void func_00185548(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 <= 0x1FFFF) {
        func_001870E8(&D_00466B60);
    }
    *(s32 *)((u8 *)(arg0 + 0x19C) + 4) = arg2;
    *(s32 *)((u8 *)arg0 + 0x19C) = arg1;
}
