/* Draft (not built): func_00116690 at 0x00116690, size 0x48, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00116690.s */

extern s32 (*D_003EDD08)(s32);

void func_00116690(u8 *arg0) {
    if (D_003EDD08 != NULL) {
        D_003EDD08(*(s32 *)((u8 *)arg0 + 0xC));
    }
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: ei */);
}
